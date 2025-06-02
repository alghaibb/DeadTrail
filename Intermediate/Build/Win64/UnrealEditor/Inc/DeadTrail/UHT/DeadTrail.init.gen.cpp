// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeadTrail_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DeadTrail;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DeadTrail()
	{
		if (!Z_Registration_Info_UPackage__Script_DeadTrail.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DeadTrail",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x0FD81107,
				0xC8938D50,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DeadTrail.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DeadTrail.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DeadTrail(Z_Construct_UPackage__Script_DeadTrail, TEXT("/Script/DeadTrail"), Z_Registration_Info_UPackage__Script_DeadTrail, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0FD81107, 0xC8938D50));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
