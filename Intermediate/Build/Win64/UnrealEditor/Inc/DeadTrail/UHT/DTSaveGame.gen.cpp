// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadTrail/Public/Game/DTSaveGame.h"
#include "DeadTrail/Public/Interface/SaveDTActorInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDTSaveGame() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DEADTRAIL_API UClass* Z_Construct_UClass_UDTSaveGame();
DEADTRAIL_API UClass* Z_Construct_UClass_UDTSaveGame_NoRegister();
DEADTRAIL_API UScriptStruct* Z_Construct_UScriptStruct_FSaveDTActorData();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_DeadTrail();
// End Cross Module References

// Begin Class UDTSaveGame
void UDTSaveGame::StaticRegisterNativesUDTSaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDTSaveGame);
UClass* Z_Construct_UClass_UDTSaveGame_NoRegister()
{
	return UDTSaveGame::StaticClass();
}
struct Z_Construct_UClass_UDTSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Game/DTSaveGame.h" },
		{ "ModuleRelativePath", "Public/Game/DTSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveableDTActorData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === Save Data ===\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/DTSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== Save Data ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLoadedLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/DTSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/DTSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveableDTActorData_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveableDTActorData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SaveableDTActorData;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentLoadedLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDTSaveGame_Statics::NewProp_SaveableDTActorData_ValueProp = { "SaveableDTActorData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSaveDTActorData, METADATA_PARAMS(0, nullptr) }; // 506164995
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDTSaveGame_Statics::NewProp_SaveableDTActorData_Key_KeyProp = { "SaveableDTActorData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDTSaveGame_Statics::NewProp_SaveableDTActorData = { "SaveableDTActorData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTSaveGame, SaveableDTActorData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveableDTActorData_MetaData), NewProp_SaveableDTActorData_MetaData) }; // 506164995
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDTSaveGame_Statics::NewProp_CurrentLoadedLevel = { "CurrentLoadedLevel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTSaveGame, CurrentLoadedLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLoadedLevel_MetaData), NewProp_CurrentLoadedLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDTSaveGame_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTSaveGame, PlayerData), Z_Construct_UScriptStruct_FSaveDTActorData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerData_MetaData), NewProp_PlayerData_MetaData) }; // 506164995
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDTSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTSaveGame_Statics::NewProp_SaveableDTActorData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTSaveGame_Statics::NewProp_SaveableDTActorData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTSaveGame_Statics::NewProp_SaveableDTActorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTSaveGame_Statics::NewProp_CurrentLoadedLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTSaveGame_Statics::NewProp_PlayerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDTSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_DeadTrail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTSaveGame_Statics::ClassParams = {
	&UDTSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDTSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDTSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDTSaveGame()
{
	if (!Z_Registration_Info_UClass_UDTSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTSaveGame.OuterSingleton, Z_Construct_UClass_UDTSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDTSaveGame.OuterSingleton;
}
template<> DEADTRAIL_API UClass* StaticClass<UDTSaveGame>()
{
	return UDTSaveGame::StaticClass();
}
UDTSaveGame::UDTSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDTSaveGame);
UDTSaveGame::~UDTSaveGame() {}
// End Class UDTSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Game_DTSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTSaveGame, UDTSaveGame::StaticClass, TEXT("UDTSaveGame"), &Z_Registration_Info_UClass_UDTSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTSaveGame), 2129382764U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Game_DTSaveGame_h_851087162(TEXT("/Script/DeadTrail"),
	Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Game_DTSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Source_DeadTrail_Public_Game_DTSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
