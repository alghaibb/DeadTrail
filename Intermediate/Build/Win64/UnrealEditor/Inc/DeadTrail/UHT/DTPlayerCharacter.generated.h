// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/DTPlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DEADTRAIL_DTPlayerCharacter_generated_h
#error "DTPlayerCharacter.generated.h already included, missing '#pragma once' in DTPlayerCharacter.h"
#endif
#define DEADTRAIL_DTPlayerCharacter_generated_h

#define FID_DeadTrail_Source_DeadTrail_Public_Characters_DTPlayerCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateInteractionText); \
	DECLARE_FUNCTION(execOnInteractionTriggerOverlapEnd); \
	DECLARE_FUNCTION(execOnInteractionTriggerOverlapBegin);


#define FID_DeadTrail_Source_DeadTrail_Public_Characters_DTPlayerCharacter_h_16_CALLBACK_WRAPPERS
#define FID_DeadTrail_Source_DeadTrail_Public_Characters_DTPlayerCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADTPlayerCharacter(); \
	friend struct Z_Construct_UClass_ADTPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ADTPlayerCharacter, ADTBaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadTrail"), NO_API) \
	DECLARE_SERIALIZER(ADTPlayerCharacter)


#define FID_DeadTrail_Source_DeadTrail_Public_Characters_DTPlayerCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADTPlayerCharacter(ADTPlayerCharacter&&); \
	ADTPlayerCharacter(const ADTPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADTPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADTPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADTPlayerCharacter) \
	NO_API virtual ~ADTPlayerCharacter();


#define FID_DeadTrail_Source_DeadTrail_Public_Characters_DTPlayerCharacter_h_13_PROLOG
#define FID_DeadTrail_Source_DeadTrail_Public_Characters_DTPlayerCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DeadTrail_Source_DeadTrail_Public_Characters_DTPlayerCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DeadTrail_Source_DeadTrail_Public_Characters_DTPlayerCharacter_h_16_CALLBACK_WRAPPERS \
	FID_DeadTrail_Source_DeadTrail_Public_Characters_DTPlayerCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_DeadTrail_Source_DeadTrail_Public_Characters_DTPlayerCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADTRAIL_API UClass* StaticClass<class ADTPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DeadTrail_Source_DeadTrail_Public_Characters_DTPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
