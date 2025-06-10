// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyFootstepPlugin/Public/Components/FootstepComponent.h"
#include "EasyFootstepPlugin/Public/EasyFootstepPluginTypes.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootstepComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
EASYFOOTSTEPPLUGIN_API UClass* Z_Construct_UClass_UFootstepComponent();
EASYFOOTSTEPPLUGIN_API UClass* Z_Construct_UClass_UFootstepComponent_NoRegister();
EASYFOOTSTEPPLUGIN_API UEnum* Z_Construct_UEnum_EasyFootstepPlugin_EFootstepType();
EASYFOOTSTEPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature();
EASYFOOTSTEPPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFootstepDecalData();
EASYFOOTSTEPPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFootstepEffectData();
EASYFOOTSTEPPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFootstepSoundData();
EASYFOOTSTEPPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFootstepTypeData();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
UPackage* Z_Construct_UPackage__Script_EasyFootstepPlugin();
// End Cross Module References

// Begin Delegate FOnFootstepPlayed
struct Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics
{
	struct _Script_EasyFootstepPlugin_eventOnFootstepPlayed_Parms
	{
		UFootstepComponent* FootstepComponent;
		FVector Location;
		EFootstepType FootstepType;
		TEnumAsByte<EPhysicalSurface> SurfaceType;
		bool PlaySplash;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n * The delegate that is used to send footstep data to binded functions.\n *///\n//\n//\n//\n//\n" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "The delegate that is used to send footstep data to binded functions.\n //\n//\n//\n//\n//" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FootstepComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FootstepType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FootstepType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
	static void NewProp_PlaySplash_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlaySplash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::NewProp_FootstepComponent = { "FootstepComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EasyFootstepPlugin_eventOnFootstepPlayed_Parms, FootstepComponent), Z_Construct_UClass_UFootstepComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepComponent_MetaData), NewProp_FootstepComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EasyFootstepPlugin_eventOnFootstepPlayed_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::NewProp_FootstepType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::NewProp_FootstepType = { "FootstepType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EasyFootstepPlugin_eventOnFootstepPlayed_Parms, FootstepType), Z_Construct_UEnum_EasyFootstepPlugin_EFootstepType, METADATA_PARAMS(0, nullptr) }; // 1558751829
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EasyFootstepPlugin_eventOnFootstepPlayed_Parms, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 161619406
void Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::NewProp_PlaySplash_SetBit(void* Obj)
{
	((_Script_EasyFootstepPlugin_eventOnFootstepPlayed_Parms*)Obj)->PlaySplash = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::NewProp_PlaySplash = { "PlaySplash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_EasyFootstepPlugin_eventOnFootstepPlayed_Parms), &Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::NewProp_PlaySplash_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::NewProp_FootstepComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::NewProp_FootstepType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::NewProp_FootstepType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::NewProp_SurfaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::NewProp_PlaySplash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyFootstepPlugin, nullptr, "OnFootstepPlayed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::_Script_EasyFootstepPlugin_eventOnFootstepPlayed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::_Script_EasyFootstepPlugin_eventOnFootstepPlayed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFootstepPlayed_DelegateWrapper(const FMulticastScriptDelegate& OnFootstepPlayed, UFootstepComponent* FootstepComponent, FVector Location, EFootstepType FootstepType, EPhysicalSurface SurfaceType, bool PlaySplash)
{
	struct _Script_EasyFootstepPlugin_eventOnFootstepPlayed_Parms
	{
		UFootstepComponent* FootstepComponent;
		FVector Location;
		EFootstepType FootstepType;
		TEnumAsByte<EPhysicalSurface> SurfaceType;
		bool PlaySplash;
	};
	_Script_EasyFootstepPlugin_eventOnFootstepPlayed_Parms Parms;
	Parms.FootstepComponent=FootstepComponent;
	Parms.Location=Location;
	Parms.FootstepType=FootstepType;
	Parms.SurfaceType=SurfaceType;
	Parms.PlaySplash=PlaySplash ? true : false;
	OnFootstepPlayed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFootstepPlayed

// Begin Class UFootstepComponent Function CheckAndUpdateSettings
struct Z_Construct_UFunction_UFootstepComponent_CheckAndUpdateSettings_Statics
{
	struct FootstepComponent_eventCheckAndUpdateSettings_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Default" },
		{ "Comment", "/**\n     * Checks references and footstep settings and returns true if everything set correctly.\n     * Can be overridden.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Checks references and footstep settings and returns true if everything set correctly.\nCan be overridden." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFootstepComponent_CheckAndUpdateSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FootstepComponent_eventCheckAndUpdateSettings_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepComponent_CheckAndUpdateSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FootstepComponent_eventCheckAndUpdateSettings_Parms), &Z_Construct_UFunction_UFootstepComponent_CheckAndUpdateSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepComponent_CheckAndUpdateSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_CheckAndUpdateSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_CheckAndUpdateSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepComponent_CheckAndUpdateSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepComponent, nullptr, "CheckAndUpdateSettings", nullptr, nullptr, Z_Construct_UFunction_UFootstepComponent_CheckAndUpdateSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_CheckAndUpdateSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFootstepComponent_CheckAndUpdateSettings_Statics::FootstepComponent_eventCheckAndUpdateSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_CheckAndUpdateSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFootstepComponent_CheckAndUpdateSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFootstepComponent_CheckAndUpdateSettings_Statics::FootstepComponent_eventCheckAndUpdateSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFootstepComponent_CheckAndUpdateSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFootstepComponent_CheckAndUpdateSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFootstepComponent::execCheckAndUpdateSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckAndUpdateSettings();
	P_NATIVE_END;
}
// End Class UFootstepComponent Function CheckAndUpdateSettings

// Begin Class UFootstepComponent Function CheckOverriddenSurface
struct Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics
{
	struct FootstepComponent_eventCheckOverriddenSurface_Parms
	{
		FVector Location;
		TEnumAsByte<EPhysicalSurface> SurfaceType;
		bool PlaySplash;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Default" },
		{ "Comment", "/**\n     * Check surface overrider actor in target location and get overridden surface and play splash variables.\n     * Can be overridden.\n     *\n     * @param Location           Location of the foot socket.\n     * @return                   Returns true, if foot socket exist.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Check surface overrider actor in target location and get overridden surface and play splash variables.\nCan be overridden.\n\n@param Location           Location of the foot socket.\n@return                   Returns true, if foot socket exist." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
	static void NewProp_PlaySplash_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlaySplash;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventCheckOverriddenSurface_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventCheckOverriddenSurface_Parms, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 161619406
void Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::NewProp_PlaySplash_SetBit(void* Obj)
{
	((FootstepComponent_eventCheckOverriddenSurface_Parms*)Obj)->PlaySplash = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::NewProp_PlaySplash = { "PlaySplash", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FootstepComponent_eventCheckOverriddenSurface_Parms), &Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::NewProp_PlaySplash_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FootstepComponent_eventCheckOverriddenSurface_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FootstepComponent_eventCheckOverriddenSurface_Parms), &Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::NewProp_SurfaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::NewProp_PlaySplash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepComponent, nullptr, "CheckOverriddenSurface", nullptr, nullptr, Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::FootstepComponent_eventCheckOverriddenSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::FootstepComponent_eventCheckOverriddenSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFootstepComponent::execCheckOverriddenSurface)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_SurfaceType);
	P_GET_UBOOL_REF(Z_Param_Out_PlaySplash);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckOverriddenSurface(Z_Param_Location,(TEnumAsByte<EPhysicalSurface>&)(Z_Param_Out_SurfaceType),Z_Param_Out_PlaySplash);
	P_NATIVE_END;
}
// End Class UFootstepComponent Function CheckOverriddenSurface

// Begin Class UFootstepComponent Function CheckSurface
struct Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics
{
	struct FootstepComponent_eventCheckSurface_Parms
	{
		FVector Location;
		TEnumAsByte<EPhysicalSurface> SurfaceType;
		bool PlaySplash;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Default" },
		{ "Comment", "/**\n     * Check surface in foot location and get hit location, hit surface type and play splash variables.\n     * Can be overridden.\n     *\n     * @param Location           Location of trace hit with surface.\n     * @param SurfaceType        Physical surface type of hit location. This value can be overriden with SurfaceOverrider actor.\n     * @param PlaySplash         Determines that footstep should play splash sounds and effects in this location. This value can be overriden with SurfaceOverrider actor.\n     * @return                   Returns true, if there was a hit with surface.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Check surface in foot location and get hit location, hit surface type and play splash variables.\nCan be overridden.\n\n@param Location           Location of trace hit with surface.\n@param SurfaceType        Physical surface type of hit location. This value can be overriden with SurfaceOverrider actor.\n@param PlaySplash         Determines that footstep should play splash sounds and effects in this location. This value can be overriden with SurfaceOverrider actor.\n@return                   Returns true, if there was a hit with surface." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
	static void NewProp_PlaySplash_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlaySplash;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventCheckSurface_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventCheckSurface_Parms, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 161619406
void Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::NewProp_PlaySplash_SetBit(void* Obj)
{
	((FootstepComponent_eventCheckSurface_Parms*)Obj)->PlaySplash = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::NewProp_PlaySplash = { "PlaySplash", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FootstepComponent_eventCheckSurface_Parms), &Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::NewProp_PlaySplash_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FootstepComponent_eventCheckSurface_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FootstepComponent_eventCheckSurface_Parms), &Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::NewProp_SurfaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::NewProp_PlaySplash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepComponent, nullptr, "CheckSurface", nullptr, nullptr, Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::FootstepComponent_eventCheckSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::FootstepComponent_eventCheckSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFootstepComponent_CheckSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFootstepComponent_CheckSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFootstepComponent::execCheckSurface)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_SurfaceType);
	P_GET_UBOOL_REF(Z_Param_Out_PlaySplash);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckSurface(Z_Param_Out_Location,(TEnumAsByte<EPhysicalSurface>&)(Z_Param_Out_SurfaceType),Z_Param_Out_PlaySplash);
	P_NATIVE_END;
}
// End Class UFootstepComponent Function CheckSurface

// Begin Class UFootstepComponent Function ClearOverriddenFootstepPreset
struct Z_Construct_UFunction_UFootstepComponent_ClearOverriddenFootstepPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "Comment", "/**\n     * Clear overridden preset handle and update footstep settings from the data table if default preset handle is set.\n     * Can be overridden.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Clear overridden preset handle and update footstep settings from the data table if default preset handle is set.\nCan be overridden." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepComponent_ClearOverriddenFootstepPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepComponent, nullptr, "ClearOverriddenFootstepPreset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_ClearOverriddenFootstepPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFootstepComponent_ClearOverriddenFootstepPreset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFootstepComponent_ClearOverriddenFootstepPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFootstepComponent_ClearOverriddenFootstepPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFootstepComponent::execClearOverriddenFootstepPreset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearOverriddenFootstepPreset();
	P_NATIVE_END;
}
// End Class UFootstepComponent Function ClearOverriddenFootstepPreset

// Begin Class UFootstepComponent Function FindFootstepDecalData
struct Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics
{
	struct FootstepComponent_eventFindFootstepDecalData_Parms
	{
		TMap<FName,FFootstepDecalData> TMapData;
		TEnumAsByte<EPhysicalSurface> SurfaceType;
		FFootstepDecalData OutData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Default" },
		{ "Comment", "/**\n     * Try to find decal data from footstep type data for target surface type.\n     * Can be overridden.\n     *\n     * @param TMapData              TMap decal data list from footstep type data.\n     * @param OutData               Out decal data for target surface type.\n     * @return                      Returns true, if decal data is found.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Try to find decal data from footstep type data for target surface type.\nCan be overridden.\n\n@param TMapData              TMap decal data list from footstep type data.\n@param OutData               Out decal data for target surface type.\n@return                      Returns true, if decal data is found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TMapData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TMapData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TMapData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TMapData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::NewProp_TMapData_ValueProp = { "TMapData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFootstepDecalData, METADATA_PARAMS(0, nullptr) }; // 2930357908
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::NewProp_TMapData_Key_KeyProp = { "TMapData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::NewProp_TMapData = { "TMapData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventFindFootstepDecalData_Parms, TMapData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TMapData_MetaData), NewProp_TMapData_MetaData) }; // 2930357908
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventFindFootstepDecalData_Parms, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceType_MetaData), NewProp_SurfaceType_MetaData) }; // 161619406
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventFindFootstepDecalData_Parms, OutData), Z_Construct_UScriptStruct_FFootstepDecalData, METADATA_PARAMS(0, nullptr) }; // 2930357908
void Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FootstepComponent_eventFindFootstepDecalData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FootstepComponent_eventFindFootstepDecalData_Parms), &Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::NewProp_TMapData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::NewProp_TMapData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::NewProp_TMapData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::NewProp_SurfaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::NewProp_OutData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepComponent, nullptr, "FindFootstepDecalData", nullptr, nullptr, Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::FootstepComponent_eventFindFootstepDecalData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::FootstepComponent_eventFindFootstepDecalData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFootstepComponent::execFindFootstepDecalData)
{
	P_GET_TMAP(FName,FFootstepDecalData,Z_Param_TMapData);
	P_GET_PROPERTY(FByteProperty,Z_Param_SurfaceType);
	P_GET_STRUCT_REF(FFootstepDecalData,Z_Param_Out_OutData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FindFootstepDecalData(Z_Param_TMapData,EPhysicalSurface(Z_Param_SurfaceType),Z_Param_Out_OutData);
	P_NATIVE_END;
}
// End Class UFootstepComponent Function FindFootstepDecalData

// Begin Class UFootstepComponent Function FindFootstepEffectData
struct Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics
{
	struct FootstepComponent_eventFindFootstepEffectData_Parms
	{
		TMap<FName,FFootstepEffectData> TMapData;
		TEnumAsByte<EPhysicalSurface> SurfaceType;
		FFootstepEffectData OutData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Default" },
		{ "Comment", "/**\n     * Try to find effect data from footstep type data for target surface type.\n     * Can be overridden.\n     *\n     * @param TMapData              TMap effects data list from footstep type data.\n     * @param OutData               Out effect data for target surface type.\n     * @return                      Returns true, if effect data is found.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Try to find effect data from footstep type data for target surface type.\nCan be overridden.\n\n@param TMapData              TMap effects data list from footstep type data.\n@param OutData               Out effect data for target surface type.\n@return                      Returns true, if effect data is found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TMapData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TMapData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TMapData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TMapData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::NewProp_TMapData_ValueProp = { "TMapData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFootstepEffectData, METADATA_PARAMS(0, nullptr) }; // 4016136629
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::NewProp_TMapData_Key_KeyProp = { "TMapData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::NewProp_TMapData = { "TMapData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventFindFootstepEffectData_Parms, TMapData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TMapData_MetaData), NewProp_TMapData_MetaData) }; // 4016136629
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventFindFootstepEffectData_Parms, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceType_MetaData), NewProp_SurfaceType_MetaData) }; // 161619406
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventFindFootstepEffectData_Parms, OutData), Z_Construct_UScriptStruct_FFootstepEffectData, METADATA_PARAMS(0, nullptr) }; // 4016136629
void Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FootstepComponent_eventFindFootstepEffectData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FootstepComponent_eventFindFootstepEffectData_Parms), &Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::NewProp_TMapData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::NewProp_TMapData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::NewProp_TMapData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::NewProp_SurfaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::NewProp_OutData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepComponent, nullptr, "FindFootstepEffectData", nullptr, nullptr, Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::FootstepComponent_eventFindFootstepEffectData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::FootstepComponent_eventFindFootstepEffectData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFootstepComponent::execFindFootstepEffectData)
{
	P_GET_TMAP(FName,FFootstepEffectData,Z_Param_TMapData);
	P_GET_PROPERTY(FByteProperty,Z_Param_SurfaceType);
	P_GET_STRUCT_REF(FFootstepEffectData,Z_Param_Out_OutData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FindFootstepEffectData(Z_Param_TMapData,EPhysicalSurface(Z_Param_SurfaceType),Z_Param_Out_OutData);
	P_NATIVE_END;
}
// End Class UFootstepComponent Function FindFootstepEffectData

// Begin Class UFootstepComponent Function FindFootstepSoundData
struct Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics
{
	struct FootstepComponent_eventFindFootstepSoundData_Parms
	{
		TMap<FName,FFootstepSoundData> TMapData;
		TEnumAsByte<EPhysicalSurface> SurfaceType;
		FFootstepSoundData OutData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Default" },
		{ "Comment", "/**\n     * Try to find sound data from footstep type data for target surface type.\n     * Can be overridden.\n     *\n     * @param TMapData              TMap sounds data list from footstep type data.\n     * @param OutData               Out sound data for target surface type.\n     * @return                      Returns true, if sound data is found.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Try to find sound data from footstep type data for target surface type.\nCan be overridden.\n\n@param TMapData              TMap sounds data list from footstep type data.\n@param OutData               Out sound data for target surface type.\n@return                      Returns true, if sound data is found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TMapData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TMapData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TMapData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TMapData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::NewProp_TMapData_ValueProp = { "TMapData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFootstepSoundData, METADATA_PARAMS(0, nullptr) }; // 3584930406
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::NewProp_TMapData_Key_KeyProp = { "TMapData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::NewProp_TMapData = { "TMapData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventFindFootstepSoundData_Parms, TMapData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TMapData_MetaData), NewProp_TMapData_MetaData) }; // 3584930406
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventFindFootstepSoundData_Parms, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceType_MetaData), NewProp_SurfaceType_MetaData) }; // 161619406
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventFindFootstepSoundData_Parms, OutData), Z_Construct_UScriptStruct_FFootstepSoundData, METADATA_PARAMS(0, nullptr) }; // 3584930406
void Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FootstepComponent_eventFindFootstepSoundData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FootstepComponent_eventFindFootstepSoundData_Parms), &Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::NewProp_TMapData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::NewProp_TMapData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::NewProp_TMapData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::NewProp_SurfaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::NewProp_OutData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepComponent, nullptr, "FindFootstepSoundData", nullptr, nullptr, Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::FootstepComponent_eventFindFootstepSoundData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::FootstepComponent_eventFindFootstepSoundData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFootstepComponent::execFindFootstepSoundData)
{
	P_GET_TMAP(FName,FFootstepSoundData,Z_Param_TMapData);
	P_GET_PROPERTY(FByteProperty,Z_Param_SurfaceType);
	P_GET_STRUCT_REF(FFootstepSoundData,Z_Param_Out_OutData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FindFootstepSoundData(Z_Param_TMapData,EPhysicalSurface(Z_Param_SurfaceType),Z_Param_Out_OutData);
	P_NATIVE_END;
}
// End Class UFootstepComponent Function FindFootstepSoundData

// Begin Class UFootstepComponent Function FindFootstepTypeData
struct Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics
{
	struct FootstepComponent_eventFindFootstepTypeData_Parms
	{
		EFootstepType FootstepType;
		FFootstepTypeData OutFootstepTypeData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Default" },
		{ "Comment", "/**\n     * Try to find footstep type data from footstep settings depending on footstep type.\n     * Can be overridden.\n     *\n     * @param FootstepType          Type of footstep.\n     * @param OutFootstepTypeData   Out footstep type data for target footstep type.\n     * @return                      Returns true, if footstep type data is found.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Try to find footstep type data from footstep settings depending on footstep type.\nCan be overridden.\n\n@param FootstepType          Type of footstep.\n@param OutFootstepTypeData   Out footstep type data for target footstep type.\n@return                      Returns true, if footstep type data is found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FootstepType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FootstepType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutFootstepTypeData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics::NewProp_FootstepType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics::NewProp_FootstepType = { "FootstepType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventFindFootstepTypeData_Parms, FootstepType), Z_Construct_UEnum_EasyFootstepPlugin_EFootstepType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepType_MetaData), NewProp_FootstepType_MetaData) }; // 1558751829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics::NewProp_OutFootstepTypeData = { "OutFootstepTypeData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventFindFootstepTypeData_Parms, OutFootstepTypeData), Z_Construct_UScriptStruct_FFootstepTypeData, METADATA_PARAMS(0, nullptr) }; // 2492901907
void Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FootstepComponent_eventFindFootstepTypeData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FootstepComponent_eventFindFootstepTypeData_Parms), &Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics::NewProp_FootstepType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics::NewProp_FootstepType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics::NewProp_OutFootstepTypeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepComponent, nullptr, "FindFootstepTypeData", nullptr, nullptr, Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics::FootstepComponent_eventFindFootstepTypeData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics::FootstepComponent_eventFindFootstepTypeData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFootstepComponent::execFindFootstepTypeData)
{
	P_GET_ENUM(EFootstepType,Z_Param_FootstepType);
	P_GET_STRUCT_REF(FFootstepTypeData,Z_Param_Out_OutFootstepTypeData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FindFootstepTypeData(EFootstepType(Z_Param_FootstepType),Z_Param_Out_OutFootstepTypeData);
	P_NATIVE_END;
}
// End Class UFootstepComponent Function FindFootstepTypeData

// Begin Class UFootstepComponent Function GetBoneIKVariables
struct Z_Construct_UFunction_UFootstepComponent_GetBoneIKVariables_Statics
{
	struct FootstepComponent_eventGetBoneIKVariables_Parms
	{
		float BoneTranslation;
		FRotator BoneRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IK" },
		{ "Comment", "/**\n     * Returns the translation and rotation IK variables.\n     * Can be overridden.\n     *\n     * @param BoneTranslation       Current IK bone translation variable.\n     * @param BoneRotation          Current IK bone rotation variable.\n     */" },
		{ "DisplayName", "Get Bone IK Variables" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Returns the translation and rotation IK variables.\nCan be overridden.\n\n@param BoneTranslation       Current IK bone translation variable.\n@param BoneRotation          Current IK bone rotation variable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoneTranslation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFootstepComponent_GetBoneIKVariables_Statics::NewProp_BoneTranslation = { "BoneTranslation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventGetBoneIKVariables_Parms, BoneTranslation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepComponent_GetBoneIKVariables_Statics::NewProp_BoneRotation = { "BoneRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventGetBoneIKVariables_Parms, BoneRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepComponent_GetBoneIKVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_GetBoneIKVariables_Statics::NewProp_BoneTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_GetBoneIKVariables_Statics::NewProp_BoneRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_GetBoneIKVariables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepComponent_GetBoneIKVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepComponent, nullptr, "GetBoneIKVariables", nullptr, nullptr, Z_Construct_UFunction_UFootstepComponent_GetBoneIKVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_GetBoneIKVariables_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFootstepComponent_GetBoneIKVariables_Statics::FootstepComponent_eventGetBoneIKVariables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_GetBoneIKVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFootstepComponent_GetBoneIKVariables_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFootstepComponent_GetBoneIKVariables_Statics::FootstepComponent_eventGetBoneIKVariables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFootstepComponent_GetBoneIKVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFootstepComponent_GetBoneIKVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFootstepComponent::execGetBoneIKVariables)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_BoneTranslation);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_BoneRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetBoneIKVariables(Z_Param_Out_BoneTranslation,Z_Param_Out_BoneRotation);
	P_NATIVE_END;
}
// End Class UFootstepComponent Function GetBoneIKVariables

// Begin Class UFootstepComponent Function GetFootLocation
struct Z_Construct_UFunction_UFootstepComponent_GetFootLocation_Statics
{
	struct FootstepComponent_eventGetFootLocation_Parms
	{
		FVector FootLocation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Default" },
		{ "Comment", "/**\n     * Get foot location if foot socket exist.\n     * Can be overridden.\n     *\n     * @param FootLocation       Location of the foot socket.\n     * @return                   Returns true, if foot socket exist.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Get foot location if foot socket exist.\nCan be overridden.\n\n@param FootLocation       Location of the foot socket.\n@return                   Returns true, if foot socket exist." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepComponent_GetFootLocation_Statics::NewProp_FootLocation = { "FootLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventGetFootLocation_Parms, FootLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFootstepComponent_GetFootLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FootstepComponent_eventGetFootLocation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepComponent_GetFootLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FootstepComponent_eventGetFootLocation_Parms), &Z_Construct_UFunction_UFootstepComponent_GetFootLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepComponent_GetFootLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_GetFootLocation_Statics::NewProp_FootLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_GetFootLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_GetFootLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepComponent_GetFootLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepComponent, nullptr, "GetFootLocation", nullptr, nullptr, Z_Construct_UFunction_UFootstepComponent_GetFootLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_GetFootLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFootstepComponent_GetFootLocation_Statics::FootstepComponent_eventGetFootLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_GetFootLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFootstepComponent_GetFootLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFootstepComponent_GetFootLocation_Statics::FootstepComponent_eventGetFootLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFootstepComponent_GetFootLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFootstepComponent_GetFootLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFootstepComponent::execGetFootLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_FootLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetFootLocation(Z_Param_Out_FootLocation);
	P_NATIVE_END;
}
// End Class UFootstepComponent Function GetFootLocation

// Begin Class UFootstepComponent Function GetTwoLegsPelvisBoneTranslation
struct Z_Construct_UFunction_UFootstepComponent_GetTwoLegsPelvisBoneTranslation_Statics
{
	struct FootstepComponent_eventGetTwoLegsPelvisBoneTranslation_Parms
	{
		UFootstepComponent* RightFootstepComponent;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IK" },
		{ "Comment", "/**\n     * Returns the translation of the pelvis bone for a character with two legs.\n     * Can be overridden.\n     *\n     * @param RightFootstepComponent    Footstep component for the right leg.\n     * @return  Pelvis bone translation value.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Returns the translation of the pelvis bone for a character with two legs.\nCan be overridden.\n\n@param RightFootstepComponent    Footstep component for the right leg.\n@return  Pelvis bone translation value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightFootstepComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightFootstepComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFootstepComponent_GetTwoLegsPelvisBoneTranslation_Statics::NewProp_RightFootstepComponent = { "RightFootstepComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventGetTwoLegsPelvisBoneTranslation_Parms, RightFootstepComponent), Z_Construct_UClass_UFootstepComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightFootstepComponent_MetaData), NewProp_RightFootstepComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFootstepComponent_GetTwoLegsPelvisBoneTranslation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventGetTwoLegsPelvisBoneTranslation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepComponent_GetTwoLegsPelvisBoneTranslation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_GetTwoLegsPelvisBoneTranslation_Statics::NewProp_RightFootstepComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_GetTwoLegsPelvisBoneTranslation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_GetTwoLegsPelvisBoneTranslation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepComponent_GetTwoLegsPelvisBoneTranslation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepComponent, nullptr, "GetTwoLegsPelvisBoneTranslation", nullptr, nullptr, Z_Construct_UFunction_UFootstepComponent_GetTwoLegsPelvisBoneTranslation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_GetTwoLegsPelvisBoneTranslation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFootstepComponent_GetTwoLegsPelvisBoneTranslation_Statics::FootstepComponent_eventGetTwoLegsPelvisBoneTranslation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_GetTwoLegsPelvisBoneTranslation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFootstepComponent_GetTwoLegsPelvisBoneTranslation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFootstepComponent_GetTwoLegsPelvisBoneTranslation_Statics::FootstepComponent_eventGetTwoLegsPelvisBoneTranslation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFootstepComponent_GetTwoLegsPelvisBoneTranslation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFootstepComponent_GetTwoLegsPelvisBoneTranslation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFootstepComponent::execGetTwoLegsPelvisBoneTranslation)
{
	P_GET_OBJECT(UFootstepComponent,Z_Param_RightFootstepComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTwoLegsPelvisBoneTranslation(Z_Param_RightFootstepComponent);
	P_NATIVE_END;
}
// End Class UFootstepComponent Function GetTwoLegsPelvisBoneTranslation

// Begin Class UFootstepComponent Function PlayFootstepSounds
struct Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics
{
	struct FootstepComponent_eventPlayFootstepSounds_Parms
	{
		FVector Location;
		FFootstepTypeData FootstepTypeData;
		TEnumAsByte<EPhysicalSurface> SurfaceType;
		bool PlaySplash;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Default" },
		{ "Comment", "/**\n     * Try to play footstep sound at location.\n     * Can be overridden.\n     *\n     * @param Location              Location that sound should be played.\n     * @param FootstepTypeData      Footstep type data for different surfaces.\n     * @param SurfaceType           Surface type for getting sounds from footstep type data.\n     * @param PlaySplash            Determines that splash sound should be played.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Try to play footstep sound at location.\nCan be overridden.\n\n@param Location              Location that sound should be played.\n@param FootstepTypeData      Footstep type data for different surfaces.\n@param SurfaceType           Surface type for getting sounds from footstep type data.\n@param PlaySplash            Determines that splash sound should be played." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepTypeData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaySplash_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootstepTypeData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
	static void NewProp_PlaySplash_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlaySplash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventPlayFootstepSounds_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics::NewProp_FootstepTypeData = { "FootstepTypeData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventPlayFootstepSounds_Parms, FootstepTypeData), Z_Construct_UScriptStruct_FFootstepTypeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepTypeData_MetaData), NewProp_FootstepTypeData_MetaData) }; // 2492901907
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventPlayFootstepSounds_Parms, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceType_MetaData), NewProp_SurfaceType_MetaData) }; // 161619406
void Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics::NewProp_PlaySplash_SetBit(void* Obj)
{
	((FootstepComponent_eventPlayFootstepSounds_Parms*)Obj)->PlaySplash = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics::NewProp_PlaySplash = { "PlaySplash", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FootstepComponent_eventPlayFootstepSounds_Parms), &Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics::NewProp_PlaySplash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaySplash_MetaData), NewProp_PlaySplash_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics::NewProp_FootstepTypeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics::NewProp_SurfaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics::NewProp_PlaySplash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepComponent, nullptr, "PlayFootstepSounds", nullptr, nullptr, Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics::FootstepComponent_eventPlayFootstepSounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics::FootstepComponent_eventPlayFootstepSounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFootstepComponent::execPlayFootstepSounds)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FFootstepTypeData,Z_Param_FootstepTypeData);
	P_GET_PROPERTY(FByteProperty,Z_Param_SurfaceType);
	P_GET_UBOOL(Z_Param_PlaySplash);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayFootstepSounds(Z_Param_Location,Z_Param_FootstepTypeData,EPhysicalSurface(Z_Param_SurfaceType),Z_Param_PlaySplash);
	P_NATIVE_END;
}
// End Class UFootstepComponent Function PlayFootstepSounds

// Begin Class UFootstepComponent Function SetOverriddenFootstepPreset
struct Z_Construct_UFunction_UFootstepComponent_SetOverriddenFootstepPreset_Statics
{
	struct FootstepComponent_eventSetOverriddenFootstepPreset_Parms
	{
		FDataTableRowHandle NewHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "Comment", "/**\n     * Override footstep preset handle and update footstep settings from the data table.\n     * Can be overridden.\n     *\n     * @param NewHandle    New footstep preset handle.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Override footstep preset handle and update footstep settings from the data table.\nCan be overridden.\n\n@param NewHandle    New footstep preset handle." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepComponent_SetOverriddenFootstepPreset_Statics::NewProp_NewHandle = { "NewHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventSetOverriddenFootstepPreset_Parms, NewHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(0, nullptr) }; // 1360917958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepComponent_SetOverriddenFootstepPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_SetOverriddenFootstepPreset_Statics::NewProp_NewHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_SetOverriddenFootstepPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepComponent_SetOverriddenFootstepPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepComponent, nullptr, "SetOverriddenFootstepPreset", nullptr, nullptr, Z_Construct_UFunction_UFootstepComponent_SetOverriddenFootstepPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_SetOverriddenFootstepPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFootstepComponent_SetOverriddenFootstepPreset_Statics::FootstepComponent_eventSetOverriddenFootstepPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_SetOverriddenFootstepPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFootstepComponent_SetOverriddenFootstepPreset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFootstepComponent_SetOverriddenFootstepPreset_Statics::FootstepComponent_eventSetOverriddenFootstepPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFootstepComponent_SetOverriddenFootstepPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFootstepComponent_SetOverriddenFootstepPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFootstepComponent::execSetOverriddenFootstepPreset)
{
	P_GET_STRUCT(FDataTableRowHandle,Z_Param_NewHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverriddenFootstepPreset(Z_Param_NewHandle);
	P_NATIVE_END;
}
// End Class UFootstepComponent Function SetOverriddenFootstepPreset

// Begin Class UFootstepComponent Function SpawnFootstepEffects
struct Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics
{
	struct FootstepComponent_eventSpawnFootstepEffects_Parms
	{
		FVector Location;
		FFootstepTypeData FootstepTypeData;
		TEnumAsByte<EPhysicalSurface> SurfaceType;
		bool PlaySplash;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Default" },
		{ "Comment", "/**\n     * Try to spawn footstep effects and decals at location.\n     * Can be overridden.\n     *\n     * @param Location              Location that effects should be spawned.\n     * @param FootstepTypeData      Footstep type data for different surfaces.\n     * @param SurfaceType           Surface type for getting effects from footstep type data.\n     * @param PlaySplash            Determines that splash effects should be spawned.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Try to spawn footstep effects and decals at location.\nCan be overridden.\n\n@param Location              Location that effects should be spawned.\n@param FootstepTypeData      Footstep type data for different surfaces.\n@param SurfaceType           Surface type for getting effects from footstep type data.\n@param PlaySplash            Determines that splash effects should be spawned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepTypeData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaySplash_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootstepTypeData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
	static void NewProp_PlaySplash_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlaySplash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventSpawnFootstepEffects_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics::NewProp_FootstepTypeData = { "FootstepTypeData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventSpawnFootstepEffects_Parms, FootstepTypeData), Z_Construct_UScriptStruct_FFootstepTypeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepTypeData_MetaData), NewProp_FootstepTypeData_MetaData) }; // 2492901907
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventSpawnFootstepEffects_Parms, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceType_MetaData), NewProp_SurfaceType_MetaData) }; // 161619406
void Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics::NewProp_PlaySplash_SetBit(void* Obj)
{
	((FootstepComponent_eventSpawnFootstepEffects_Parms*)Obj)->PlaySplash = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics::NewProp_PlaySplash = { "PlaySplash", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FootstepComponent_eventSpawnFootstepEffects_Parms), &Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics::NewProp_PlaySplash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaySplash_MetaData), NewProp_PlaySplash_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics::NewProp_FootstepTypeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics::NewProp_SurfaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics::NewProp_PlaySplash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepComponent, nullptr, "SpawnFootstepEffects", nullptr, nullptr, Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics::FootstepComponent_eventSpawnFootstepEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics::FootstepComponent_eventSpawnFootstepEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFootstepComponent::execSpawnFootstepEffects)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FFootstepTypeData,Z_Param_FootstepTypeData);
	P_GET_PROPERTY(FByteProperty,Z_Param_SurfaceType);
	P_GET_UBOOL(Z_Param_PlaySplash);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnFootstepEffects(Z_Param_Location,Z_Param_FootstepTypeData,EPhysicalSurface(Z_Param_SurfaceType),Z_Param_PlaySplash);
	P_NATIVE_END;
}
// End Class UFootstepComponent Function SpawnFootstepEffects

// Begin Class UFootstepComponent Function TryToPlayFootstep
struct Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics
{
	struct FootstepComponent_eventTryToPlayFootstep_Parms
	{
		FName InFootSocket;
		EFootstepType FootstepType;
		bool PlaySounds;
		bool SpawnEffects;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "Comment", "/**\n     * Try to play footstep sounds and effects for a foot with target settings.\n     * Can be overridden.\n     *\n     * @param InFootSocket      Bone or socket name of target foot.\n     * @param FootstepType      Type of footstep.\n     * @param PlaySounds        Determines if the footstep sounds should be played.\n     * @param SpawnEffects      Determines if the footstep effects should be spawned.\n     * @return                  Returns true if footstep has been played successfully.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Try to play footstep sounds and effects for a foot with target settings.\nCan be overridden.\n\n@param InFootSocket      Bone or socket name of target foot.\n@param FootstepType      Type of footstep.\n@param PlaySounds        Determines if the footstep sounds should be played.\n@param SpawnEffects      Determines if the footstep effects should be spawned.\n@return                  Returns true if footstep has been played successfully." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFootSocket_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaySounds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnEffects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InFootSocket;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FootstepType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FootstepType;
	static void NewProp_PlaySounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlaySounds;
	static void NewProp_SpawnEffects_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnEffects;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::NewProp_InFootSocket = { "InFootSocket", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventTryToPlayFootstep_Parms, InFootSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFootSocket_MetaData), NewProp_InFootSocket_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::NewProp_FootstepType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::NewProp_FootstepType = { "FootstepType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventTryToPlayFootstep_Parms, FootstepType), Z_Construct_UEnum_EasyFootstepPlugin_EFootstepType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepType_MetaData), NewProp_FootstepType_MetaData) }; // 1558751829
void Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::NewProp_PlaySounds_SetBit(void* Obj)
{
	((FootstepComponent_eventTryToPlayFootstep_Parms*)Obj)->PlaySounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::NewProp_PlaySounds = { "PlaySounds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FootstepComponent_eventTryToPlayFootstep_Parms), &Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::NewProp_PlaySounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaySounds_MetaData), NewProp_PlaySounds_MetaData) };
void Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::NewProp_SpawnEffects_SetBit(void* Obj)
{
	((FootstepComponent_eventTryToPlayFootstep_Parms*)Obj)->SpawnEffects = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::NewProp_SpawnEffects = { "SpawnEffects", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FootstepComponent_eventTryToPlayFootstep_Parms), &Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::NewProp_SpawnEffects_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnEffects_MetaData), NewProp_SpawnEffects_MetaData) };
void Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FootstepComponent_eventTryToPlayFootstep_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FootstepComponent_eventTryToPlayFootstep_Parms), &Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::NewProp_InFootSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::NewProp_FootstepType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::NewProp_FootstepType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::NewProp_PlaySounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::NewProp_SpawnEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepComponent, nullptr, "TryToPlayFootstep", nullptr, nullptr, Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::FootstepComponent_eventTryToPlayFootstep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::FootstepComponent_eventTryToPlayFootstep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFootstepComponent::execTryToPlayFootstep)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InFootSocket);
	P_GET_ENUM(EFootstepType,Z_Param_FootstepType);
	P_GET_UBOOL(Z_Param_PlaySounds);
	P_GET_UBOOL(Z_Param_SpawnEffects);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryToPlayFootstep(Z_Param_InFootSocket,EFootstepType(Z_Param_FootstepType),Z_Param_PlaySounds,Z_Param_SpawnEffects);
	P_NATIVE_END;
}
// End Class UFootstepComponent Function TryToPlayFootstep

// Begin Class UFootstepComponent Function UpdateFootIK
struct Z_Construct_UFunction_UFootstepComponent_UpdateFootIK_Statics
{
	struct FootstepComponent_eventUpdateFootIK_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Default" },
		{ "Comment", "/**\n     * Calculate and update IK bone variables.\n     * Can be overridden.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Calculate and update IK bone variables.\nCan be overridden." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFootstepComponent_UpdateFootIK_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventUpdateFootIK_Parms, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepComponent_UpdateFootIK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_UpdateFootIK_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_UpdateFootIK_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepComponent_UpdateFootIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepComponent, nullptr, "UpdateFootIK", nullptr, nullptr, Z_Construct_UFunction_UFootstepComponent_UpdateFootIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_UpdateFootIK_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFootstepComponent_UpdateFootIK_Statics::FootstepComponent_eventUpdateFootIK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_UpdateFootIK_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFootstepComponent_UpdateFootIK_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFootstepComponent_UpdateFootIK_Statics::FootstepComponent_eventUpdateFootIK_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFootstepComponent_UpdateFootIK()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFootstepComponent_UpdateFootIK_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFootstepComponent::execUpdateFootIK)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateFootIK(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UFootstepComponent Function UpdateFootIK

// Begin Class UFootstepComponent Function UpdateFootstepSettingsByHandle
struct Z_Construct_UFunction_UFootstepComponent_UpdateFootstepSettingsByHandle_Statics
{
	struct FootstepComponent_eventUpdateFootstepSettingsByHandle_Parms
	{
		FDataTableRowHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Default" },
		{ "Comment", "/**\n     * Update footstep settings by target preset handle from data table.\n     *\n     * @param Handle                Target footstep preset data table row handle.\n     * @return                      Returns true, if settings were loaded correctly.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Update footstep settings by target preset handle from data table.\n\n@param Handle                Target footstep preset data table row handle.\n@return                      Returns true, if settings were loaded correctly." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepComponent_UpdateFootstepSettingsByHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FootstepComponent_eventUpdateFootstepSettingsByHandle_Parms, Handle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(0, nullptr) }; // 1360917958
void Z_Construct_UFunction_UFootstepComponent_UpdateFootstepSettingsByHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FootstepComponent_eventUpdateFootstepSettingsByHandle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepComponent_UpdateFootstepSettingsByHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FootstepComponent_eventUpdateFootstepSettingsByHandle_Parms), &Z_Construct_UFunction_UFootstepComponent_UpdateFootstepSettingsByHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepComponent_UpdateFootstepSettingsByHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_UpdateFootstepSettingsByHandle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_UpdateFootstepSettingsByHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_UpdateFootstepSettingsByHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepComponent_UpdateFootstepSettingsByHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepComponent, nullptr, "UpdateFootstepSettingsByHandle", nullptr, nullptr, Z_Construct_UFunction_UFootstepComponent_UpdateFootstepSettingsByHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_UpdateFootstepSettingsByHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFootstepComponent_UpdateFootstepSettingsByHandle_Statics::FootstepComponent_eventUpdateFootstepSettingsByHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_UpdateFootstepSettingsByHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFootstepComponent_UpdateFootstepSettingsByHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFootstepComponent_UpdateFootstepSettingsByHandle_Statics::FootstepComponent_eventUpdateFootstepSettingsByHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFootstepComponent_UpdateFootstepSettingsByHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFootstepComponent_UpdateFootstepSettingsByHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFootstepComponent::execUpdateFootstepSettingsByHandle)
{
	P_GET_STRUCT(FDataTableRowHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UpdateFootstepSettingsByHandle(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class UFootstepComponent Function UpdateFootstepSettingsByHandle

// Begin Class UFootstepComponent
void UFootstepComponent::StaticRegisterNativesUFootstepComponent()
{
	UClass* Class = UFootstepComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckAndUpdateSettings", &UFootstepComponent::execCheckAndUpdateSettings },
		{ "CheckOverriddenSurface", &UFootstepComponent::execCheckOverriddenSurface },
		{ "CheckSurface", &UFootstepComponent::execCheckSurface },
		{ "ClearOverriddenFootstepPreset", &UFootstepComponent::execClearOverriddenFootstepPreset },
		{ "FindFootstepDecalData", &UFootstepComponent::execFindFootstepDecalData },
		{ "FindFootstepEffectData", &UFootstepComponent::execFindFootstepEffectData },
		{ "FindFootstepSoundData", &UFootstepComponent::execFindFootstepSoundData },
		{ "FindFootstepTypeData", &UFootstepComponent::execFindFootstepTypeData },
		{ "GetBoneIKVariables", &UFootstepComponent::execGetBoneIKVariables },
		{ "GetFootLocation", &UFootstepComponent::execGetFootLocation },
		{ "GetTwoLegsPelvisBoneTranslation", &UFootstepComponent::execGetTwoLegsPelvisBoneTranslation },
		{ "PlayFootstepSounds", &UFootstepComponent::execPlayFootstepSounds },
		{ "SetOverriddenFootstepPreset", &UFootstepComponent::execSetOverriddenFootstepPreset },
		{ "SpawnFootstepEffects", &UFootstepComponent::execSpawnFootstepEffects },
		{ "TryToPlayFootstep", &UFootstepComponent::execTryToPlayFootstep },
		{ "UpdateFootIK", &UFootstepComponent::execUpdateFootIK },
		{ "UpdateFootstepSettingsByHandle", &UFootstepComponent::execUpdateFootstepSettingsByHandle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFootstepComponent);
UClass* Z_Construct_UClass_UFootstepComponent_NoRegister()
{
	return UFootstepComponent::StaticClass();
}
struct Z_Construct_UClass_UFootstepComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Footstep component class.\n * Allows to play different sounds and spawn different effects depending on footstep type and surface type when character move.\n * The Footstep settings can be set in the footstep preset data tables and can be loaded from it.\n * The footstep logic can be called with FootstepNotify from animations.\n */" },
		{ "DisplayName", "Footstep Component" },
		{ "IncludePath", "Components/FootstepComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Footstep component class.\nAllows to play different sounds and spawn different effects depending on footstep type and surface type when character move.\nThe Footstep settings can be set in the footstep preset data tables and can be loaded from it.\nThe footstep logic can be called with FootstepNotify from animations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetHandle_MetaData[] = {
		{ "Category", "Settings|Footsteps" },
		{ "Comment", "/**\n     * Footstep settings preset handle.\n     * Can load footstep settings from footstep preset data table.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Footstep settings preset handle.\nCan load footstep settings from footstep preset data table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootSocket_MetaData[] = {
		{ "Category", "Settings|Footsteps" },
		{ "Comment", "/**\n     * Bone or socket name of the foot for which footstep will be played.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Bone or socket name of the foot for which footstep will be played." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceCheckStartOffset_MetaData[] = {
		{ "Category", "Settings|Footsteps" },
		{ "Comment", "/**\n     * Upper Z offset from FootSocket using in the check surface trace function.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Upper Z offset from FootSocket using in the check surface trace function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceCheckEndOffset_MetaData[] = {
		{ "Category", "Settings|Footsteps" },
		{ "Comment", "/**\n     * Lower Z offset from FootSocket using in the check surface trace function.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Lower Z offset from FootSocket using in the check surface trace function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterCheckStartOffset_MetaData[] = {
		{ "Category", "Settings|Footsteps" },
		{ "Comment", "/**\n     * Upper Z offset from FootSocket using in the check water trace function.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Upper Z offset from FootSocket using in the check water trace function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterCheckEndOffset_MetaData[] = {
		{ "Category", "Settings|Footsteps" },
		{ "Comment", "/**\n     * Lower Z offset from FootSocket using in the check water trace function.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Lower Z offset from FootSocket using in the check water trace function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepData_MetaData[] = {
		{ "Category", "Settings|Footsteps" },
		{ "Comment", "/**\n     * List of footstep type settings configured for different footstep types.\n     *\n     * Presets data table info:\n     * If type is Default then it will be used for each footstep type which is not set.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "List of footstep type settings configured for different footstep types.\n\nPresets data table info:\nIf type is Default then it will be used for each footstep type which is not set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IK_Enabled_MetaData[] = {
		{ "Category", "Settings|IK" },
		{ "Comment", "/**\n     * Enables simple IK calculations for the foot.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Enables simple IK calculations for the foot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IK_FootSocket_MetaData[] = {
		{ "Category", "Settings|IK" },
		{ "Comment", "/**\n     * Bone or socket name of the foot for which the IK variables should be calculated.\n     */" },
		{ "EditCondition", "IK_Enabled" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Bone or socket name of the foot for which the IK variables should be calculated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IK_TraceStartOffset_MetaData[] = {
		{ "Category", "Settings|IK" },
		{ "Comment", "/**\n     * Upper Z offset from IK_FootSocket using in the simple IK calculations.\n     */" },
		{ "EditCondition", "IK_Enabled" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Upper Z offset from IK_FootSocket using in the simple IK calculations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IK_TraceEndOffset_MetaData[] = {
		{ "Category", "Settings|IK" },
		{ "Comment", "/**\n     * Lower Z offset from IK_FootSocket using in the simple IK calculations.\n     */" },
		{ "EditCondition", "IK_Enabled" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Lower Z offset from IK_FootSocket using in the simple IK calculations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IK_BoneRotationInterpSpeed_MetaData[] = {
		{ "Category", "Settings|IK" },
		{ "Comment", "/**\n     * The speed of interpolation for current IK bone rotation variable.\n     */" },
		{ "EditCondition", "IK_Enabled" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "The speed of interpolation for current IK bone rotation variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IK_BoneTranslationInterpSpeed_MetaData[] = {
		{ "Category", "Settings|IK" },
		{ "Comment", "/**\n     * The speed of interpolation for current IK bone translation variable.\n     */" },
		{ "EditCondition", "IK_Enabled" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "The speed of interpolation for current IK bone translation variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugMode_MetaData[] = {
		{ "Category", "Settings|Debug" },
		{ "Comment", "/**\n     * Enables debug mode for footstep component.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Enables debug mode for footstep component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugIK_MetaData[] = {
		{ "Category", "Settings|Debug" },
		{ "Comment", "/**\n     * Enables debug mode for IK calculations of footstep component.\n     */" },
		{ "EditCondition", "DebugMode" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Enables debug mode for IK calculations of footstep component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugTraceTime_MetaData[] = {
		{ "Category", "Settings|Debug" },
		{ "Comment", "/**\n     * The lifetime of debug traces.\n     */" },
		{ "EditCondition", "DebugMode" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "The lifetime of debug traces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFootstepPlayed_MetaData[] = {
		{ "Comment", "/**\n     * The event that is called when the footstep has been played successfully.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "The event that is called when the footstep has been played successfully." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "Category", "State|References" },
		{ "Comment", "/**\n     * Reference to component owner character.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Reference to component owner character." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterSkeletalMesh_MetaData[] = {
		{ "Category", "State|References" },
		{ "Comment", "/**\n     * Reference to skeletal mesh component of the character.\n     */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Reference to skeletal mesh component of the character." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsAreCorrect_MetaData[] = {
		{ "Category", "State|Footsteps" },
		{ "Comment", "/**\n     * Indicator that a footstep component has correct settings.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Indicator that a footstep component has correct settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverriddenPresetHandle_MetaData[] = {
		{ "Category", "State|Footsteps" },
		{ "Comment", "/**\n     * Overridden footstep preset handle.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Overridden footstep preset handle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IK_BoneTargetRotation_MetaData[] = {
		{ "Category", "State|IK" },
		{ "Comment", "/**\n     * Target IK bone rotation variable.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Target IK bone rotation variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IK_BoneCurrentRotation_MetaData[] = {
		{ "Category", "State|IK" },
		{ "Comment", "/**\n     * Current IK bone rotation variable.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Current IK bone rotation variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IK_BoneTargetTranslation_MetaData[] = {
		{ "Category", "State|IK" },
		{ "Comment", "/**\n     * Target IK bone translation variable.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Target IK bone translation variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IK_BoneCurrentTranslation_MetaData[] = {
		{ "Category", "State|IK" },
		{ "Comment", "/**\n     * Current IK bone translation variable.\n     */" },
		{ "ModuleRelativePath", "Public/Components/FootstepComponent.h" },
		{ "ToolTip", "Current IK bone translation variable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresetHandle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FootSocket;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceCheckStartOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceCheckEndOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterCheckStartOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterCheckEndOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootstepData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FootstepData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FootstepData;
	static void NewProp_IK_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IK_Enabled;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IK_FootSocket;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IK_TraceStartOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IK_TraceEndOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IK_BoneRotationInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IK_BoneTranslationInterpSpeed;
	static void NewProp_DebugMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugMode;
	static void NewProp_DebugIK_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugIK;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugTraceTime;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFootstepPlayed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterSkeletalMesh;
	static void NewProp_SettingsAreCorrect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SettingsAreCorrect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverriddenPresetHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IK_BoneTargetRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IK_BoneCurrentRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IK_BoneTargetTranslation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IK_BoneCurrentTranslation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFootstepComponent_CheckAndUpdateSettings, "CheckAndUpdateSettings" }, // 2401059591
		{ &Z_Construct_UFunction_UFootstepComponent_CheckOverriddenSurface, "CheckOverriddenSurface" }, // 2899097548
		{ &Z_Construct_UFunction_UFootstepComponent_CheckSurface, "CheckSurface" }, // 2853487027
		{ &Z_Construct_UFunction_UFootstepComponent_ClearOverriddenFootstepPreset, "ClearOverriddenFootstepPreset" }, // 1678804968
		{ &Z_Construct_UFunction_UFootstepComponent_FindFootstepDecalData, "FindFootstepDecalData" }, // 1758828370
		{ &Z_Construct_UFunction_UFootstepComponent_FindFootstepEffectData, "FindFootstepEffectData" }, // 139417449
		{ &Z_Construct_UFunction_UFootstepComponent_FindFootstepSoundData, "FindFootstepSoundData" }, // 2889228752
		{ &Z_Construct_UFunction_UFootstepComponent_FindFootstepTypeData, "FindFootstepTypeData" }, // 1328868862
		{ &Z_Construct_UFunction_UFootstepComponent_GetBoneIKVariables, "GetBoneIKVariables" }, // 3336838578
		{ &Z_Construct_UFunction_UFootstepComponent_GetFootLocation, "GetFootLocation" }, // 621259321
		{ &Z_Construct_UFunction_UFootstepComponent_GetTwoLegsPelvisBoneTranslation, "GetTwoLegsPelvisBoneTranslation" }, // 3104731790
		{ &Z_Construct_UFunction_UFootstepComponent_PlayFootstepSounds, "PlayFootstepSounds" }, // 410662078
		{ &Z_Construct_UFunction_UFootstepComponent_SetOverriddenFootstepPreset, "SetOverriddenFootstepPreset" }, // 144345147
		{ &Z_Construct_UFunction_UFootstepComponent_SpawnFootstepEffects, "SpawnFootstepEffects" }, // 893895412
		{ &Z_Construct_UFunction_UFootstepComponent_TryToPlayFootstep, "TryToPlayFootstep" }, // 96571136
		{ &Z_Construct_UFunction_UFootstepComponent_UpdateFootIK, "UpdateFootIK" }, // 1477504293
		{ &Z_Construct_UFunction_UFootstepComponent_UpdateFootstepSettingsByHandle, "UpdateFootstepSettingsByHandle" }, // 1100506827
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFootstepComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_PresetHandle = { "PresetHandle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, PresetHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetHandle_MetaData), NewProp_PresetHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootSocket = { "FootSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, FootSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootSocket_MetaData), NewProp_FootSocket_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_SurfaceCheckStartOffset = { "SurfaceCheckStartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, SurfaceCheckStartOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceCheckStartOffset_MetaData), NewProp_SurfaceCheckStartOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_SurfaceCheckEndOffset = { "SurfaceCheckEndOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, SurfaceCheckEndOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceCheckEndOffset_MetaData), NewProp_SurfaceCheckEndOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_WaterCheckStartOffset = { "WaterCheckStartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, WaterCheckStartOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterCheckStartOffset_MetaData), NewProp_WaterCheckStartOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_WaterCheckEndOffset = { "WaterCheckEndOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, WaterCheckEndOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterCheckEndOffset_MetaData), NewProp_WaterCheckEndOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootstepData_ValueProp = { "FootstepData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFootstepTypeData, METADATA_PARAMS(0, nullptr) }; // 2492901907
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootstepData_Key_KeyProp = { "FootstepData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootstepData = { "FootstepData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, FootstepData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepData_MetaData), NewProp_FootstepData_MetaData) }; // 2492901907
void Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_Enabled_SetBit(void* Obj)
{
	((UFootstepComponent*)Obj)->IK_Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_Enabled = { "IK_Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFootstepComponent), &Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IK_Enabled_MetaData), NewProp_IK_Enabled_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_FootSocket = { "IK_FootSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, IK_FootSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IK_FootSocket_MetaData), NewProp_IK_FootSocket_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_TraceStartOffset = { "IK_TraceStartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, IK_TraceStartOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IK_TraceStartOffset_MetaData), NewProp_IK_TraceStartOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_TraceEndOffset = { "IK_TraceEndOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, IK_TraceEndOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IK_TraceEndOffset_MetaData), NewProp_IK_TraceEndOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_BoneRotationInterpSpeed = { "IK_BoneRotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, IK_BoneRotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IK_BoneRotationInterpSpeed_MetaData), NewProp_IK_BoneRotationInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_BoneTranslationInterpSpeed = { "IK_BoneTranslationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, IK_BoneTranslationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IK_BoneTranslationInterpSpeed_MetaData), NewProp_IK_BoneTranslationInterpSpeed_MetaData) };
void Z_Construct_UClass_UFootstepComponent_Statics::NewProp_DebugMode_SetBit(void* Obj)
{
	((UFootstepComponent*)Obj)->DebugMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_DebugMode = { "DebugMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFootstepComponent), &Z_Construct_UClass_UFootstepComponent_Statics::NewProp_DebugMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugMode_MetaData), NewProp_DebugMode_MetaData) };
void Z_Construct_UClass_UFootstepComponent_Statics::NewProp_DebugIK_SetBit(void* Obj)
{
	((UFootstepComponent*)Obj)->DebugIK = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_DebugIK = { "DebugIK", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFootstepComponent), &Z_Construct_UClass_UFootstepComponent_Statics::NewProp_DebugIK_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugIK_MetaData), NewProp_DebugIK_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_DebugTraceTime = { "DebugTraceTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, DebugTraceTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugTraceTime_MetaData), NewProp_DebugTraceTime_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_OnFootstepPlayed = { "OnFootstepPlayed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, OnFootstepPlayed), Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFootstepPlayed_MetaData), NewProp_OnFootstepPlayed_MetaData) }; // 2278289328
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_CharacterSkeletalMesh = { "CharacterSkeletalMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, CharacterSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterSkeletalMesh_MetaData), NewProp_CharacterSkeletalMesh_MetaData) };
void Z_Construct_UClass_UFootstepComponent_Statics::NewProp_SettingsAreCorrect_SetBit(void* Obj)
{
	((UFootstepComponent*)Obj)->SettingsAreCorrect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_SettingsAreCorrect = { "SettingsAreCorrect", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFootstepComponent), &Z_Construct_UClass_UFootstepComponent_Statics::NewProp_SettingsAreCorrect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsAreCorrect_MetaData), NewProp_SettingsAreCorrect_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_OverriddenPresetHandle = { "OverriddenPresetHandle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, OverriddenPresetHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverriddenPresetHandle_MetaData), NewProp_OverriddenPresetHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_BoneTargetRotation = { "IK_BoneTargetRotation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, IK_BoneTargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IK_BoneTargetRotation_MetaData), NewProp_IK_BoneTargetRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_BoneCurrentRotation = { "IK_BoneCurrentRotation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, IK_BoneCurrentRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IK_BoneCurrentRotation_MetaData), NewProp_IK_BoneCurrentRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_BoneTargetTranslation = { "IK_BoneTargetTranslation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, IK_BoneTargetTranslation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IK_BoneTargetTranslation_MetaData), NewProp_IK_BoneTargetTranslation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_BoneCurrentTranslation = { "IK_BoneCurrentTranslation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepComponent, IK_BoneCurrentTranslation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IK_BoneCurrentTranslation_MetaData), NewProp_IK_BoneCurrentTranslation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFootstepComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_PresetHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_SurfaceCheckStartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_SurfaceCheckEndOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_WaterCheckStartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_WaterCheckEndOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootstepData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootstepData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootstepData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_FootSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_TraceStartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_TraceEndOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_BoneRotationInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_BoneTranslationInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_DebugMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_DebugIK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_DebugTraceTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_OnFootstepPlayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_CharacterSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_SettingsAreCorrect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_OverriddenPresetHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_BoneTargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_BoneCurrentRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_BoneTargetTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_IK_BoneCurrentTranslation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFootstepComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyFootstepPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFootstepComponent_Statics::ClassParams = {
	&UFootstepComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFootstepComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFootstepComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFootstepComponent()
{
	if (!Z_Registration_Info_UClass_UFootstepComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFootstepComponent.OuterSingleton, Z_Construct_UClass_UFootstepComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFootstepComponent.OuterSingleton;
}
template<> EASYFOOTSTEPPLUGIN_API UClass* StaticClass<UFootstepComponent>()
{
	return UFootstepComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFootstepComponent);
UFootstepComponent::~UFootstepComponent() {}
// End Class UFootstepComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_Components_FootstepComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFootstepComponent, UFootstepComponent::StaticClass, TEXT("UFootstepComponent"), &Z_Registration_Info_UClass_UFootstepComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFootstepComponent), 1087679543U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_Components_FootstepComponent_h_751782319(TEXT("/Script/EasyFootstepPlugin"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_Components_FootstepComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_Components_FootstepComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
