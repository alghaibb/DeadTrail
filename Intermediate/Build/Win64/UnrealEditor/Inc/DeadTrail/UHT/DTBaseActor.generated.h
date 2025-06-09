// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/DTBaseActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADTRAIL_DTBaseActor_generated_h
#error "DTBaseActor.generated.h already included, missing '#pragma once' in DTBaseActor.h"
#endif
#define DEADTRAIL_DTBaseActor_generated_h

#define FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTBaseActor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADTBaseActor(); \
	friend struct Z_Construct_UClass_ADTBaseActor_Statics; \
public: \
	DECLARE_CLASS(ADTBaseActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadTrail"), NO_API) \
	DECLARE_SERIALIZER(ADTBaseActor) \
	virtual UObject* _getUObject() const override { return const_cast<ADTBaseActor*>(this); }


#define FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTBaseActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADTBaseActor(ADTBaseActor&&); \
	ADTBaseActor(const ADTBaseActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADTBaseActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADTBaseActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADTBaseActor) \
	NO_API virtual ~ADTBaseActor();


#define FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTBaseActor_h_8_PROLOG
#define FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTBaseActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTBaseActor_h_11_INCLASS_NO_PURE_DECLS \
	FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTBaseActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADTRAIL_API UClass* StaticClass<class ADTBaseActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTBaseActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
