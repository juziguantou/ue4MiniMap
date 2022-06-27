// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MiniMapWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniMapWidget() {}
// Cross Module References
	MYPLUGIN_API UClass* Z_Construct_UClass_UMiniMapWidget_NoRegister();
	MYPLUGIN_API UClass* Z_Construct_UClass_UMiniMapWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyPlugin();
// End Cross Module References
	void UMiniMapWidget::StaticRegisterNativesUMiniMapWidget()
	{
	}
	UClass* Z_Construct_UClass_UMiniMapWidget_NoRegister()
	{
		return UMiniMapWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UMiniMapWidget()
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
				{ "IncludePath", "MiniMapWidget.h" },
				{ "ModuleRelativePath", "Public/MiniMapWidget.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMiniMapWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMiniMapWidget::StaticClass,
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
	IMPLEMENT_CLASS(UMiniMapWidget, 58926997);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMiniMapWidget(Z_Construct_UClass_UMiniMapWidget, &UMiniMapWidget::StaticClass, TEXT("/Script/MyPlugin"), TEXT("UMiniMapWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMiniMapWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
