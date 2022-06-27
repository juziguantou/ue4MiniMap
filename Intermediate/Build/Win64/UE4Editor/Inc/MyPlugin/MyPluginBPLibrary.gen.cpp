// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MyPluginBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPluginBPLibrary() {}
// Cross Module References
	MYPLUGIN_API UClass* Z_Construct_UClass_UMyPluginBPLibrary_NoRegister();
	MYPLUGIN_API UClass* Z_Construct_UClass_UMyPluginBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MyPlugin();
	MYPLUGIN_API UFunction* Z_Construct_UFunction_UMyPluginBPLibrary_GetMiniMapMgr();
	MYPLUGIN_API UClass* Z_Construct_UClass_AMiniMapManage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UMyPluginBPLibrary::StaticRegisterNativesUMyPluginBPLibrary()
	{
		UClass* Class = UMyPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMiniMapMgr", (Native)&UMyPluginBPLibrary::execGetMiniMapMgr },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMyPluginBPLibrary_GetMiniMapMgr()
	{
		struct MyPluginBPLibrary_eventGetMiniMapMgr_Parms
		{
			const UObject* WorldContextObject;
			AMiniMapManage* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyPluginBPLibrary_eventGetMiniMapMgr_Parms, ReturnValue), Z_Construct_UClass_AMiniMapManage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MyPluginBPLibrary_eventGetMiniMapMgr_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_WorldContextObject_MetaData, ARRAY_COUNT(NewProp_WorldContextObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MyPluginBPLibrary.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPluginBPLibrary, "GetMiniMapMgr", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MyPluginBPLibrary_eventGetMiniMapMgr_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyPluginBPLibrary_NoRegister()
	{
		return UMyPluginBPLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UMyPluginBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_MyPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMyPluginBPLibrary_GetMiniMapMgr, "GetMiniMapMgr" }, // 3417647428
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MyPluginBPLibrary.h" },
				{ "ModuleRelativePath", "Public/MyPluginBPLibrary.h" },
				{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMyPluginBPLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMyPluginBPLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UMyPluginBPLibrary, 2551454602);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyPluginBPLibrary(Z_Construct_UClass_UMyPluginBPLibrary, &UMyPluginBPLibrary::StaticClass, TEXT("/Script/MyPlugin"), TEXT("UMyPluginBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyPluginBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
