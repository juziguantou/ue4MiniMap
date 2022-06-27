// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MapFlagUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapFlagUserWidget() {}
// Cross Module References
	MYPLUGIN_API UClass* Z_Construct_UClass_UMapFlagUserWidget_NoRegister();
	MYPLUGIN_API UClass* Z_Construct_UClass_UMapFlagUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyPlugin();
// End Cross Module References
	void UMapFlagUserWidget::StaticRegisterNativesUMapFlagUserWidget()
	{
	}
	UClass* Z_Construct_UClass_UMapFlagUserWidget_NoRegister()
	{
		return UMapFlagUserWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UMapFlagUserWidget()
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
				{ "IncludePath", "MapFlagUserWidget.h" },
				{ "ModuleRelativePath", "Public/MapFlagUserWidget.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMapFlagUserWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMapFlagUserWidget::StaticClass,
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
	IMPLEMENT_CLASS(UMapFlagUserWidget, 3929648307);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapFlagUserWidget(Z_Construct_UClass_UMapFlagUserWidget, &UMapFlagUserWidget::StaticClass, TEXT("/Script/MyPlugin"), TEXT("UMapFlagUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapFlagUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
