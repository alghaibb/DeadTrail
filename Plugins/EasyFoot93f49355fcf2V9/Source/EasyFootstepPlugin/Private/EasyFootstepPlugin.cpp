// Copyright Easy Systems, ltd. 2022. All Rights Reserved.
// https://www.unrealengine.com/marketplace/profile/Easy+Systems

#include "EasyFootstepPlugin.h"

#define LOCTEXT_NAMESPACE "FEasyFootstepPluginModule"

void FEasyFootstepPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FEasyFootstepPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FEasyFootstepPluginModule, EasyFootstepPlugin)