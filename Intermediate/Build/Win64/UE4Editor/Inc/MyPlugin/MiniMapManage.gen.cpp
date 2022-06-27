// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MiniMapManage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniMapManage() {}
// Cross Module References
	MYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMiniMapComponentInfo();
	UPackage* Z_Construct_UPackage__Script_MyPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MYPLUGIN_API UClass* Z_Construct_UClass_UMiniMapComponent_NoRegister();
	MYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMiniMapPathCsvRow();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	MYPLUGIN_API UClass* Z_Construct_UClass_AMiniMapManage_NoRegister();
	MYPLUGIN_API UClass* Z_Construct_UClass_AMiniMapManage();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYPLUGIN_API UFunction* Z_Construct_UFunction_AMiniMapManage_AddMiniMapFlag();
	MYPLUGIN_API UClass* Z_Construct_UClass_UMapFlagUserWidget_NoRegister();
	MYPLUGIN_API UFunction* Z_Construct_UFunction_AMiniMapManage_DeleteMiniMapFlag();
	MYPLUGIN_API UFunction* Z_Construct_UFunction_AMiniMapManage_UpdateMapFlag();
	MYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MyPlugin_MiniMapComponentMapFlagDelegate__DelegateSignature();
	MYPLUGIN_API UFunction* Z_Construct_UFunction_AMiniMapManage_UpdateMiniMapFlagPos();
// End Cross Module References
class UScriptStruct* FMiniMapComponentInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MYPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMiniMapComponentInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniMapComponentInfo, Z_Construct_UPackage__Script_MyPlugin(), TEXT("MiniMapComponentInfo"), sizeof(FMiniMapComponentInfo), Get_Z_Construct_UScriptStruct_FMiniMapComponentInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiniMapComponentInfo(FMiniMapComponentInfo::StaticStruct, TEXT("/Script/MyPlugin"), TEXT("MiniMapComponentInfo"), false, nullptr, nullptr);
static struct FScriptStruct_MyPlugin_StaticRegisterNativesFMiniMapComponentInfo
{
	FScriptStruct_MyPlugin_StaticRegisterNativesFMiniMapComponentInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MiniMapComponentInfo")),new UScriptStruct::TCppStructOps<FMiniMapComponentInfo>);
	}
} ScriptStruct_MyPlugin_StaticRegisterNativesFMiniMapComponentInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FMiniMapComponentInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiniMapComponentInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MyPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiniMapComponentInfo"), sizeof(FMiniMapComponentInfo), Get_Z_Construct_UScriptStruct_FMiniMapComponentInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniMapComponentInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[] = {
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Groups = { UE4CodeGen_Private::EPropertyClass::Array, "Groups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMiniMapComponentInfo, Groups), METADATA_PARAMS(NewProp_Groups_MetaData, ARRAY_COUNT(NewProp_Groups_MetaData)) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Groups_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Groups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[] = {
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle = { UE4CodeGen_Private::EPropertyClass::Float, "Angle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMiniMapComponentInfo, Angle), METADATA_PARAMS(NewProp_Angle_MetaData, ARRAY_COUNT(NewProp_Angle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSyncAngle_MetaData[] = {
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
			};
#endif
			auto NewProp_IsSyncAngle_SetBit = [](void* Obj){ ((FMiniMapComponentInfo*)Obj)->IsSyncAngle = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSyncAngle = { UE4CodeGen_Private::EPropertyClass::Bool, "IsSyncAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMiniMapComponentInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsSyncAngle_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsSyncAngle_MetaData, ARRAY_COUNT(NewProp_IsSyncAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMiniMapComponentInfo, Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSyncLocation_MetaData[] = {
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
			};
#endif
			auto NewProp_IsSyncLocation_SetBit = [](void* Obj){ ((FMiniMapComponentInfo*)Obj)->IsSyncLocation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSyncLocation = { UE4CodeGen_Private::EPropertyClass::Bool, "IsSyncLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMiniMapComponentInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsSyncLocation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsSyncLocation_MetaData, ARRAY_COUNT(NewProp_IsSyncLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapFlagWidget_MetaData[] = {
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_MapFlagWidget = { UE4CodeGen_Private::EPropertyClass::Class, "MapFlagWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMiniMapComponentInfo, MapFlagWidget), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_MapFlagWidget_MetaData, ARRAY_COUNT(NewProp_MapFlagWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlagSize_MetaData[] = {
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FlagSize = { UE4CodeGen_Private::EPropertyClass::Struct, "FlagSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMiniMapComponentInfo, FlagSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_FlagSize_MetaData, ARRAY_COUNT(NewProp_FlagSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIImagePath_MetaData[] = {
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UIImagePath = { UE4CodeGen_Private::EPropertyClass::Str, "UIImagePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMiniMapComponentInfo, UIImagePath), METADATA_PARAMS(NewProp_UIImagePath_MetaData, ARRAY_COUNT(NewProp_UIImagePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniMapComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MiniMapComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MiniMapComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(FMiniMapComponentInfo, MiniMapComponent), Z_Construct_UClass_UMiniMapComponent_NoRegister, METADATA_PARAMS(NewProp_MiniMapComponent_MetaData, ARRAY_COUNT(NewProp_MiniMapComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentId_MetaData[] = {
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ComponentId = { UE4CodeGen_Private::EPropertyClass::Int, "ComponentId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMiniMapComponentInfo, ComponentId), METADATA_PARAMS(NewProp_ComponentId_MetaData, ARRAY_COUNT(NewProp_ComponentId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Groups,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Groups_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Angle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsSyncAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsSyncLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MapFlagWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FlagSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UIImagePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MiniMapComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentId,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MyPlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MiniMapComponentInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMiniMapComponentInfo),
				alignof(FMiniMapComponentInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiniMapComponentInfo_CRC() { return 224284474U; }
class UScriptStruct* FMiniMapPathCsvRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MYPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMiniMapPathCsvRow_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniMapPathCsvRow, Z_Construct_UPackage__Script_MyPlugin(), TEXT("MiniMapPathCsvRow"), sizeof(FMiniMapPathCsvRow), Get_Z_Construct_UScriptStruct_FMiniMapPathCsvRow_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiniMapPathCsvRow(FMiniMapPathCsvRow::StaticStruct, TEXT("/Script/MyPlugin"), TEXT("MiniMapPathCsvRow"), false, nullptr, nullptr);
static struct FScriptStruct_MyPlugin_StaticRegisterNativesFMiniMapPathCsvRow
{
	FScriptStruct_MyPlugin_StaticRegisterNativesFMiniMapPathCsvRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MiniMapPathCsvRow")),new UScriptStruct::TCppStructOps<FMiniMapPathCsvRow>);
	}
} ScriptStruct_MyPlugin_StaticRegisterNativesFMiniMapPathCsvRow;
	UScriptStruct* Z_Construct_UScriptStruct_FMiniMapPathCsvRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiniMapPathCsvRow_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MyPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiniMapPathCsvRow"), sizeof(FMiniMapPathCsvRow), Get_Z_Construct_UScriptStruct_FMiniMapPathCsvRow_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniMapPathCsvRow>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapWidgetSize_MetaData[] = {
				{ "Category", "CsvData" },
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapWidgetSize = { UE4CodeGen_Private::EPropertyClass::Struct, "MapWidgetSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FMiniMapPathCsvRow, MapWidgetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_MapWidgetSize_MetaData, ARRAY_COUNT(NewProp_MapWidgetSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapLocation_MetaData[] = {
				{ "Category", "CsvData" },
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "MapLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FMiniMapPathCsvRow, MapLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_MapLocation_MetaData, ARRAY_COUNT(NewProp_MapLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapSize_MetaData[] = {
				{ "Category", "CsvData" },
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapSize = { UE4CodeGen_Private::EPropertyClass::Struct, "MapSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FMiniMapPathCsvRow, MapSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_MapSize_MetaData, ARRAY_COUNT(NewProp_MapSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapPath_MetaData[] = {
				{ "Category", "CsvData" },
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
				{ "ToolTip", "UPROPERTY(BlueprintReadOnly, Category = \"CsvData\")\n       FString WorldName;" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapPath = { UE4CodeGen_Private::EPropertyClass::Str, "MapPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FMiniMapPathCsvRow, MapPath), METADATA_PARAMS(NewProp_MapPath_MetaData, ARRAY_COUNT(NewProp_MapPath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MapWidgetSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MapLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MapSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MapPath,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MyPlugin,
				Z_Construct_UScriptStruct_FTableRowBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MiniMapPathCsvRow",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMiniMapPathCsvRow),
				alignof(FMiniMapPathCsvRow),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiniMapPathCsvRow_CRC() { return 1618369362U; }
	void AMiniMapManage::StaticRegisterNativesAMiniMapManage()
	{
		UClass* Class = AMiniMapManage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMiniMapFlag", (Native)&AMiniMapManage::execAddMiniMapFlag },
			{ "DeleteMiniMapFlag", (Native)&AMiniMapManage::execDeleteMiniMapFlag },
			{ "UpdateMapFlag", (Native)&AMiniMapManage::execUpdateMapFlag },
			{ "UpdateMiniMapFlagPos", (Native)&AMiniMapManage::execUpdateMiniMapFlagPos },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AMiniMapManage_AddMiniMapFlag()
	{
		struct MiniMapManage_eventAddMiniMapFlag_Parms
		{
			FVector2D FlagSize;
			FVector2D Location;
			float Angle;
			TArray<int32> Groups;
			TSubclassOf<UMapFlagUserWidget>  MapFlagWidget;
			FString UIImagePath;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MiniMapManage_eventAddMiniMapFlag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UIImagePath = { UE4CodeGen_Private::EPropertyClass::Str, "UIImagePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MiniMapManage_eventAddMiniMapFlag_Parms, UIImagePath), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_MapFlagWidget = { UE4CodeGen_Private::EPropertyClass::Class, "MapFlagWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(MiniMapManage_eventAddMiniMapFlag_Parms, MapFlagWidget), Z_Construct_UClass_UMapFlagUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Groups = { UE4CodeGen_Private::EPropertyClass::Array, "Groups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MiniMapManage_eventAddMiniMapFlag_Parms, Groups), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Groups_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Groups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle = { UE4CodeGen_Private::EPropertyClass::Float, "Angle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MiniMapManage_eventAddMiniMapFlag_Parms, Angle), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MiniMapManage_eventAddMiniMapFlag_Parms, Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FlagSize = { UE4CodeGen_Private::EPropertyClass::Struct, "FlagSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MiniMapManage_eventAddMiniMapFlag_Parms, FlagSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UIImagePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MapFlagWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Groups,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Groups_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Angle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FlagSize,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
				{ "ToolTip", "????\xcd\xbc????\xcf\xa2" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniMapManage, "AddMiniMapFlag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(MiniMapManage_eventAddMiniMapFlag_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMiniMapManage_DeleteMiniMapFlag()
	{
		struct MiniMapManage_eventDeleteMiniMapFlag_Parms
		{
			int32 Id;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Id = { UE4CodeGen_Private::EPropertyClass::Int, "Id", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MiniMapManage_eventDeleteMiniMapFlag_Parms, Id), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Id,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
				{ "ToolTip", "????\xcd\xbc??,\xd6\xbb?\xde\xbf\xcd\xbb??\xcb\xb5???" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniMapManage, "DeleteMiniMapFlag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MiniMapManage_eventDeleteMiniMapFlag_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMiniMapManage_UpdateMapFlag()
	{
		struct MiniMapManage_eventUpdateMapFlag_Parms
		{
			int32 Id;
			FScriptDelegate MapFlagDelegate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_MapFlagDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "MapFlagDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MiniMapManage_eventUpdateMapFlag_Parms, MapFlagDelegate), Z_Construct_UDelegateFunction_MyPlugin_MiniMapComponentMapFlagDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Id = { UE4CodeGen_Private::EPropertyClass::Int, "Id", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MiniMapManage_eventUpdateMapFlag_Parms, Id), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MapFlagDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Id,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniMapManage, "UpdateMapFlag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MiniMapManage_eventUpdateMapFlag_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMiniMapManage_UpdateMiniMapFlagPos()
	{
		struct MiniMapManage_eventUpdateMiniMapFlagPos_Parms
		{
			int32 Id;
			FVector2D Location;
			float Angle;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle = { UE4CodeGen_Private::EPropertyClass::Float, "Angle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MiniMapManage_eventUpdateMiniMapFlagPos_Parms, Angle), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MiniMapManage_eventUpdateMiniMapFlagPos_Parms, Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Id = { UE4CodeGen_Private::EPropertyClass::Int, "Id", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MiniMapManage_eventUpdateMiniMapFlagPos_Parms, Id), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Angle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Id,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
				{ "ToolTip", "????\xcd\xbc??\xce\xbb??" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiniMapManage, "UpdateMiniMapFlagPos", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(MiniMapManage_eventUpdateMiniMapFlagPos_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMiniMapManage_NoRegister()
	{
		return AMiniMapManage::StaticClass();
	}
	UClass* Z_Construct_UClass_AMiniMapManage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_MyPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AMiniMapManage_AddMiniMapFlag, "AddMiniMapFlag" }, // 258859268
				{ &Z_Construct_UFunction_AMiniMapManage_DeleteMiniMapFlag, "DeleteMiniMapFlag" }, // 3489425622
				{ &Z_Construct_UFunction_AMiniMapManage_UpdateMapFlag, "UpdateMapFlag" }, // 3074561040
				{ &Z_Construct_UFunction_AMiniMapManage_UpdateMiniMapFlagPos, "UpdateMiniMapFlagPos" }, // 3235784947
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MiniMapManage.h" },
				{ "ModuleRelativePath", "Public/MiniMapManage.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMiniMapManage>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMiniMapManage::StaticClass,
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
	IMPLEMENT_CLASS(AMiniMapManage, 2360887417);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMiniMapManage(Z_Construct_UClass_AMiniMapManage, &AMiniMapManage::StaticClass, TEXT("/Script/MyPlugin"), TEXT("AMiniMapManage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMiniMapManage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
