// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/FootstepComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FFootstepDecalData;
 struct FFootstepEffectData;
 struct FFootstepSoundData;
class UFootstepComponent;
enum class EFootstepType : uint8;
struct FDataTableRowHandle;
struct FFootstepDecalData;
struct FFootstepEffectData;
struct FFootstepSoundData;
struct FFootstepTypeData;
#ifdef EASYFOOTSTEPPLUGIN_FootstepComponent_generated_h
#error "FootstepComponent.generated.h already included, missing '#pragma once' in FootstepComponent.h"
#endif
#define EASYFOOTSTEPPLUGIN_FootstepComponent_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_Components_FootstepComponent_h_20_DELEGATE \
EASYFOOTSTEPPLUGIN_API void FOnFootstepPlayed_DelegateWrapper(const FMulticastScriptDelegate& OnFootstepPlayed, UFootstepComponent* FootstepComponent, FVector Location, EFootstepType FootstepType, EPhysicalSurface SurfaceType, bool PlaySplash);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_Components_FootstepComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateFootIK); \
	DECLARE_FUNCTION(execUpdateFootstepSettingsByHandle); \
	DECLARE_FUNCTION(execSpawnFootstepEffects); \
	DECLARE_FUNCTION(execPlayFootstepSounds); \
	DECLARE_FUNCTION(execFindFootstepDecalData); \
	DECLARE_FUNCTION(execFindFootstepEffectData); \
	DECLARE_FUNCTION(execFindFootstepSoundData); \
	DECLARE_FUNCTION(execFindFootstepTypeData); \
	DECLARE_FUNCTION(execCheckOverriddenSurface); \
	DECLARE_FUNCTION(execGetFootLocation); \
	DECLARE_FUNCTION(execCheckSurface); \
	DECLARE_FUNCTION(execCheckAndUpdateSettings); \
	DECLARE_FUNCTION(execGetBoneIKVariables); \
	DECLARE_FUNCTION(execGetTwoLegsPelvisBoneTranslation); \
	DECLARE_FUNCTION(execTryToPlayFootstep); \
	DECLARE_FUNCTION(execClearOverriddenFootstepPreset); \
	DECLARE_FUNCTION(execSetOverriddenFootstepPreset);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_Components_FootstepComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFootstepComponent(); \
	friend struct Z_Construct_UClass_UFootstepComponent_Statics; \
public: \
	DECLARE_CLASS(UFootstepComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyFootstepPlugin"), NO_API) \
	DECLARE_SERIALIZER(UFootstepComponent)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_Components_FootstepComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFootstepComponent(UFootstepComponent&&); \
	UFootstepComponent(const UFootstepComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFootstepComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFootstepComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFootstepComponent) \
	NO_API virtual ~UFootstepComponent();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_Components_FootstepComponent_h_28_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_Components_FootstepComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_Components_FootstepComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_Components_FootstepComponent_h_31_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_Components_FootstepComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYFOOTSTEPPLUGIN_API UClass* StaticClass<class UFootstepComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_Components_FootstepComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
