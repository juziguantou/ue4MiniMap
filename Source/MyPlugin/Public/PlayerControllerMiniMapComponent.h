// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MiniMapManage.h"
#include "PlayerControllerMiniMapComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPLUGIN_API UPlayerControllerMiniMapComponent : public UActorComponent
{
	GENERATED_BODY()

	friend class AMiniMapManage;
	TArray<int> Groups;

	UPROPERTY(ReplicatedUsing = OnRep_Infos)
	TArray<FMiniMapComponentInfo> Infos;

	void AddMiniMapComponentInfo(const FMiniMapComponentInfo& Info);
	void DelMiniMapComponentInfo(const FMiniMapComponentInfo& Info);

	UFUNCTION()
		void OnRep_Infos();
public:	
	// Sets default values for this component's properties
	UPlayerControllerMiniMapComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	//设置玩家的分组
	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
		void AddGroup(int Group);
	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable)
		void DelGroup(int Group);
};
