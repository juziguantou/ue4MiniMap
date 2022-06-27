// Fill out your copyright notice in the Description page of Project Settings.

#include "MiniMapManage.h"
#include "Kismet/GameplayStatics.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "MyPlugin.h"
#include "CanvasPanelSlot.h"
#include "UObjectIterator.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Csv/CsvParser.h"
#include "MiniMapSynclocation.h"
#include "GameFramework/GameStateBase.h"
#include "PlayerControllerMiniMapComponent.h"

AMiniMapManage::AMiniMapManage(const class FObjectInitializer & PCIP) : Super(PCIP)
{
	SetReplicates(true);
	PrimaryActorTick.bCanEverTick = false;

}
void AMiniMapManage::BeginPlay() {
	Super::BeginPlay();

	UWorld* World = GetWorld();
	if (Role == ROLE_Authority) {
		UClass* BlueprintVar = LoadClass<AMiniMapSynclocation>(nullptr, TEXT("Blueprint'/MyPlugin/BP_MiniMapSynclocation.BP_MiniMapSynclocation_C'"));
		if (BlueprintVar != nullptr)
		{
			SyncActor = World->SpawnActor<AMiniMapSynclocation>(BlueprintVar);
		}
		//找到已经加载了的UMiniMapComponent
		TArray<AActor*> ArryActors;
		UGameplayStatics::GetAllActorsOfClass(this, AActor::StaticClass(), ArryActors);
		for (AActor* Actor : ArryActors) {
			auto Component = Actor->GetComponentByClass(UMiniMapComponent::StaticClass());
			if (Component) {
				UMiniMapComponent* MapComponent = Cast<UMiniMapComponent>(Component);
				AddMiniMapFlag(MapComponent);
			}
		}
	}
	else {
		if (World) {
			FName WorldName = World->GetFName();
			SetWorldName(WorldName);

			IsBeginPlay = true;

			//找到已经加载了的UMiniMapWidget子类
			for (TObjectIterator<UUserWidget> Itr; Itr; ++Itr)
			{
				UUserWidget* LiveWidget = *Itr;
				if (LiveWidget->GetWorld() != World)
				{
					continue;
				}
				if (LiveWidget->GetClass()->IsChildOf<UMiniMapWidget>())
				{
					AddMiniMapWidget(Cast<UMiniMapWidget>(LiveWidget));
				}
			}
			APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
			if (PC) {
				UPlayerControllerMiniMapComponent* Component = Cast<UPlayerControllerMiniMapComponent>(PC->GetComponentByClass(UPlayerControllerMiniMapComponent::StaticClass()));
				if (Component) {
					MiniMapComponentsChange(Component->Infos);
				}
			}
		}
	}
}

void AMiniMapManage::CreateMapFlag(int ComponentId, const FMiniMapComponentInfo& MiniMapComponentInfo, UMiniMapWidget* MiniMapWidget)
{
	UMapFlagUserWidget* FlagWidget;
	if (MiniMapComponentInfo.MapFlagWidget == nullptr) {
		//获取默认UI
		UClass* widgetClass = LoadClass<UMapFlagUserWidget>(nullptr, TEXT(""));
		FlagWidget = CreateWidget<UMapFlagUserWidget>(GetWorld(), widgetClass);
		//设置图片
		return;
	}
	else
	{
		FlagWidget = CreateWidget<UMapFlagUserWidget>(GetWorld(), MiniMapComponentInfo.MapFlagWidget);//Cast<UClass>(MiniMapComponent->MapFlagWidget)
	}
	//存入小地图
	MiniMapWidget->AddMapFlag(ComponentId, FlagWidget);

	//设置初始的位置和角度
	UCanvasPanelSlot* FalgCanvasPanelSlot = Cast<UCanvasPanelSlot>(FlagWidget->Slot);
	FalgCanvasPanelSlot->SetSize(MiniMapComponentInfo.FlagSize);
	if (!MiniMapComponentInfo.IsSyncLocation) {
		auto a = WorldPosToMapFlagPos(MiniMapComponentInfo.Location, MiniMapComponentInfo.FlagSize);
		FalgCanvasPanelSlot->SetPosition(a);
	}
	if (!MiniMapComponentInfo.IsSyncAngle) {
		FlagWidget->SetRenderAngle(MiniMapComponentInfo.Angle);
	}
}

void AMiniMapManage::SetWorldName(FName name)
{
	//根据WorldName读取配置
	UDataTable* HudTextDataTable = LoadObject<UDataTable>(NULL, UTF8_TO_TCHAR("DataTable'/MyPlugin/MiniMapInfo.MiniMapInfo'"));
	FMiniMapPathCsvRow* dataRow = HudTextDataTable->FindRow<FMiniMapPathCsvRow>(name, TEXT(""));
	if (dataRow)
	{
		SceneMapSize = dataRow->MapSize;
		SceneMapLocation = dataRow->MapLocation;
		MiniMapSize = dataRow->MapWidgetSize;
		for (int i = 0; i < MiniMapWidgets.Num(); i++)
		{
			UMiniMapWidget* MiniMapWidget = MiniMapWidgets[i];
			SetMapCanvasSize(MiniMapWidget);
		}
	}
}

void AMiniMapManage::SetMapCanvasSize(UMiniMapWidget * MiniMapWidget)
{
	//设置小地图ui大小
	auto* MapCanvas = MiniMapWidget->GetWidgetFromName("MapCanvas");
	UCanvasPanelSlot* CanvasPanelSlot = Cast<UCanvasPanelSlot>(MapCanvas->Slot);
	CanvasPanelSlot->SetSize(MiniMapSize);
}

bool AMiniMapManage::DetectionGroups(TArray<int>& MapFlagGroups, TArray<int>& PlayerControllerGroups) {
	//判断是否有相同的分组
	if (MapFlagGroups.Num() == 0) {
		return true;
	}
	for (int& Group1 : MapFlagGroups)
	{
		for (int& Group2 : PlayerControllerGroups)
		{
			if (Group1 == Group2) {
				return true;
			}
		}
	}
	return false;
}

void AMiniMapManage::MiniMapComponentsChange(TArray<FMiniMapComponentInfo>& Infos)
{
	if (Role != ROLE_Authority) {
		MiniMapComponentInfos = Infos;
		int NewLen = MiniMapComponentInfos.Num();
		for (int i = 0; i < NewLen; i++)
		{
			FMiniMapComponentInfo& MiniMapComponentInfo = MiniMapComponentInfos[i];
			UMiniMapComponent* NewMiniMapComponent = MiniMapComponentInfo.MiniMapComponent;
			int ComponentId = MiniMapComponentInfo.ComponentId;
			while (AlreadyUsedComponents.IsValidIndex(i) && AlreadyUsedComponents[i] != ComponentId) {
				//如果不相等，说明新数组对应下标被删除了
				DeleteMiniMapFlag(AlreadyUsedComponents[i]);
				AlreadyUsedComponents.RemoveAt(i);
			}
			if (i >= AlreadyUsedComponents.Num()) {
				//如果为空，说明新数组添加了新的Component
				AlreadyUsedComponents.Add(ComponentId);
				for (UMiniMapWidget* MiniMapWidget : MiniMapWidgets)
				{
					CreateMapFlag(ComponentId, MiniMapComponentInfo, MiniMapWidget);
				}
			}
		}
		int OldLen = AlreadyUsedComponents.Num();
		if (OldLen > NewLen) {
			//遍历删除剩下的
			for (int j = NewLen; j < OldLen; j++)
			{
				DeleteMiniMapFlag(AlreadyUsedComponents[j]);
			}
			AlreadyUsedComponents.RemoveAt(NewLen, OldLen - NewLen);
		}
	}
}

AMiniMapManage * AMiniMapManage::Get(UWorld * World)
{
	FMyPluginModule* Module = FModuleManager::GetModulePtr<FMyPluginModule>("MyPlugin");
	return Module->GetWorldMiniMapManage(World);
}

void AMiniMapManage::AddMiniMapWidget(UMiniMapWidget * MiniMapWidget)
{
	if (Role != ROLE_Authority) {
		//等待BeginPlay执行后调用
		if (!IsBeginPlay) return;
		if (MiniMapWidgets.Find(MiniMapWidget) == INDEX_NONE) {
			MiniMapWidgets.Add(MiniMapWidget);
			for (int i = 0; i < MiniMapComponentInfos.Num(); i++)
			{
				FMiniMapComponentInfo& MiniMapComponentInfo = MiniMapComponentInfos[i];
				CreateMapFlag(MiniMapComponentInfo.ComponentId, MiniMapComponentInfo, MiniMapWidget);
			}
			SetMapCanvasSize(MiniMapWidget);
		}
	}
}

void AMiniMapManage::DeleteMiniMapWidget(UMiniMapWidget * MiniMapWidget)
{
	int Index = MiniMapWidgets.Find(MiniMapWidget);
	if (Index != INDEX_NONE) {
		for (int i = 0; i < MiniMapComponentInfos.Num(); i++)
		{
			MiniMapWidget->DelMapFlag(MiniMapComponentInfos[i].ComponentId);
		}
		MiniMapWidgets.RemoveAt(Index);
	}
}

void AMiniMapManage::AddPCMiniMapComponent(UPlayerControllerMiniMapComponent * Component)
{
	if (Role == ROLE_Authority) {
		if(PCMiniMapComponents.Find(Component) == INDEX_NONE){
			PCMiniMapComponents.Add(Component);
			for (FMiniMapComponentInfo& Info : MiniMapComponentInfos)
			{
				if (DetectionGroups(Info.Groups, Component->Groups)) {
					Component->AddMiniMapComponentInfo(Info);
				}
			}
		}
	}
}

void AMiniMapManage::DeletePCMiniMapComponent(UPlayerControllerMiniMapComponent * Component)
{
	if (Role == ROLE_Authority) {
		if (PCMiniMapComponents.Find(Component) != INDEX_NONE) {
			PCMiniMapComponents.Remove(Component);
		}
	}
}

void AMiniMapManage::PCMiniMapComponentAddGroup(UPlayerControllerMiniMapComponent * Component, int Group)
{
	if (Role == ROLE_Authority) {
		if (PCMiniMapComponents.Find(Component) != INDEX_NONE) {
			for (FMiniMapComponentInfo& Info : MiniMapComponentInfos)
			{
				for (int& MapFlagGroup : Info.Groups)
				{
					if (MapFlagGroup == Group) {
						Component->AddMiniMapComponentInfo(Info);
						break;
					}
				}
			}
		}
	}
}

void AMiniMapManage::PCMiniMapComponentDelGroup(UPlayerControllerMiniMapComponent * Component, int Group)
{
	if (Role == ROLE_Authority) {
		if (PCMiniMapComponents.Find(Component) != INDEX_NONE) {
			for (FMiniMapComponentInfo& Info : MiniMapComponentInfos)
			{
				for (int& MapFlagGroup : Info.Groups)
				{
					if (MapFlagGroup == Group) {
						Component->DelMiniMapComponentInfo(Info);
						break;
					}
				}
			}
		}
	}
}

void AMiniMapManage::AddMiniMapFlag(UMiniMapComponent* MiniMapComponent, FString& UIImagePath, FVector2D& FlagSize, TSubclassOf<UMapFlagUserWidget>& MapFlagWidget, bool IsSyncLocation, FVector2D& Location, bool IsSyncAngle, float Angle, TArray<int>& Groups)
{
	FMiniMapComponentInfo Info = { ++ComponentCnt, MiniMapComponent, UIImagePath, FlagSize,
		MapFlagWidget, IsSyncLocation, Location, IsSyncAngle, Angle, Groups };
	MiniMapComponentInfos.Add(Info);

	for (UPlayerControllerMiniMapComponent* Component : PCMiniMapComponents)
	{
		if (DetectionGroups(Groups, Component->Groups)) {
			Component->AddMiniMapComponentInfo(Info);
		}
	}
}

void AMiniMapManage::AddMiniMapFlag(UMiniMapComponent* MiniMapComponent)
{
	if (Role == ROLE_Authority) {
		checkf(MiniMapComponent, TEXT("AddMiniMapComponent is null"));
		for (FMiniMapComponentInfo& ComponentInfo : MiniMapComponentInfos)
		{
			if (ComponentInfo.MiniMapComponent == MiniMapComponent) {
				return;
			}
		}
		AddMiniMapFlag(MiniMapComponent, MiniMapComponent->UIImagePath, MiniMapComponent->FlagSize,
			MiniMapComponent->MapFlagWidget, MiniMapComponent->IsSyncLocation, MiniMapComponent->Location, MiniMapComponent->IsSyncAngle, MiniMapComponent->Angle, MiniMapComponent->Groups );
		MiniMapComponent->ComponentId = ComponentCnt;
	}
}

//直接添加图标
int AMiniMapManage::AddMiniMapFlag(FVector2D FlagSize, FVector2D Location, float Angle, TArray<int> Groups, TSubclassOf<UMapFlagUserWidget> MapFlagWidget, FString UIImagePath)
{
	if (Role == ROLE_Authority) {
		AddMiniMapFlag(nullptr, UIImagePath, FlagSize, MapFlagWidget, false, Location, false, Angle, Groups );
	}
	return ComponentCnt;
}

void AMiniMapManage::UpdateMiniMapFlagPos(int Id, FVector2D Location, float Angle)
{
	SyncActor->UpdateMiniMapFlagPos(Id, Location, Angle);
}

void AMiniMapManage::UpdateMapFlag(int ComponentId, FMiniMapComponentMapFlagDelegate MapFlagDelegate)
{
	if (Role != ROLE_Authority) {
		//存起来等下一次tick时调用
		MiniMapComponentMultiToMapFlagDelegates.Add(ComponentId, std::move(MapFlagDelegate));
	}
}

void AMiniMapManage::DeleteMiniMapFlag(int ComponentId)
{
	if (Role == ROLE_Authority)
	{
		for (int i = 0; i < MiniMapComponentInfos.Num(); i++)
		{
			FMiniMapComponentInfo& Info = MiniMapComponentInfos[i];
			if (Info.ComponentId == ComponentId) {
				for (UPlayerControllerMiniMapComponent* Component : PCMiniMapComponents)
				{
					if (DetectionGroups(Info.Groups, Component->Groups)) {
						Component->DelMiniMapComponentInfo(Info);
					}
				}
				MiniMapComponentInfos.RemoveAt(i);
				return;
			}
		}
	}
	else
	{
		for (int i = 0; i < MiniMapWidgets.Num(); i++)
		{
			UMiniMapWidget* Val = MiniMapWidgets[i];
			Val->DelMapFlag(ComponentId);
		}
	}
}

void AMiniMapManage::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	if (Role == ROLE_Authority && SyncActor) {
		GetWorld()->DestroyActor(Cast<AActor>(SyncActor));
		SyncActor = nullptr;
	}
	FMyPluginModule* Module = FModuleManager::GetModulePtr<FMyPluginModule>("MyPlugin");
	Module->RemoveWorldMiniMapManage(GetWorld());
}

void AMiniMapManage::PostActorCreated()
{
	//编辑器不只一个World，用map存一下对应的Manage
	UWorld* World = GetWorld();
	FMyPluginModule* Module = FModuleManager::GetModulePtr<FMyPluginModule>("MyPlugin");
	Module->SetWorldMiniMapManage(World, this);
}

FVector2D AMiniMapManage::WorldPosToMapFlagPos(FVector2D Location, FVector2D FlagSize)
{
	return (Location + SceneMapSize / 2 - SceneMapLocation) / SceneMapSize * MiniMapSize - FlagSize / 2;
}

FVector2D AMiniMapManage::WorldPosToMapFlagAlignment(FVector2D Location)
{
	return (Location + SceneMapSize / 2 - SceneMapLocation) / SceneMapSize;
}
