// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadTrail/Public/Interaction/DTDoorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDTDoorBase() {}

// Begin Cross Module References
DEADTRAIL_API UClass* Z_Construct_UClass_ADTBaseActor();
DEADTRAIL_API UClass* Z_Construct_UClass_ADTDoorBase();
DEADTRAIL_API UClass* Z_Construct_UClass_ADTDoorBase_NoRegister();
DEADTRAIL_API UClass* Z_Construct_UClass_UDTInteractionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_DeadTrail();
// End Cross Module References

// Begin Class ADTDoorBase
void ADTDoorBase::StaticRegisterNativesADTDoorBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADTDoorBase);
UClass* Z_Construct_UClass_ADTDoorBase_NoRegister()
{
	return ADTDoorBase::StaticClass();
}
struct Z_Construct_UClass_ADTDoorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Interaction/DTDoorBase.h" },
		{ "ModuleRelativePath", "Public/Interaction/DTDoorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOpen_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DTDoorBase" },
		{ "ModuleRelativePath", "Public/Interaction/DTDoorBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOpen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADTDoorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ADTDoorBase_Statics::NewProp_bIsOpen_SetBit(void* Obj)
{
	((ADTDoorBase*)Obj)->bIsOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADTDoorBase_Statics::NewProp_bIsOpen = { "bIsOpen", nullptr, (EPropertyFlags)0x0040000001020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADTDoorBase), &Z_Construct_UClass_ADTDoorBase_Statics::NewProp_bIsOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOpen_MetaData), NewProp_bIsOpen_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADTDoorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTDoorBase_Statics::NewProp_bIsOpen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTDoorBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADTDoorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADTBaseActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DeadTrail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTDoorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADTDoorBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDTInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(ADTDoorBase, IDTInteractionInterface), false },  // 161039295
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADTDoorBase_Statics::ClassParams = {
	&ADTDoorBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADTDoorBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADTDoorBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADTDoorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ADTDoorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADTDoorBase()
{
	if (!Z_Registration_Info_UClass_ADTDoorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADTDoorBase.OuterSingleton, Z_Construct_UClass_ADTDoorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADTDoorBase.OuterSingleton;
}
template<> DEADTRAIL_API UClass* StaticClass<ADTDoorBase>()
{
	return ADTDoorBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADTDoorBase);
ADTDoorBase::~ADTDoorBase() {}
// End Class ADTDoorBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTDoorBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADTDoorBase, ADTDoorBase::StaticClass, TEXT("ADTDoorBase"), &Z_Registration_Info_UClass_ADTDoorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADTDoorBase), 4183350858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTDoorBase_h_797933020(TEXT("/Script/DeadTrail"),
	Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTDoorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTDoorBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
