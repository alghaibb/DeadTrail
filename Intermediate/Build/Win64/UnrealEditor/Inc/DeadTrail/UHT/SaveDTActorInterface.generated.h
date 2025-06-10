// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/SaveDTActorInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
struct FSaveComponentData;
struct FSaveDTActorData;
#ifdef DEADTRAIL_SaveDTActorInterface_generated_h
#error "SaveDTActorInterface.generated.h already included, missing '#pragma once' in SaveDTActorInterface.h"
#endif
#define DEADTRAIL_SaveDTActorInterface_generated_h

#define FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSaveComponentData_Statics; \
	DEADTRAIL_API static class UScriptStruct* StaticStruct();


template<> DEADTRAIL_API UScriptStruct* StaticStruct<struct FSaveComponentData>();

#define FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSaveDTActorData_Statics; \
	DEADTRAIL_API static class UScriptStruct* StaticStruct();


template<> DEADTRAIL_API UScriptStruct* StaticStruct<struct FSaveDTActorData>();

#define FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSaveComponentData); \
	DECLARE_FUNCTION(execGetSaveComponentData); \
	DECLARE_FUNCTION(execUpdateFromSave); \
	DECLARE_FUNCTION(execGetSaveData); \
	DECLARE_FUNCTION(execSetActorGUID); \
	DECLARE_FUNCTION(execGetActorSaveID);


#define FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_43_CALLBACK_WRAPPERS
#define FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DEADTRAIL_API USaveDTActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USaveDTActorInterface(USaveDTActorInterface&&); \
	USaveDTActorInterface(const USaveDTActorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEADTRAIL_API, USaveDTActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDTActorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveDTActorInterface) \
	DEADTRAIL_API virtual ~USaveDTActorInterface();


#define FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_43_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSaveDTActorInterface(); \
	friend struct Z_Construct_UClass_USaveDTActorInterface_Statics; \
public: \
	DECLARE_CLASS(USaveDTActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DeadTrail"), DEADTRAIL_API) \
	DECLARE_SERIALIZER(USaveDTActorInterface)


#define FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_43_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_43_GENERATED_UINTERFACE_BODY() \
	FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_43_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_43_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISaveDTActorInterface() {} \
public: \
	typedef USaveDTActorInterface UClassType; \
	typedef ISaveDTActorInterface ThisClass; \
	static FGuid Execute_GetActorSaveID(UObject* O); \
	static FSaveComponentData Execute_GetSaveComponentData(UObject* O); \
	static FSaveDTActorData Execute_GetSaveData(UObject* O); \
	static void Execute_SetActorGUID(UObject* O, FGuid const& NewGUID); \
	static void Execute_SetSaveComponentData(UObject* O, FSaveComponentData Data); \
	static void Execute_UpdateFromSave(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_40_PROLOG
#define FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_43_CALLBACK_WRAPPERS \
	FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h_43_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADTRAIL_API UClass* StaticClass<class USaveDTActorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DeadTrail_Source_DeadTrail_Public_Interface_SaveDTActorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
