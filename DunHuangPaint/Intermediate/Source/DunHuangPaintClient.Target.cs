using UnrealBuildTool;

public class DunHuangPaintClientTarget : TargetRules
{
	public DunHuangPaintClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("DunHuangPaint");
	}
}
