// Copyright Easy Systems, ltd. 2022. All Rights Reserved.
// https://www.unrealengine.com/marketplace/profile/Easy+Systems

using UnrealBuildTool;
using System.IO;

public class EasyFootstepPlugin : ModuleRules
{
	public EasyFootstepPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] 
			{
                Path.Combine(ModuleDirectory, "Public"),
                Path.Combine(ModuleDirectory, "Public/Components"),
				Path.Combine(ModuleDirectory, "Public/SurfaceActors"),
				Path.Combine(ModuleDirectory, "Public/Notifies")
			}
			);

        PrivateIncludePaths.AddRange(
            new string[] {
                Path.Combine(ModuleDirectory, "Private")
            }
        );

        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"Engine",
				"Niagara",
				"PhysicsCore",
				"DeveloperSettings"
			}
			);
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore"
			}
			);
	}
}
