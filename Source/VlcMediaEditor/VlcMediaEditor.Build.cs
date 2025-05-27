

namespace UnrealBuildTool.Rules
{
	public class VlcMediaEditor : ModuleRules
	{
		public VlcMediaEditor(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

			PrivateDependencyModuleNames.AddRange(
				new string[] {
					"Core",
					"CoreUObject",
					"MediaAssets",
					"UnrealEd",
				});

			PrivateIncludePaths.AddRange(
				new string[] {
					"VlcMediaEditor/Private",
				});
		}
	}
}
