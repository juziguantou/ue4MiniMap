// Fill out your copyright notice in the Description page of Project Settings.

#include "MiniMapSynclocation.h"
#include "MiniMapManage.h"
#include "CanvasPanelSlot.h"
#include "Kismet/GameplayStatics.h"
#include "MyPlugin.h"

AMiniMapSynclocation::AMiniMapSynclocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	SetReplicates(true);
	PrimaryActorTick.bCanEverTick = true;
	bAlwaysRelevant = true;
}

static const int ServerSyncTickCnt = 3;
void AMiniMapSynclocation::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	AMiniMapManage* MiniMapManage = AMiniMapManage::Get(GetWorld());
	if (MiniMapManage) {
		if (Role == ROLE_Authority) {
			if (TickCnt >= ServerSyncTickCnt) {
				TickCnt = 0;
				//服务器同步图标位置和角度(如果设置了同步)
				for (int i = 0; i < MiniMapManage->MiniMapComponentInfos.Num(); i++)
				{
					const FMiniMapComponentInfo& MiniMapComponentInfo = MiniMapManage->MiniMapComponentInfos[i];
					if (MiniMapComponentInfo.IsSyncLocation) {
						UMiniMapComponent* MiniMapComponent = MiniMapComponentInfo.MiniMapComponent;
						AActor* Owner = MiniMapComponent->GetOwner();
						FTransform ActorTransform = Owner->GetTransform();
						FVector ActorLocation = ActorTransform.GetLocation();
						SyncLocationAndAngleInfos.Add({ MiniMapComponentInfo.ComponentId , FVector2D(ActorLocation.X, ActorLocation.Y), ActorTransform.Rotator().Yaw });
					}
				}
				if (SyncLocationAndAngleInfos.Num() > 0) {
					//发送给客户端
					UpdateMapFlagLocationAndAngle(SyncLocationAndAngleInfos);
					SyncLocationAndAngleInfos.Empty();
				}
			}
			else {
				TickCnt++;
			}
		}
		else {
			auto CurrentPlayerController = UGameplayStatics::GetPlayerController(this, 0);
			FName a = CurrentPlayerController->GetFName();
			//同步图标位置和角度(如果设置了同步)
			for (int i = 0; i < MiniMapManage->MiniMapComponentInfos.Num(); i++)
			{
				const FMiniMapComponentInfo& MiniMapComponentInfo = MiniMapManage->MiniMapComponentInfos[i];
				UMiniMapComponent* MiniMapComponent = MiniMapComponentInfo.MiniMapComponent;
				//客户端可以获取MiniMapComponent则在客户端同步
				if (MiniMapComponent != nullptr && IsValid(MiniMapComponent)) {
					if (MiniMapComponent->IsSyncLocation) {
						AActor* Owner = MiniMapComponent->GetOwner();
						FVector ActorLocation = Owner->GetActorLocation();
						FVector2D ActorLocation2D = MiniMapManage->WorldPosToMapFlagPos(FVector2D(ActorLocation.X, ActorLocation.Y), MiniMapComponent->FlagSize);
						TArray<UMiniMapWidget*>& MiniMapWidgets = MiniMapManage->MiniMapWidgets;
						for (int j = 0; j < MiniMapWidgets.Num(); j++)
						{
							UMiniMapWidget* MiniMapWidget = MiniMapWidgets[j];
							UMapFlagUserWidget* MapFlag = MiniMapWidget->GetMapFlag(MiniMapComponentInfo.ComponentId);
							if (MapFlag) {
								UCanvasPanelSlot* FalgCanvasPanelSlot = Cast<UCanvasPanelSlot>(MapFlag->Slot);
								FalgCanvasPanelSlot->SetPosition(ActorLocation2D);
								if (MiniMapComponent->IsSyncAngle) {
									MapFlag->SetRenderAngle(Owner->GetActorRotation().Yaw);
								}
							}
						}
						//客户端已经同步的存起来，不需要服务器的数据了
						if (UsedComponentIds.Find(MiniMapComponentInfo.ComponentId) == INDEX_NONE) {
							UsedComponentIds.Add(MiniMapComponentInfo.ComponentId);
						}
					}
				}

				//更新图标(MiniMapComponent来控制)
				for (auto Ite = MiniMapManage->MiniMapComponentMultiToMapFlagDelegates.CreateConstIterator(); Ite; ++Ite)
				{
					int ComponentId = Ite->Key;
					const FMiniMapComponentMapFlagDelegate& MapFlagDelegate = Ite->Value;
					for (UMiniMapWidget* MiniMapWidget: MiniMapManage->MiniMapWidgets)
					{
						UMapFlagUserWidget* MapFlag = MiniMapWidget->GetMapFlag(ComponentId);
						if (MapFlag) {
							MapFlagDelegate.Execute(MapFlag);
						}
						else {
							//UE_LOG(LogTemp, Log, TEXT("GetMapFlag null, %s"), MiniMapComponent->GetFName().ToString());
						}
					}
				}
				MiniMapManage->MiniMapComponentMultiToMapFlagDelegates.Empty();
			}
		}
	}
}

void AMiniMapSynclocation::UpdateMiniMapFlagPos(int Id, FVector2D Location, float Angle)
{
	SyncLocationAndAngleInfos.Add({ Id, Location, Angle });
}

void AMiniMapSynclocation::UpdateMapFlagLocationAndAngle_Implementation(const TArray<FComponentAndTransformInfo>& SyncLocationAndAngleInfos)
{
	if (Role != ROLE_Authority) {
		AMiniMapManage* MiniMapManage = AMiniMapManage::Get(GetWorld());
		if (MiniMapManage) {
			for (const FComponentAndTransformInfo& ComponentAndTransformInfo: SyncLocationAndAngleInfos)
			{
				int ComponentId = ComponentAndTransformInfo.ComponentId;
				//如果客户端没有同步则同步位置
				if (UsedComponentIds.Find(ComponentId) == INDEX_NONE) {
					for (const FMiniMapComponentInfo& MiniMapComponentInfo : MiniMapManage->MiniMapComponentInfos)
					{
						if (MiniMapComponentInfo.ComponentId == ComponentId) {
							FVector2D ActorLocation2D = MiniMapManage->WorldPosToMapFlagPos(ComponentAndTransformInfo.Location, MiniMapComponentInfo.FlagSize);
							for (UMiniMapWidget* MiniMapWidget : MiniMapManage->MiniMapWidgets)
							{
								UMapFlagUserWidget* MapFlag = MiniMapWidget->GetMapFlag(ComponentId);
								if (MapFlag) {
									UCanvasPanelSlot* FalgCanvasPanelSlot = Cast<UCanvasPanelSlot>(MapFlag->Slot);
									FalgCanvasPanelSlot->SetPosition(ActorLocation2D);
									if (MiniMapComponentInfo.IsSyncAngle) {
										MapFlag->SetRenderAngle(ComponentAndTransformInfo.Angle);
									}
								}
							}
							break;
						}
					}
				}
			}
			UsedComponentIds.Empty();
		}
	}
}