// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/DTInteractionInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADTBaseCharacter;
#ifdef DEADTRAIL_DTInteractionInterface_generated_h
#error "DTInteractionInterface.generated.h already included, missing '#pragma once' in DTInteractionInterface.h"
#endif
#define DEADTRAIL_DTInteractionInterface_generated_h

#define FID_DeadTrail_Source_DeadTrail_Public_Interface_DTInteractionInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsInteractable); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execGetInteractionText);


#define FID_DeadTrail_Source_DeadTrail_Public_Interface_DTInteractionInterface_h_11_CALLBACK_WRAPPERS
#define FID_DeadTrail_Source_DeadTrail_Public_Interface_DTInteractionInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DEADTRAIL_API UDTInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDTInteractionInterface(UDTInteractionInterface&&); \
	UDTInteractionInterface(const UDTInteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEADTRAIL_API, UDTInteractionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTInteractionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDTInteractionInterface) \
	DEADTRAIL_API virtual ~UDTInteractionInterface();


#define FID_DeadTrail_Source_DeadTrail_Public_Interface_DTInteractionInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDTInteractionInterface(); \
	friend struct Z_Construct_UClass_UDTInteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UDTInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DeadTrail"), DEADTRAIL_API) \
	DECLARE_SERIALIZER(UDTInteractionInterface)


#define FID_DeadTrail_Source_DeadTrail_Public_Interface_DTInteractionInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_DeadTrail_Source_DeadTrail_Public_Interface_DTInteractionInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FID_DeadTrail_Source_DeadTrail_Public_Interface_DTInteractionInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DeadTrail_Source_DeadTrail_Public_Interface_DTInteractionInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDTInteractionInterface() {} \
public: \
	typedef UDTInteractionInterface UClassType; \
	typedef IDTInteractionInterface ThisClass; \
	static FText Execute_GetInteractionText(UObject* O); \
	static void Execute_Interact(UObject* O, ADTBaseCharacter* Caller); \
	static bool Execute_IsInteractable(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_DeadTrail_Source_DeadTrail_Public_Interface_DTInteractionInterface_h_8_PROLOG
#define FID_DeadTrail_Source_DeadTrail_Public_Interface_DTInteractionInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DeadTrail_Source_DeadTrail_Public_Interface_DTInteractionInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DeadTrail_Source_DeadTrail_Public_Interface_DTInteractionInterface_h_11_CALLBACK_WRAPPERS \
	FID_DeadTrail_Source_DeadTrail_Public_Interface_DTInteractionInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADTRAIL_API UClass* StaticClass<class UDTInteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DeadTrail_Source_DeadTrail_Public_Interface_DTInteractionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
