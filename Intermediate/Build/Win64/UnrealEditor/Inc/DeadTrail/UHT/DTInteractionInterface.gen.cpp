// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadTrail/Public/Interface/DTInteractionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDTInteractionInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DEADTRAIL_API UClass* Z_Construct_UClass_ADTBaseCharacter_NoRegister();
DEADTRAIL_API UClass* Z_Construct_UClass_UDTInteractionInterface();
DEADTRAIL_API UClass* Z_Construct_UClass_UDTInteractionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_DeadTrail();
// End Cross Module References

// Begin Interface UDTInteractionInterface Function GetInteractionText
struct DTInteractionInterface_eventGetInteractionText_Parms
{
	FText ReturnValue;
};
FText IDTInteractionInterface::GetInteractionText()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInteractionText instead.");
	DTInteractionInterface_eventGetInteractionText_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDTInteractionInterface_GetInteractionText = FName(TEXT("GetInteractionText"));
FText IDTInteractionInterface::Execute_GetInteractionText(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDTInteractionInterface::StaticClass()));
	DTInteractionInterface_eventGetInteractionText_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDTInteractionInterface_GetInteractionText);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDTInteractionInterface*)(O->GetNativeInterfaceAddress(UDTInteractionInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetInteractionText_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UDTInteractionInterface_GetInteractionText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/DTInteractionInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDTInteractionInterface_GetInteractionText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTInteractionInterface_eventGetInteractionText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTInteractionInterface_GetInteractionText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTInteractionInterface_GetInteractionText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTInteractionInterface_GetInteractionText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTInteractionInterface_GetInteractionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDTInteractionInterface, nullptr, "GetInteractionText", nullptr, nullptr, Z_Construct_UFunction_UDTInteractionInterface_GetInteractionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTInteractionInterface_GetInteractionText_Statics::PropPointers), sizeof(DTInteractionInterface_eventGetInteractionText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTInteractionInterface_GetInteractionText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTInteractionInterface_GetInteractionText_Statics::Function_MetaDataParams) };
static_assert(sizeof(DTInteractionInterface_eventGetInteractionText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTInteractionInterface_GetInteractionText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTInteractionInterface_GetInteractionText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDTInteractionInterface::execGetInteractionText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetInteractionText_Implementation();
	P_NATIVE_END;
}
// End Interface UDTInteractionInterface Function GetInteractionText

// Begin Interface UDTInteractionInterface Function Interact
struct DTInteractionInterface_eventInteract_Parms
{
	ADTBaseCharacter* Caller;
};
void IDTInteractionInterface::Interact(ADTBaseCharacter* Caller)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
}
static FName NAME_UDTInteractionInterface_Interact = FName(TEXT("Interact"));
void IDTInteractionInterface::Execute_Interact(UObject* O, ADTBaseCharacter* Caller)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDTInteractionInterface::StaticClass()));
	DTInteractionInterface_eventInteract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDTInteractionInterface_Interact);
	if (Func)
	{
		Parms.Caller=Caller;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDTInteractionInterface*)(O->GetNativeInterfaceAddress(UDTInteractionInterface::StaticClass())))
	{
		I->Interact_Implementation(Caller);
	}
}
struct Z_Construct_UFunction_UDTInteractionInterface_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/DTInteractionInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Caller;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDTInteractionInterface_Interact_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTInteractionInterface_eventInteract_Parms, Caller), Z_Construct_UClass_ADTBaseCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTInteractionInterface_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTInteractionInterface_Interact_Statics::NewProp_Caller,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTInteractionInterface_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTInteractionInterface_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDTInteractionInterface, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_UDTInteractionInterface_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTInteractionInterface_Interact_Statics::PropPointers), sizeof(DTInteractionInterface_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTInteractionInterface_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTInteractionInterface_Interact_Statics::Function_MetaDataParams) };
static_assert(sizeof(DTInteractionInterface_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTInteractionInterface_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTInteractionInterface_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDTInteractionInterface::execInteract)
{
	P_GET_OBJECT(ADTBaseCharacter,Z_Param_Caller);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation(Z_Param_Caller);
	P_NATIVE_END;
}
// End Interface UDTInteractionInterface Function Interact

// Begin Interface UDTInteractionInterface Function IsInteractable
struct DTInteractionInterface_eventIsInteractable_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DTInteractionInterface_eventIsInteractable_Parms()
		: ReturnValue(false)
	{
	}
};
bool IDTInteractionInterface::IsInteractable() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsInteractable instead.");
	DTInteractionInterface_eventIsInteractable_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDTInteractionInterface_IsInteractable = FName(TEXT("IsInteractable"));
bool IDTInteractionInterface::Execute_IsInteractable(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDTInteractionInterface::StaticClass()));
	DTInteractionInterface_eventIsInteractable_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDTInteractionInterface_IsInteractable);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDTInteractionInterface*)(O->GetNativeInterfaceAddress(UDTInteractionInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsInteractable_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UDTInteractionInterface_IsInteractable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/DTInteractionInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDTInteractionInterface_IsInteractable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DTInteractionInterface_eventIsInteractable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDTInteractionInterface_IsInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DTInteractionInterface_eventIsInteractable_Parms), &Z_Construct_UFunction_UDTInteractionInterface_IsInteractable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTInteractionInterface_IsInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTInteractionInterface_IsInteractable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTInteractionInterface_IsInteractable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTInteractionInterface_IsInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDTInteractionInterface, nullptr, "IsInteractable", nullptr, nullptr, Z_Construct_UFunction_UDTInteractionInterface_IsInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTInteractionInterface_IsInteractable_Statics::PropPointers), sizeof(DTInteractionInterface_eventIsInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTInteractionInterface_IsInteractable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTInteractionInterface_IsInteractable_Statics::Function_MetaDataParams) };
static_assert(sizeof(DTInteractionInterface_eventIsInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTInteractionInterface_IsInteractable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTInteractionInterface_IsInteractable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDTInteractionInterface::execIsInteractable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInteractable_Implementation();
	P_NATIVE_END;
}
// End Interface UDTInteractionInterface Function IsInteractable

// Begin Interface UDTInteractionInterface
void UDTInteractionInterface::StaticRegisterNativesUDTInteractionInterface()
{
	UClass* Class = UDTInteractionInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInteractionText", &IDTInteractionInterface::execGetInteractionText },
		{ "Interact", &IDTInteractionInterface::execInteract },
		{ "IsInteractable", &IDTInteractionInterface::execIsInteractable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDTInteractionInterface);
UClass* Z_Construct_UClass_UDTInteractionInterface_NoRegister()
{
	return UDTInteractionInterface::StaticClass();
}
struct Z_Construct_UClass_UDTInteractionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/DTInteractionInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDTInteractionInterface_GetInteractionText, "GetInteractionText" }, // 100672580
		{ &Z_Construct_UFunction_UDTInteractionInterface_Interact, "Interact" }, // 3042475568
		{ &Z_Construct_UFunction_UDTInteractionInterface_IsInteractable, "IsInteractable" }, // 1368003413
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDTInteractionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDTInteractionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DeadTrail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTInteractionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTInteractionInterface_Statics::ClassParams = {
	&UDTInteractionInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTInteractionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTInteractionInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDTInteractionInterface()
{
	if (!Z_Registration_Info_UClass_UDTInteractionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTInteractionInterface.OuterSingleton, Z_Construct_UClass_UDTInteractionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDTInteractionInterface.OuterSingleton;
}
template<> DEADTRAIL_API UClass* StaticClass<UDTInteractionInterface>()
{
	return UDTInteractionInterface::StaticClass();
}
UDTInteractionInterface::UDTInteractionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDTInteractionInterface);
UDTInteractionInterface::~UDTInteractionInterface() {}
// End Interface UDTInteractionInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interface_DTInteractionInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTInteractionInterface, UDTInteractionInterface::StaticClass, TEXT("UDTInteractionInterface"), &Z_Registration_Info_UClass_UDTInteractionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTInteractionInterface), 161039295U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interface_DTInteractionInterface_h_1699877208(TEXT("/Script/DeadTrail"),
	Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interface_DTInteractionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interface_DTInteractionInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
