// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ModuleManager.h"
#include "GameFramework/GameModeBase.h"
#include "MiniMapManage.h"
#include "Engine/World.h"

class FMyPluginModule : public IModuleInterface
{
	FDelegateHandle LoadMapWithWorldDelegate;
	void OnLoadWorld(UWorld*);
	UWorld* LastWord;
	TMap<UWorld*, AMiniMapManage*> AlreadyUsedComponents;
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	virtual bool SupportsDynamicReloading() override;

	void SetWorldMiniMapManage(UWorld* World, AMiniMapManage * MiniMapManage);
	AMiniMapManage * GetWorldMiniMapManage(UWorld * World);
	void RemoveWorldMiniMapManage(UWorld * World);
};