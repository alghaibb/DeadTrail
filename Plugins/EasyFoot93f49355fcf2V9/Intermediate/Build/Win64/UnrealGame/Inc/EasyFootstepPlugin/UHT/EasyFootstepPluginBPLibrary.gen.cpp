// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyFootstepPlugin/Public/EasyFootstepPluginBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyFootstepPluginBPLibrary() {}

// Begin Cross Module References
EASYFOOTSTEPPLUGIN_API UClass* Z_Construct_UClass_UEasyFootstepPluginBPLibrary();
EASYFOOTSTEPPLUGIN_API UClass* Z_Construct_UClass_UEasyFootstepPluginBPLibrary_NoRegister();
EASYFOOTSTEPPLUGIN_API UClass* Z_Construct_UClass_UFootstepComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
UPackage* Z_Construct_UPackage__Script_EasyFootstepPlugin();
// End Cross Module References

// Begin Class UEasyFootstepPluginBPLibrary Function GetSurfaceOverriderObjectTypeQuery
struct Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetSurfaceOverriderObjectTypeQuery_Statics
{
	struct EasyFootstepPluginBPLibrary_eventGetSurfaceOverriderObjectTypeQuery_Parms
	{
		TEnumAsByte<EObjectTypeQuery> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Footstep Plugin" },
		{ "Comment", "/**\n     * Returns default collision ObjectType for surface overrider objects from Easy Footstep Plugin settings.\n     */" },
		{ "ModuleRelativePath", "Public/EasyFootstepPluginBPLibrary.h" },
		{ "ToolTip", "Returns default collision ObjectType for surface overrider objects from Easy Footstep Plugin settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetSurfaceOverriderObjectTypeQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyFootstepPluginBPLibrary_eventGetSurfaceOverriderObjectTypeQuery_Parms, ReturnValue), Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1798967895
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetSurfaceOverriderObjectTypeQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetSurfaceOverriderObjectTypeQuery_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetSurfaceOverriderObjectTypeQuery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetSurfaceOverriderObjectTypeQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyFootstepPluginBPLibrary, nullptr, "GetSurfaceOverriderObjectTypeQuery", nullptr, nullptr, Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetSurfaceOverriderObjectTypeQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetSurfaceOverriderObjectTypeQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetSurfaceOverriderObjectTypeQuery_Statics::EasyFootstepPluginBPLibrary_eventGetSurfaceOverriderObjectTypeQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetSurfaceOverriderObjectTypeQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetSurfaceOverriderObjectTypeQuery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetSurfaceOverriderObjectTypeQuery_Statics::EasyFootstepPluginBPLibrary_eventGetSurfaceOverriderObjectTypeQuery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetSurfaceOverriderObjectTypeQuery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetSurfaceOverriderObjectTypeQuery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyFootstepPluginBPLibrary::execGetSurfaceOverriderObjectTypeQuery)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EObjectTypeQuery>*)Z_Param__Result=UEasyFootstepPluginBPLibrary::GetSurfaceOverriderObjectTypeQuery();
	P_NATIVE_END;
}
// End Class UEasyFootstepPluginBPLibrary Function GetSurfaceOverriderObjectTypeQuery

// Begin Class UEasyFootstepPluginBPLibrary Function GetTwoLegsPelvisBoneTranslation
struct Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics
{
	struct EasyFootstepPluginBPLibrary_eventGetTwoLegsPelvisBoneTranslation_Parms
	{
		UFootstepComponent* LeftFootstepComponent;
		UFootstepComponent* RightFootstepComponent;
		bool bSuccess;
		float PelvisTranslation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Footstep Plugin" },
		{ "Comment", "/**\n     * Returns the translation of the pelvis bone for a character with two legs.\n     *\n     * @param bSuccess                  True if components are exist, false otherwise.\n     * @param PelvisTranslation         Translation of the pelvis bone.\n     * @param LeftFootstepComponent     Footstep component for the left leg.\n     * @param RightFootstepComponent    Footstep component for the right leg.\n     */" },
		{ "ModuleRelativePath", "Public/EasyFootstepPluginBPLibrary.h" },
		{ "ToolTip", "Returns the translation of the pelvis bone for a character with two legs.\n\n@param bSuccess                  True if components are exist, false otherwise.\n@param PelvisTranslation         Translation of the pelvis bone.\n@param LeftFootstepComponent     Footstep component for the left leg.\n@param RightFootstepComponent    Footstep component for the right leg." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftFootstepComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightFootstepComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftFootstepComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightFootstepComponent;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PelvisTranslation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics::NewProp_LeftFootstepComponent = { "LeftFootstepComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyFootstepPluginBPLibrary_eventGetTwoLegsPelvisBoneTranslation_Parms, LeftFootstepComponent), Z_Construct_UClass_UFootstepComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftFootstepComponent_MetaData), NewProp_LeftFootstepComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics::NewProp_RightFootstepComponent = { "RightFootstepComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyFootstepPluginBPLibrary_eventGetTwoLegsPelvisBoneTranslation_Parms, RightFootstepComponent), Z_Construct_UClass_UFootstepComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightFootstepComponent_MetaData), NewProp_RightFootstepComponent_MetaData) };
void Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((EasyFootstepPluginBPLibrary_eventGetTwoLegsPelvisBoneTranslation_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EasyFootstepPluginBPLibrary_eventGetTwoLegsPelvisBoneTranslation_Parms), &Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics::NewProp_PelvisTranslation = { "PelvisTranslation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyFootstepPluginBPLibrary_eventGetTwoLegsPelvisBoneTranslation_Parms, PelvisTranslation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics::NewProp_LeftFootstepComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics::NewProp_RightFootstepComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics::NewProp_PelvisTranslation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyFootstepPluginBPLibrary, nullptr, "GetTwoLegsPelvisBoneTranslation", nullptr, nullptr, Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics::EasyFootstepPluginBPLibrary_eventGetTwoLegsPelvisBoneTranslation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics::EasyFootstepPluginBPLibrary_eventGetTwoLegsPelvisBoneTranslation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyFootstepPluginBPLibrary::execGetTwoLegsPelvisBoneTranslation)
{
	P_GET_OBJECT(UFootstepComponent,Z_Param_LeftFootstepComponent);
	P_GET_OBJECT(UFootstepComponent,Z_Param_RightFootstepComponent);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PelvisTranslation);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEasyFootstepPluginBPLibrary::GetTwoLegsPelvisBoneTranslation(Z_Param_LeftFootstepComponent,Z_Param_RightFootstepComponent,Z_Param_Out_bSuccess,Z_Param_Out_PelvisTranslation);
	P_NATIVE_END;
}
// End Class UEasyFootstepPluginBPLibrary Function GetTwoLegsPelvisBoneTranslation

// Begin Class UEasyFootstepPluginBPLibrary Function GetWaterObjectTypeQuery
struct Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetWaterObjectTypeQuery_Statics
{
	struct EasyFootstepPluginBPLibrary_eventGetWaterObjectTypeQuery_Parms
	{
		TEnumAsByte<EObjectTypeQuery> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Footstep Plugin" },
		{ "Comment", "/**\n     * Returns default collision ObjectType for water objects from Easy Footstep Plugin settings.\n     */" },
		{ "ModuleRelativePath", "Public/EasyFootstepPluginBPLibrary.h" },
		{ "ToolTip", "Returns default collision ObjectType for water objects from Easy Footstep Plugin settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetWaterObjectTypeQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyFootstepPluginBPLibrary_eventGetWaterObjectTypeQuery_Parms, ReturnValue), Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1798967895
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetWaterObjectTypeQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetWaterObjectTypeQuery_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetWaterObjectTypeQuery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetWaterObjectTypeQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyFootstepPluginBPLibrary, nullptr, "GetWaterObjectTypeQuery", nullptr, nullptr, Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetWaterObjectTypeQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetWaterObjectTypeQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetWaterObjectTypeQuery_Statics::EasyFootstepPluginBPLibrary_eventGetWaterObjectTypeQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetWaterObjectTypeQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetWaterObjectTypeQuery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetWaterObjectTypeQuery_Statics::EasyFootstepPluginBPLibrary_eventGetWaterObjectTypeQuery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetWaterObjectTypeQuery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetWaterObjectTypeQuery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyFootstepPluginBPLibrary::execGetWaterObjectTypeQuery)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EObjectTypeQuery>*)Z_Param__Result=UEasyFootstepPluginBPLibrary::GetWaterObjectTypeQuery();
	P_NATIVE_END;
}
// End Class UEasyFootstepPluginBPLibrary Function GetWaterObjectTypeQuery

// Begin Class UEasyFootstepPluginBPLibrary
void UEasyFootstepPluginBPLibrary::StaticRegisterNativesUEasyFootstepPluginBPLibrary()
{
	UClass* Class = UEasyFootstepPluginBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSurfaceOverriderObjectTypeQuery", &UEasyFootstepPluginBPLibrary::execGetSurfaceOverriderObjectTypeQuery },
		{ "GetTwoLegsPelvisBoneTranslation", &UEasyFootstepPluginBPLibrary::execGetTwoLegsPelvisBoneTranslation },
		{ "GetWaterObjectTypeQuery", &UEasyFootstepPluginBPLibrary::execGetWaterObjectTypeQuery },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEasyFootstepPluginBPLibrary);
UClass* Z_Construct_UClass_UEasyFootstepPluginBPLibrary_NoRegister()
{
	return UEasyFootstepPluginBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UEasyFootstepPluginBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n *\x09""Easy Footstep Plugin functions library class.\n */" },
		{ "IncludePath", "EasyFootstepPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/EasyFootstepPluginBPLibrary.h" },
		{ "ToolTip", "*     Easy Footstep Plugin functions library class." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetSurfaceOverriderObjectTypeQuery, "GetSurfaceOverriderObjectTypeQuery" }, // 566334487
		{ &Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetTwoLegsPelvisBoneTranslation, "GetTwoLegsPelvisBoneTranslation" }, // 101431243
		{ &Z_Construct_UFunction_UEasyFootstepPluginBPLibrary_GetWaterObjectTypeQuery, "GetWaterObjectTypeQuery" }, // 3317842084
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyFootstepPluginBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEasyFootstepPluginBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyFootstepPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyFootstepPluginBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEasyFootstepPluginBPLibrary_Statics::ClassParams = {
	&UEasyFootstepPluginBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyFootstepPluginBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UEasyFootstepPluginBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEasyFootstepPluginBPLibrary()
{
	if (!Z_Registration_Info_UClass_UEasyFootstepPluginBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEasyFootstepPluginBPLibrary.OuterSingleton, Z_Construct_UClass_UEasyFootstepPluginBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEasyFootstepPluginBPLibrary.OuterSingleton;
}
template<> EASYFOOTSTEPPLUGIN_API UClass* StaticClass<UEasyFootstepPluginBPLibrary>()
{
	return UEasyFootstepPluginBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEasyFootstepPluginBPLibrary);
UEasyFootstepPluginBPLibrary::~UEasyFootstepPluginBPLibrary() {}
// End Class UEasyFootstepPluginBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_EasyFootstepPluginBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEasyFootstepPluginBPLibrary, UEasyFootstepPluginBPLibrary::StaticClass, TEXT("UEasyFootstepPluginBPLibrary"), &Z_Registration_Info_UClass_UEasyFootstepPluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEasyFootstepPluginBPLibrary), 2591837322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_EasyFootstepPluginBPLibrary_h_83505633(TEXT("/Script/EasyFootstepPlugin"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_EasyFootstepPluginBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFootstepPlugin_Source_EasyFootstepPlugin_Public_EasyFootstepPluginBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
