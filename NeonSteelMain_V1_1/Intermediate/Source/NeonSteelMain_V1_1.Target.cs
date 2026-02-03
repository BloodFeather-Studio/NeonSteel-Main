using UnrealBuildTool;

public class NeonSteelMain_V1_1Target : TargetRules
{
	public NeonSteelMain_V1_1Target(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("NeonSteelMain_V1_1");
	}
}
