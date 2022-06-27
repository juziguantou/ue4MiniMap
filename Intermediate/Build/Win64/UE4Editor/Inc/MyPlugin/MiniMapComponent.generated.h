// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMapFlagUserWidget;
#ifdef MYPLUGIN_MiniMapComponent_generated_h
#error "MiniMapComponent.generated.h already included, missing '#pragma once' in MiniMapComponent.h"
#endif
#define MYPLUGIN_MiniMapComponent_generated_h

#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapComponent_h_13_DELEGATE \
struct _Script_MyPlugin_eventMiniMapComponentMapFlagDelegate_Parms \
{ \
	UMapFlagUserWidget* MapFlagUserWidget; \
}; \
static inline void FMiniMapComponentMapFlagDelegate_DelegateWrapper(const FScriptDelegate& MiniMapComponentMapFlagDelegate, UMapFlagUserWidget* MapFlagUserWidget) \
{ \
	_Script_MyPlugin_eventMiniMapComponentMapFlagDelegate_Parms Parms; \
	Parms.MapFlagUserWidget=MapFlagUserWidget; \
	MiniMapComponentMapFlagDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_IsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_IsActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMapFlag) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_MapFlagDelegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateMapFlag(FMiniMapComponentMapFlagDelegate(Z_Param_MapFlagDelegate)); \
		P_NATIVE_END; \
	}


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_IsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_IsActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMapFlag) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_MapFlagDelegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateMapFlag(FMiniMapComponentMapFlagDelegate(Z_Param_MapFlagDelegate)); \
		P_NATIVE_END; \
	}


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMiniMapComponent(); \
	friend MYPLUGIN_API class UClass* Z_Construct_UClass_UMiniMapComponent(); \
public: \
	DECLARE_CLASS(UMiniMapComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMiniMapComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMiniMapComponent(); \
	friend MYPLUGIN_API class UClass* Z_Construct_UClass_UMiniMapComponent(); \
public: \
	DECLARE_CLASS(UMiniMapComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMiniMapComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMiniMapComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMiniMapComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMiniMapComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMiniMapComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMiniMapComponent(UMiniMapComponent&&); \
	NO_API UMiniMapComponent(const UMiniMapComponent&); \
public:


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMiniMapComponent(UMiniMapComponent&&); \
	NO_API UMiniMapComponent(const UMiniMapComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMiniMapComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMiniMapComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMiniMapComponent)


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapComponent_h_17_PRIVATE_PROPERTY_OFFSET
#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapComponent_h_14_PROLOG
#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapComponent_h_17_RPC_WRAPPERS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapComponent_h_17_INCLASS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapComponent_h_17_INCLASS_NO_PURE_DECLS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
