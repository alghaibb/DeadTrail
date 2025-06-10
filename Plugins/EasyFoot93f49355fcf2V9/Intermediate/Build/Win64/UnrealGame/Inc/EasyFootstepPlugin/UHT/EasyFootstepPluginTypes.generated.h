// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EasyFootstepPluginTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EASYFOOTSTEPPLUGIN_EasyFootstepPluginTypes_generated_h
#error "EasyFootstepPluginTypes.generated.h already included, missing '#pragma once' in EasyFootstepPluginTypes.h"
#endif
#define EASYFOOTSTEPPLUGIN_EasyFootstepPluginTypes_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_EasyFootstepPluginTypes_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootstepSoundData_Statics; \
	EASYFOOTSTEPPLUGIN_API static class UScriptStruct* StaticStruct();


template<> EASYFOOTSTEPPLUGIN_API UScriptStruct* StaticStruct<struct FFootstepSoundData>();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_EasyFootstepPluginTypes_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootstepEffectData_Statics; \
	EASYFOOTSTEPPLUGIN_API static class UScriptStruct* StaticStruct();


template<> EASYFOOTSTEPPLUGIN_API UScriptStruct* StaticStruct<struct FFootstepEffectData>();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_EasyFootstepPluginTypes_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootstepDecalData_Statics; \
	EASYFOOTSTEPPLUGIN_API static class UScriptStruct* StaticStruct();


template<> EASYFOOTSTEPPLUGIN_API UScriptStruct* StaticStruct<struct FFootstepDecalData>();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_EasyFootstepPluginTypes_h_136_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootstepTypeData_Statics; \
	EASYFOOTSTEPPLUGIN_API static class UScriptStruct* StaticStruct();


template<> EASYFOOTSTEPPLUGIN_API UScriptStruct* StaticStruct<struct FFootstepTypeData>();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_EasyFootstepPluginTypes_h_210_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootstepSettings_Statics; \
	EASYFOOTSTEPPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> EASYFOOTSTEPPLUGIN_API UScriptStruct* StaticStruct<struct FFootstepSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_EasyFootstepPluginTypes_h


#define FOREACH_ENUM_EFOOTSTEPTYPE(op) \
	op(EFootstepType::Default) \
	op(EFootstepType::Walk) \
	op(EFootstepType::Jog) \
	op(EFootstepType::Run) \
	op(EFootstepType::Jump) \
	op(EFootstepType::Land) \
	op(EFootstepType::CustomType1) \
	op(EFootstepType::CustomType2) \
	op(EFootstepType::CustomType3) 

enum class EFootstepType : uint8;
template<> struct TIsUEnumClass<EFootstepType> { enum { Value = true }; };
template<> EASYFOOTSTEPPLUGIN_API UEnum* StaticEnum<EFootstepType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
