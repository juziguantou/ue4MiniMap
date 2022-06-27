// Fill out your copyright notice in the Description page of Project Settings.

#include "MiniMapWidget.h"
#include "Kismet/GameplayStatics.h"
#include "MiniMapManage.h"
#include "Engine/Texture2D.h"
#include "Image.h"
#include "MyPlugin.h"

void UMiniMapWidget::NativeConstruct() {
	Super::NativeConstruct();
	AMiniMapManage* MiniMapManage = AMiniMapManage::Get(GetWorld());
	if (MiniMapManage) {
		MiniMapManage->AddMiniMapWidget(this);
	}
	const UWorld* World = GetWorld();
	if (World) {
		FName WorldName = World->GetFName();
		UDataTable* HudTextDataTable = LoadObject<UDataTable>(NULL, UTF8_TO_TCHAR("DataTable'/MyPlugin/MiniMapInfo.MiniMapInfo'"));
		FMiniMapPathCsvRow* dataRow = HudTextDataTable->FindRow<FMiniMapPathCsvRow>(WorldName, TEXT(""));
		if (dataRow) {
			//–°µÿÕºÀı¬‘Õº
			UTexture2D* MapTexture = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *(dataRow->MapPath)));
			if (MapTexture) {
				const UWorld* World = GetWorld();
				if (World) {
					UImage* MapImage = Cast<UImage>(this->GetWidgetFromName("MapImageWidget"));
					//…Ë÷√Õº∆¨
					MapImage->SetBrushFromTexture(MapTexture);
				}
			}
		}
	}
}

void UMiniMapWidget::BeginDestroy()
{
	Super::BeginDestroy();
	AMiniMapManage* MiniMapManage = AMiniMapManage::Get(GetWorld());
	if (MiniMapManage) {
		MiniMapManage->DeleteMiniMapWidget(this);
	}
}

void UMiniMapWidget::AddMapFlag(int ComponentId, UMapFlagUserWidget * FlagWidget)
{
	if (PlayerPointers == nullptr) {
		UPanelWidget* MapFlagsWidget = Cast<UPanelWidget>(this->GetWidgetFromName("PlayerPointers"));
		PlayerPointers = MapFlagsWidget;
	}
	PlayerPointers->AddChild(FlagWidget);
	ComponentIdToFlagWidget.Add(ComponentId, FlagWidget);
}

UMapFlagUserWidget * UMiniMapWidget::GetMapFlag(int ComponentId)
{
	auto ret = ComponentIdToFlagWidget.Find(ComponentId);
	if (ret) {
		return *ret;
	}
	return nullptr;
}

void UMiniMapWidget::DelMapFlag(int ComponentId)
{
	UMapFlagUserWidget** MapFlagWidget = ComponentIdToFlagWidget.Find(ComponentId);
	if (MapFlagWidget != nullptr) {
		(*MapFlagWidget)->RemoveFromParent();
		(*MapFlagWidget)->Destruct();
		ComponentIdToFlagWidget.Remove(ComponentId);
	}
}
