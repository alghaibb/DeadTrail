// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/DTSaveGame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADTRAIL_DTSaveGame_generated_h
#error "DTSaveGame.generated.h already included, missing '#pragma once' in DTSaveGame.h"
#endif
#define DEADTRAIL_DTSaveGame_generated_h

#define FID_DeadTrail_Source_DeadTrail_Public_Game_DTSaveGame_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDTSaveGame(); \
	friend struct Z_Construct_UClass_UDTSaveGame_Statics; \
public: \
	DECLARE_CLASS(UDTSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadTrail"), NO_API) \
	DECLARE_SERIALIZER(UDTSaveGame)


#define FID_DeadTrail_Source_DeadTrail_Public_Game_DTSaveGame_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDTSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDTSaveGame(UDTSaveGame&&); \
	UDTSaveGame(const UDTSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDTSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTSaveGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDTSaveGame) \
	NO_API virtual ~UDTSaveGame();


#define FID_DeadTrail_Source_DeadTrail_Public_Game_DTSaveGame_h_8_PROLOG
#define FID_DeadTrail_Source_DeadTrail_Public_Game_DTSaveGame_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DeadTrail_Source_DeadTrail_Public_Game_DTSaveGame_h_11_INCLASS_NO_PURE_DECLS \
	FID_DeadTrail_Source_DeadTrail_Public_Game_DTSaveGame_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADTRAIL_API UClass* StaticClass<class UDTSaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DeadTrail_Source_DeadTrail_Public_Game_DTSaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
