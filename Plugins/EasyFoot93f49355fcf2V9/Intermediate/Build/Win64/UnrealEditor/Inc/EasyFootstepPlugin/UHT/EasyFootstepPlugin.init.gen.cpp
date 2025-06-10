// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyFootstepPlugin_init() {}
	EASYFOOTSTEPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EasyFootstepPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EasyFootstepPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_EasyFootstepPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_EasyFootstepPlugin_OnFootstepPlayed__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EasyFootstepPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xBCE3F2AB,
				0xFD0F249E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EasyFootstepPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EasyFootstepPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EasyFootstepPlugin(Z_Construct_UPackage__Script_EasyFootstepPlugin, TEXT("/Script/EasyFootstepPlugin"), Z_Registration_Info_UPackage__Script_EasyFootstepPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBCE3F2AB, 0xFD0F249E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
