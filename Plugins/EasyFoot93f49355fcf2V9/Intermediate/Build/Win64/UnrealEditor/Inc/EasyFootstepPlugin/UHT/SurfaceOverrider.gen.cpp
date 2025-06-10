// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyFootstepPlugin/Public/SurfaceActors/SurfaceOverrider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurfaceOverrider() {}

// Begin Cross Module References
EASYFOOTSTEPPLUGIN_API UClass* Z_Construct_UClass_ASurfaceOverrider();
EASYFOOTSTEPPLUGIN_API UClass* Z_Construct_UClass_ASurfaceOverrider_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
UPackage* Z_Construct_UPackage__Script_EasyFootstepPlugin();
// End Cross Module References

// Begin Class ASurfaceOverrider
void ASurfaceOverrider::StaticRegisterNativesASurfaceOverrider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASurfaceOverrider);
UClass* Z_Construct_UClass_ASurfaceOverrider_NoRegister()
{
	return ASurfaceOverrider::StaticClass();
}
struct Z_Construct_UClass_ASurfaceOverrider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Surface overrider actor class.\n * Abstract class. \n * Used for creating surface overrider classes with volumes.\n */" },
#endif
		{ "IncludePath", "SurfaceActors/SurfaceOverrider.h" },
		{ "ModuleRelativePath", "Public/SurfaceActors/SurfaceOverrider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Surface overrider actor class.\nAbstract class.\nUsed for creating surface overrider classes with volumes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Override surface type in the volume of the actor.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/SurfaceActors/SurfaceOverrider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override surface type in the volume of the actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaySplash_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Override play splash effects in the volume of the actor.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/SurfaceActors/SurfaceOverrider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override play splash effects in the volume of the actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Default scene root of the actor.\n     */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SurfaceActors/SurfaceOverrider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default scene root of the actor." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
	static void NewProp_PlaySplash_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlaySplash;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurfaceOverrider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASurfaceOverrider_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurfaceOverrider, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceType_MetaData), NewProp_SurfaceType_MetaData) }; // 161619406
void Z_Construct_UClass_ASurfaceOverrider_Statics::NewProp_PlaySplash_SetBit(void* Obj)
{
	((ASurfaceOverrider*)Obj)->PlaySplash = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASurfaceOverrider_Statics::NewProp_PlaySplash = { "PlaySplash", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASurfaceOverrider), &Z_Construct_UClass_ASurfaceOverrider_Statics::NewProp_PlaySplash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaySplash_MetaData), NewProp_PlaySplash_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurfaceOverrider_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurfaceOverrider, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASurfaceOverrider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceOverrider_Statics::NewProp_SurfaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceOverrider_Statics::NewProp_PlaySplash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceOverrider_Statics::NewProp_SceneRoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceOverrider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASurfaceOverrider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyFootstepPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceOverrider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurfaceOverrider_Statics::ClassParams = {
	&ASurfaceOverrider::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASurfaceOverrider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceOverrider_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceOverrider_Statics::Class_MetaDataParams), Z_Construct_UClass_ASurfaceOverrider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASurfaceOverrider()
{
	if (!Z_Registration_Info_UClass_ASurfaceOverrider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurfaceOverrider.OuterSingleton, Z_Construct_UClass_ASurfaceOverrider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASurfaceOverrider.OuterSingleton;
}
template<> EASYFOOTSTEPPLUGIN_API UClass* StaticClass<ASurfaceOverrider>()
{
	return ASurfaceOverrider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASurfaceOverrider);
ASurfaceOverrider::~ASurfaceOverrider() {}
// End Class ASurfaceOverrider

// Begin Registration
struct Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_SurfaceActors_SurfaceOverrider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASurfaceOverrider, ASurfaceOverrider::StaticClass, TEXT("ASurfaceOverrider"), &Z_Registration_Info_UClass_ASurfaceOverrider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurfaceOverrider), 2129970915U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_SurfaceActors_SurfaceOverrider_h_287486013(TEXT("/Script/EasyFootstepPlugin"),
	Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_SurfaceActors_SurfaceOverrider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_SurfaceActors_SurfaceOverrider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
