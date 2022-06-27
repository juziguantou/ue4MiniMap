// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MyPlugin.h"
#include "Engine/GameViewportClient.h"
#include "Editor.h"
#include "Kismet/GameplayStatics.h"


#define LOCTEXT_NAMESPACE "FMyPluginModule"

void FMyPluginModule::StartupModule()
{
	//World���ص��¼�
	LoadMapWithWorldDelegate = FCoreUObjectDelegates::PostLoadMapWithWorld.AddRaw(this, &FMyPluginModule::OnLoadWorld);
	//����������������ʼ������أ��Ȱѵ�һ��World����ȥ
	if (GEngine) {
		auto WorldContexts = GEngine->GetWorldContexts();
		if (WorldContexts.Num() > 0) {
			OnLoadWorld(WorldContexts[0].World());
		}
	}
}

void FMyPluginModule::OnLoadWorld(UWorld* InWorld)
{
	auto WorldContexts = GEngine->GetWorldContexts();
	for (int i = 0; i < WorldContexts.Num(); i++)
	{
		FWorldContext& WorldContext = WorldContexts[i];
		//�ж�����Ϸģʽ���߱༭�����е���Ϸģʽ
		if (WorldContext.WorldType == EWorldType::Type::Game || WorldContext.WorldType == EWorldType::Type::PIE) {
			UWorld* World = WorldContext.World();
			if (GIsServer) {
				if (World == LastWord) {
					break;
				}
				LastWord = World;
				UClass* BlueprintVar = LoadClass<AMiniMapManage>(nullptr, TEXT("Blueprint'/MyPlugin/BP_MiniMapManage.BP_MiniMapManage_C'"));
				if (BlueprintVar != nullptr)
				{
					//����AMiniMapManage
					World->SpawnActor<AMiniMapManage>(BlueprintVar);
				}
				break;
			}
		}
	}
}

void FMyPluginModule::SetWorldMiniMapManage(UWorld* World, AMiniMapManage* MiniMapManage)
{
	AlreadyUsedComponents.Add(World, MiniMapManage);
}

AMiniMapManage* FMyPluginModule::GetWorldMiniMapManage(UWorld* World)
{
	auto ret = AlreadyUsedComponents.Find(World);
	if (ret) {
		return *ret;
	}
	return nullptr;
}

void FMyPluginModule::RemoveWorldMiniMapManage(UWorld* World)
{
	AlreadyUsedComponents.Remove(World);
}

void FMyPluginModule::ShutdownModule()
{
	FCoreUObjectDelegates::PostLoadMapWithWorld.Remove(LoadMapWithWorldDelegate);
}

bool FMyPluginModule::SupportsDynamicReloading()
{
	return false;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMyPluginModule, MyPlugin)