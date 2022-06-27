// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AMiniMapManage;
#ifdef MYPLUGIN_MyPluginBPLibrary_generated_h
#error "MyPluginBPLibrary.generated.h already included, missing '#pragma once' in MyPluginBPLibrary.h"
#endif
#define MYPLUGIN_MyPluginBPLibrary_generated_h

#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMiniMapMgr) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMiniMapManage**)Z_Param__Result=UMyPluginBPLibrary::GetMiniMapMgr(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMiniMapMgr) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMiniMapManage**)Z_Param__Result=UMyPluginBPLibrary::GetMiniMapMgr(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyPluginBPLibrary(); \
	friend MYPLUGIN_API class UClass* Z_Construct_UClass_UMyPluginBPLibrary(); \
public: \
	DECLARE_CLASS(UMyPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMyPluginBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUMyPluginBPLibrary(); \
	friend MYPLUGIN_API class UClass* Z_Construct_UClass_UMyPluginBPLibrary(); \
public: \
	DECLARE_CLASS(UMyPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMyPluginBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyPluginBPLibrary(UMyPluginBPLibrary&&); \
	NO_API UMyPluginBPLibrary(const UMyPluginBPLibrary&); \
public:


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyPluginBPLibrary(UMyPluginBPLibrary&&); \
	NO_API UMyPluginBPLibrary(const UMyPluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPluginBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyPluginBPLibrary)


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET
#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_26_PROLOG
#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_29_RPC_WRAPPERS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_29_INCLASS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_29_INCLASS_NO_PURE_DECLS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MyPluginBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MyPluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
