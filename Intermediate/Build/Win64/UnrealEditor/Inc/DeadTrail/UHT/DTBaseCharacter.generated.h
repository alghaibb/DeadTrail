// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/DTBaseCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADTRAIL_DTBaseCharacter_generated_h
#error "DTBaseCharacter.generated.h already included, missing '#pragma once' in DTBaseCharacter.h"
#endif
#define DEADTRAIL_DTBaseCharacter_generated_h

#define FID_DeadTrail_Source_DeadTrail_Public_Characters_DTBaseCharacter_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADTBaseCharacter(); \
	friend struct Z_Construct_UClass_ADTBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ADTBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadTrail"), NO_API) \
	DECLARE_SERIALIZER(ADTBaseCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ADTBaseCharacter*>(this); }


#define FID_DeadTrail_Source_DeadTrail_Public_Characters_DTBaseCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADTBaseCharacter(ADTBaseCharacter&&); \
	ADTBaseCharacter(const ADTBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADTBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADTBaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADTBaseCharacter) \
	NO_API virtual ~ADTBaseCharacter();


#define FID_DeadTrail_Source_DeadTrail_Public_Characters_DTBaseCharacter_h_8_PROLOG
#define FID_DeadTrail_Source_DeadTrail_Public_Characters_DTBaseCharacter_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DeadTrail_Source_DeadTrail_Public_Characters_DTBaseCharacter_h_11_INCLASS_NO_PURE_DECLS \
	FID_DeadTrail_Source_DeadTrail_Public_Characters_DTBaseCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADTRAIL_API UClass* StaticClass<class ADTBaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DeadTrail_Source_DeadTrail_Public_Characters_DTBaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
