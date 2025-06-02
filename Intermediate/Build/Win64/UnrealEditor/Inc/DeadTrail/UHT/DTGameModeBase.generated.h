// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/DTGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADTRAIL_DTGameModeBase_generated_h
#error "DTGameModeBase.generated.h already included, missing '#pragma once' in DTGameModeBase.h"
#endif
#define DEADTRAIL_DTGameModeBase_generated_h

#define FID_DeadTrail_Source_DeadTrail_Public_Core_DTGameModeBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADTGameModeBase(); \
	friend struct Z_Construct_UClass_ADTGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ADTGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadTrail"), NO_API) \
	DECLARE_SERIALIZER(ADTGameModeBase)


#define FID_DeadTrail_Source_DeadTrail_Public_Core_DTGameModeBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADTGameModeBase(ADTGameModeBase&&); \
	ADTGameModeBase(const ADTGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADTGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADTGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADTGameModeBase) \
	NO_API virtual ~ADTGameModeBase();


#define FID_DeadTrail_Source_DeadTrail_Public_Core_DTGameModeBase_h_7_PROLOG
#define FID_DeadTrail_Source_DeadTrail_Public_Core_DTGameModeBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DeadTrail_Source_DeadTrail_Public_Core_DTGameModeBase_h_10_INCLASS_NO_PURE_DECLS \
	FID_DeadTrail_Source_DeadTrail_Public_Core_DTGameModeBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADTRAIL_API UClass* StaticClass<class ADTGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DeadTrail_Source_DeadTrail_Public_Core_DTGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
