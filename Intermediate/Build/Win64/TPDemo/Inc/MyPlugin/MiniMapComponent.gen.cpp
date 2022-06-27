// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MiniMapComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniMapComponent() {}
// Cross Module References
	MYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MyPlugin_MiniMapComponentMapFlagDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MyPlugin();
	MYPLUGIN_API UClass* Z_Construct_UClass_UMapFlagUserWidget_NoRegister();
	MYPLUGIN_API UClass* Z_Construct_UClass_UMiniMapComponent_NoRegister();
	MYPLUGIN_API UClass* Z_Construct_UClass_UMiniMapComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MYPLUGIN_API UFunction* Z_Construct_UFunction_UMiniMapComponent_OnRep_IsActive();
	MYPLUGIN_API UFunction* Z_Construct_UFunction_UMiniMapComponent_UpdateMapFlag();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_MyPlugin_MiniMapComponentMapFlagDelegate__DelegateSignature()
	{
		struct _Script_MyPlugin_eventMiniMapComponentMapFlagDelegate_Parms
		{
			UMapFlagUserWidget* MapFlagUserWidget;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapFlagUserWidget_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapFlagUserWidget = { UE4CodeGen_Private::EPropertyClass::Object, "MapFlagUserWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(_Script_MyPlugin_eventMiniMapComponentMapFlagDelegate_Parms, MapFlagUserWidget), Z_Construct_UClass_UMapFlagUserWidget_NoRegister, METADATA_PARAMS(NewProp_MapFlagUserWidget_MetaData, ARRAY_COUNT(NewProp_MapFlagUserWidget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MapFlagUserWidget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MiniMapComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MyPlugin, "MiniMapComponentMapFlagDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_MyPlugin_eventMiniMapComponentMapFlagDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UMiniMapComponent::StaticRegisterNativesUMiniMapComponent()
	{
		UClass* Class = UMiniMapComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_IsActive", (Native)&UMiniMapComponent::execOnRep_IsActive },
			{ "UpdateMapFlag", (Native)&UMiniMapComponent::execUpdateMapFlag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMiniMapComponent_OnRep_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MiniMapComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiniMapComponent, "OnRep_IsActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMiniMapComponent_UpdateMapFlag()
	{
		struct MiniMapComponent_eventUpdateMapFlag_Parms
		{
			FScriptDelegate MapFlagDelegate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_MapFlagDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "MapFlagDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MiniMapComponent_eventUpdateMapFlag_Parms, MapFlagDelegate), Z_Construct_UDelegateFunction_MyPlugin_MiniMapComponentMapFlagDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MapFlagDelegate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MiniMapComponent.h" },
				{ "ToolTip", "????\xcd\xbc??" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiniMapComponent, "UpdateMapFlag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MiniMapComponent_eventUpdateMapFlag_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMiniMapComponent_NoRegister()
	{
		return UMiniMapComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMiniMapComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_MyPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMiniMapComponent_OnRep_IsActive, "OnRep_IsActive" }, // 4205008277
				{ &Z_Construct_UFunction_UMiniMapComponent_UpdateMapFlag, "UpdateMapFlag" }, // 2446159726
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "MiniMapComponent.h" },
				{ "ModuleRelativePath", "Public/MiniMapComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
				{ "Category", "MiniMapComponent" },
				{ "ModuleRelativePath", "Public/MiniMapComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Group = { UE4CodeGen_Private::EPropertyClass::Int, "Group", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UMiniMapComponent, Group), METADATA_PARAMS(NewProp_Group_MetaData, ARRAY_COUNT(NewProp_Group_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[] = {
				{ "Category", "MiniMapComponent" },
				{ "ModuleRelativePath", "Public/MiniMapComponent.h" },
				{ "ToolTip", "??\xca\xbc\xcd\xbc???\xc7\xb6?" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle = { UE4CodeGen_Private::EPropertyClass::Float, "Angle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMiniMapComponent, Angle), METADATA_PARAMS(NewProp_Angle_MetaData, ARRAY_COUNT(NewProp_Angle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSyncAngle_MetaData[] = {
				{ "Category", "MiniMapComponent" },
				{ "ModuleRelativePath", "Public/MiniMapComponent.h" },
				{ "ToolTip", "?\xc7\xb7?\xcd\xac???\xc7\xb6?,IsSyncAngle????\xd0\xa7" },
			};
#endif
			auto NewProp_IsSyncAngle_SetBit = [](void* Obj){ ((UMiniMapComponent*)Obj)->IsSyncAngle = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSyncAngle = { UE4CodeGen_Private::EPropertyClass::Bool, "IsSyncAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMiniMapComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsSyncAngle_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsSyncAngle_MetaData, ARRAY_COUNT(NewProp_IsSyncAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "Category", "MiniMapComponent" },
				{ "ModuleRelativePath", "Public/MiniMapComponent.h" },
				{ "ToolTip", "??\xca\xbc\xcd\xbc??\xce\xbb??(?\xd8\xbc?\xce\xbb??)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMiniMapComponent, Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSyncLocation_MetaData[] = {
				{ "Category", "MiniMapComponent" },
				{ "ModuleRelativePath", "Public/MiniMapComponent.h" },
				{ "ToolTip", "?\xc7\xb7?\xcd\xac??\xce\xbb??" },
			};
#endif
			auto NewProp_IsSyncLocation_SetBit = [](void* Obj){ ((UMiniMapComponent*)Obj)->IsSyncLocation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSyncLocation = { UE4CodeGen_Private::EPropertyClass::Bool, "IsSyncLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMiniMapComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsSyncLocation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsSyncLocation_MetaData, ARRAY_COUNT(NewProp_IsSyncLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlagSize_MetaData[] = {
				{ "Category", "MiniMapComponent" },
				{ "ModuleRelativePath", "Public/MiniMapComponent.h" },
				{ "ToolTip", "\xcd\xbc????\xd0\xa1" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FlagSize = { UE4CodeGen_Private::EPropertyClass::Struct, "FlagSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMiniMapComponent, FlagSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_FlagSize_MetaData, ARRAY_COUNT(NewProp_FlagSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIImagePath_MetaData[] = {
				{ "Category", "MiniMapComponent" },
				{ "ModuleRelativePath", "Public/MiniMapComponent.h" },
				{ "ToolTip", "\xd6\xbb??\xd2\xbb??\xcd\xbc\xc6\xac??\xd6\xbb??????UIImagePath" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UIImagePath = { UE4CodeGen_Private::EPropertyClass::Str, "UIImagePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMiniMapComponent, UIImagePath), METADATA_PARAMS(NewProp_UIImagePath_MetaData, ARRAY_COUNT(NewProp_UIImagePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapFlagWidget_MetaData[] = {
				{ "Category", "MiniMapComponent" },
				{ "ModuleRelativePath", "Public/MiniMapComponent.h" },
				{ "ToolTip", "\xcd\xbc???\xd8\xbc?" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_MapFlagWidget = { UE4CodeGen_Private::EPropertyClass::Class, "MapFlagWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UMiniMapComponent, MapFlagWidget), Z_Construct_UClass_UMapFlagUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_MapFlagWidget_MetaData, ARRAY_COUNT(NewProp_MapFlagWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentId_MetaData[] = {
				{ "ModuleRelativePath", "Public/MiniMapComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ComponentId = { UE4CodeGen_Private::EPropertyClass::Int, "ComponentId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000020, 1, "OnRep_IsActive", STRUCT_OFFSET(UMiniMapComponent, ComponentId), METADATA_PARAMS(NewProp_ComponentId_MetaData, ARRAY_COUNT(NewProp_ComponentId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Group,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Angle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsSyncAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsSyncLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FlagSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UIImagePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MapFlagWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentId,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMiniMapComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMiniMapComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMiniMapComponent, 2556531953);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMiniMapComponent(Z_Construct_UClass_UMiniMapComponent, &UMiniMapComponent::StaticClass, TEXT("/Script/MyPlugin"), TEXT("UMiniMapComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMiniMapComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
