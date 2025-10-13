using UnrealBuildTool;

public class DunHuangPaintEditorTarget : TargetRules
{
	public DunHuangPaintEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("DunHuangPaint");
	}
}
