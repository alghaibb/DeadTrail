// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyFootstepPlugin/Public/Notifies/FootstepNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootstepNotify() {}

// Begin Cross Module References
EASYFOOTSTEPPLUGIN_API UClass* Z_Construct_UClass_UFootstepNotify();
EASYFOOTSTEPPLUGIN_API UClass* Z_Construct_UClass_UFootstepNotify_NoRegister();
EASYFOOTSTEPPLUGIN_API UEnum* Z_Construct_UEnum_EasyFootstepPlugin_EFootstepType();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_EasyFootstepPlugin();
// End Cross Module References

// Begin Class UFootstepNotify
void UFootstepNotify::StaticRegisterNativesUFootstepNotify()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFootstepNotify);
UClass* Z_Construct_UClass_UFootstepNotify_NoRegister()
{
	return UFootstepNotify::StaticClass();
}
struct Z_Construct_UClass_UFootstepNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Animation notify which is used to play the footstep at the moment when the character touches the surface.\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/FootstepNotify.h" },
		{ "ModuleRelativePath", "Public/Notifies/FootstepNotify.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation notify which is used to play the footstep at the moment when the character touches the surface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootSocket_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The name of the bone in which the footstep will be played. \n// FootSocket must match the FootSocket in the footstep component.\n" },
#endif
		{ "ModuleRelativePath", "Public/Notifies/FootstepNotify.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the bone in which the footstep will be played.\nFootSocket must match the FootSocket in the footstep component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepType_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Type of the footstep.\n" },
#endif
		{ "ModuleRelativePath", "Public/Notifies/FootstepNotify.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of the footstep." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaySounds_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Determines if the footstep component should play sounds.\n" },
#endif
		{ "ModuleRelativePath", "Public/Notifies/FootstepNotify.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines if the footstep component should play sounds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnEffects_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Determines if the footstep component should spawn effects.\n" },
#endif
		{ "ModuleRelativePath", "Public/Notifies/FootstepNotify.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines if the footstep component should spawn effects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSound_MetaData[] = {
		{ "Category", "Preview" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound to play in the editor. Used only for preview.\n" },
#endif
		{ "ModuleRelativePath", "Public/Notifies/FootstepNotify.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound to play in the editor. Used only for preview." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FootSocket;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FootstepType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FootstepType;
	static void NewProp_PlaySounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlaySounds;
	static void NewProp_SpawnEffects_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnEffects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFootstepNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFootstepNotify_Statics::NewProp_FootSocket = { "FootSocket", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepNotify, FootSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootSocket_MetaData), NewProp_FootSocket_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFootstepNotify_Statics::NewProp_FootstepType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFootstepNotify_Statics::NewProp_FootstepType = { "FootstepType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepNotify, FootstepType), Z_Construct_UEnum_EasyFootstepPlugin_EFootstepType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepType_MetaData), NewProp_FootstepType_MetaData) }; // 1268002782
void Z_Construct_UClass_UFootstepNotify_Statics::NewProp_PlaySounds_SetBit(void* Obj)
{
	((UFootstepNotify*)Obj)->PlaySounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstepNotify_Statics::NewProp_PlaySounds = { "PlaySounds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFootstepNotify), &Z_Construct_UClass_UFootstepNotify_Statics::NewProp_PlaySounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaySounds_MetaData), NewProp_PlaySounds_MetaData) };
void Z_Construct_UClass_UFootstepNotify_Statics::NewProp_SpawnEffects_SetBit(void* Obj)
{
	((UFootstepNotify*)Obj)->SpawnEffects = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstepNotify_Statics::NewProp_SpawnEffects = { "SpawnEffects", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFootstepNotify), &Z_Construct_UClass_UFootstepNotify_Statics::NewProp_SpawnEffects_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnEffects_MetaData), NewProp_SpawnEffects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootstepNotify_Statics::NewProp_PreviewSound = { "PreviewSound", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFootstepNotify, PreviewSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewSound_MetaData), NewProp_PreviewSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFootstepNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepNotify_Statics::NewProp_FootSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepNotify_Statics::NewProp_FootstepType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepNotify_Statics::NewProp_FootstepType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepNotify_Statics::NewProp_PlaySounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepNotify_Statics::NewProp_SpawnEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepNotify_Statics::NewProp_PreviewSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepNotify_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFootstepNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyFootstepPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFootstepNotify_Statics::ClassParams = {
	&UFootstepNotify::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFootstepNotify_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepNotify_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UFootstepNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFootstepNotify()
{
	if (!Z_Registration_Info_UClass_UFootstepNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFootstepNotify.OuterSingleton, Z_Construct_UClass_UFootstepNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFootstepNotify.OuterSingleton;
}
template<> EASYFOOTSTEPPLUGIN_API UClass* StaticClass<UFootstepNotify>()
{
	return UFootstepNotify::StaticClass();
}
UFootstepNotify::UFootstepNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFootstepNotify);
UFootstepNotify::~UFootstepNotify() {}
// End Class UFootstepNotify

// Begin Registration
struct Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_Notifies_FootstepNotify_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFootstepNotify, UFootstepNotify::StaticClass, TEXT("UFootstepNotify"), &Z_Registration_Info_UClass_UFootstepNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFootstepNotify), 934177617U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_Notifies_FootstepNotify_h_218473578(TEXT("/Script/EasyFootstepPlugin"),
	Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_Notifies_FootstepNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeadTrail_Plugins_EasyFoot93f49355fcf2V9_Source_EasyFootstepPlugin_Public_Notifies_FootstepNotify_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
