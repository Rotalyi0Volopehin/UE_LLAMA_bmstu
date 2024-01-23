// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LAM : ModuleRules
{
	public LAM(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UELlama", "HeadMountedDisplay" });

        // Gameplay Ability System
        PublicDependencyModuleNames.AddRange(new string[] { "GameplayAbilities", "GameplayTags", "GameplayTasks" });

        // Automation Dependencies
        PublicDependencyModuleNames.AddRange(new string[] { "UnrealEd" });

        // UI
        PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // AI
        PrivateDependencyModuleNames.AddRange(new string[] { "AIModule", "NavigationSystem" });

    }
}
