// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/DTGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
struct FSaveDTActorData;
#ifdef DEADTRAIL_DTGameInstance_generated_h
#error "DTGameInstance.generated.h already included, missing '#pragma once' in DTGameInstance.h"
#endif
#define DEADTRAIL_DTGameInstance_generated_h

#define FID_DeadTrail_Source_DeadTrail_Public_Game_DTGameInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDEV_LoadGame); \
	DECLARE_FUNCTION(execDEV_SaveGame); \
	DECLARE_FUNCTION(execAddActorData);


#define FID_DeadTrail_Source_DeadTrail_Public_Game_DTGameInstance_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDTGameInstance(); \
	friend struct Z_Construct_UClass_UDTGameInstance_Statics; \
public: \
	DECLARE_CLASS(UDTGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DeadTrail"), NO_API) \
	DECLARE_SERIALIZER(UDTGameInstance)


#define FID_DeadTrail_Source_DeadTrail_Public_Game_DTGameInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDTGameInstance(UDTGameInstance&&); \
	UDTGameInstance(const UDTGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDTGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDTGameInstance) \
	NO_API virtual ~UDTGameInstance();


#define FID_DeadTrail_Source_DeadTrail_Public_Game_DTGameInstance_h_9_PROLOG
#define FID_DeadTrail_Source_DeadTrail_Public_Game_DTGameInstance_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DeadTrail_Source_DeadTrail_Public_Game_DTGameInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DeadTrail_Source_DeadTrail_Public_Game_DTGameInstance_h_12_INCLASS_NO_PURE_DECLS \
	FID_DeadTrail_Source_DeadTrail_Public_Game_DTGameInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADTRAIL_API UClass* StaticClass<class UDTGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DeadTrail_Source_DeadTrail_Public_Game_DTGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
