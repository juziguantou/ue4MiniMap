// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SmallMiniMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmallMiniMap() {}
// Cross Module References
	MYPLUGIN_API UClass* Z_Construct_UClass_USmallMiniMap_NoRegister();
	MYPLUGIN_API UClass* Z_Construct_UClass_USmallMiniMap();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyPlugin();
// End Cross Module References
	void USmallMiniMap::StaticRegisterNativesUSmallMiniMap()
	{
	}
	UClass* Z_Construct_UClass_USmallMiniMap_NoRegister()
	{
		return USmallMiniMap::StaticClass();
	}
	UClass* Z_Construct_UClass_USmallMiniMap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_MyPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SmallMiniMap.h" },
				{ "ModuleRelativePath", "Public/SmallMiniMap.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USmallMiniMap>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USmallMiniMap::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(USmallMiniMap, 1082515061);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USmallMiniMap(Z_Construct_UClass_USmallMiniMap, &USmallMiniMap::StaticClass, TEXT("/Script/MyPlugin"), TEXT("USmallMiniMap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmallMiniMap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
