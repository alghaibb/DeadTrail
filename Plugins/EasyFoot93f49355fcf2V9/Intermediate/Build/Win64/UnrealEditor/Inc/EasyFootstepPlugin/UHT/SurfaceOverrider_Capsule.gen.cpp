// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyFootstepPlugin/Public/SurfaceActors/SurfaceOverrider_Capsule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurfaceOverrider_Capsule() {}

// Begin Cross Module References
EASYFOOTSTEPPLUGIN_API UClass* Z_Construct_UClass_ASurfaceOverrider();
EASYFOOTSTEPPLUGIN_API UClass* Z_Construct_UClass_ASurfaceOverrider_Capsule();
EASYFOOTSTEPPLUGIN_API UClass* Z_Construct_UClass_ASurfaceOverrider_Capsule_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_EasyFootstepPlugin();
// End Cross Module References

// Begin Class ASurfaceOverrider_Capsule
void ASurfaceOverrider_Capsule::StaticRegisterNativesASurfaceOverrider_Capsule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASurfaceOverrider_Capsule);
UClass* Z_Construct_UClass_ASurfaceOverrider_Capsule_NoRegister()
{
	return ASurfaceOverrider_Capsule::StaticClass();
}
struct Z_Construct_UClass_ASurfaceOverrider_Capsule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Surface overrider capsule actor class.\n * Allows to override surface type and play splash in the capsule collision volume of this actor.\n */" },
#endif
		{ "IncludePath", "SurfaceActors/SurfaceOverrider_Capsule.h" },
		{ "ModuleRelativePath", "Public/SurfaceActors/SurfaceOverrider_Capsule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Surface overrider capsule actor class.\nAllows to override surface type and play splash in the capsule collision volume of this actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleRadius_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Radius of the capsule collision.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/SurfaceActors/SurfaceOverrider_Capsule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius of the capsule collision." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleHalfHeight_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Half height value of the capsule collision.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/SurfaceActors/SurfaceOverrider_Capsule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Half height value of the capsule collision." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleCollision_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Capsule collision component.\n     */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SurfaceActors/SurfaceOverrider_Capsule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Capsule collision component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurfaceOverrider_Capsule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurfaceOverrider_Capsule_Statics::NewProp_CapsuleRadius = { "CapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurfaceOverrider_Capsule, CapsuleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleRadius_MetaData), NewProp_CapsuleRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurfaceOverrider_Capsule_Statics::NewProp_CapsuleHalfHeight = { "CapsuleHalfHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurfaceOverrider_Capsule, CapsuleHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleHalfHeight_MetaData), NewProp_CapsuleHalfHeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurfaceOverrider_Capsule_Statics::NewProp_CapsuleCollision = { "CapsuleCollision", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurfaceOverrider_Capsule, CapsuleCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleCollision_MetaData), NewProp_CapsuleCollision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASurfaceOverrider_Capsule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceOverrider_Capsule_Statics::NewProp_CapsuleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceOverrider_Capsule_Statics::NewProp_CapsuleHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceOverrider_Capsule_Statics::NewProp_CapsuleCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceOverrider_Capsule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASurfaceOverrider_Capsule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASurfaceOverrider,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyFootstepPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceOverrider_Capsule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurfaceOverrider_Capsule_Statics::ClassParams = {
	&ASurfaceOverrider_Capsule::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASurfaceOverrider_Capsule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceOverrider_Capsule_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceOverrider_Capsule_Statics::Class_MetaDataParams), Z_Construct_UClass_ASurfaceOverrider_Capsule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASurfaceOverrider_Capsule()
{
	if (!Z_Registration_Info_UClass_ASurfaceOverrider_Capsule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurfaceOverrider_Capsule.OuterSingleton, Z_Construct_UClass_ASurfaceOverrider_Capsule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASurfaceOverrider_Capsule.OuterSingleton;
}
template<> EASYFOOTSTEPPLUGIN_API UClass* StaticClass<ASurfaceOverrider_Capsule>()
{
	return ASurfaceOverrider_Capsule::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASurfaceOverrider_Capsule);
ASurfaceOverrider_Capsule::~ASurfaceOverrider_Capsule() {}
// End Class ASurfaceOverrider_Capsule

// Begin Registration
struct Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_SurfaceActors_SurfaceOverrider_Capsule_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASurfaceOverrider_Capsule, ASurfaceOverrider_Capsule::StaticClass, TEXT("ASurfaceOverrider_Capsule"), &Z_Registration_Info_UClass_ASurfaceOverrider_Capsule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurfaceOverrider_Capsule), 2597616962U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_SurfaceActors_SurfaceOverrider_Capsule_h_1742659535(TEXT("/Script/EasyFootstepPlugin"),
	Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_SurfaceActors_SurfaceOverrider_Capsule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_SurfaceActors_SurfaceOverrider_Capsule_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
