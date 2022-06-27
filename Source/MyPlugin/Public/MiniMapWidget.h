// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PanelWidget.h"
#include "MiniMapComponent.h"
#include "MapFlagUserWidget.h"
#include "MiniMapWidget.generated.h"

/**
 * 
 */
UCLASS()
class MYPLUGIN_API UMiniMapWidget : public UUserWidget
{
	GENERATED_BODY()

	TMap< int, UMapFlagUserWidget* > ComponentIdToFlagWidget;
	UPanelWidget* PlayerPointers;
protected:
	virtual void NativeConstruct() override;
	virtual void BeginDestroy() override;
public:
	//添加小图标到地图
	void AddMapFlag(int ComponentId, UMapFlagUserWidget* FlagWidget);
	//获取小图标
	UMapFlagUserWidget* GetMapFlag(int ComponentId);
	void DelMapFlag(int ComponentId);
};
