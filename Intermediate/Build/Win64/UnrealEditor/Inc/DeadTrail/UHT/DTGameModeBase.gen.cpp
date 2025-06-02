// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadTrail/Public/Core/DTGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDTGameModeBase() {}

// Begin Cross Module References
DEADTRAIL_API UClass* Z_Construct_UClass_ADTGameModeBase();
DEADTRAIL_API UClass* Z_Construct_UClass_ADTGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DeadTrail();
// End Cross Module References

// Begin Class ADTGameModeBase
void ADTGameModeBase::StaticRegisterNativesADTGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADTGameModeBase);
UClass* Z_Construct_UClass_ADTGameModeBase_NoRegister()
{
	return ADTGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ADTGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/DTGameModeBase.h" },
		{ "ModuleRelativePath", "Public/Core/DTGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADTGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADTGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DeadTrail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADTGameModeBase_Statics::ClassParams = {
	&ADTGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADTGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ADTGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADTGameModeBase()
{
	if (!Z_Registration_Info_UClass_ADTGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADTGameModeBase.OuterSingleton, Z_Construct_UClass_ADTGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADTGameModeBase.OuterSingleton;
}
template<> DEADTRAIL_API UClass* StaticClass<ADTGameModeBase>()
{
	return ADTGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADTGameModeBase);
ADTGameModeBase::~ADTGameModeBase() {}
// End Class ADTGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Core_DTGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADTGameModeBase, ADTGameModeBase::StaticClass, TEXT("ADTGameModeBase"), &Z_Registration_Info_UClass_ADTGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADTGameModeBase), 3654422392U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Core_DTGameModeBase_h_346004946(TEXT("/Script/DeadTrail"),
	Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Core_DTGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Core_DTGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
