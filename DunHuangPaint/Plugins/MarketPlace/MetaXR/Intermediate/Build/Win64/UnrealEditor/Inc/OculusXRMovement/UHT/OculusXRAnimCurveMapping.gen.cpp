// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRMovement/Public/OculusXRAnimCurveMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRAnimCurveMapping() {}

// Begin Cross Module References
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping();
UPackage* Z_Construct_UPackage__Script_OculusXRMovement();
// End Cross Module References

// Begin ScriptStruct FOculusXRAnimCurveMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRAnimCurveMapping;
class UScriptStruct* FOculusXRAnimCurveMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRAnimCurveMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRAnimCurveMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("OculusXRAnimCurveMapping"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRAnimCurveMapping.OuterSingleton;
}
template<> OCULUSXRMOVEMENT_API UScriptStruct* StaticStruct<FOculusXRAnimCurveMapping>()
{
	return FOculusXRAnimCurveMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnimCurveMapping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveNames_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "Comment", "/**\n\x09 * Skeleton's animation curve names\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXRAnimCurveMapping.h" },
		{ "ToolTip", "Skeleton's animation curve names" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRAnimCurveMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping_Statics::NewProp_CurveNames_Inner = { "CurveNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping_Statics::NewProp_CurveNames = { "CurveNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRAnimCurveMapping, CurveNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveNames_MetaData), NewProp_CurveNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping_Statics::NewProp_CurveNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping_Statics::NewProp_CurveNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMovement,
	nullptr,
	&NewStructOps,
	"OculusXRAnimCurveMapping",
	Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping_Statics::PropPointers),
	sizeof(FOculusXRAnimCurveMapping),
	alignof(FOculusXRAnimCurveMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRAnimCurveMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRAnimCurveMapping.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OculusXRAnimCurveMapping.InnerSingleton;
}
// End ScriptStruct FOculusXRAnimCurveMapping

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRAnimCurveMapping_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOculusXRAnimCurveMapping::StaticStruct, Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping_Statics::NewStructOps, TEXT("OculusXRAnimCurveMapping"), &Z_Registration_Info_UScriptStruct_OculusXRAnimCurveMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRAnimCurveMapping), 2624212199U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRAnimCurveMapping_h_945374441(TEXT("/Script/OculusXRMovement"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRAnimCurveMapping_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRAnimCurveMapping_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
