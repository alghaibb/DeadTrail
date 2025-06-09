// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadTrail/Public/Game/DTGameInstance.h"
#include "DeadTrail/Public/Interface/SaveDTActorInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDTGameInstance() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DEADTRAIL_API UClass* Z_Construct_UClass_UDTGameInstance();
DEADTRAIL_API UClass* Z_Construct_UClass_UDTGameInstance_NoRegister();
DEADTRAIL_API UClass* Z_Construct_UClass_UDTSaveGame_NoRegister();
DEADTRAIL_API UScriptStruct* Z_Construct_UScriptStruct_FSaveDTActorData();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_DeadTrail();
// End Cross Module References

// Begin Class UDTGameInstance Function AddActorData
struct Z_Construct_UFunction_UDTGameInstance_AddActorData_Statics
{
	struct DTGameInstance_eventAddActorData_Parms
	{
		FGuid ActorID;
		FSaveDTActorData ActorData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === Public API ===\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/DTGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== Public API ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDTGameInstance_AddActorData_Statics::NewProp_ActorID = { "ActorID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTGameInstance_eventAddActorData_Parms, ActorID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorID_MetaData), NewProp_ActorID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDTGameInstance_AddActorData_Statics::NewProp_ActorData = { "ActorData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTGameInstance_eventAddActorData_Parms, ActorData), Z_Construct_UScriptStruct_FSaveDTActorData, METADATA_PARAMS(0, nullptr) }; // 506164995
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTGameInstance_AddActorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTGameInstance_AddActorData_Statics::NewProp_ActorID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTGameInstance_AddActorData_Statics::NewProp_ActorData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTGameInstance_AddActorData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTGameInstance_AddActorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDTGameInstance, nullptr, "AddActorData", nullptr, nullptr, Z_Construct_UFunction_UDTGameInstance_AddActorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTGameInstance_AddActorData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTGameInstance_AddActorData_Statics::DTGameInstance_eventAddActorData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTGameInstance_AddActorData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTGameInstance_AddActorData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDTGameInstance_AddActorData_Statics::DTGameInstance_eventAddActorData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTGameInstance_AddActorData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTGameInstance_AddActorData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTGameInstance::execAddActorData)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_ActorID);
	P_GET_STRUCT(FSaveDTActorData,Z_Param_ActorData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddActorData(Z_Param_Out_ActorID,Z_Param_ActorData);
	P_NATIVE_END;
}
// End Class UDTGameInstance Function AddActorData

// Begin Class UDTGameInstance Function DEV_LoadGame
struct Z_Construct_UFunction_UDTGameInstance_DEV_LoadGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/DTGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTGameInstance_DEV_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDTGameInstance, nullptr, "DEV_LoadGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTGameInstance_DEV_LoadGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTGameInstance_DEV_LoadGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDTGameInstance_DEV_LoadGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTGameInstance_DEV_LoadGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTGameInstance::execDEV_LoadGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DEV_LoadGame();
	P_NATIVE_END;
}
// End Class UDTGameInstance Function DEV_LoadGame

// Begin Class UDTGameInstance Function DEV_SaveGame
struct Z_Construct_UFunction_UDTGameInstance_DEV_SaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/DTGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTGameInstance_DEV_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDTGameInstance, nullptr, "DEV_SaveGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTGameInstance_DEV_SaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTGameInstance_DEV_SaveGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDTGameInstance_DEV_SaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTGameInstance_DEV_SaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTGameInstance::execDEV_SaveGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DEV_SaveGame();
	P_NATIVE_END;
}
// End Class UDTGameInstance Function DEV_SaveGame

// Begin Class UDTGameInstance
void UDTGameInstance::StaticRegisterNativesUDTGameInstance()
{
	UClass* Class = UDTGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddActorData", &UDTGameInstance::execAddActorData },
		{ "DEV_LoadGame", &UDTGameInstance::execDEV_LoadGame },
		{ "DEV_SaveGame", &UDTGameInstance::execDEV_SaveGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDTGameInstance);
UClass* Z_Construct_UClass_UDTGameInstance_NoRegister()
{
	return UDTGameInstance::StaticClass();
}
struct Z_Construct_UClass_UDTGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Game/DTGameInstance.h" },
		{ "ModuleRelativePath", "Public/Game/DTGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveableDTActorData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === Save System ===\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/DTGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== Save System ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/DTGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/DTGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLoadedLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/DTGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/DTGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveableDTActorData_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveableDTActorData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SaveableDTActorData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentLoadedLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDTGameInstance_AddActorData, "AddActorData" }, // 921138068
		{ &Z_Construct_UFunction_UDTGameInstance_DEV_LoadGame, "DEV_LoadGame" }, // 2182251232
		{ &Z_Construct_UFunction_UDTGameInstance_DEV_SaveGame, "DEV_SaveGame" }, // 3112286920
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDTGameInstance_Statics::NewProp_SaveableDTActorData_ValueProp = { "SaveableDTActorData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSaveDTActorData, METADATA_PARAMS(0, nullptr) }; // 506164995
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDTGameInstance_Statics::NewProp_SaveableDTActorData_Key_KeyProp = { "SaveableDTActorData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDTGameInstance_Statics::NewProp_SaveableDTActorData = { "SaveableDTActorData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTGameInstance, SaveableDTActorData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveableDTActorData_MetaData), NewProp_SaveableDTActorData_MetaData) }; // 506164995
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDTGameInstance_Statics::NewProp_SaveGameObject = { "SaveGameObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTGameInstance, SaveGameObject), Z_Construct_UClass_UDTSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameObject_MetaData), NewProp_SaveGameObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDTGameInstance_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTGameInstance, SaveGameName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameName_MetaData), NewProp_SaveGameName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDTGameInstance_Statics::NewProp_CurrentLoadedLevel = { "CurrentLoadedLevel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTGameInstance, CurrentLoadedLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLoadedLevel_MetaData), NewProp_CurrentLoadedLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDTGameInstance_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTGameInstance, PlayerData), Z_Construct_UScriptStruct_FSaveDTActorData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerData_MetaData), NewProp_PlayerData_MetaData) }; // 506164995
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDTGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTGameInstance_Statics::NewProp_SaveableDTActorData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTGameInstance_Statics::NewProp_SaveableDTActorData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTGameInstance_Statics::NewProp_SaveableDTActorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTGameInstance_Statics::NewProp_SaveGameObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTGameInstance_Statics::NewProp_SaveGameName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTGameInstance_Statics::NewProp_CurrentLoadedLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTGameInstance_Statics::NewProp_PlayerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDTGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_DeadTrail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTGameInstance_Statics::ClassParams = {
	&UDTGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDTGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDTGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDTGameInstance()
{
	if (!Z_Registration_Info_UClass_UDTGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTGameInstance.OuterSingleton, Z_Construct_UClass_UDTGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDTGameInstance.OuterSingleton;
}
template<> DEADTRAIL_API UClass* StaticClass<UDTGameInstance>()
{
	return UDTGameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDTGameInstance);
UDTGameInstance::~UDTGameInstance() {}
// End Class UDTGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Game_DTGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTGameInstance, UDTGameInstance::StaticClass, TEXT("UDTGameInstance"), &Z_Registration_Info_UClass_UDTGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTGameInstance), 703194273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Game_DTGameInstance_h_1249708211(TEXT("/Script/DeadTrail"),
	Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Game_DTGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Game_DTGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
