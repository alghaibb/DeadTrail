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
DEADTRAIL_API UClass* Z_Construct_UClass_USaveDTActorInterface_NoRegister();
DEADTRAIL_API UClass* Z_Construct_UClass_UStatlineComponent();
DEADTRAIL_API UClass* Z_Construct_UClass_UStatlineComponent_NoRegister();
DEADTRAIL_API UEnum* Z_Construct_UEnum_DeadTrail_EStatlineType();
DEADTRAIL_API UScriptStruct* Z_Construct_UScriptStruct_FStatline();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatline_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0040000001020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatline, Current), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatline_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0040000001020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatline, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatline_Statics::NewProp_PerSecondTick = { "PerSecondTick", nullptr, (EPropertyFlags)0x0040000001020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatline, PerSecondTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerSecondTick_MetaData), NewProp_PerSecondTick_MetaData) };
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

// Begin Class UStatlineComponent Function CanJump
struct Z_Construct_UFunction_UStatlineComponent_CanJump_Statics
{
	struct StatlineComponent_eventCanJump_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStatlineComponent_CanJump_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StatlineComponent_eventCanJump_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatlineComponent_CanJump_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StatlineComponent_eventCanJump_Parms), &Z_Construct_UFunction_UStatlineComponent_CanJump_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatlineComponent_CanJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatlineComponent_CanJump_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_CanJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatlineComponent_CanJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatlineComponent, nullptr, "CanJump", nullptr, nullptr, Z_Construct_UFunction_UStatlineComponent_CanJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_CanJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatlineComponent_CanJump_Statics::StatlineComponent_eventCanJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_CanJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatlineComponent_CanJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatlineComponent_CanJump_Statics::StatlineComponent_eventCanJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatlineComponent_CanJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatlineComponent_CanJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatlineComponent::execCanJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanJump();
	P_NATIVE_END;
}
// End Class UStatlineComponent Function CanJump

// Begin Class UStatlineComponent Function CanSprint
struct Z_Construct_UFunction_UStatlineComponent_CanSprint_Statics
{
	struct StatlineComponent_eventCanSprint_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStatlineComponent_CanSprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StatlineComponent_eventCanSprint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatlineComponent_CanSprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StatlineComponent_eventCanSprint_Parms), &Z_Construct_UFunction_UStatlineComponent_CanSprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatlineComponent_CanSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatlineComponent_CanSprint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_CanSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatlineComponent_CanSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatlineComponent, nullptr, "CanSprint", nullptr, nullptr, Z_Construct_UFunction_UStatlineComponent_CanSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_CanSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatlineComponent_CanSprint_Statics::StatlineComponent_eventCanSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_CanSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatlineComponent_CanSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatlineComponent_CanSprint_Statics::StatlineComponent_eventCanSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatlineComponent_CanSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatlineComponent_CanSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatlineComponent::execCanSprint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanSprint();
	P_NATIVE_END;
}
// End Class UStatlineComponent Function CanSprint

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

// Begin Class UStatlineComponent Function HasJumped
struct Z_Construct_UFunction_UStatlineComponent_HasJumped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatlineComponent_HasJumped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatlineComponent, nullptr, "HasJumped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_HasJumped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatlineComponent_HasJumped_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatlineComponent_HasJumped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatlineComponent_HasJumped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatlineComponent::execHasJumped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HasJumped();
	P_NATIVE_END;
}
// End Class UStatlineComponent Function HasJumped

// Begin Class UStatlineComponent Function SetMovementComponentRef
struct Z_Construct_UFunction_UStatlineComponent_SetMovementComponentRef_Statics
{
	struct StatlineComponent_eventSetMovementComponentRef_Parms
	{
		UCharacterMovementComponent* Comp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Comp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatlineComponent_SetMovementComponentRef_Statics::NewProp_Comp = { "Comp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatlineComponent_eventSetMovementComponentRef_Parms, Comp), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comp_MetaData), NewProp_Comp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatlineComponent_SetMovementComponentRef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatlineComponent_SetMovementComponentRef_Statics::NewProp_Comp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_SetMovementComponentRef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatlineComponent_SetMovementComponentRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatlineComponent, nullptr, "SetMovementComponentRef", nullptr, nullptr, Z_Construct_UFunction_UStatlineComponent_SetMovementComponentRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_SetMovementComponentRef_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatlineComponent_SetMovementComponentRef_Statics::StatlineComponent_eventSetMovementComponentRef_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_SetMovementComponentRef_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatlineComponent_SetMovementComponentRef_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatlineComponent_SetMovementComponentRef_Statics::StatlineComponent_eventSetMovementComponentRef_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatlineComponent_SetMovementComponentRef()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatlineComponent_SetMovementComponentRef_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatlineComponent::execSetMovementComponentRef)
{
	P_GET_OBJECT(UCharacterMovementComponent,Z_Param_Comp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMovementComponentRef(Z_Param_Comp);
	P_NATIVE_END;
}
// End Class UStatlineComponent Function SetMovementComponentRef

// Begin Class UStatlineComponent Function SetSneaking
struct Z_Construct_UFunction_UStatlineComponent_SetSneaking_Statics
{
	struct StatlineComponent_eventSetSneaking_Parms
	{
		bool IsSneaking;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSneaking_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_IsSneaking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSneaking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStatlineComponent_SetSneaking_Statics::NewProp_IsSneaking_SetBit(void* Obj)
{
	((StatlineComponent_eventSetSneaking_Parms*)Obj)->IsSneaking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatlineComponent_SetSneaking_Statics::NewProp_IsSneaking = { "IsSneaking", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StatlineComponent_eventSetSneaking_Parms), &Z_Construct_UFunction_UStatlineComponent_SetSneaking_Statics::NewProp_IsSneaking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSneaking_MetaData), NewProp_IsSneaking_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatlineComponent_SetSneaking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatlineComponent_SetSneaking_Statics::NewProp_IsSneaking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_SetSneaking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatlineComponent_SetSneaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatlineComponent, nullptr, "SetSneaking", nullptr, nullptr, Z_Construct_UFunction_UStatlineComponent_SetSneaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_SetSneaking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatlineComponent_SetSneaking_Statics::StatlineComponent_eventSetSneaking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_SetSneaking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatlineComponent_SetSneaking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatlineComponent_SetSneaking_Statics::StatlineComponent_eventSetSneaking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatlineComponent_SetSneaking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatlineComponent_SetSneaking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatlineComponent::execSetSneaking)
{
	P_GET_UBOOL_REF(Z_Param_Out_IsSneaking);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSneaking(Z_Param_Out_IsSneaking);
	P_NATIVE_END;
}
// End Class UStatlineComponent Function SetSneaking

// Begin Class UStatlineComponent Function SetSprinting
struct Z_Construct_UFunction_UStatlineComponent_SetSprinting_Statics
{
	struct StatlineComponent_eventSetSprinting_Parms
	{
		bool IsSprinting;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSprinting_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_IsSprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSprinting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStatlineComponent_SetSprinting_Statics::NewProp_IsSprinting_SetBit(void* Obj)
{
	((StatlineComponent_eventSetSprinting_Parms*)Obj)->IsSprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatlineComponent_SetSprinting_Statics::NewProp_IsSprinting = { "IsSprinting", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StatlineComponent_eventSetSprinting_Parms), &Z_Construct_UFunction_UStatlineComponent_SetSprinting_Statics::NewProp_IsSprinting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSprinting_MetaData), NewProp_IsSprinting_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatlineComponent_SetSprinting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatlineComponent_SetSprinting_Statics::NewProp_IsSprinting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_SetSprinting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatlineComponent_SetSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatlineComponent, nullptr, "SetSprinting", nullptr, nullptr, Z_Construct_UFunction_UStatlineComponent_SetSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_SetSprinting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatlineComponent_SetSprinting_Statics::StatlineComponent_eventSetSprinting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_SetSprinting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatlineComponent_SetSprinting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatlineComponent_SetSprinting_Statics::StatlineComponent_eventSetSprinting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatlineComponent_SetSprinting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatlineComponent_SetSprinting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatlineComponent::execSetSprinting)
{
	P_GET_UBOOL_REF(Z_Param_Out_IsSprinting);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSprinting(Z_Param_Out_IsSprinting);
	P_NATIVE_END;
}
// End Class UStatlineComponent Function SetSprinting

// Begin Class UStatlineComponent Function SetWalking
struct Z_Construct_UFunction_UStatlineComponent_SetWalking_Statics
{
	struct StatlineComponent_eventSetWalking_Parms
	{
		bool IsWalking;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsWalking_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_IsWalking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsWalking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStatlineComponent_SetWalking_Statics::NewProp_IsWalking_SetBit(void* Obj)
{
	((StatlineComponent_eventSetWalking_Parms*)Obj)->IsWalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatlineComponent_SetWalking_Statics::NewProp_IsWalking = { "IsWalking", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StatlineComponent_eventSetWalking_Parms), &Z_Construct_UFunction_UStatlineComponent_SetWalking_Statics::NewProp_IsWalking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsWalking_MetaData), NewProp_IsWalking_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatlineComponent_SetWalking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatlineComponent_SetWalking_Statics::NewProp_IsWalking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_SetWalking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatlineComponent_SetWalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatlineComponent, nullptr, "SetWalking", nullptr, nullptr, Z_Construct_UFunction_UStatlineComponent_SetWalking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_SetWalking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatlineComponent_SetWalking_Statics::StatlineComponent_eventSetWalking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatlineComponent_SetWalking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatlineComponent_SetWalking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatlineComponent_SetWalking_Statics::StatlineComponent_eventSetWalking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatlineComponent_SetWalking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatlineComponent_SetWalking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatlineComponent::execSetWalking)
{
	P_GET_UBOOL_REF(Z_Param_Out_IsWalking);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWalking(Z_Param_Out_IsWalking);
	P_NATIVE_END;
}
// End Class UStatlineComponent Function SetWalking

// Begin Class UStatlineComponent
void UStatlineComponent::StaticRegisterNativesUStatlineComponent()
{
	UClass* Class = UStatlineComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanJump", &UStatlineComponent::execCanJump },
		{ "CanSprint", &UStatlineComponent::execCanSprint },
		{ "GetStatPercentile", &UStatlineComponent::execGetStatPercentile },
		{ "HasJumped", &UStatlineComponent::execHasJumped },
		{ "SetMovementComponentRef", &UStatlineComponent::execSetMovementComponentRef },
		{ "SetSneaking", &UStatlineComponent::execSetSneaking },
		{ "SetSprinting", &UStatlineComponent::execSetSprinting },
		{ "SetWalking", &UStatlineComponent::execSetWalking },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsToSprint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSneaking_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWalking_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintCost_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JogSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SneakSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpCost_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondsForStaminaExhaustion_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStaminaExhaustionTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StarvingHealthLossPerSecond_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DehydrationHealthLossPerSecond_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StatlineComponent" },
		{ "ModuleRelativePath", "Public/Components/StatlineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hunger;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Thirst;
	static void NewProp_bIsSprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
	static void NewProp_bWantsToSprint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsToSprint;
	static void NewProp_bIsSneaking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSneaking;
	static void NewProp_bIsWalking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWalking;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JogSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SneakSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondsForStaminaExhaustion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStaminaExhaustionTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StarvingHealthLossPerSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DehydrationHealthLossPerSecond;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatlineComponent_CanJump, "CanJump" }, // 3432461670
		{ &Z_Construct_UFunction_UStatlineComponent_CanSprint, "CanSprint" }, // 2968531836
		{ &Z_Construct_UFunction_UStatlineComponent_GetStatPercentile, "GetStatPercentile" }, // 4069861115
		{ &Z_Construct_UFunction_UStatlineComponent_HasJumped, "HasJumped" }, // 4191951482
		{ &Z_Construct_UFunction_UStatlineComponent_SetMovementComponentRef, "SetMovementComponentRef" }, // 3275231898
		{ &Z_Construct_UFunction_UStatlineComponent_SetSneaking, "SetSneaking" }, // 1319502441
		{ &Z_Construct_UFunction_UStatlineComponent_SetSprinting, "SetSprinting" }, // 3010804755
		{ &Z_Construct_UFunction_UStatlineComponent_SetWalking, "SetWalking" }, // 4150372787
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatlineComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000001020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, Health), Z_Construct_UScriptStruct_FStatline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 2616569430
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0040000001020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, Stamina), Z_Construct_UScriptStruct_FStatline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) }; // 2616569430
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Hunger = { "Hunger", nullptr, (EPropertyFlags)0x0040000001020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, Hunger), Z_Construct_UScriptStruct_FStatline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hunger_MetaData), NewProp_Hunger_MetaData) }; // 2616569430
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Thirst = { "Thirst", nullptr, (EPropertyFlags)0x0040000001020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, Thirst), Z_Construct_UScriptStruct_FStatline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thirst_MetaData), NewProp_Thirst_MetaData) }; // 2616569430
void Z_Construct_UClass_UStatlineComponent_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
{
	((UStatlineComponent*)Obj)->bIsSprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_bIsSprinting = { "bIsSprinting", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStatlineComponent), &Z_Construct_UClass_UStatlineComponent_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSprinting_MetaData), NewProp_bIsSprinting_MetaData) };
void Z_Construct_UClass_UStatlineComponent_Statics::NewProp_bWantsToSprint_SetBit(void* Obj)
{
	((UStatlineComponent*)Obj)->bWantsToSprint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_bWantsToSprint = { "bWantsToSprint", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStatlineComponent), &Z_Construct_UClass_UStatlineComponent_Statics::NewProp_bWantsToSprint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsToSprint_MetaData), NewProp_bWantsToSprint_MetaData) };
void Z_Construct_UClass_UStatlineComponent_Statics::NewProp_bIsSneaking_SetBit(void* Obj)
{
	((UStatlineComponent*)Obj)->bIsSneaking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_bIsSneaking = { "bIsSneaking", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStatlineComponent), &Z_Construct_UClass_UStatlineComponent_Statics::NewProp_bIsSneaking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSneaking_MetaData), NewProp_bIsSneaking_MetaData) };
void Z_Construct_UClass_UStatlineComponent_Statics::NewProp_bIsWalking_SetBit(void* Obj)
{
	((UStatlineComponent*)Obj)->bIsWalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_bIsWalking = { "bIsWalking", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStatlineComponent), &Z_Construct_UClass_UStatlineComponent_Statics::NewProp_bIsWalking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWalking_MetaData), NewProp_bIsWalking_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_SprintCost = { "SprintCost", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, SprintCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintCost_MetaData), NewProp_SprintCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_JogSpeed = { "JogSpeed", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, JogSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JogSpeed_MetaData), NewProp_JogSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_SneakSpeed = { "SneakSpeed", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, SneakSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SneakSpeed_MetaData), NewProp_SneakSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_JumpCost = { "JumpCost", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, JumpCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpCost_MetaData), NewProp_JumpCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_SecondsForStaminaExhaustion = { "SecondsForStaminaExhaustion", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, SecondsForStaminaExhaustion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondsForStaminaExhaustion_MetaData), NewProp_SecondsForStaminaExhaustion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_CurrentStaminaExhaustionTime = { "CurrentStaminaExhaustionTime", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, CurrentStaminaExhaustionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStaminaExhaustionTime_MetaData), NewProp_CurrentStaminaExhaustionTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_StarvingHealthLossPerSecond = { "StarvingHealthLossPerSecond", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, StarvingHealthLossPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StarvingHealthLossPerSecond_MetaData), NewProp_StarvingHealthLossPerSecond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatlineComponent_Statics::NewProp_DehydrationHealthLossPerSecond = { "DehydrationHealthLossPerSecond", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatlineComponent, DehydrationHealthLossPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DehydrationHealthLossPerSecond_MetaData), NewProp_DehydrationHealthLossPerSecond_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatlineComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Hunger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_Thirst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_bIsSprinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_bWantsToSprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_bIsSneaking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_bIsWalking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_SprintCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_JogSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_SneakSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_JumpCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_SecondsForStaminaExhaustion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_CurrentStaminaExhaustionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_StarvingHealthLossPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatlineComponent_Statics::NewProp_DehydrationHealthLossPerSecond,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatlineComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatlineComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DeadTrail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatlineComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStatlineComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USaveDTActorInterface_NoRegister, (int32)VTABLE_OFFSET(UStatlineComponent, ISaveDTActorInterface), false },  // 2944390594
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatlineComponent_Statics::ClassParams = {
	&UStatlineComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStatlineComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatlineComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
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
		{ FStatline::StaticStruct, Z_Construct_UScriptStruct_FStatline_Statics::NewStructOps, TEXT("Statline"), &Z_Registration_Info_UScriptStruct_Statline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatline), 2616569430U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatlineComponent, UStatlineComponent::StaticClass, TEXT("UStatlineComponent"), &Z_Registration_Info_UClass_UStatlineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatlineComponent), 3767890956U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_2267323606(TEXT("/Script/DeadTrail"),
	Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
