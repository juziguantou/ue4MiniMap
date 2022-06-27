// Fill out your copyright notice in the Description page of Project Settings.

#include "MiniMapComponent.h"
#include "Kismet/GameplayStatics.h"
#include "MiniMapManage.h"
#include "MyPlugin.h"
#include "Net/UnrealNetwork.h"


// Sets default values for this component's properties
UMiniMapComponent::UMiniMapComponent()
{
	SetIsReplicated(true);
}


// Called when the game starts
void UMiniMapComponent::BeginPlay()
{
	Super::BeginPlay();
	AMiniMapManage* MiniMapManage = AMiniMapManage::Get(GetWorld());
	if (MiniMapManage) {
		MiniMapManage->AddMiniMapFlag(this);
	}
	
}

void UMiniMapComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	AMiniMapManage* MiniMapManage = AMiniMapManage::Get(GetWorld());
	if (MiniMapManage) {
		MiniMapManage->DeleteMiniMapFlag(ComponentId);
	}
}

void UMiniMapComponent::UpdateMapFlag(FMiniMapComponentMapFlagDelegate MapFlagDelegate)
{
	if (!GetOwner()->HasAuthority()) {
		AMiniMapManage* MiniMapManage = AMiniMapManage::Get(GetWorld());
		if (MiniMapManage) {
			MiniMapManage->UpdateMapFlag(ComponentId, MapFlagDelegate);
		}
	}
}

void UMiniMapComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UMiniMapComponent, ComponentId);
}

void UMiniMapComponent::OnRep_IsActive()
{
}
