// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Dedicated_Test : ModuleRules
{
	public Dedicated_Test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
