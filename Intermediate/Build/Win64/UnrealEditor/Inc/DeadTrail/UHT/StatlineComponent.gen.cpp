// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadTrail/Public/Components/StatlineComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatlineComponent() {}

// Begin Cross Module References
DEADTRAIL_API UClass* Z_Construct_UClass_UStatlineComponent();
DEADTRAIL_API UClass* Z_Construct_UClass_UStatlineComponent_NoRegister();
DEADTRAIL_API UEnum* Z_Construct_UEnum_DeadTrail_EStatlineType();
DEADTRAIL_API UScriptStruct* Z_Construct_UScriptStruct_FStatline();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DeadTrail();
// End Cross Module References

// Begin Enum EStatlineType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStatlineType;
static UEnum* EStatlineType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStatlineType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStatlineType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DeadTrail_EStatlineType, (UObject*)Z_Construct_UPackage__Script_DeadTrail(), TEXT("EStatlineType"));
	}
	return Z_Registration_Info_UEnum_EStatlineType.OuterSingleton;
}
template<> DEADTRAIL_API UEnum* StaticEnum<EStatlineType>()
{
	return EStatlineType_StaticEnum();
}
struct Z_Construct_UEnum_DeadTrail_EStatlineType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HEALTH.DisplayName", "Health" },
		{ "HEALTH.Name", "EStatlineType::HEALTH" },
		{ "HUNGER.DisplayName", "Hunger" },
		{ "HUNGER.Name", "EStatlineType::HUNGER" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
		{ "STAMINA.DisplayName", "Stamina" },
		{ "STAMINA.Name", "EStatlineType::STAMINA" },
		{ "THIRST.DisplayName", "Thirst" },
		{ "THIRST.Name", "EStatlineType::THIRST" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStatlineType::HEALTH", (int64)EStatlineType::HEALTH },
		{ "EStatlineType::STAMINA", (int64)EStatlineType::STAMINA },
		{ "EStatlineType::HUNGER", (int64)EStatlineType::HUNGER },
		{ "EStatlineType::THIRST", (int64)EStatlineType::THIRST },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DeadTrail_EStatlineType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DeadTrail,
	nullptr,
	"EStatlineType",
	"EStatlineType",
	Z_Construct_UEnum_DeadTrail_EStatlineType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DeadTrail_EStatlineType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DeadTrail_EStatlineType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DeadTrail_EStatlineType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DeadTrail_EStatlineType()
{
	if (!Z_Registration_Info_UEnum_EStatlineType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStatlineType.InnerSingleton, Z_Construct_UEnum_DeadTrail_EStatlineType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStatlineType.InnerSingleton;
}
// End Enum EStatlineType

// Begin ScriptStruct FStatline
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Statline;
class UScriptStruct* FStatline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Statline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Statline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatline, (UObject*)Z_Construct_UPackage__Script_DeadTrail(), TEXT("Statline"));
	}
	return Z_Registration_Info_UScriptStruct_Statline.OuterSingleton;
}
template<> DEADTRAIL_API UScriptStruct* StaticStruct<FStatline>()
{
	return FStatline::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStatline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Statline" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Statline" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerSecondTick_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Statline" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerSecondTick;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatline>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatline_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatline, Current), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatline_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatline, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatline_Statics::NewProp_PerSecondTick = { "PerSecondTick", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatline, PerSecondTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerSecondTick_MetaData), NewProp_PerSecondTick_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatline_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatline_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatline_Statics::NewProp_PerSecondTick,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatline_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DeadTrail,
	nullptr,
	&NewStructOps,
	"Statline",
	Z_Construct_UScriptStruct_FStatline_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatline_Statics::PropPointers),
	sizeof(FStatline),
	alignof(FStatline),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatline_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStatline_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStatline()
{
	if (!Z_Registration_Info_UScriptStruct_Statline.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Statline.InnerSingleton, Z_Construct_UScriptStruct_FStatline_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Statline.InnerSingleton;
}
// End ScriptStruct FStatline

// Begin Class UStatlineComponent Function GetStatPercentile
struct Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics
{
	struct StatlineComponent_eventGetStatPercentile_Parms
	{
		EStatlineType Stat;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Stat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::NewProp_Stat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatlineComponent_eventGetStatPercentile_Parms, Stat), Z_Construct_UEnum_DeadTrail_EStatlineType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stat_MetaData), NewProp_Stat_MetaData) }; // 2007416585
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatlineComponent_eventGetStatPercentile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::NewProp_Stat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatlineComponent, nullptr, "GetStatPercentile", nullptr, nullptr, Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::StatlineComponent_eventGetStatPercentile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::StatlineComponent_eventGetStatPercentile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatlineComponent_GetStatPercentile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatlineComponent_GetStatPercentile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatlineComponent::execGetStatPercentile)
{
	P_GET_ENUM(EStatlineType,Z_Param_Stat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStatPercentile(EStatlineType(Z_Param_Stat));
	P_NATIVE_END;
}
// End Class UStatlineComponent Function GetStatPercentile

// Begin Class UStatlineComponent
void UStatlineComponent::StaticRegisterNativesUStatlineComponent()
{
	UClass* Class = UStatlineComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetStatPercentile", &UStatlineComponent::execGetStatPercentile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatlineComponent);
UClass* Z_Construct_UClass_UStatlineComponent_NoRegister()
{
	return UStatlineComponent::StaticClass();
}
struct Z_Construct_UClass_UStatlineComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/StatlineComponent.h" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hunger_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thirst_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hunger;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Thirst;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatlineComponent_GetStatPercentile, "GetStatPercentile" }, // 4069861115
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatlineComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, Health), Z_Construct_UScriptStruct_FStatline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 3188964235
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, Stamina), Z_Construct_UScriptStruct_FStatline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) }; // 3188964235
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Hunger = { "Hunger", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, Hunger), Z_Construct_UScriptStruct_FStatline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hunger_MetaData), NewProp_Hunger_MetaData) }; // 3188964235
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Thirst = { "Thirst", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, Thirst), Z_Construct_UScriptStruct_FStatline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thirst_MetaData), NewProp_Thirst_MetaData) }; // 3188964235
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatlineComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Hunger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Thirst,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatlineComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatlineComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DeadTrail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatlineComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatlineComponent_Statics::ClassParams = {
	&UStatlineComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStatlineComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatlineComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatlineComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatlineComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatlineComponent()
{
	if (!Z_Registration_Info_UClass_UStatlineComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatlineComponent.OuterSingleton, Z_Construct_UClass_UStatlineComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatlineComponent.OuterSingleton;
}
template<> DEADTRAIL_API UClass* StaticClass<UStatlineComponent>()
{
	return UStatlineComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatlineComponent);
UStatlineComponent::~UStatlineComponent() {}
// End Class UStatlineComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStatlineType_StaticEnum, TEXT("EStatlineType"), &Z_Registration_Info_UEnum_EStatlineType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2007416585U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStatline::StaticStruct, Z_Construct_UScriptStruct_FStatline_Statics::NewStructOps, TEXT("Statline"), &Z_Registration_Info_UScriptStruct_Statline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatline), 3188964235U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatlineComponent, UStatlineComponent::StaticClass, TEXT("UStatlineComponent"), &Z_Registration_Info_UClass_UStatlineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatlineComponent), 1182554998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_369750294(TEXT("/Script/DeadTrail"),
	Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
