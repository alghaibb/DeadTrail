// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyFootstepPlugin/Public/SurfaceActors/SurfaceOverrider_Box.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurfaceOverrider_Box() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
EASYFOOTSTEPPLUGIN_API UClass* Z_Construct_UClass_ASurfaceOverrider();
EASYFOOTSTEPPLUGIN_API UClass* Z_Construct_UClass_ASurfaceOverrider_Box();
EASYFOOTSTEPPLUGIN_API UClass* Z_Construct_UClass_ASurfaceOverrider_Box_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_EasyFootstepPlugin();
// End Cross Module References

// Begin Class ASurfaceOverrider_Box
void ASurfaceOverrider_Box::StaticRegisterNativesASurfaceOverrider_Box()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASurfaceOverrider_Box);
UClass* Z_Construct_UClass_ASurfaceOverrider_Box_NoRegister()
{
	return ASurfaceOverrider_Box::StaticClass();
}
struct Z_Construct_UClass_ASurfaceOverrider_Box_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Surface overrider box actor class.\n * Allows to override surface type and play splash in the box collision volume of this actor.\n */" },
		{ "IncludePath", "SurfaceActors/SurfaceOverrider_Box.h" },
		{ "ModuleRelativePath", "Public/SurfaceActors/SurfaceOverrider_Box.h" },
		{ "ToolTip", "Surface overrider box actor class.\nAllows to override surface type and play splash in the box collision volume of this actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n     * Extent of the box collision.\n     */" },
		{ "ModuleRelativePath", "Public/SurfaceActors/SurfaceOverrider_Box.h" },
		{ "ToolTip", "Extent of the box collision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/**\n     * Box collision component.\n     */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SurfaceActors/SurfaceOverrider_Box.h" },
		{ "ToolTip", "Box collision component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurfaceOverrider_Box>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASurfaceOverrider_Box_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurfaceOverrider_Box, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxExtent_MetaData), NewProp_BoxExtent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurfaceOverrider_Box_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurfaceOverrider_Box, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASurfaceOverrider_Box_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceOverrider_Box_Statics::NewProp_BoxExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurfaceOverrider_Box_Statics::NewProp_BoxCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceOverrider_Box_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASurfaceOverrider_Box_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASurfaceOverrider,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyFootstepPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceOverrider_Box_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurfaceOverrider_Box_Statics::ClassParams = {
	&ASurfaceOverrider_Box::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASurfaceOverrider_Box_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceOverrider_Box_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASurfaceOverrider_Box_Statics::Class_MetaDataParams), Z_Construct_UClass_ASurfaceOverrider_Box_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASurfaceOverrider_Box()
{
	if (!Z_Registration_Info_UClass_ASurfaceOverrider_Box.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurfaceOverrider_Box.OuterSingleton, Z_Construct_UClass_ASurfaceOverrider_Box_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASurfaceOverrider_Box.OuterSingleton;
}
template<> EASYFOOTSTEPPLUGIN_API UClass* StaticClass<ASurfaceOverrider_Box>()
{
	return ASurfaceOverrider_Box::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASurfaceOverrider_Box);
ASurfaceOverrider_Box::~ASurfaceOverrider_Box() {}
// End Class ASurfaceOverrider_Box

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_SurfaceActors_SurfaceOverrider_Box_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASurfaceOverrider_Box, ASurfaceOverrider_Box::StaticClass, TEXT("ASurfaceOverrider_Box"), &Z_Registration_Info_UClass_ASurfaceOverrider_Box, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurfaceOverrider_Box), 2056159591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_SurfaceActors_SurfaceOverrider_Box_h_3652526624(TEXT("/Script/EasyFootstepPlugin"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_SurfaceActors_SurfaceOverrider_Box_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_SurfaceActors_SurfaceOverrider_Box_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
