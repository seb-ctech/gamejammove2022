// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Move2022_Game_Jam : ModuleRules
{
	public Move2022_Game_Jam(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule", "Niagara" });
    }
}
