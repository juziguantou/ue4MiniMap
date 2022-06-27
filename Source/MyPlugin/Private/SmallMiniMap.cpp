// Fill out your copyright notice in the Description page of Project Settings.

#include "SmallMiniMap.h"
#include "CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Kismet/GameplayStatics.h"
#include "MiniMapManage.h"
#include "MyPlugin.h"


void USmallMiniMap::NativeTick(const FGeometry & MyGeometry, float InDeltaTime)
{
	//ÒÆ¶¯Ð¡µØÍ¼
	Super::NativeTick(MyGeometry, InDeltaTime);
	AMiniMapManage* MiniMapManage = AMiniMapManage::Get(GetWorld());
	if (MiniMapManage) {
		UCanvasPanel* MapandCircleCanvas = Cast<UCanvasPanel>(this->GetWidgetFromName("MapandCircleCanvas"));
		auto CurrentPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		if (CurrentPlayerController) {
			auto CurrentPawn = CurrentPlayerController->GetPawn();
			if (CurrentPawn) {
				FVector Location = CurrentPawn->GetActorLocation();
				FVector2D Alignment = MiniMapManage->WorldPosToMapFlagAlignment(FVector2D(Location.X, Location.Y));
				UCanvasPanelSlot* MapandCircleSlot = Cast<UCanvasPanelSlot>(MapandCircleCanvas->Slot);
				MapandCircleSlot->SetAlignment(Alignment);
			}
		}
	}
}
