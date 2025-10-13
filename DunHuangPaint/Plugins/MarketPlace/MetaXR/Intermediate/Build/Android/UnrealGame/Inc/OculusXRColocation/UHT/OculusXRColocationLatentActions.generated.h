// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRColocationLatentActions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOculusXRAsyncAction_DiscoverColocationSessions;
class UOculusXRAsyncAction_StartColocationSessionAdvertisement;
class UOculusXRAsyncAction_StopColocationSessionAdvertisement;
struct FOculusXRColocationSession;
#ifdef OCULUSXRCOLOCATION_OculusXRColocationLatentActions_generated_h
#error "OculusXRColocationLatentActions.generated.h already included, missing '#pragma once' in OculusXRColocationLatentActions.h"
#endif
#define OCULUSXRCOLOCATION_OculusXRColocationLatentActions_generated_h

#define FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_11_DELEGATE \
OCULUSXRCOLOCATION_API void FOculusXR_LatentAction_ColocationDiscoveryComplete_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_ColocationDiscoveryComplete, bool Success, FOculusXRColocationSession const& Session, TArray<FOculusXRColocationSession> const& FoundSessions);


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_12_DELEGATE \
OCULUSXRCOLOCATION_API void FOculusXR_LatentAction_ColocationSessionFound_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_ColocationSessionFound, bool Success, FOculusXRColocationSession const& Session, TArray<FOculusXRColocationSession> const& FoundSessions);


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_13_DELEGATE \
OCULUSXRCOLOCATION_API void FOculusXR_LatentAction_ColocationAdvertisementStarted_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_ColocationAdvertisementStarted, bool Success, FOculusXRColocationSession const& Session);


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_14_DELEGATE \
OCULUSXRCOLOCATION_API void FOculusXR_LatentAction_ColocationAdvertisementStopped_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_ColocationAdvertisementStopped, bool Success);


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncDiscoverColocationSessions);


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_DiscoverColocationSessions(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_Statics; \
public: \
	DECLARE_CLASS(UOculusXRAsyncAction_DiscoverColocationSessions, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRColocation"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_DiscoverColocationSessions)


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_DiscoverColocationSessions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_DiscoverColocationSessions(UOculusXRAsyncAction_DiscoverColocationSessions&&); \
	UOculusXRAsyncAction_DiscoverColocationSessions(const UOculusXRAsyncAction_DiscoverColocationSessions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_DiscoverColocationSessions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_DiscoverColocationSessions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_DiscoverColocationSessions) \
	NO_API virtual ~UOculusXRAsyncAction_DiscoverColocationSessions();


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_19_PROLOG
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRCOLOCATION_API UClass* StaticClass<class UOculusXRAsyncAction_DiscoverColocationSessions>();

#define FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncStartColocationSessionAdvertisement);


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_StartColocationSessionAdvertisement(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_Statics; \
public: \
	DECLARE_CLASS(UOculusXRAsyncAction_StartColocationSessionAdvertisement, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRColocation"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_StartColocationSessionAdvertisement)


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_StartColocationSessionAdvertisement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_StartColocationSessionAdvertisement(UOculusXRAsyncAction_StartColocationSessionAdvertisement&&); \
	UOculusXRAsyncAction_StartColocationSessionAdvertisement(const UOculusXRAsyncAction_StartColocationSessionAdvertisement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_StartColocationSessionAdvertisement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_StartColocationSessionAdvertisement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_StartColocationSessionAdvertisement) \
	NO_API virtual ~UOculusXRAsyncAction_StartColocationSessionAdvertisement();


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_43_PROLOG
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRCOLOCATION_API UClass* StaticClass<class UOculusXRAsyncAction_StartColocationSessionAdvertisement>();

#define FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncStopColocationSessionAdvertisement);


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_StopColocationSessionAdvertisement(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_Statics; \
public: \
	DECLARE_CLASS(UOculusXRAsyncAction_StopColocationSessionAdvertisement, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRColocation"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_StopColocationSessionAdvertisement)


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_StopColocationSessionAdvertisement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_StopColocationSessionAdvertisement(UOculusXRAsyncAction_StopColocationSessionAdvertisement&&); \
	UOculusXRAsyncAction_StopColocationSessionAdvertisement(const UOculusXRAsyncAction_StopColocationSessionAdvertisement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_StopColocationSessionAdvertisement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_StopColocationSessionAdvertisement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_StopColocationSessionAdvertisement) \
	NO_API virtual ~UOculusXRAsyncAction_StopColocationSessionAdvertisement();


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_65_PROLOG
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRCOLOCATION_API UClass* StaticClass<class UOculusXRAsyncAction_StopColocationSessionAdvertisement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
