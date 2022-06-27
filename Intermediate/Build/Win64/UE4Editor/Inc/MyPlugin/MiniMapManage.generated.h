// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
class UMapFlagUserWidget;
#ifdef MYPLUGIN_MiniMapManage_generated_h
#error "MiniMapManage.generated.h already included, missing '#pragma once' in MiniMapManage.h"
#endif
#define MYPLUGIN_MiniMapManage_generated_h

#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h_41_GENERATED_BODY \
	friend MYPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FMiniMapComponentInfo(); \
	MYPLUGIN_API static class UScriptStruct* StaticStruct();


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h_25_GENERATED_BODY \
	friend MYPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FMiniMapPathCsvRow(); \
	MYPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h_74_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteMiniMapFlag) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Id); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DeleteMiniMapFlag(Z_Param_Id); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMapFlag) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Id); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_MapFlagDelegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateMapFlag(Z_Param_Id,FMiniMapComponentMapFlagDelegate(Z_Param_MapFlagDelegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMiniMapFlagPos) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Id); \
		P_GET_STRUCT(FVector2D,Z_Param_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateMiniMapFlagPos(Z_Param_Id,Z_Param_Location,Z_Param_Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMiniMapFlag) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_FlagSize); \
		P_GET_STRUCT(FVector2D,Z_Param_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_GET_TARRAY(int32,Z_Param_Groups); \
		P_GET_OBJECT(UClass,Z_Param_MapFlagWidget); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UIImagePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->AddMiniMapFlag(Z_Param_FlagSize,Z_Param_Location,Z_Param_Angle,Z_Param_Groups,Z_Param_MapFlagWidget,Z_Param_UIImagePath); \
		P_NATIVE_END; \
	}


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteMiniMapFlag) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Id); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DeleteMiniMapFlag(Z_Param_Id); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMapFlag) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Id); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_MapFlagDelegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateMapFlag(Z_Param_Id,FMiniMapComponentMapFlagDelegate(Z_Param_MapFlagDelegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMiniMapFlagPos) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Id); \
		P_GET_STRUCT(FVector2D,Z_Param_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateMiniMapFlagPos(Z_Param_Id,Z_Param_Location,Z_Param_Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMiniMapFlag) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_FlagSize); \
		P_GET_STRUCT(FVector2D,Z_Param_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_GET_TARRAY(int32,Z_Param_Groups); \
		P_GET_OBJECT(UClass,Z_Param_MapFlagWidget); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UIImagePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->AddMiniMapFlag(Z_Param_FlagSize,Z_Param_Location,Z_Param_Angle,Z_Param_Groups,Z_Param_MapFlagWidget,Z_Param_UIImagePath); \
		P_NATIVE_END; \
	}


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMiniMapManage(); \
	friend MYPLUGIN_API class UClass* Z_Construct_UClass_AMiniMapManage(); \
public: \
	DECLARE_CLASS(AMiniMapManage, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMiniMapManage) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h_74_INCLASS \
private: \
	static void StaticRegisterNativesAMiniMapManage(); \
	friend MYPLUGIN_API class UClass* Z_Construct_UClass_AMiniMapManage(); \
public: \
	DECLARE_CLASS(AMiniMapManage, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMiniMapManage) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMiniMapManage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMiniMapManage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMiniMapManage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMiniMapManage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMiniMapManage(AMiniMapManage&&); \
	NO_API AMiniMapManage(const AMiniMapManage&); \
public:


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h_74_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMiniMapManage(AMiniMapManage&&); \
	NO_API AMiniMapManage(const AMiniMapManage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMiniMapManage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMiniMapManage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMiniMapManage)


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h_74_PRIVATE_PROPERTY_OFFSET
#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h_70_PROLOG
#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h_74_PRIVATE_PROPERTY_OFFSET \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h_74_RPC_WRAPPERS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h_74_INCLASS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h_74_PRIVATE_PROPERTY_OFFSET \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h_74_INCLASS_NO_PURE_DECLS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_MiniMapManage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
