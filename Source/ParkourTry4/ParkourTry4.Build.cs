// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ParkourTry4 : ModuleRules
{
	public ParkourTry4(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
