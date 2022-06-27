// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MyPluginBPLibrary.h"
#include "MyPlugin.h"
#include "Kismet/GameplayStatics.h"

UMyPluginBPLibrary::UMyPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

AMiniMapManage* UMyPluginBPLibrary::GetMiniMapMgr(const UObject* WorldContextObject)
{
	AMiniMapManage* MiniMapManage = AMiniMapManage::Get(WorldContextObject->GetWorld());
	return MiniMapManage;
}

