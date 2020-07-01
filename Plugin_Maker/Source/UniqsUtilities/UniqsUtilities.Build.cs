// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UniqsUtilities : ModuleRules
{
	public UniqsUtilities(ReadOnlyTargetRules Target) : base(Target)
	{
		// Override UnrealEngineBuildTool to speedup compilation times
		MinFilesUsingPrecompiledHeaderOverride = 1;
		bFasterWithoutUnity = true;
		
		// INCLUDE WHAT YOU NEED CONVENTION ACTIVATION
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bEnforceIWYU = true;
		
		/// Engine dependencies
		PublicDependencyModuleNames.AddRange(new string[] {"Core", "CoreUObject", "Engine"});
		
		// The path for the header files
		PublicIncludePaths.AddRange(new string[] { "UniqsUtilities/Public" });
		
		// The path for the source files
		PrivateIncludePaths.AddRange(new string[] { "UniqsUtilities/Private" });
	}
}
