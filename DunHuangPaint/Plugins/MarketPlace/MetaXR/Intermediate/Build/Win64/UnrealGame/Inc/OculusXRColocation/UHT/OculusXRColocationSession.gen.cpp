// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRColocation/Public/OculusXRColocationSession.h"
#include "OculusXRAnchors/Public/OculusXRAnchorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRColocationSession() {}

// Begin Cross Module References
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID();
OCULUSXRCOLOCATION_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRColocationSession();
UPackage* Z_Construct_UPackage__Script_OculusXRColocation();
// End Cross Module References

// Begin ScriptStruct FOculusXRColocationSession
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRColocationSession;
class UScriptStruct* FOculusXRColocationSession::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRColocationSession.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRColocationSession.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRColocationSession, (UObject*)Z_Construct_UPackage__Script_OculusXRColocation(), TEXT("OculusXRColocationSession"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRColocationSession.OuterSingleton;
}
template<> OCULUSXRCOLOCATION_API UScriptStruct* StaticStruct<FOculusXRColocationSession>()
{
	return FOculusXRColocationSession::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRColocationSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Uuid_MetaData[] = {
		{ "Category", "OculusXR|Colocation" },
		{ "ModuleRelativePath", "Public/OculusXRColocationSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
		{ "Category", "OculusXR|Colocation" },
		{ "ModuleRelativePath", "Public/OculusXRColocationSession.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Uuid;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Metadata_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRColocationSession>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::NewProp_Uuid = { "Uuid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRColocationSession, Uuid), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Uuid_MetaData), NewProp_Uuid_MetaData) }; // 3529562975
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::NewProp_Metadata_Inner = { "Metadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRColocationSession, Metadata), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metadata_MetaData), NewProp_Metadata_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::NewProp_Uuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::NewProp_Metadata_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::NewProp_Metadata,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRColocation,
	nullptr,
	&NewStructOps,
	"OculusXRColocationSession",
	Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::PropPointers),
	sizeof(FOculusXRColocationSession),
	alignof(FOculusXRColocationSession),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRColocationSession()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRColocationSession.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRColocationSession.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OculusXRColocationSession.InnerSingleton;
}
// End ScriptStruct FOculusXRColocationSession

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationSession_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOculusXRColocationSession::StaticStruct, Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::NewStructOps, TEXT("OculusXRColocationSession"), &Z_Registration_Info_UScriptStruct_OculusXRColocationSession, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRColocationSession), 1655936278U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationSession_h_2211281189(TEXT("/Script/OculusXRColocation"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationSession_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRColocation_Public_OculusXRColocationSession_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
