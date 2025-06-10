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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveID_MetaData[] = {
		{ "Category", "DTBaseActor" },
		{ "ModuleRelativePath", "Public/Interaction/DTBaseActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasSpawned_MetaData[] = {
		{ "Category", "DTBaseActor" },
		{ "ModuleRelativePath", "Public/Interaction/DTBaseActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveID;
	static void NewProp_bWasSpawned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSpawned;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADTBaseActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADTBaseActor_Statics::NewProp_SaveID = { "SaveID", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTBaseActor, SaveID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveID_MetaData), NewProp_SaveID_MetaData) };
void Z_Construct_UClass_ADTBaseActor_Statics::NewProp_bWasSpawned_SetBit(void* Obj)
{
	((ADTBaseActor*)Obj)->bWasSpawned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADTBaseActor_Statics::NewProp_bWasSpawned = { "bWasSpawned", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADTBaseActor), &Z_Construct_UClass_ADTBaseActor_Statics::NewProp_bWasSpawned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasSpawned_MetaData), NewProp_bWasSpawned_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADTBaseActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTBaseActor_Statics::NewProp_SaveID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTBaseActor_Statics::NewProp_bWasSpawned,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTBaseActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADTBaseActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DeadTrail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTBaseActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADTBaseActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USaveDTActorInterface_NoRegister, (int32)VTABLE_OFFSET(ADTBaseActor, ISaveDTActorInterface), false },  // 2565776885
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADTBaseActor_Statics::ClassParams = {
	&ADTBaseActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADTBaseActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADTBaseActor_Statics::PropPointers),
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
		{ Z_Construct_UClass_ADTBaseActor, ADTBaseActor::StaticClass, TEXT("ADTBaseActor"), &Z_Registration_Info_UClass_ADTBaseActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADTBaseActor), 111204785U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTBaseActor_h_1442033195(TEXT("/Script/DeadTrail"),
	Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTBaseActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTBaseActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
