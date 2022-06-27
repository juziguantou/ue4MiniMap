// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PlayerControllerMiniMapComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerControllerMiniMapComponent() {}
// Cross Module References
	MYPLUGIN_API UClass* Z_Construct_UClass_UPlayerControllerMiniMapComponent_NoRegister();
	MYPLUGIN_API UClass* Z_Construct_UClass_UPlayerControllerMiniMapComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MyPlugin();
	MYPLUGIN_API UFunction* Z_Construct_UFunction_UPlayerControllerMiniMapComponent_AddGroup();
	MYPLUGIN_API UFunction* Z_Construct_UFunction_UPlayerControllerMiniMapComponent_DelGroup();
	MYPLUGIN_API UFunction* Z_Construct_UFunction_UPlayerControllerMiniMapComponent_OnRep_Infos();
	MYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMiniMapComponentInfo();
// End Cross Module References
	static FName NAME_UPlayerControllerMiniMapComponent_AddGroup = FName(TEXT("AddGroup"));
	void UPlayerControllerMiniMapComponent::AddGroup(int32 Group)
	{
		PlayerControllerMiniMapComponent_eventAddGroup_Parms Parms;
		Parms.Group=Group;
		ProcessEvent(FindFunctionChecked(NAME_UPlayerControllerMiniMapComponent_AddGroup),&Parms);
	}
	static FName NAME_UPlayerControllerMiniMapComponent_DelGroup = FName(TEXT("DelGroup"));
	void UPlayerControllerMiniMapComponent::DelGroup(int32 Group)
	{
		PlayerControllerMiniMapComponent_eventDelGroup_Parms Parms;
		Parms.Group=Group;
		ProcessEvent(FindFunctionChecked(NAME_UPlayerControllerMiniMapComponent_DelGroup),&Parms);
	}
	void UPlayerControllerMiniMapComponent::StaticRegisterNativesUPlayerControllerMiniMapComponent()
	{
		UClass* Class = UPlayerControllerMiniMapComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGroup", (Native)&UPlayerControllerMiniMapComponent::execAddGroup },
			{ "DelGroup", (Native)&UPlayerControllerMiniMapComponent::execDelGroup },
			{ "OnRep_Infos", (Native)&UPlayerControllerMiniMapComponent::execOnRep_Infos },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UPlayerControllerMiniMapComponent_AddGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Group = { UE4CodeGen_Private::EPropertyClass::Int, "Group", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerControllerMiniMapComponent_eventAddGroup_Parms, Group), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Group,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/PlayerControllerMiniMapComponent.h" },
				{ "ToolTip", "???????\xd2\xb5\xc4\xb7???" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerControllerMiniMapComponent, "AddGroup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x84220CC0, sizeof(PlayerControllerMiniMapComponent_eventAddGroup_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPlayerControllerMiniMapComponent_DelGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Group = { UE4CodeGen_Private::EPropertyClass::Int, "Group", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerControllerMiniMapComponent_eventDelGroup_Parms, Group), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Group,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/PlayerControllerMiniMapComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerControllerMiniMapComponent, "DelGroup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x84220CC0, sizeof(PlayerControllerMiniMapComponent_eventDelGroup_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPlayerControllerMiniMapComponent_OnRep_Infos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/PlayerControllerMiniMapComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerControllerMiniMapComponent, "OnRep_Infos", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerControllerMiniMapComponent_NoRegister()
	{
		return UPlayerControllerMiniMapComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UPlayerControllerMiniMapComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_MyPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UPlayerControllerMiniMapComponent_AddGroup, "AddGroup" }, // 1006085744
				{ &Z_Construct_UFunction_UPlayerControllerMiniMapComponent_DelGroup, "DelGroup" }, // 2647995670
				{ &Z_Construct_UFunction_UPlayerControllerMiniMapComponent_OnRep_Infos, "OnRep_Infos" }, // 665936123
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "PlayerControllerMiniMapComponent.h" },
				{ "ModuleRelativePath", "Public/PlayerControllerMiniMapComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Infos_MetaData[] = {
				{ "ModuleRelativePath", "Public/PlayerControllerMiniMapComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Infos = { UE4CodeGen_Private::EPropertyClass::Array, "Infos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008100000020, 1, "OnRep_Infos", STRUCT_OFFSET(UPlayerControllerMiniMapComponent, Infos), METADATA_PARAMS(NewProp_Infos_MetaData, ARRAY_COUNT(NewProp_Infos_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Infos_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Infos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMiniMapComponentInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Infos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Infos_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPlayerControllerMiniMapComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPlayerControllerMiniMapComponent::StaticClass,
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
	IMPLEMENT_CLASS(UPlayerControllerMiniMapComponent, 3199620917);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerControllerMiniMapComponent(Z_Construct_UClass_UPlayerControllerMiniMapComponent, &UPlayerControllerMiniMapComponent::StaticClass, TEXT("/Script/MyPlugin"), TEXT("UPlayerControllerMiniMapComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerControllerMiniMapComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
