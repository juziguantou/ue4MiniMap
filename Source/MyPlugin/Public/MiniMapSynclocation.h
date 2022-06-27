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
#include "MiniMapManage.h"
#include "MiniMapSynclocation.generated.h"

/**.
 * 
 */ 


USTRUCT()
struct FComponentAndTransformInfo
{
	GENERATED_BODY()

	UPROPERTY()
		int ComponentId;
	UPROPERTY()
		FVector2D Location;
	UPROPERTY()
		float Angle;
};

UCLASS()
class MYPLUGIN_API AMiniMapSynclocation : public AActor
{
	
	GENERATED_BODY()


	int TickCnt;
	TArray<int> UsedComponentIds;
	TArray<FComponentAndTransformInfo> SyncLocationAndAngleInfos;
	AMiniMapSynclocation(const FObjectInitializer& ObjectInitializer);
	virtual void Tick(float DeltaSeconds) override;
	UFUNCTION(NetMulticast, Unreliable)
		void UpdateMapFlagLocationAndAngle(const TArray<FComponentAndTransformInfo>& SyncLocationAndAngleInfos);

public:
	void UpdateMiniMapFlagPos(int Id, FVector2D Location, float Angle);
};
