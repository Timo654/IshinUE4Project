using UnrealBuildTool;

public class LikeaDragonIshinGameTarget : TargetRules {
	public LikeaDragonIshinGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"ImGui",
			"LikeaDragonIshin",
		});
	}
}
