// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "Vector2D.h"
#include "Map.h"
#include "MiniMapComponent.h"
#include "TimerManager.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/Pawn.h"
#include "Engine/DataTable.h"
#include "MiniMapWidget.h"
#include "MiniMapManage.generated.h"

/**.
 * 
 */ 

USTRUCT(BlueprintType)
struct FMiniMapPathCsvRow :public FTableRowBase

{
	GENERATED_USTRUCT_BODY()
	//UPROPERTY(BlueprintReadOnly, Category = "CsvData")
	//	FString WorldName;
	UPROPERTY(BlueprintReadOnly, Category = "CsvData")
		FString MapPath;
	UPROPERTY(BlueprintReadOnly, Category = "CsvData")
		FVector2D MapSize;
	UPROPERTY(BlueprintReadOnly, Category = "CsvData")
		FVector2D MapLocation;
	UPROPERTY(BlueprintReadOnly, Category = "CsvData")
		FVector2D MapWidgetSize;
};

USTRUCT()
struct FMiniMapComponentInfo
{
	GENERATED_BODY()
	UPROPERTY()
		int ComponentId;
	UPROPERTY()
		UMiniMapComponent* MiniMapComponent;
	UPROPERTY()
		FString UIImagePath;
	UPROPERTY()
		FVector2D FlagSize;
	UPROPERTY()
		UClass* MapFlagWidget;
	UPROPERTY()
		bool IsSyncLocation;
	UPROPERTY()
		FVector2D Location;
	UPROPERTY()
		bool IsSyncAngle;
	UPROPERTY()
		float Angle;
	UPROPERTY()
		TArray<int> Groups;

	bool operator==(const FMiniMapComponentInfo& p) {
		return ComponentId == p.ComponentId;
	}
};

class UPlayerControllerMiniMapComponent;

UCLASS()
class MYPLUGIN_API AMiniMapManage : public AActor
{

	GENERATED_BODY()

	friend class AMiniMapSynclocation;

	AMiniMapManage(const class FObjectInitializer & PCIP);
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void PostActorCreated() override;

	int ComponentCnt;
	bool IsBeginPlay;
	AMiniMapSynclocation* SyncActor;
	//小地图面板，主要跟随主端移动
	UPanelWidget* MapandCircleCanvas;
	TArray<int> AlreadyUsedComponents;
	TArray<UMiniMapWidget*> MiniMapWidgets;
	TArray<UPlayerControllerMiniMapComponent*> PCMiniMapComponents;
	TMultiMap<int, FMiniMapComponentMapFlagDelegate> MiniMapComponentMultiToMapFlagDelegates;
	FVector2D SceneMapSize;
	FVector2D SceneMapLocation;
	FVector2D MiniMapSize;

	TArray<FMiniMapComponentInfo> MiniMapComponentInfos;

	//创建图标
	void CreateMapFlag(int, const FMiniMapComponentInfo&, UMiniMapWidget*);
	//根据WorldName读取配置
	void SetWorldName(FName name);
	//设置小地图大小
	void SetMapCanvasSize(UMiniMapWidget * MiniMapWidget);
	void AddMiniMapFlag(UMiniMapComponent* MiniMapComponent, FString& UIImagePath, FVector2D& FlagSize, TSubclassOf<UMapFlagUserWidget>& MapFlagWidget, bool IsSyncLocation, FVector2D& Location, bool IsSyncAngle, float Angle, TArray<int>& Groups);

	bool DetectionGroups(TArray<int>& MapFlagGroups, TArray<int>& PlayerControllerGroups);

public:
	void MiniMapComponentsChange(TArray<FMiniMapComponentInfo>& Infos);
	static AMiniMapManage* Get(UWorld* World);
	//注册地图控件
	void AddMiniMapWidget(UMiniMapWidget* MiniMapWidget);
	void DeleteMiniMapWidget(UMiniMapWidget* MiniMapWidget);
	//注册玩家组件
	void AddPCMiniMapComponent(UPlayerControllerMiniMapComponent* Component);
	void DeletePCMiniMapComponent(UPlayerControllerMiniMapComponent* Component);
	void PCMiniMapComponentAddGroup(UPlayerControllerMiniMapComponent* Component, int Group);
	void PCMiniMapComponentDelGroup(UPlayerControllerMiniMapComponent* Component, int Group);


	//添加图标信息
	UFUNCTION(BlueprintCallable)
		int AddMiniMapFlag(FVector2D FlagSize, FVector2D Location, float Angle, TArray<int> Groups, TSubclassOf<UMapFlagUserWidget> MapFlagWidget, FString UIImagePath = "");
	//更新图标位置
	UFUNCTION(BlueprintCallable)
		void UpdateMiniMapFlagPos(int Id, FVector2D Location, float Angle);
	UFUNCTION(BlueprintCallable)
		void UpdateMapFlag(int Id, FMiniMapComponentMapFlagDelegate MapFlagDelegate);//更新图标,只限客户端调用
	UFUNCTION(BlueprintCallable)
		void DeleteMiniMapFlag(int Id);
	//添加图标信息，注册Component
	void AddMiniMapFlag(UMiniMapComponent*);
	FVector2D WorldPosToMapFlagPos(FVector2D Location, FVector2D FlagSize);
	FVector2D WorldPosToMapFlagAlignment(FVector2D Location);

	AMiniMapSynclocation* GetSyncActor(){ return SyncActor; }
};
