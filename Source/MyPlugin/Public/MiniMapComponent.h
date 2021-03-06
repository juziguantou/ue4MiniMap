// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MapFlagUserWidget.h"
#include "Vector2D.h"
#include "DelegateCombinations.h"
#include "MiniMapComponent.generated.h"


DECLARE_DYNAMIC_DELEGATE_OneParam(FMiniMapComponentMapFlagDelegate, UMapFlagUserWidget*, MapFlagUserWidget);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPLUGIN_API UMiniMapComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMiniMapComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	UPROPERTY(ReplicatedUsing = OnRep_IsActive)
	int ComponentId;
	//图标控件
	UPROPERTY(EditAnywhere)
		TSubclassOf<UMapFlagUserWidget> MapFlagWidget;
	//只有一张图片则只需设置UIImagePath
	UPROPERTY(EditAnywhere)
		FString UIImagePath;

	//图标大小
	UPROPERTY(EditAnywhere)
		FVector2D FlagSize = {100,100};

	//是否同步位置
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsSyncLocation = true;
	//初始图标位置(控件位置)
	UPROPERTY(EditAnywhere)
		FVector2D Location;

	//是否同步角度,IsSyncAngle才生效
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		bool IsSyncAngle = true;
	//初始图标角度
	UPROPERTY(EditAnywhere)
		float Angle;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<int> Groups;
	//更新频率
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(ClampMin = 0))
		int Frequency;

	//更新图标
	UFUNCTION(BlueprintCallable)
		void UpdateMapFlag(FMiniMapComponentMapFlagDelegate MapFlagDelegate);
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	UFUNCTION()
		void OnRep_IsActive();

	
};
