using UnrealBuildTool;

public class War : ModuleRules {
    public War(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AudioMixer",
            "CableComponent",
            "Core",
            "CoreUObject",
            "DiscordRichPresenceModule",
            "Engine",
            "Foliage",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "Landscape",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "PropertyPath",
            "ReplicationGraph",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
