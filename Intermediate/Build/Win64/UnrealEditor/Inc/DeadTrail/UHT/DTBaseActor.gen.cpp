// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadTrail/Public/Interaction/DTBaseActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDTBaseActor() {}

// Begin Cross Module References
DEADTRAIL_API UClass* Z_Construct_UClass_ADTBaseActor();
DEADTRAIL_API UClass* Z_Construct_UClass_ADTBaseActor_NoRegister();
DEADTRAIL_API UClass* Z_Construct_UClass_USaveDTActorInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DeadTrail();
// End Cross Module References

// Begin Class ADTBaseActor
void ADTBaseActor::StaticRegisterNativesADTBaseActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADTBaseActor);
UClass* Z_Construct_UClass_ADTBaseActor_NoRegister()
{
	return ADTBaseActor::StaticClass();
}
struct Z_Construct_UClass_ADTBaseActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Interaction/DTBaseActor.h" },
		{ "ModuleRelativePath", "Public/Interaction/DTBaseActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADTBaseActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADTBaseActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DeadTrail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTBaseActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADTBaseActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USaveDTActorInterface_NoRegister, (int32)VTABLE_OFFSET(ADTBaseActor, ISaveDTActorInterface), false },  // 4155347415
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADTBaseActor_Statics::ClassParams = {
	&ADTBaseActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADTBaseActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADTBaseActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADTBaseActor()
{
	if (!Z_Registration_Info_UClass_ADTBaseActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADTBaseActor.OuterSingleton, Z_Construct_UClass_ADTBaseActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADTBaseActor.OuterSingleton;
}
template<> DEADTRAIL_API UClass* StaticClass<ADTBaseActor>()
{
	return ADTBaseActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADTBaseActor);
ADTBaseActor::~ADTBaseActor() {}
// End Class ADTBaseActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTBaseActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADTBaseActor, ADTBaseActor::StaticClass, TEXT("ADTBaseActor"), &Z_Registration_Info_UClass_ADTBaseActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADTBaseActor), 750117444U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTBaseActor_h_2106051311(TEXT("/Script/DeadTrail"),
	Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTBaseActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTBaseActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
