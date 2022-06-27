// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MiniMapSynclocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniMapSynclocation() {}
// Cross Module References
	MYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FComponentAndTransformInfo();
	UPackage* Z_Construct_UPackage__Script_MyPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	MYPLUGIN_API UClass* Z_Construct_UClass_AMiniMapSynclocation_NoRegister();
	MYPLUGIN_API UClass* Z_Construct_UClass_AMiniMapSynclocation();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYPLUGIN_API UFunction* Z_Construct_UFunction_AMiniMapSynclocation_UpdateMapFlagLocationAndAngle();
// End Cross Module References
class UScriptStruct* FComponentAndTransformInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MYPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FComponentAndTransformInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentAndTransformInfo, Z_Construct_UPackage__Script_MyPlugin(), TEXT("ComponentAndTransformInfo"), sizeof(FComponentAndTransformInfo), Get_Z_Construct_UScriptStruct_FComponentAndTransformInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComponentAndTransformInfo(FComponentAndTransformInfo::StaticStruct, TEXT("/Script/MyPlugin"), TEXT("ComponentAndTransformInfo"), false, nullptr, nullptr);
static struct FScriptStruct_MyPlugin_StaticRegisterNativesFComponentAndTransformInfo
{
	FScriptStruct_MyPlugin_StaticRegisterNativesFComponentAndTransformInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComponentAndTransformInfo")),new UScriptStruct::TCppStructOps<FComponentAndTransformInfo>);
	}
} ScriptStruct_MyPlugin_StaticRegisterNativesFComponentAndTransformInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FComponentAndTransformInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComponentAndTransformInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MyPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComponentAndTransformInfo"), sizeof(FComponentAndTransformInfo), Get_Z_Construct_UScriptStruct_FComponentAndTransformInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MiniMapSynclocation.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentAndTransformInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[] = {
				{ "ModuleRelativePath", "Public/MiniMapSynclocation.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle = { UE4CodeGen_Private::EPropertyClass::Float, "Angle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FComponentAndTransformInfo, Angle), METADATA_PARAMS(NewProp_Angle_MetaData, ARRAY_COUNT(NewProp_Angle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "ModuleRelativePath", "Public/MiniMapSynclocation.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FComponentAndTransformInfo, Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentId_MetaData[] = {
				{ "ModuleRelativePath", "Public/MiniMapSynclocation.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ComponentId = { UE4CodeGen_Private::EPropertyClass::Int, "ComponentId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FComponentAndTransformInfo, ComponentId), METADATA_PARAMS(NewProp_ComponentId_MetaData, ARRAY_COUNT(NewProp_ComponentId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Angle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentId,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MyPlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ComponentAndTransformInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FComponentAndTransformInfo),
				alignof(FComponentAndTransformInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComponentAndTransformInfo_CRC() { return 2510400465U; }
	static FName NAME_AMiniMapSynclocation_UpdateMapFlagLocationAndAngle = FName(TEXT("UpdateMapFlagLocationAndAngle"));
	void AMiniMapSynclocation::UpdateMapFlagLocationAndAngle(TArray<FComponentAndTransformInfo> const& SyncLocationAndAngleInfos)
	{
		MiniMapSynclocation_eventUpdateMapFlagLocationAndAngle_Parms Parms;
		Parms.SyncLocationAndAngleInfos=SyncLocationAndAngleInfos;
		ProcessEvent(FindFunctionChecked(NAME_AMiniMapSynclocation_UpdateMapFlagLocationAndAngle),&Parms);
	}
	void AMiniMapSynclocation::StaticRegisterNativesAMiniMapSynclocation()
	{
		UClass* Class = AMiniMapSynclocation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateMapFlagLocationAndAngle", (Native)&AMiniMapSynclocation::execUpdateMapFlagLocationAndAngle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AMiniMapSynclocation_UpdateMapFlagLocationAndAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncLocationAndAngleInfos_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SyncLocationAndAngleInfos = { UE4CodeGen_Private::EPropertyClass::Array, "SyncLocationAndAngleInfos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000082, 1, nullptr, STRUCT_OFFSET(MiniMapSynclocation_eventUpdateMapFlagLocationAndAngle_Parms, SyncLocationAndAngleInfos), METADATA_PARAMS(NewProp_SyncLocationAndAngleInfos_MetaData, ARRAY_COUNT(NewProp_SyncLocationAndAngleInfos_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SyncLocationAndAngleInfos_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SyncLocationAndAngleInfos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FComponentAndTransformInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SyncLocationAndAngleInfos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SyncLocationAndAngleInfos_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MiniMapSynclocation.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniMapSynclocation, "UpdateMapFlagLocationAndAngle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00044C41, sizeof(MiniMapSynclocation_eventUpdateMapFlagLocationAndAngle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMiniMapSynclocation_NoRegister()
	{
		return AMiniMapSynclocation::StaticClass();
	}
	UClass* Z_Construct_UClass_AMiniMapSynclocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_MyPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AMiniMapSynclocation_UpdateMapFlagLocationAndAngle, "UpdateMapFlagLocationAndAngle" }, // 2989554705
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MiniMapSynclocation.h" },
				{ "ModuleRelativePath", "Public/MiniMapSynclocation.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMiniMapSynclocation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMiniMapSynclocation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMiniMapSynclocation, 4050078036);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMiniMapSynclocation(Z_Construct_UClass_AMiniMapSynclocation, &AMiniMapSynclocation::StaticClass, TEXT("/Script/MyPlugin"), TEXT("AMiniMapSynclocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMiniMapSynclocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
