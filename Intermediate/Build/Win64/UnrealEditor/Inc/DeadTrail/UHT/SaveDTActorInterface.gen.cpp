// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadTrail/Public/Interface/SaveDTActorInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDTActorInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DEADTRAIL_API UClass* Z_Construct_UClass_USaveDTActorInterface();
DEADTRAIL_API UClass* Z_Construct_UClass_USaveDTActorInterface_NoRegister();
DEADTRAIL_API UScriptStruct* Z_Construct_UScriptStruct_FSaveComponentData();
DEADTRAIL_API UScriptStruct* Z_Construct_UScriptStruct_FSaveDTActorData();
UPackage* Z_Construct_UPackage__Script_DeadTrail();
// End Cross Module References

// Begin ScriptStruct FSaveComponentData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SaveComponentData;
class UScriptStruct* FSaveComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SaveComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SaveComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveComponentData, (UObject*)Z_Construct_UPackage__Script_DeadTrail(), TEXT("SaveComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_SaveComponentData.OuterSingleton;
}
template<> DEADTRAIL_API UScriptStruct* StaticStruct<FSaveComponentData>()
{
	return FSaveComponentData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSaveComponentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interface/SaveDTActorInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteData_MetaData[] = {
		{ "Category", "SaveComponentData" },
		{ "ModuleRelativePath", "Public/Interface/SaveDTActorInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[] = {
		{ "Category", "SaveComponentData" },
		{ "ModuleRelativePath", "Public/Interface/SaveDTActorInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[] = {
		{ "Category", "SaveComponentData" },
		{ "ModuleRelativePath", "Public/Interface/SaveDTActorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ByteData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RawData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RawData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveComponentData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewProp_ByteData_Inner = { "ByteData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewProp_ByteData = { "ByteData", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveComponentData, ByteData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteData_MetaData), NewProp_ByteData_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveComponentData, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentClass_MetaData), NewProp_ComponentClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewProp_RawData_Inner = { "RawData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveComponentData, RawData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawData_MetaData), NewProp_RawData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveComponentData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewProp_ByteData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewProp_ByteData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewProp_ComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewProp_RawData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewProp_RawData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveComponentData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveComponentData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DeadTrail,
	nullptr,
	&NewStructOps,
	"SaveComponentData",
	Z_Construct_UScriptStruct_FSaveComponentData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveComponentData_Statics::PropPointers),
	sizeof(FSaveComponentData),
	alignof(FSaveComponentData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveComponentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSaveComponentData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSaveComponentData()
{
	if (!Z_Registration_Info_UScriptStruct_SaveComponentData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SaveComponentData.InnerSingleton, Z_Construct_UScriptStruct_FSaveComponentData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SaveComponentData.InnerSingleton;
}
// End ScriptStruct FSaveComponentData

// Begin ScriptStruct FSaveDTActorData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SaveDTActorData;
class UScriptStruct* FSaveDTActorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SaveDTActorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SaveDTActorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveDTActorData, (UObject*)Z_Construct_UPackage__Script_DeadTrail(), TEXT("SaveDTActorData"));
	}
	return Z_Registration_Info_UScriptStruct_SaveDTActorData.OuterSingleton;
}
template<> DEADTRAIL_API UScriptStruct* StaticStruct<FSaveDTActorData>()
{
	return FSaveDTActorData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSaveDTActorData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interface/SaveDTActorInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorTransform_MetaData[] = {
		{ "Category", "SaveDTActorData" },
		{ "ModuleRelativePath", "Public/Interface/SaveDTActorInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteData_MetaData[] = {
		{ "Category", "SaveDTActorData" },
		{ "ModuleRelativePath", "Public/Interface/SaveDTActorInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentData_MetaData[] = {
		{ "Category", "SaveDTActorData" },
		{ "ModuleRelativePath", "Public/Interface/SaveDTActorInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WasSpawned_MetaData[] = {
		{ "Category", "SaveDTActorData" },
		{ "ModuleRelativePath", "Public/Interface/SaveDTActorInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "SaveDTActorData" },
		{ "ModuleRelativePath", "Public/Interface/SaveDTActorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ByteData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentData;
	static void NewProp_WasSpawned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WasSpawned;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveDTActorData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveDTActorData_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveDTActorData, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorTransform_MetaData), NewProp_ActorTransform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSaveDTActorData_Statics::NewProp_ByteData_Inner = { "ByteData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveDTActorData_Statics::NewProp_ByteData = { "ByteData", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveDTActorData, ByteData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteData_MetaData), NewProp_ByteData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveDTActorData_Statics::NewProp_ComponentData_Inner = { "ComponentData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSaveComponentData, METADATA_PARAMS(0, nullptr) }; // 490435706
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveDTActorData_Statics::NewProp_ComponentData = { "ComponentData", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveDTActorData, ComponentData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentData_MetaData), NewProp_ComponentData_MetaData) }; // 490435706
void Z_Construct_UScriptStruct_FSaveDTActorData_Statics::NewProp_WasSpawned_SetBit(void* Obj)
{
	((FSaveDTActorData*)Obj)->WasSpawned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveDTActorData_Statics::NewProp_WasSpawned = { "WasSpawned", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSaveDTActorData), &Z_Construct_UScriptStruct_FSaveDTActorData_Statics::NewProp_WasSpawned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WasSpawned_MetaData), NewProp_WasSpawned_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSaveDTActorData_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveDTActorData, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveDTActorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDTActorData_Statics::NewProp_ActorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDTActorData_Statics::NewProp_ByteData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDTActorData_Statics::NewProp_ByteData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDTActorData_Statics::NewProp_ComponentData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDTActorData_Statics::NewProp_ComponentData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDTActorData_Statics::NewProp_WasSpawned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDTActorData_Statics::NewProp_ActorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDTActorData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveDTActorData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DeadTrail,
	nullptr,
	&NewStructOps,
	"SaveDTActorData",
	Z_Construct_UScriptStruct_FSaveDTActorData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDTActorData_Statics::PropPointers),
	sizeof(FSaveDTActorData),
	alignof(FSaveDTActorData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDTActorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSaveDTActorData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSaveDTActorData()
{
	if (!Z_Registration_Info_UScriptStruct_SaveDTActorData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SaveDTActorData.InnerSingleton, Z_Construct_UScriptStruct_FSaveDTActorData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SaveDTActorData.InnerSingleton;
}
// End ScriptStruct FSaveDTActorData

// Begin Interface USaveDTActorInterface Function GetActorSaveID
struct SaveDTActorInterface_eventGetActorSaveID_Parms
{
	FGuid ReturnValue;
};
FGuid ISaveDTActorInterface::GetActorSaveID()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetActorSaveID instead.");
	SaveDTActorInterface_eventGetActorSaveID_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USaveDTActorInterface_GetActorSaveID = FName(TEXT("GetActorSaveID"));
FGuid ISaveDTActorInterface::Execute_GetActorSaveID(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveDTActorInterface::StaticClass()));
	SaveDTActorInterface_eventGetActorSaveID_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveDTActorInterface_GetActorSaveID);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveDTActorInterface*)(O->GetNativeInterfaceAddress(USaveDTActorInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetActorSaveID_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USaveDTActorInterface_GetActorSaveID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/SaveDTActorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDTActorInterface_GetActorSaveID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDTActorInterface_eventGetActorSaveID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDTActorInterface_GetActorSaveID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDTActorInterface_GetActorSaveID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDTActorInterface_GetActorSaveID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDTActorInterface_GetActorSaveID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDTActorInterface, nullptr, "GetActorSaveID", nullptr, nullptr, Z_Construct_UFunction_USaveDTActorInterface_GetActorSaveID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDTActorInterface_GetActorSaveID_Statics::PropPointers), sizeof(SaveDTActorInterface_eventGetActorSaveID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDTActorInterface_GetActorSaveID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveDTActorInterface_GetActorSaveID_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveDTActorInterface_eventGetActorSaveID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveDTActorInterface_GetActorSaveID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveDTActorInterface_GetActorSaveID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveDTActorInterface::execGetActorSaveID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=P_THIS->GetActorSaveID_Implementation();
	P_NATIVE_END;
}
// End Interface USaveDTActorInterface Function GetActorSaveID

// Begin Interface USaveDTActorInterface Function GetSaveComponentData
struct SaveDTActorInterface_eventGetSaveComponentData_Parms
{
	FSaveComponentData ReturnValue;
};
FSaveComponentData ISaveDTActorInterface::GetSaveComponentData()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSaveComponentData instead.");
	SaveDTActorInterface_eventGetSaveComponentData_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USaveDTActorInterface_GetSaveComponentData = FName(TEXT("GetSaveComponentData"));
FSaveComponentData ISaveDTActorInterface::Execute_GetSaveComponentData(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveDTActorInterface::StaticClass()));
	SaveDTActorInterface_eventGetSaveComponentData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveDTActorInterface_GetSaveComponentData);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveDTActorInterface*)(O->GetNativeInterfaceAddress(USaveDTActorInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetSaveComponentData_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USaveDTActorInterface_GetSaveComponentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/SaveDTActorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDTActorInterface_GetSaveComponentData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDTActorInterface_eventGetSaveComponentData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSaveComponentData, METADATA_PARAMS(0, nullptr) }; // 490435706
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDTActorInterface_GetSaveComponentData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDTActorInterface_GetSaveComponentData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDTActorInterface_GetSaveComponentData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDTActorInterface_GetSaveComponentData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDTActorInterface, nullptr, "GetSaveComponentData", nullptr, nullptr, Z_Construct_UFunction_USaveDTActorInterface_GetSaveComponentData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDTActorInterface_GetSaveComponentData_Statics::PropPointers), sizeof(SaveDTActorInterface_eventGetSaveComponentData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDTActorInterface_GetSaveComponentData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveDTActorInterface_GetSaveComponentData_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveDTActorInterface_eventGetSaveComponentData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveDTActorInterface_GetSaveComponentData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveDTActorInterface_GetSaveComponentData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveDTActorInterface::execGetSaveComponentData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSaveComponentData*)Z_Param__Result=P_THIS->GetSaveComponentData_Implementation();
	P_NATIVE_END;
}
// End Interface USaveDTActorInterface Function GetSaveComponentData

// Begin Interface USaveDTActorInterface Function GetSaveData
struct SaveDTActorInterface_eventGetSaveData_Parms
{
	FSaveDTActorData ReturnValue;
};
FSaveDTActorData ISaveDTActorInterface::GetSaveData()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSaveData instead.");
	SaveDTActorInterface_eventGetSaveData_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USaveDTActorInterface_GetSaveData = FName(TEXT("GetSaveData"));
FSaveDTActorData ISaveDTActorInterface::Execute_GetSaveData(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveDTActorInterface::StaticClass()));
	SaveDTActorInterface_eventGetSaveData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveDTActorInterface_GetSaveData);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveDTActorInterface*)(O->GetNativeInterfaceAddress(USaveDTActorInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetSaveData_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USaveDTActorInterface_GetSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/SaveDTActorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDTActorInterface_GetSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDTActorInterface_eventGetSaveData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSaveDTActorData, METADATA_PARAMS(0, nullptr) }; // 506164995
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDTActorInterface_GetSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDTActorInterface_GetSaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDTActorInterface_GetSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDTActorInterface_GetSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDTActorInterface, nullptr, "GetSaveData", nullptr, nullptr, Z_Construct_UFunction_USaveDTActorInterface_GetSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDTActorInterface_GetSaveData_Statics::PropPointers), sizeof(SaveDTActorInterface_eventGetSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDTActorInterface_GetSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveDTActorInterface_GetSaveData_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveDTActorInterface_eventGetSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveDTActorInterface_GetSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveDTActorInterface_GetSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveDTActorInterface::execGetSaveData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSaveDTActorData*)Z_Param__Result=P_THIS->GetSaveData_Implementation();
	P_NATIVE_END;
}
// End Interface USaveDTActorInterface Function GetSaveData

// Begin Interface USaveDTActorInterface Function SetActorGUID
struct SaveDTActorInterface_eventSetActorGUID_Parms
{
	FGuid NewGUID;
};
void ISaveDTActorInterface::SetActorGUID(FGuid const& NewGUID)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetActorGUID instead.");
}
static FName NAME_USaveDTActorInterface_SetActorGUID = FName(TEXT("SetActorGUID"));
void ISaveDTActorInterface::Execute_SetActorGUID(UObject* O, FGuid const& NewGUID)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveDTActorInterface::StaticClass()));
	SaveDTActorInterface_eventSetActorGUID_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveDTActorInterface_SetActorGUID);
	if (Func)
	{
		Parms.NewGUID=NewGUID;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveDTActorInterface*)(O->GetNativeInterfaceAddress(USaveDTActorInterface::StaticClass())))
	{
		I->SetActorGUID_Implementation(NewGUID);
	}
}
struct Z_Construct_UFunction_USaveDTActorInterface_SetActorGUID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/SaveDTActorInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDTActorInterface_SetActorGUID_Statics::NewProp_NewGUID = { "NewGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDTActorInterface_eventSetActorGUID_Parms, NewGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewGUID_MetaData), NewProp_NewGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDTActorInterface_SetActorGUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDTActorInterface_SetActorGUID_Statics::NewProp_NewGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDTActorInterface_SetActorGUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDTActorInterface_SetActorGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDTActorInterface, nullptr, "SetActorGUID", nullptr, nullptr, Z_Construct_UFunction_USaveDTActorInterface_SetActorGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDTActorInterface_SetActorGUID_Statics::PropPointers), sizeof(SaveDTActorInterface_eventSetActorGUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDTActorInterface_SetActorGUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveDTActorInterface_SetActorGUID_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveDTActorInterface_eventSetActorGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveDTActorInterface_SetActorGUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveDTActorInterface_SetActorGUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveDTActorInterface::execSetActorGUID)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_NewGUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActorGUID_Implementation(Z_Param_Out_NewGUID);
	P_NATIVE_END;
}
// End Interface USaveDTActorInterface Function SetActorGUID

// Begin Interface USaveDTActorInterface Function SetSaveComponentData
struct SaveDTActorInterface_eventSetSaveComponentData_Parms
{
	FSaveComponentData Data;
};
void ISaveDTActorInterface::SetSaveComponentData(FSaveComponentData Data)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSaveComponentData instead.");
}
static FName NAME_USaveDTActorInterface_SetSaveComponentData = FName(TEXT("SetSaveComponentData"));
void ISaveDTActorInterface::Execute_SetSaveComponentData(UObject* O, FSaveComponentData Data)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveDTActorInterface::StaticClass()));
	SaveDTActorInterface_eventSetSaveComponentData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveDTActorInterface_SetSaveComponentData);
	if (Func)
	{
		Parms.Data=Data;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveDTActorInterface*)(O->GetNativeInterfaceAddress(USaveDTActorInterface::StaticClass())))
	{
		I->SetSaveComponentData_Implementation(Data);
	}
}
struct Z_Construct_UFunction_USaveDTActorInterface_SetSaveComponentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/SaveDTActorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDTActorInterface_SetSaveComponentData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveDTActorInterface_eventSetSaveComponentData_Parms, Data), Z_Construct_UScriptStruct_FSaveComponentData, METADATA_PARAMS(0, nullptr) }; // 490435706
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDTActorInterface_SetSaveComponentData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDTActorInterface_SetSaveComponentData_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDTActorInterface_SetSaveComponentData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDTActorInterface_SetSaveComponentData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDTActorInterface, nullptr, "SetSaveComponentData", nullptr, nullptr, Z_Construct_UFunction_USaveDTActorInterface_SetSaveComponentData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDTActorInterface_SetSaveComponentData_Statics::PropPointers), sizeof(SaveDTActorInterface_eventSetSaveComponentData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDTActorInterface_SetSaveComponentData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveDTActorInterface_SetSaveComponentData_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveDTActorInterface_eventSetSaveComponentData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveDTActorInterface_SetSaveComponentData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveDTActorInterface_SetSaveComponentData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveDTActorInterface::execSetSaveComponentData)
{
	P_GET_STRUCT(FSaveComponentData,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSaveComponentData_Implementation(Z_Param_Data);
	P_NATIVE_END;
}
// End Interface USaveDTActorInterface Function SetSaveComponentData

// Begin Interface USaveDTActorInterface Function UpdateFromSave
void ISaveDTActorInterface::UpdateFromSave()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateFromSave instead.");
}
static FName NAME_USaveDTActorInterface_UpdateFromSave = FName(TEXT("UpdateFromSave"));
void ISaveDTActorInterface::Execute_UpdateFromSave(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveDTActorInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_USaveDTActorInterface_UpdateFromSave);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ISaveDTActorInterface*)(O->GetNativeInterfaceAddress(USaveDTActorInterface::StaticClass())))
	{
		I->UpdateFromSave_Implementation();
	}
}
struct Z_Construct_UFunction_USaveDTActorInterface_UpdateFromSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/SaveDTActorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDTActorInterface_UpdateFromSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDTActorInterface, nullptr, "UpdateFromSave", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDTActorInterface_UpdateFromSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveDTActorInterface_UpdateFromSave_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USaveDTActorInterface_UpdateFromSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveDTActorInterface_UpdateFromSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveDTActorInterface::execUpdateFromSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateFromSave_Implementation();
	P_NATIVE_END;
}
// End Interface USaveDTActorInterface Function UpdateFromSave

// Begin Interface USaveDTActorInterface
void USaveDTActorInterface::StaticRegisterNativesUSaveDTActorInterface()
{
	UClass* Class = USaveDTActorInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActorSaveID", &ISaveDTActorInterface::execGetActorSaveID },
		{ "GetSaveComponentData", &ISaveDTActorInterface::execGetSaveComponentData },
		{ "GetSaveData", &ISaveDTActorInterface::execGetSaveData },
		{ "SetActorGUID", &ISaveDTActorInterface::execSetActorGUID },
		{ "SetSaveComponentData", &ISaveDTActorInterface::execSetSaveComponentData },
		{ "UpdateFromSave", &ISaveDTActorInterface::execUpdateFromSave },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveDTActorInterface);
UClass* Z_Construct_UClass_USaveDTActorInterface_NoRegister()
{
	return USaveDTActorInterface::StaticClass();
}
struct Z_Construct_UClass_USaveDTActorInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/SaveDTActorInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveDTActorInterface_GetActorSaveID, "GetActorSaveID" }, // 3393313334
		{ &Z_Construct_UFunction_USaveDTActorInterface_GetSaveComponentData, "GetSaveComponentData" }, // 4179331915
		{ &Z_Construct_UFunction_USaveDTActorInterface_GetSaveData, "GetSaveData" }, // 299534004
		{ &Z_Construct_UFunction_USaveDTActorInterface_SetActorGUID, "SetActorGUID" }, // 25971569
		{ &Z_Construct_UFunction_USaveDTActorInterface_SetSaveComponentData, "SetSaveComponentData" }, // 4244614957
		{ &Z_Construct_UFunction_USaveDTActorInterface_UpdateFromSave, "UpdateFromSave" }, // 2834860502
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISaveDTActorInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USaveDTActorInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DeadTrail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveDTActorInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveDTActorInterface_Statics::ClassParams = {
	&USaveDTActorInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveDTActorInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveDTActorInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveDTActorInterface()
{
	if (!Z_Registration_Info_UClass_USaveDTActorInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveDTActorInterface.OuterSingleton, Z_Construct_UClass_USaveDTActorInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveDTActorInterface.OuterSingleton;
}
template<> DEADTRAIL_API UClass* StaticClass<USaveDTActorInterface>()
{
	return USaveDTActorInterface::StaticClass();
}
USaveDTActorInterface::USaveDTActorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveDTActorInterface);
USaveDTActorInterface::~USaveDTActorInterface() {}
// End Interface USaveDTActorInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSaveComponentData::StaticStruct, Z_Construct_UScriptStruct_FSaveComponentData_Statics::NewStructOps, TEXT("SaveComponentData"), &Z_Registration_Info_UScriptStruct_SaveComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSaveComponentData), 490435706U) },
		{ FSaveDTActorData::StaticStruct, Z_Construct_UScriptStruct_FSaveDTActorData_Statics::NewStructOps, TEXT("SaveDTActorData"), &Z_Registration_Info_UScriptStruct_SaveDTActorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSaveDTActorData), 506164995U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveDTActorInterface, USaveDTActorInterface::StaticClass, TEXT("USaveDTActorInterface"), &Z_Registration_Info_UClass_USaveDTActorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveDTActorInterface), 2565776885U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_1223283387(TEXT("/Script/DeadTrail"),
	Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
