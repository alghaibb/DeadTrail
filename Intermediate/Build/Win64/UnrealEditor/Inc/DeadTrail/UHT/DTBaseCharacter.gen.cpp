// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadTrail/Public/Characters/DTBaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDTBaseCharacter() {}

// Begin Cross Module References
DEADTRAIL_API UClass* Z_Construct_UClass_ADTBaseCharacter();
DEADTRAIL_API UClass* Z_Construct_UClass_ADTBaseCharacter_NoRegister();
DEADTRAIL_API UClass* Z_Construct_UClass_UStatlineComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_DeadTrail();
// End Cross Module References

// Begin Class ADTBaseCharacter
void ADTBaseCharacter::StaticRegisterNativesADTBaseCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADTBaseCharacter);
UClass* Z_Construct_UClass_ADTBaseCharacter_NoRegister()
{
	return ADTBaseCharacter::StaticClass();
}
struct Z_Construct_UClass_ADTBaseCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/DTBaseCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/DTBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Statline_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DTBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/DTBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Statline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADTBaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTBaseCharacter_Statics::NewProp_Statline = { "Statline", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTBaseCharacter, Statline), Z_Construct_UClass_UStatlineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Statline_MetaData), NewProp_Statline_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADTBaseCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTBaseCharacter_Statics::NewProp_Statline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTBaseCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADTBaseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_DeadTrail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTBaseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADTBaseCharacter_Statics::ClassParams = {
	&ADTBaseCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADTBaseCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADTBaseCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADTBaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ADTBaseCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADTBaseCharacter()
{
	if (!Z_Registration_Info_UClass_ADTBaseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADTBaseCharacter.OuterSingleton, Z_Construct_UClass_ADTBaseCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADTBaseCharacter.OuterSingleton;
}
template<> DEADTRAIL_API UClass* StaticClass<ADTBaseCharacter>()
{
	return ADTBaseCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADTBaseCharacter);
ADTBaseCharacter::~ADTBaseCharacter() {}
// End Class ADTBaseCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Characters_DTBaseCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADTBaseCharacter, ADTBaseCharacter::StaticClass, TEXT("ADTBaseCharacter"), &Z_Registration_Info_UClass_ADTBaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADTBaseCharacter), 4153983668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Characters_DTBaseCharacter_h_2703736069(TEXT("/Script/DeadTrail"),
	Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Characters_DTBaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Characters_DTBaseCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
