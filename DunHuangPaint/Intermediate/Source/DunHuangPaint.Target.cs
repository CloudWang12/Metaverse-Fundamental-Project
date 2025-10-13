using UnrealBuildTool;

public class DunHuangPaintTarget : TargetRules
{
	public DunHuangPaintTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("DunHuangPaint");
	}
}
