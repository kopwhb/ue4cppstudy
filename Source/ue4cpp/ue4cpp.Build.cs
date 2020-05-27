// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ue4cpp : ModuleRules
{
	public ue4cpp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
