using UnrealBuildTool;

public class NeonSteelMain_V1_1ServerTarget : TargetRules
{
	public NeonSteelMain_V1_1ServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("NeonSteelMain_V1_1");
	}
}
