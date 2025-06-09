// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadTrail/Public/Characters/DTPlayerCharacter.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDTPlayerCharacter() {}

// Begin Cross Module References
DEADTRAIL_API UClass* Z_Construct_UClass_ADTBaseCharacter();
DEADTRAIL_API UClass* Z_Construct_UClass_ADTPlayerCharacter();
DEADTRAIL_API UClass* Z_Construct_UClass_ADTPlayerCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_DeadTrail();
// End Cross Module References

// Begin Class ADTPlayerCharacter Function OnInteractionTriggerOverlapBegin
struct Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics
{
	struct DTPlayerCharacter_eventOnInteractionTriggerOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interaction Trigger Component\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interaction Trigger Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTPlayerCharacter_eventOnInteractionTriggerOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTPlayerCharacter_eventOnInteractionTriggerOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTPlayerCharacter_eventOnInteractionTriggerOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTPlayerCharacter_eventOnInteractionTriggerOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((DTPlayerCharacter_eventOnInteractionTriggerOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DTPlayerCharacter_eventOnInteractionTriggerOverlapBegin_Parms), &Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTPlayerCharacter_eventOnInteractionTriggerOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADTPlayerCharacter, nullptr, "OnInteractionTriggerOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::DTPlayerCharacter_eventOnInteractionTriggerOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::DTPlayerCharacter_eventOnInteractionTriggerOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTPlayerCharacter::execOnInteractionTriggerOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInteractionTriggerOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ADTPlayerCharacter Function OnInteractionTriggerOverlapBegin

// Begin Class ADTPlayerCharacter Function OnInteractionTriggerOverlapEnd
struct Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd_Statics
{
	struct DTPlayerCharacter_eventOnInteractionTriggerOverlapEnd_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComponent;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTPlayerCharacter_eventOnInteractionTriggerOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTPlayerCharacter_eventOnInteractionTriggerOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTPlayerCharacter_eventOnInteractionTriggerOverlapEnd_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComponent_MetaData), NewProp_OtherComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTPlayerCharacter_eventOnInteractionTriggerOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd_Statics::NewProp_OtherComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADTPlayerCharacter, nullptr, "OnInteractionTriggerOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd_Statics::DTPlayerCharacter_eventOnInteractionTriggerOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd_Statics::DTPlayerCharacter_eventOnInteractionTriggerOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTPlayerCharacter::execOnInteractionTriggerOverlapEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInteractionTriggerOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class ADTPlayerCharacter Function OnInteractionTriggerOverlapEnd

// Begin Class ADTPlayerCharacter Function UpdateInteractionText
static const FName NAME_ADTPlayerCharacter_UpdateInteractionText = FName(TEXT("UpdateInteractionText"));
void ADTPlayerCharacter::UpdateInteractionText()
{
	UFunction* Func = FindFunctionChecked(NAME_ADTPlayerCharacter_UpdateInteractionText);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		UpdateInteractionText_Implementation();
	}
}
struct Z_Construct_UFunction_ADTPlayerCharacter_UpdateInteractionText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interaction Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interaction Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTPlayerCharacter_UpdateInteractionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADTPlayerCharacter, nullptr, "UpdateInteractionText", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTPlayerCharacter_UpdateInteractionText_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTPlayerCharacter_UpdateInteractionText_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADTPlayerCharacter_UpdateInteractionText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTPlayerCharacter_UpdateInteractionText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTPlayerCharacter::execUpdateInteractionText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateInteractionText_Implementation();
	P_NATIVE_END;
}
// End Class ADTPlayerCharacter Function UpdateInteractionText

// Begin Class ADTPlayerCharacter
void ADTPlayerCharacter::StaticRegisterNativesADTPlayerCharacter()
{
	UClass* Class = ADTPlayerCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnInteractionTriggerOverlapBegin", &ADTPlayerCharacter::execOnInteractionTriggerOverlapBegin },
		{ "OnInteractionTriggerOverlapEnd", &ADTPlayerCharacter::execOnInteractionTriggerOverlapEnd },
		{ "UpdateInteractionText", &ADTPlayerCharacter::execUpdateInteractionText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADTPlayerCharacter);
UClass* Z_Construct_UClass_ADTPlayerCharacter_NoRegister()
{
	return ADTPlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_ADTPlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/DTPlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interaction Trigger Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interaction Trigger Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Mapping Context\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Actions\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SneakAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWalking_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSneaking_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRayTrace_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ray Tracing\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ray Tracing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableActors_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTraceLength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugShowInteractionTrace_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Characters/DTPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionTrigger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WalkAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SneakAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static void NewProp_bIsWalking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWalking;
	static void NewProp_bIsSneaking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSneaking;
	static void NewProp_bEnableRayTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRayTrace;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InteractableActors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionTraceLength;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionActor;
	static void NewProp_DebugShowInteractionTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugShowInteractionTrace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapBegin, "OnInteractionTriggerOverlapBegin" }, // 4059962551
		{ &Z_Construct_UFunction_ADTPlayerCharacter_OnInteractionTriggerOverlapEnd, "OnInteractionTriggerOverlapEnd" }, // 560881730
		{ &Z_Construct_UFunction_ADTPlayerCharacter_UpdateInteractionText, "UpdateInteractionText" }, // 2249337893
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADTPlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTPlayerCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTPlayerCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_InteractionTrigger = { "InteractionTrigger", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTPlayerCharacter, InteractionTrigger), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionTrigger_MetaData), NewProp_InteractionTrigger_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTPlayerCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTPlayerCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTPlayerCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTPlayerCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTPlayerCharacter, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAction_MetaData), NewProp_SprintAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_WalkAction = { "WalkAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTPlayerCharacter, WalkAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkAction_MetaData), NewProp_WalkAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_SneakAction = { "SneakAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTPlayerCharacter, SneakAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SneakAction_MetaData), NewProp_SneakAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTPlayerCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
void Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_bIsWalking_SetBit(void* Obj)
{
	((ADTPlayerCharacter*)Obj)->bIsWalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_bIsWalking = { "bIsWalking", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADTPlayerCharacter), &Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_bIsWalking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWalking_MetaData), NewProp_bIsWalking_MetaData) };
void Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_bIsSneaking_SetBit(void* Obj)
{
	((ADTPlayerCharacter*)Obj)->bIsSneaking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_bIsSneaking = { "bIsSneaking", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADTPlayerCharacter), &Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_bIsSneaking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSneaking_MetaData), NewProp_bIsSneaking_MetaData) };
void Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_bEnableRayTrace_SetBit(void* Obj)
{
	((ADTPlayerCharacter*)Obj)->bEnableRayTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_bEnableRayTrace = { "bEnableRayTrace", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADTPlayerCharacter), &Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_bEnableRayTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRayTrace_MetaData), NewProp_bEnableRayTrace_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_InteractableActors_Inner = { "InteractableActors", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_InteractableActors = { "InteractableActors", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTPlayerCharacter, InteractableActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableActors_MetaData), NewProp_InteractableActors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_InteractionTraceLength = { "InteractionTraceLength", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTPlayerCharacter, InteractionTraceLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionTraceLength_MetaData), NewProp_InteractionTraceLength_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_InteractionActor = { "InteractionActor", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTPlayerCharacter, InteractionActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionActor_MetaData), NewProp_InteractionActor_MetaData) };
void Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_DebugShowInteractionTrace_SetBit(void* Obj)
{
	((ADTPlayerCharacter*)Obj)->DebugShowInteractionTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_DebugShowInteractionTrace = { "DebugShowInteractionTrace", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADTPlayerCharacter), &Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_DebugShowInteractionTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugShowInteractionTrace_MetaData), NewProp_DebugShowInteractionTrace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADTPlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_InteractionTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_SprintAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_WalkAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_SneakAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_bIsWalking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_bIsSneaking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_bEnableRayTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_InteractableActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_InteractableActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_InteractionTraceLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_InteractionActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPlayerCharacter_Statics::NewProp_DebugShowInteractionTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTPlayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADTPlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADTBaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_DeadTrail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTPlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADTPlayerCharacter_Statics::ClassParams = {
	&ADTPlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADTPlayerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADTPlayerCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADTPlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ADTPlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADTPlayerCharacter()
{
	if (!Z_Registration_Info_UClass_ADTPlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADTPlayerCharacter.OuterSingleton, Z_Construct_UClass_ADTPlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADTPlayerCharacter.OuterSingleton;
}
template<> DEADTRAIL_API UClass* StaticClass<ADTPlayerCharacter>()
{
	return ADTPlayerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADTPlayerCharacter);
ADTPlayerCharacter::~ADTPlayerCharacter() {}
// End Class ADTPlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Characters_DTPlayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADTPlayerCharacter, ADTPlayerCharacter::StaticClass, TEXT("ADTPlayerCharacter"), &Z_Registration_Info_UClass_ADTPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADTPlayerCharacter), 2979850955U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Characters_DTPlayerCharacter_h_1149765717(TEXT("/Script/DeadTrail"),
	Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Characters_DTPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Characters_DTPlayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
