using UnrealBuildTool;

public class NeonSteelMain_V1_1EditorTarget : TargetRules
{
	public NeonSteelMain_V1_1EditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("NeonSteelMain_V1_1");
	}
}
