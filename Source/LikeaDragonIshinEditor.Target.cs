using UnrealBuildTool;

public class LikeaDragonIshinEditorTarget : TargetRules {
	public LikeaDragonIshinEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"ImGui",
			"LikeaDragonIshin",
		});
	}
}
