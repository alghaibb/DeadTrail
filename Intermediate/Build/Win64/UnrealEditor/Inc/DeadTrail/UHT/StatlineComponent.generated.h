// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/StatlineComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCharacterMovementComponent;
enum class EStatlineType : uint8;
#ifdef DEADTRAIL_StatlineComponent_generated_h
#error "StatlineComponent.generated.h already included, missing '#pragma once' in StatlineComponent.h"
#endif
#define DEADTRAIL_StatlineComponent_generated_h

#define FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStatline_Statics; \
	DEADTRAIL_API static class UScriptStruct* StaticStruct();


template<> DEADTRAIL_API UScriptStruct* StaticStruct<struct FStatline>();

#define FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasJumped); \
	DECLARE_FUNCTION(execCanJump); \
	DECLARE_FUNCTION(execSetWalking); \
	DECLARE_FUNCTION(execSetSneaking); \
	DECLARE_FUNCTION(execSetSprinting); \
	DECLARE_FUNCTION(execCanSprint); \
	DECLARE_FUNCTION(execGetStatPercentile); \
	DECLARE_FUNCTION(execSetMovementComponentRef);


#define FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatlineComponent(); \
	friend struct Z_Construct_UClass_UStatlineComponent_Statics; \
public: \
	DECLARE_CLASS(UStatlineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadTrail"), NO_API) \
	DECLARE_SERIALIZER(UStatlineComponent)


#define FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_67_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStatlineComponent(UStatlineComponent&&); \
	UStatlineComponent(const UStatlineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatlineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatlineComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatlineComponent) \
	NO_API virtual ~UStatlineComponent();


#define FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_64_PROLOG
#define FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_67_INCLASS_NO_PURE_DECLS \
	FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADTRAIL_API UClass* StaticClass<class UStatlineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DeadTrail_Source_DeadTrail_Public_Components_StatlineComponent_h


#define FOREACH_ENUM_ESTATLINETYPE(op) \
	op(EStatlineType::HEALTH) \
	op(EStatlineType::STAMINA) \
	op(EStatlineType::HUNGER) \
	op(EStatlineType::THIRST) 

enum class EStatlineType : uint8;
template<> struct TIsUEnumClass<EStatlineType> { enum { Value = true }; };
template<> DEADTRAIL_API UEnum* StaticEnum<EStatlineType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
