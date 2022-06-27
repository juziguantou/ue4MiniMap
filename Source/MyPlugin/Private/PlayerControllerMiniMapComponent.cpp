// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerControllerMiniMapComponent.h"


// Sets default values for this component's properties
UPlayerControllerMiniMapComponent::UPlayerControllerMiniMapComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicated(true);

	// ...
}


// Called when the game starts
void UPlayerControllerMiniMapComponent::BeginPlay()
{
	Super::BeginPlay();

	if (GetOwner()->HasAuthority()) {
		AMiniMapManage* MiniMapManage = AMiniMapManage::Get(GetWorld());
		if (MiniMapManage) {
			MiniMapManage->AddPCMiniMapComponent(this);
		}
	}
	else {
		AMiniMapManage* MiniMapManage = AMiniMapManage::Get(GetWorld());
	}
}


// Called every frame
void UPlayerControllerMiniMapComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPlayerControllerMiniMapComponent::AddGroup_Implementation(int Group)
{
	if (GetOwner()->HasAuthority()) {
		if (Group == 0 || Groups.Find(Group) != INDEX_NONE) return;
		Groups.Add(Group);
		AMiniMapManage* MiniMapManage = AMiniMapManage::Get(GetWorld());
		if (MiniMapManage) {
			MiniMapManage->PCMiniMapComponentAddGroup(this, Group);
		}
	}
}
bool UPlayerControllerMiniMapComponent::AddGroup_Validate(int a){
	a = a + 1;
	return true;
}

void UPlayerControllerMiniMapComponent::DelGroup_Implementation(int Group)
{
	if (GetOwner()->HasAuthority()) {
		if (Group == 0 || Groups.Find(Group) == INDEX_NONE) return;
		Groups.Remove(Group);
		AMiniMapManage* MiniMapManage = AMiniMapManage::Get(GetWorld());
		if (MiniMapManage) {
			MiniMapManage->PCMiniMapComponentDelGroup(this, Group);
		}
	}
}
bool UPlayerControllerMiniMapComponent::DelGroup_Validate(int a) {
	return true;
}

void UPlayerControllerMiniMapComponent::AddMiniMapComponentInfo(const FMiniMapComponentInfo& Info){
	if (GetOwner()->HasAuthority()) {
		Infos.Add(Info);
	}
}

void UPlayerControllerMiniMapComponent::DelMiniMapComponentInfo(const FMiniMapComponentInfo& Info){
	if (GetOwner()->HasAuthority()) {
		Infos.Remove(Info);
	}
}

void UPlayerControllerMiniMapComponent::OnRep_Infos()
{
	if (!GetOwner()->HasAuthority()) {
		AMiniMapManage* MiniMapManage = AMiniMapManage::Get(GetWorld());
		if (MiniMapManage) {
			MiniMapManage->MiniMapComponentsChange(Infos);
		}
	}
}

void UPlayerControllerMiniMapComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UPlayerControllerMiniMapComponent, Infos);
}