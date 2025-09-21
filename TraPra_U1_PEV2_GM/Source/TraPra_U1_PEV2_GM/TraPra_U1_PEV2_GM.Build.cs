// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TraPra_U1_PEV2_GM : ModuleRules
{
	public TraPra_U1_PEV2_GM(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"TraPra_U1_PEV2_GM",
			"TraPra_U1_PEV2_GM/Variant_Platforming",
			"TraPra_U1_PEV2_GM/Variant_Platforming/Animation",
			"TraPra_U1_PEV2_GM/Variant_Combat",
			"TraPra_U1_PEV2_GM/Variant_Combat/AI",
			"TraPra_U1_PEV2_GM/Variant_Combat/Animation",
			"TraPra_U1_PEV2_GM/Variant_Combat/Gameplay",
			"TraPra_U1_PEV2_GM/Variant_Combat/Interfaces",
			"TraPra_U1_PEV2_GM/Variant_Combat/UI",
			"TraPra_U1_PEV2_GM/Variant_SideScrolling",
			"TraPra_U1_PEV2_GM/Variant_SideScrolling/AI",
			"TraPra_U1_PEV2_GM/Variant_SideScrolling/Gameplay",
			"TraPra_U1_PEV2_GM/Variant_SideScrolling/Interfaces",
			"TraPra_U1_PEV2_GM/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
