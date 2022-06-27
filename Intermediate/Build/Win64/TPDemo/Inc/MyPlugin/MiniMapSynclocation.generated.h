// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FComponentAndTransformInfo;
#ifdef MYPLUGIN_MiniMapSynclocation_generated_h
#error "MiniMapSynclocation.generated.h already included, missing '#pragma once' in MiniMapSynclocation.h"
#endif
#define MYPLUGIN_MiniMapSynclocation_generated_h

#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_26_GENERATED_BODY \
	friend MYPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FComponentAndTransformInfo(); \
	MYPLUGIN_API static class UScriptStruct* StaticStruct();


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_RPC_WRAPPERS \
	virtual void UpdateMapFlagLocationAndAngle_Implementation(TArray<FComponentAndTransformInfo> const& SyncLocationAndAngleInfos); \
 \
	DECLARE_FUNCTION(execUpdateMapFlagLocationAndAngle) \
	{ \
		P_GET_TARRAY(FComponentAndTransformInfo,Z_Param_SyncLocationAndAngleInfos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateMapFlagLocationAndAngle_Implementation(Z_Param_SyncLocationAndAngleInfos); \
		P_NATIVE_END; \
	}


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateMapFlagLocationAndAngle_Implementation(TArray<FComponentAndTransformInfo> const& SyncLocationAndAngleInfos); \
 \
	DECLARE_FUNCTION(execUpdateMapFlagLocationAndAngle) \
	{ \
		P_GET_TARRAY(FComponentAndTransformInfo,Z_Param_SyncLocationAndAngleInfos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateMapFlagLocationAndAngle_Implementation(Z_Param_SyncLocationAndAngleInfos); \
		P_NATIVE_END; \
	}


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_EVENT_PARMS \
	struct MiniMapSynclocation_eventUpdateMapFlagLocationAndAngle_Parms \
	{ \
		TArray<FComponentAndTransformInfo> SyncLocationAndAngleInfos; \
	};


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_CALLBACK_WRAPPERS
#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMiniMapSynclocation(); \
	friend MYPLUGIN_API class UClass* Z_Construct_UClass_AMiniMapSynclocation(); \
public: \
	DECLARE_CLASS(AMiniMapSynclocation, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMiniMapSynclocation) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_INCLASS \
private: \
	static void StaticRegisterNativesAMiniMapSynclocation(); \
	friend MYPLUGIN_API class UClass* Z_Construct_UClass_AMiniMapSynclocation(); \
public: \
	DECLARE_CLASS(AMiniMapSynclocation, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMiniMapSynclocation) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMiniMapSynclocation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMiniMapSynclocation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMiniMapSynclocation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMiniMapSynclocation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMiniMapSynclocation(AMiniMapSynclocation&&); \
	NO_API AMiniMapSynclocation(const AMiniMapSynclocation&); \
public:


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMiniMapSynclocation(AMiniMapSynclocation&&); \
	NO_API AMiniMapSynclocation(const AMiniMapSynclocation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMiniMapSynclocation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMiniMapSynclocation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMiniMapSynclocation)


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_PRIVATE_PROPERTY_OFFSET
#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_35_PROLOG \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_EVENT_PARMS


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_PRIVATE_PROPERTY_OFFSET \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_RPC_WRAPPERS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_CALLBACK_WRAPPERS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_INCLASS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_PRIVATE_PROPERTY_OFFSET \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_CALLBACK_WRAPPERS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_INCLASS_NO_PURE_DECLS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapSynclocation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
