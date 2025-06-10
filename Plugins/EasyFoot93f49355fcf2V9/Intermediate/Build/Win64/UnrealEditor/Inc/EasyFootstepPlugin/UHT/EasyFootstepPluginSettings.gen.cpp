// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyFootstepPlugin/Public/EasyFootstepPluginSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyFootstepPluginSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
EASYFOOTSTEPPLUGIN_API UClass* Z_Construct_UClass_UEasyFootstepPluginSettings();
EASYFOOTSTEPPLUGIN_API UClass* Z_Construct_UClass_UEasyFootstepPluginSettings_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
UPackage* Z_Construct_UPackage__Script_EasyFootstepPlugin();
// End Cross Module References

// Begin Class UEasyFootstepPluginSettings
void UEasyFootstepPluginSettings::StaticRegisterNativesUEasyFootstepPluginSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEasyFootstepPluginSettings);
UClass* Z_Construct_UClass_UEasyFootstepPluginSettings_NoRegister()
{
	return UEasyFootstepPluginSettings::StaticClass();
}
struct Z_Construct_UClass_UEasyFootstepPluginSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Easy Footstep Plugin settings class. \n * Used to set plugin settings in the project settings. \n * These settings are save in the DefaultEngine.ini file.\n */" },
#endif
		{ "DisplayName", "Easy Footstep Plugin" },
		{ "IncludePath", "EasyFootstepPluginSettings.h" },
		{ "ModuleRelativePath", "Public/EasyFootstepPluginSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Easy Footstep Plugin settings class.\nUsed to set plugin settings in the project settings.\nThese settings are save in the DefaultEngine.ini file." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterObjectType_MetaData[] = {
		{ "Category", "Footstep Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Default collision Object Type for water objects. \n     * Create the new collision object channel for water objects (Ignore) and select it for Water Object Type property.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default collision Object Type for water objects.\nCreate the new collision object channel for water objects (Ignore) and select it for Water Object Type property." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceOverriderObjectType_MetaData[] = {
		{ "Category", "Footstep Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Default collision Object Type for surface overrider objects.\n     * Create the new collision object channel for surface overrider objects (Ignore) and select it for Surface Overrider Object Type property.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default collision Object Type for surface overrider objects.\nCreate the new collision object channel for surface overrider objects (Ignore) and select it for Surface Overrider Object Type property." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceTypes_MetaData[] = {
		{ "Category", "Footstep Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Array of physical surfaces and their relevant names.\n     * Used to quickly set up existing projects to use settings from the footstep preset table.\n     * All default surface names are configured in the footstep preset table in the plugin content folder.\n     * Can be empty if settings in data table are set correctly for each physical surface.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/EasyFootstepPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of physical surfaces and their relevant names.\nUsed to quickly set up existing projects to use settings from the footstep preset table.\nAll default surface names are configured in the footstep preset table in the plugin content folder.\nCan be empty if settings in data table are set correctly for each physical surface." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_WaterObjectType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceOverriderObjectType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceTypes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SurfaceTypes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SurfaceTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyFootstepPluginSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEasyFootstepPluginSettings_Statics::NewProp_WaterObjectType = { "WaterObjectType", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyFootstepPluginSettings, WaterObjectType), Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterObjectType_MetaData), NewProp_WaterObjectType_MetaData) }; // 1798967895
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEasyFootstepPluginSettings_Statics::NewProp_SurfaceOverriderObjectType = { "SurfaceOverriderObjectType", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyFootstepPluginSettings, SurfaceOverriderObjectType), Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceOverriderObjectType_MetaData), NewProp_SurfaceOverriderObjectType_MetaData) }; // 1798967895
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEasyFootstepPluginSettings_Statics::NewProp_SurfaceTypes_ValueProp = { "SurfaceTypes", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 161619406
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEasyFootstepPluginSettings_Statics::NewProp_SurfaceTypes_Key_KeyProp = { "SurfaceTypes_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEasyFootstepPluginSettings_Statics::NewProp_SurfaceTypes = { "SurfaceTypes", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEasyFootstepPluginSettings, SurfaceTypes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceTypes_MetaData), NewProp_SurfaceTypes_MetaData) }; // 161619406
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEasyFootstepPluginSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyFootstepPluginSettings_Statics::NewProp_WaterObjectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyFootstepPluginSettings_Statics::NewProp_SurfaceOverriderObjectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyFootstepPluginSettings_Statics::NewProp_SurfaceTypes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyFootstepPluginSettings_Statics::NewProp_SurfaceTypes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyFootstepPluginSettings_Statics::NewProp_SurfaceTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyFootstepPluginSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEasyFootstepPluginSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyFootstepPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyFootstepPluginSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEasyFootstepPluginSettings_Statics::ClassParams = {
	&UEasyFootstepPluginSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEasyFootstepPluginSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEasyFootstepPluginSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyFootstepPluginSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UEasyFootstepPluginSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEasyFootstepPluginSettings()
{
	if (!Z_Registration_Info_UClass_UEasyFootstepPluginSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEasyFootstepPluginSettings.OuterSingleton, Z_Construct_UClass_UEasyFootstepPluginSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEasyFootstepPluginSettings.OuterSingleton;
}
template<> EASYFOOTSTEPPLUGIN_API UClass* StaticClass<UEasyFootstepPluginSettings>()
{
	return UEasyFootstepPluginSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEasyFootstepPluginSettings);
UEasyFootstepPluginSettings::~UEasyFootstepPluginSettings() {}
// End Class UEasyFootstepPluginSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_EasyFootstepPluginSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEasyFootstepPluginSettings, UEasyFootstepPluginSettings::StaticClass, TEXT("UEasyFootstepPluginSettings"), &Z_Registration_Info_UClass_UEasyFootstepPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEasyFootstepPluginSettings), 4251772181U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_EasyFootstepPluginSettings_h_1712394487(TEXT("/Script/EasyFootstepPlugin"),
	Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_EasyFootstepPluginSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_EasyFootstepPluginSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
