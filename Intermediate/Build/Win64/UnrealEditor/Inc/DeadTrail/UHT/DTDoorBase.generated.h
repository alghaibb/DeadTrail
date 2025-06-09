// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/DTDoorBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADTRAIL_DTDoorBase_generated_h
#error "DTDoorBase.generated.h already included, missing '#pragma once' in DTDoorBase.h"
#endif
#define DEADTRAIL_DTDoorBase_generated_h

#define FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTDoorBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADTDoorBase(); \
	friend struct Z_Construct_UClass_ADTDoorBase_Statics; \
public: \
	DECLARE_CLASS(ADTDoorBase, ADTBaseActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadTrail"), NO_API) \
	DECLARE_SERIALIZER(ADTDoorBase) \
	virtual UObject* _getUObject() const override { return const_cast<ADTDoorBase*>(this); }


#define FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTDoorBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADTDoorBase(ADTDoorBase&&); \
	ADTDoorBase(const ADTDoorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADTDoorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADTDoorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADTDoorBase) \
	NO_API virtual ~ADTDoorBase();


#define FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTDoorBase_h_8_PROLOG
#define FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTDoorBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTDoorBase_h_11_INCLASS_NO_PURE_DECLS \
	FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTDoorBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADTRAIL_API UClass* StaticClass<class ADTDoorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DeadTrail_Source_DeadTrail_Public_Interaction_DTDoorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
