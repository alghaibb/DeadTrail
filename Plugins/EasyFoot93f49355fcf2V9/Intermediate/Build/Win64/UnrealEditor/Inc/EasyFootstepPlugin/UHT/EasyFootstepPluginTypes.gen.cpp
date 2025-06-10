// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyFootstepPlugin/Public/EasyFootstepPluginTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyFootstepPluginTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
EASYFOOTSTEPPLUGIN_API UEnum* Z_Construct_UEnum_EasyFootstepPlugin_EFootstepType();
EASYFOOTSTEPPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFootstepDecalData();
EASYFOOTSTEPPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFootstepEffectData();
EASYFOOTSTEPPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFootstepSettings();
EASYFOOTSTEPPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFootstepSoundData();
EASYFOOTSTEPPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFootstepTypeData();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
UPackage* Z_Construct_UPackage__Script_EasyFootstepPlugin();
// End Cross Module References

// Begin Enum EFootstepType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFootstepType;
static UEnum* EFootstepType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFootstepType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFootstepType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyFootstepPlugin_EFootstepType, (UObject*)Z_Construct_UPackage__Script_EasyFootstepPlugin(), TEXT("EFootstepType"));
	}
	return Z_Registration_Info_UEnum_EFootstepType.OuterSingleton;
}
template<> EASYFOOTSTEPPLUGIN_API UEnum* StaticEnum<EFootstepType>()
{
	return EFootstepType_StaticEnum();
}
struct Z_Construct_UEnum_EasyFootstepPlugin_EFootstepType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Footstep types.\n */" },
#endif
		{ "CustomType1.Name", "EFootstepType::CustomType1" },
		{ "CustomType2.Name", "EFootstepType::CustomType2" },
		{ "CustomType3.Name", "EFootstepType::CustomType3" },
		{ "Default.Name", "EFootstepType::Default" },
		{ "Jog.Name", "EFootstepType::Jog" },
		{ "Jump.Name", "EFootstepType::Jump" },
		{ "Land.Name", "EFootstepType::Land" },
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
		{ "Run.Name", "EFootstepType::Run" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Footstep types." },
#endif
		{ "Walk.Name", "EFootstepType::Walk" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFootstepType::Default", (int64)EFootstepType::Default },
		{ "EFootstepType::Walk", (int64)EFootstepType::Walk },
		{ "EFootstepType::Jog", (int64)EFootstepType::Jog },
		{ "EFootstepType::Run", (int64)EFootstepType::Run },
		{ "EFootstepType::Jump", (int64)EFootstepType::Jump },
		{ "EFootstepType::Land", (int64)EFootstepType::Land },
		{ "EFootstepType::CustomType1", (int64)EFootstepType::CustomType1 },
		{ "EFootstepType::CustomType2", (int64)EFootstepType::CustomType2 },
		{ "EFootstepType::CustomType3", (int64)EFootstepType::CustomType3 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyFootstepPlugin_EFootstepType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyFootstepPlugin,
	nullptr,
	"EFootstepType",
	"EFootstepType",
	Z_Construct_UEnum_EasyFootstepPlugin_EFootstepType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyFootstepPlugin_EFootstepType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyFootstepPlugin_EFootstepType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyFootstepPlugin_EFootstepType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyFootstepPlugin_EFootstepType()
{
	if (!Z_Registration_Info_UEnum_EFootstepType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFootstepType.InnerSingleton, Z_Construct_UEnum_EasyFootstepPlugin_EFootstepType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFootstepType.InnerSingleton;
}
// End Enum EFootstepType

// Begin ScriptStruct FFootstepSoundData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FootstepSoundData;
class UScriptStruct* FFootstepSoundData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FootstepSoundData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FootstepSoundData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootstepSoundData, (UObject*)Z_Construct_UPackage__Script_EasyFootstepPlugin(), TEXT("FootstepSoundData"));
	}
	return Z_Registration_Info_UScriptStruct_FootstepSoundData.OuterSingleton;
}
template<> EASYFOOTSTEPPLUGIN_API UScriptStruct* StaticStruct<FFootstepSoundData>()
{
	return FFootstepSoundData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFootstepSoundData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Footstep sound data structure.\n * Used for set up sounds for certain surface.\n */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Footstep sound data structure.\nUsed for set up sounds for certain surface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Surface type.\n     *\n     * Presets data table info:\n     * If type is Default then it will be used for each surface type which is not set.\n     * If key of structure is exist in the plugin settings, it does not matter which surface type is set.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Surface type.\n\nPresets data table info:\nIf type is Default then it will be used for each surface type which is not set.\nIf key of structure is exist in the plugin settings, it does not matter which surface type is set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The sound to be played on this surface type.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The sound to be played on this surface type." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootstepSoundData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFootstepSoundData_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepSoundData, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceType_MetaData), NewProp_SurfaceType_MetaData) }; // 161619406
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFootstepSoundData_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepSoundData, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootstepSoundData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepSoundData_Statics::NewProp_SurfaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepSoundData_Statics::NewProp_Sound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepSoundData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootstepSoundData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyFootstepPlugin,
	nullptr,
	&NewStructOps,
	"FootstepSoundData",
	Z_Construct_UScriptStruct_FFootstepSoundData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepSoundData_Statics::PropPointers),
	sizeof(FFootstepSoundData),
	alignof(FFootstepSoundData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepSoundData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFootstepSoundData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFootstepSoundData()
{
	if (!Z_Registration_Info_UScriptStruct_FootstepSoundData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FootstepSoundData.InnerSingleton, Z_Construct_UScriptStruct_FFootstepSoundData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FootstepSoundData.InnerSingleton;
}
// End ScriptStruct FFootstepSoundData

// Begin ScriptStruct FFootstepEffectData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FootstepEffectData;
class UScriptStruct* FFootstepEffectData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FootstepEffectData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FootstepEffectData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootstepEffectData, (UObject*)Z_Construct_UPackage__Script_EasyFootstepPlugin(), TEXT("FootstepEffectData"));
	}
	return Z_Registration_Info_UScriptStruct_FootstepEffectData.OuterSingleton;
}
template<> EASYFOOTSTEPPLUGIN_API UScriptStruct* StaticStruct<FFootstepEffectData>()
{
	return FFootstepEffectData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFootstepEffectData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Footstep effects data structure.\n * Used for set up effects for certain surface.\n */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Footstep effects data structure.\nUsed for set up effects for certain surface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Surface type.\n     *\n     * Presets data table info:\n     * If type is Default then it will be used for each surface type which is not set.\n     * If key of structure is exist in the plugin settings, it does not matter which surface type is set.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Surface type.\n\nPresets data table info:\nIf type is Default then it will be used for each surface type which is not set.\nIf key of structure is exist in the plugin settings, it does not matter which surface type is set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The particle system to be spawned on this surface type.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The particle system to be spawned on this surface type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The niagara system to be spawned on this surface type.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The niagara system to be spawned on this surface type." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootstepEffectData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepEffectData, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceType_MetaData), NewProp_SurfaceType_MetaData) }; // 161619406
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepEffectData, ParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleSystem_MetaData), NewProp_ParticleSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepEffectData, NiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraSystem_MetaData), NewProp_NiagaraSystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootstepEffectData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_SurfaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_ParticleSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewProp_NiagaraSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffectData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootstepEffectData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyFootstepPlugin,
	nullptr,
	&NewStructOps,
	"FootstepEffectData",
	Z_Construct_UScriptStruct_FFootstepEffectData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffectData_Statics::PropPointers),
	sizeof(FFootstepEffectData),
	alignof(FFootstepEffectData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffectData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFootstepEffectData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFootstepEffectData()
{
	if (!Z_Registration_Info_UScriptStruct_FootstepEffectData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FootstepEffectData.InnerSingleton, Z_Construct_UScriptStruct_FFootstepEffectData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FootstepEffectData.InnerSingleton;
}
// End ScriptStruct FFootstepEffectData

// Begin ScriptStruct FFootstepDecalData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FootstepDecalData;
class UScriptStruct* FFootstepDecalData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FootstepDecalData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FootstepDecalData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootstepDecalData, (UObject*)Z_Construct_UPackage__Script_EasyFootstepPlugin(), TEXT("FootstepDecalData"));
	}
	return Z_Registration_Info_UScriptStruct_FootstepDecalData.OuterSingleton;
}
template<> EASYFOOTSTEPPLUGIN_API UScriptStruct* StaticStruct<FFootstepDecalData>()
{
	return FFootstepDecalData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFootstepDecalData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Footstep decal effect data structure.\n * Used for set up decal effect for certain surface.\n */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Footstep decal effect data structure.\nUsed for set up decal effect for certain surface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Surface type.\n     *\n     * Presets data table info:\n     * If type is Default then it will be used for each surface type which is not set.\n     * If key of structure is exist in the plugin settings, it does not matter which surface type is set.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Surface type.\n\nPresets data table info:\nIf type is Default then it will be used for each surface type which is not set.\nIf key of structure is exist in the plugin settings, it does not matter which surface type is set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The decal to be spawned on this surface type.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The decal to be spawned on this surface type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalSize_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The size of the decal.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The size of the decal." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalLifeSpan_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The lifetime of the decal.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The lifetime of the decal." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DecalSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalLifeSpan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootstepDecalData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFootstepDecalData_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepDecalData, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceType_MetaData), NewProp_SurfaceType_MetaData) }; // 161619406
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFootstepDecalData_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepDecalData, DecalMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalMaterial_MetaData), NewProp_DecalMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootstepDecalData_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepDecalData, DecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalSize_MetaData), NewProp_DecalSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootstepDecalData_Statics::NewProp_DecalLifeSpan = { "DecalLifeSpan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepDecalData, DecalLifeSpan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalLifeSpan_MetaData), NewProp_DecalLifeSpan_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootstepDecalData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepDecalData_Statics::NewProp_SurfaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepDecalData_Statics::NewProp_DecalMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepDecalData_Statics::NewProp_DecalSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepDecalData_Statics::NewProp_DecalLifeSpan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepDecalData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootstepDecalData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyFootstepPlugin,
	nullptr,
	&NewStructOps,
	"FootstepDecalData",
	Z_Construct_UScriptStruct_FFootstepDecalData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepDecalData_Statics::PropPointers),
	sizeof(FFootstepDecalData),
	alignof(FFootstepDecalData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepDecalData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFootstepDecalData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFootstepDecalData()
{
	if (!Z_Registration_Info_UScriptStruct_FootstepDecalData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FootstepDecalData.InnerSingleton, Z_Construct_UScriptStruct_FFootstepDecalData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FootstepDecalData.InnerSingleton;
}
// End ScriptStruct FFootstepDecalData

// Begin ScriptStruct FFootstepTypeData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FootstepTypeData;
class UScriptStruct* FFootstepTypeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FootstepTypeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FootstepTypeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootstepTypeData, (UObject*)Z_Construct_UPackage__Script_EasyFootstepPlugin(), TEXT("FootstepTypeData"));
	}
	return Z_Registration_Info_UScriptStruct_FootstepTypeData.OuterSingleton;
}
template<> EASYFOOTSTEPPLUGIN_API UScriptStruct* StaticStruct<FFootstepTypeData>()
{
	return FFootstepTypeData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFootstepTypeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Footstep type data structure.\n * Contains data of sounds and effects which should be played for different footstep types.\n */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Footstep type data structure.\nContains data of sounds and effects which should be played for different footstep types." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepType_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Footstep type.\n     *\n     * Presets data table info:\n     * If type is Default then it will be used for each footstep type which is not set.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Footstep type.\n\nPresets data table info:\nIf type is Default then it will be used for each footstep type which is not set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceSoundData_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * List of sounds configured for different surfaces.\n     * \n     * Presets data table info:\n     * If key of structure is exist in the plugin settings, it does not matter which surface type is set in the structure.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of sounds configured for different surfaces.\n\nPresets data table info:\nIf key of structure is exist in the plugin settings, it does not matter which surface type is set in the structure." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceEffectData_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * List of effects configured for different surfaces.\n     *\n     * Presets data table info:\n     * If key of structure is exist in the plugin settings, it does not matter which surface type is set in the structure.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of effects configured for different surfaces.\n\nPresets data table info:\nIf key of structure is exist in the plugin settings, it does not matter which surface type is set in the structure." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceDecalData_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * List of decal effects configured for different surfaces.\n     * \n     * Presets data table info:\n     * If key of structure is exist in the plugin settings, it does not matter which surface type is set in the structure.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of decal effects configured for different surfaces.\n\nPresets data table info:\nIf key of structure is exist in the plugin settings, it does not matter which surface type is set in the structure." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplashSoundData_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * List of splash sounds configured for different surfaces.     \n     *\n     * Presets data table info:\n     * If key of structure is exist in the plugin settings, it does not matter which surface type is set in the structure.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of splash sounds configured for different surfaces.\n\nPresets data table info:\nIf key of structure is exist in the plugin settings, it does not matter which surface type is set in the structure." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplashEffectData_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * List of splash effects configured for different surfaces.\n     *\n     * Presets data table info:\n     * If key of structure is exist in the plugin settings, it does not matter which surface type is set in the structure.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of splash effects configured for different surfaces.\n\nPresets data table info:\nIf key of structure is exist in the plugin settings, it does not matter which surface type is set in the structure." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplashDecalData_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * List of splash decals configured for different surfaces.\n     *\n     * Presets data table info:\n     * If key of structure is exist in the plugin settings, it does not matter which surface type is set in the structure.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of splash decals configured for different surfaces.\n\nPresets data table info:\nIf key of structure is exist in the plugin settings, it does not matter which surface type is set in the structure." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FootstepType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FootstepType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SurfaceSoundData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SurfaceSoundData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SurfaceSoundData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SurfaceEffectData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SurfaceEffectData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SurfaceEffectData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SurfaceDecalData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SurfaceDecalData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SurfaceDecalData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SplashSoundData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SplashSoundData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SplashSoundData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SplashEffectData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SplashEffectData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SplashEffectData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SplashDecalData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SplashDecalData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SplashDecalData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootstepTypeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_FootstepType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_FootstepType = { "FootstepType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepTypeData, FootstepType), Z_Construct_UEnum_EasyFootstepPlugin_EFootstepType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepType_MetaData), NewProp_FootstepType_MetaData) }; // 1268002782
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SurfaceSoundData_ValueProp = { "SurfaceSoundData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFootstepSoundData, METADATA_PARAMS(0, nullptr) }; // 3257844129
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SurfaceSoundData_Key_KeyProp = { "SurfaceSoundData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SurfaceSoundData = { "SurfaceSoundData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepTypeData, SurfaceSoundData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceSoundData_MetaData), NewProp_SurfaceSoundData_MetaData) }; // 3257844129
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SurfaceEffectData_ValueProp = { "SurfaceEffectData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFootstepEffectData, METADATA_PARAMS(0, nullptr) }; // 1435725778
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SurfaceEffectData_Key_KeyProp = { "SurfaceEffectData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SurfaceEffectData = { "SurfaceEffectData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepTypeData, SurfaceEffectData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceEffectData_MetaData), NewProp_SurfaceEffectData_MetaData) }; // 1435725778
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SurfaceDecalData_ValueProp = { "SurfaceDecalData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFootstepDecalData, METADATA_PARAMS(0, nullptr) }; // 3192965070
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SurfaceDecalData_Key_KeyProp = { "SurfaceDecalData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SurfaceDecalData = { "SurfaceDecalData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepTypeData, SurfaceDecalData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceDecalData_MetaData), NewProp_SurfaceDecalData_MetaData) }; // 3192965070
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SplashSoundData_ValueProp = { "SplashSoundData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFootstepSoundData, METADATA_PARAMS(0, nullptr) }; // 3257844129
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SplashSoundData_Key_KeyProp = { "SplashSoundData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SplashSoundData = { "SplashSoundData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepTypeData, SplashSoundData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplashSoundData_MetaData), NewProp_SplashSoundData_MetaData) }; // 3257844129
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SplashEffectData_ValueProp = { "SplashEffectData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFootstepEffectData, METADATA_PARAMS(0, nullptr) }; // 1435725778
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SplashEffectData_Key_KeyProp = { "SplashEffectData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SplashEffectData = { "SplashEffectData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepTypeData, SplashEffectData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplashEffectData_MetaData), NewProp_SplashEffectData_MetaData) }; // 1435725778
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SplashDecalData_ValueProp = { "SplashDecalData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFootstepDecalData, METADATA_PARAMS(0, nullptr) }; // 3192965070
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SplashDecalData_Key_KeyProp = { "SplashDecalData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SplashDecalData = { "SplashDecalData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepTypeData, SplashDecalData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplashDecalData_MetaData), NewProp_SplashDecalData_MetaData) }; // 3192965070
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootstepTypeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_FootstepType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_FootstepType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SurfaceSoundData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SurfaceSoundData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SurfaceSoundData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SurfaceEffectData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SurfaceEffectData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SurfaceEffectData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SurfaceDecalData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SurfaceDecalData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SurfaceDecalData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SplashSoundData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SplashSoundData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SplashSoundData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SplashEffectData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SplashEffectData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SplashEffectData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SplashDecalData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SplashDecalData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewProp_SplashDecalData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepTypeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootstepTypeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyFootstepPlugin,
	nullptr,
	&NewStructOps,
	"FootstepTypeData",
	Z_Construct_UScriptStruct_FFootstepTypeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepTypeData_Statics::PropPointers),
	sizeof(FFootstepTypeData),
	alignof(FFootstepTypeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepTypeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFootstepTypeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFootstepTypeData()
{
	if (!Z_Registration_Info_UScriptStruct_FootstepTypeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FootstepTypeData.InnerSingleton, Z_Construct_UScriptStruct_FFootstepTypeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FootstepTypeData.InnerSingleton;
}
// End ScriptStruct FFootstepTypeData

// Begin ScriptStruct FFootstepSettings
static_assert(std::is_polymorphic<FFootstepSettings>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFootstepSettings cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FootstepSettings;
class UScriptStruct* FFootstepSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FootstepSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FootstepSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootstepSettings, (UObject*)Z_Construct_UPackage__Script_EasyFootstepPlugin(), TEXT("FootstepSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FootstepSettings.OuterSingleton;
}
template<> EASYFOOTSTEPPLUGIN_API UScriptStruct* StaticStruct<FFootstepSettings>()
{
	return FFootstepSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFootstepSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Footstep settings data structure.\n * Contains socket name and trace settings for playing footsteps for certain leg.\n * Contains data of sounds and effects which should be played for different footstep types and for different surfaces.\n */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Footstep settings data structure.\nContains socket name and trace settings for playing footsteps for certain leg.\nContains data of sounds and effects which should be played for different footstep types and for different surfaces." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootSocket_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Bone or socket name of the foot for which footstep will be played.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bone or socket name of the foot for which footstep will be played." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceCheckStartOffset_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Upper Z offset from FootSocket using in the check surface trace function.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Upper Z offset from FootSocket using in the check surface trace function." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceCheckEndOffset_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Lower Z offset from FootSocket using in the check surface trace function.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lower Z offset from FootSocket using in the check surface trace function." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterCheckStartOffset_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Upper Z offset from FootSocket using in the check water trace function.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Upper Z offset from FootSocket using in the check water trace function." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterCheckEndOffset_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Lower Z offset from FootSocket using in the check water trace function.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lower Z offset from FootSocket using in the check water trace function." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepsData_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * List of footstep type settings configured for different footstep types.\n     *\n     * Presets data table info:\n     * If type is Default then it will be used for each footstep type which is not set.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of footstep type settings configured for different footstep types.\n\nPresets data table info:\nIf type is Default then it will be used for each footstep type which is not set." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FootSocket;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceCheckStartOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceCheckEndOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterCheckStartOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterCheckEndOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootstepsData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FootstepsData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FootstepsData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootstepSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFootstepSettings_Statics::NewProp_FootSocket = { "FootSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepSettings, FootSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootSocket_MetaData), NewProp_FootSocket_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootstepSettings_Statics::NewProp_SurfaceCheckStartOffset = { "SurfaceCheckStartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepSettings, SurfaceCheckStartOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceCheckStartOffset_MetaData), NewProp_SurfaceCheckStartOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootstepSettings_Statics::NewProp_SurfaceCheckEndOffset = { "SurfaceCheckEndOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepSettings, SurfaceCheckEndOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceCheckEndOffset_MetaData), NewProp_SurfaceCheckEndOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootstepSettings_Statics::NewProp_WaterCheckStartOffset = { "WaterCheckStartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepSettings, WaterCheckStartOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterCheckStartOffset_MetaData), NewProp_WaterCheckStartOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootstepSettings_Statics::NewProp_WaterCheckEndOffset = { "WaterCheckEndOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepSettings, WaterCheckEndOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterCheckEndOffset_MetaData), NewProp_WaterCheckEndOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootstepSettings_Statics::NewProp_FootstepsData_ValueProp = { "FootstepsData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFootstepTypeData, METADATA_PARAMS(0, nullptr) }; // 1805802480
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFootstepSettings_Statics::NewProp_FootstepsData_Key_KeyProp = { "FootstepsData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFootstepSettings_Statics::NewProp_FootstepsData = { "FootstepsData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootstepSettings, FootstepsData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepsData_MetaData), NewProp_FootstepsData_MetaData) }; // 1805802480
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootstepSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepSettings_Statics::NewProp_FootSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepSettings_Statics::NewProp_SurfaceCheckStartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepSettings_Statics::NewProp_SurfaceCheckEndOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepSettings_Statics::NewProp_WaterCheckStartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepSettings_Statics::NewProp_WaterCheckEndOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepSettings_Statics::NewProp_FootstepsData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepSettings_Statics::NewProp_FootstepsData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepSettings_Statics::NewProp_FootstepsData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootstepSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyFootstepPlugin,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"FootstepSettings",
	Z_Construct_UScriptStruct_FFootstepSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepSettings_Statics::PropPointers),
	sizeof(FFootstepSettings),
	alignof(FFootstepSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFootstepSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFootstepSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FootstepSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FootstepSettings.InnerSingleton, Z_Construct_UScriptStruct_FFootstepSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FootstepSettings.InnerSingleton;
}
// End ScriptStruct FFootstepSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_EasyFootstepPluginTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFootstepType_StaticEnum, TEXT("EFootstepType"), &Z_Registration_Info_UEnum_EFootstepType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1268002782U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFootstepSoundData::StaticStruct, Z_Construct_UScriptStruct_FFootstepSoundData_Statics::NewStructOps, TEXT("FootstepSoundData"), &Z_Registration_Info_UScriptStruct_FootstepSoundData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFootstepSoundData), 3257844129U) },
		{ FFootstepEffectData::StaticStruct, Z_Construct_UScriptStruct_FFootstepEffectData_Statics::NewStructOps, TEXT("FootstepEffectData"), &Z_Registration_Info_UScriptStruct_FootstepEffectData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFootstepEffectData), 1435725778U) },
		{ FFootstepDecalData::StaticStruct, Z_Construct_UScriptStruct_FFootstepDecalData_Statics::NewStructOps, TEXT("FootstepDecalData"), &Z_Registration_Info_UScriptStruct_FootstepDecalData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFootstepDecalData), 3192965070U) },
		{ FFootstepTypeData::StaticStruct, Z_Construct_UScriptStruct_FFootstepTypeData_Statics::NewStructOps, TEXT("FootstepTypeData"), &Z_Registration_Info_UScriptStruct_FootstepTypeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFootstepTypeData), 1805802480U) },
		{ FFootstepSettings::StaticStruct, Z_Construct_UScriptStruct_FFootstepSettings_Statics::NewStructOps, TEXT("FootstepSettings"), &Z_Registration_Info_UScriptStruct_FootstepSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFootstepSettings), 3390844483U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_EasyFootstepPluginTypes_h_4217780661(TEXT("/Script/EasyFootstepPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_EasyFootstepPluginTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_EasyFootstepPluginTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_EasyFootstepPluginTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_EasyFootstepPluginTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
