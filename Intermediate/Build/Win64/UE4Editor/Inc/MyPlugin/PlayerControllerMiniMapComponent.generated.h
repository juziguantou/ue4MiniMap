// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPLUGIN_PlayerControllerMiniMapComponent_generated_h
#error "PlayerControllerMiniMapComponent.generated.h already included, missing '#pragma once' in PlayerControllerMiniMapComponent.h"
#endif
#define MYPLUGIN_PlayerControllerMiniMapComponent_generated_h

#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_RPC_WRAPPERS \
	virtual bool DelGroup_Validate(int32 ); \
	virtual void DelGroup_Implementation(int32 Group); \
	virtual bool AddGroup_Validate(int32 ); \
	virtual void AddGroup_Implementation(int32 Group); \
 \
	DECLARE_FUNCTION(execDelGroup) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Group); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->DelGroup_Validate(Z_Param_Group)) \
		{ \
			RPC_ValidateFailed(TEXT("DelGroup_Validate")); \
			return; \
		} \
		this->DelGroup_Implementation(Z_Param_Group); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGroup) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Group); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->AddGroup_Validate(Z_Param_Group)) \
		{ \
			RPC_ValidateFailed(TEXT("AddGroup_Validate")); \
			return; \
		} \
		this->AddGroup_Implementation(Z_Param_Group); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Infos) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_Infos(); \
		P_NATIVE_END; \
	}


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool DelGroup_Validate(int32 ); \
	virtual void DelGroup_Implementation(int32 Group); \
	virtual bool AddGroup_Validate(int32 ); \
	virtual void AddGroup_Implementation(int32 Group); \
 \
	DECLARE_FUNCTION(execDelGroup) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Group); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->DelGroup_Validate(Z_Param_Group)) \
		{ \
			RPC_ValidateFailed(TEXT("DelGroup_Validate")); \
			return; \
		} \
		this->DelGroup_Implementation(Z_Param_Group); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGroup) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Group); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->AddGroup_Validate(Z_Param_Group)) \
		{ \
			RPC_ValidateFailed(TEXT("AddGroup_Validate")); \
			return; \
		} \
		this->AddGroup_Implementation(Z_Param_Group); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Infos) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_Infos(); \
		P_NATIVE_END; \
	}


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_EVENT_PARMS \
	struct PlayerControllerMiniMapComponent_eventAddGroup_Parms \
	{ \
		int32 Group; \
	}; \
	struct PlayerControllerMiniMapComponent_eventDelGroup_Parms \
	{ \
		int32 Group; \
	};


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_CALLBACK_WRAPPERS
#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerControllerMiniMapComponent(); \
	friend MYPLUGIN_API class UClass* Z_Construct_UClass_UPlayerControllerMiniMapComponent(); \
public: \
	DECLARE_CLASS(UPlayerControllerMiniMapComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPlayerControllerMiniMapComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerControllerMiniMapComponent(); \
	friend MYPLUGIN_API class UClass* Z_Construct_UClass_UPlayerControllerMiniMapComponent(); \
public: \
	DECLARE_CLASS(UPlayerControllerMiniMapComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPlayerControllerMiniMapComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerControllerMiniMapComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerControllerMiniMapComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerControllerMiniMapComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerControllerMiniMapComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerControllerMiniMapComponent(UPlayerControllerMiniMapComponent&&); \
	NO_API UPlayerControllerMiniMapComponent(const UPlayerControllerMiniMapComponent&); \
public:


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerControllerMiniMapComponent(UPlayerControllerMiniMapComponent&&); \
	NO_API UPlayerControllerMiniMapComponent(const UPlayerControllerMiniMapComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerControllerMiniMapComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerControllerMiniMapComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerControllerMiniMapComponent)


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Infos() { return STRUCT_OFFSET(UPlayerControllerMiniMapComponent, Infos); }


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_11_PROLOG \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_EVENT_PARMS


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_RPC_WRAPPERS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_CALLBACK_WRAPPERS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_INCLASS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_CALLBACK_WRAPPERS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_INCLASS_NO_PURE_DECLS \
	TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPDemo_Plugins_MyPlugin_Source_MyPlugin_Public_PlayerControllerMiniMapComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
