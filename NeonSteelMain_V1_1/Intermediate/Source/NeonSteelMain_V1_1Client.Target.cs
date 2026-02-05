using UnrealBuildTool;

public class NeonSteelMain_V1_1ClientTarget : TargetRules
{
	public NeonSteelMain_V1_1ClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("NeonSteelMain_V1_1");
	}
}
