// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyFootstepPlugin/Public/SurfaceActors/SurfaceOverrider_Sphere.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurfaceOverrider_Sphere() {}

// Begin Cross Module References
EASYFOOTSTEPPLUGIN_API UClass* Z_Construct_UClass_ASurfaceOverrider();
EASYFOOTSTEPPLUGIN_API UClass* Z_Construct_UClass_ASurfaceOverrider_Sphere();
EASYFOOTSTEPPLUGIN_API UClass* Z_Construct_UClass_ASurfaceOverrider_Sphere_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_EasyFootstepPlugin();
// End Cross Module References

// Begin Class ASurfaceOverrider_Sphere
void ASurfaceOverrider_Sphere::StaticRegisterNativesASurfaceOverrider_Sphere()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASurfaceOverrider_Sphere);
UClass* Z_Construct_UClass_ASurfaceOverrider_Sphere_NoRegister()
{
	return ASurfaceOverrider_Sphere::StaticClass();
}
struct Z_Construct_UClass_ASurfaceOverrider_Sphere_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Surface overrider sphere actor class.\n * Allows to override surface type and play splash in the capsule collision volume of this actor.\n */" },
		{ "IncludePath", "SurfaceActors/SurfaceOverrider_Sphere.h" },
		{ "ModuleRelativePath", "Public/SurfaceActors/SurfaceOverrider_Sphere.h" },
		{ "ToolTip", "Surface overrider sphere actor class.\nAllows to override surface type and play splash in the capsule collision volume of this actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n     * Radius of the sphere collision.\n     */" },
		{ "ModuleRelativePath", "Public/SurfaceActors/SurfaceOverrider_Sphere.h" },
		{ "ToolTip", "Radius of the sphere collision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/**\n     * Sphere collision component.\n     */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SurfaceActors/SurfaceOverrider_Sphere.h" },
		{ "ToolTip", "Sphere collision component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurfaceOverrider_Sphere>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurfaceOverrider_Sphere_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurfaceOverrider_Sphere, SphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereRadius_MetaData), NewProp_SphereRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurfaceOverrider_Sphere_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurfaceOverrider_Sphere, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCollision_MetaData), NewProp_SphereCollision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASurfaceOverrider_Sphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceOverrider_Sphere_Statics::NewProp_SphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceOverrider_Sphere_Statics::NewProp_SphereCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceOverrider_Sphere_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASurfaceOverrider_Sphere_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASurfaceOverrider,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyFootstepPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceOverrider_Sphere_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurfaceOverrider_Sphere_Statics::ClassParams = {
	&ASurfaceOverrider_Sphere::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASurfaceOverrider_Sphere_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceOverrider_Sphere_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceOverrider_Sphere_Statics::Class_MetaDataParams), Z_Construct_UClass_ASurfaceOverrider_Sphere_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASurfaceOverrider_Sphere()
{
	if (!Z_Registration_Info_UClass_ASurfaceOverrider_Sphere.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurfaceOverrider_Sphere.OuterSingleton, Z_Construct_UClass_ASurfaceOverrider_Sphere_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASurfaceOverrider_Sphere.OuterSingleton;
}
template<> EASYFOOTSTEPPLUGIN_API UClass* StaticClass<ASurfaceOverrider_Sphere>()
{
	return ASurfaceOverrider_Sphere::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASurfaceOverrider_Sphere);
ASurfaceOverrider_Sphere::~ASurfaceOverrider_Sphere() {}
// End Class ASurfaceOverrider_Sphere

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_SurfaceActors_SurfaceOverrider_Sphere_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASurfaceOverrider_Sphere, ASurfaceOverrider_Sphere::StaticClass, TEXT("ASurfaceOverrider_Sphere"), &Z_Registration_Info_UClass_ASurfaceOverrider_Sphere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurfaceOverrider_Sphere), 1507395130U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_SurfaceActors_SurfaceOverrider_Sphere_h_2507194685(TEXT("/Script/EasyFootstepPlugin"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_SurfaceActors_SurfaceOverrider_Sphere_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_SurfaceActors_SurfaceOverrider_Sphere_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
