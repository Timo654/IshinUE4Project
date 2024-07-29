using UnrealBuildTool;

public class LikeaDragonIshin : ModuleRules {
    public LikeaDragonIshin(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "Engine",
            "InputCore",
            "KawaiiPhysics",
            "LevelSequence",
            "MacanShaders",
            "NavigationSystem",
            "Niagara",
            "PhysicsCore",
            "ProceduralMeshComponent",
            "Slate",
            "SlateCore",
            "UMG",
			"GameplayTasks",
        });
    }
}
