using UnrealBuildTool;

public class DunHuangPaintServerTarget : TargetRules
{
	public DunHuangPaintServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("DunHuangPaint");
	}
}
