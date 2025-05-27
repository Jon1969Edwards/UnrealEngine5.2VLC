namespace UnrealBuildTool.Rules
{
    using System.IO;

    public class VlcMedia : ModuleRules
    {
        public VlcMedia(ReadOnlyTargetRules Target) : base(Target)
        {
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

            DynamicallyLoadedModuleNames.AddRange(new string[] {
                "Media",
            });

            PrivateDependencyModuleNames.AddRange(new string[] {
                "Core",
                "CoreUObject",
                "MediaUtils",
                "Projects",
                "RenderCore",
                "VlcMediaFactory",
                "MediaAssets",
            });

            PrivateIncludePathModuleNames.AddRange(new string[] {
                "Media",
            });

            PrivateIncludePaths.AddRange(new string[] {
                "VlcMedia/Private",
                "VlcMedia/Private/Player",
                "VlcMedia/Private/Shared",
                "VlcMedia/Private/Vlc",
            });

            if (Target.Platform == UnrealTargetPlatform.Win64)
            {
                string PluginBaseDir = "$(PluginDir)/ThirdParty/vlc/Win64";

                // Automatically stage the DLLs from the plugin's directory
                RuntimeDependencies.Add($"{PluginBaseDir}/libvlc.dll", StagedFileType.NonUFS);
                RuntimeDependencies.Add($"{PluginBaseDir}/libvlccore.dll", StagedFileType.NonUFS);

                PublicDelayLoadDLLs.Add("libvlc.dll");
                PublicDelayLoadDLLs.Add("libvlccore.dll");

                // Wildcard all VLC plugin files and subfolders
                RuntimeDependencies.Add($"{PluginBaseDir}/plugins/*", StagedFileType.NonUFS);
            }

            // Optional: support for Linux or Mac (uncomment as needed)
            /*
            else if (Target.Platform == UnrealTargetPlatform.Linux)
            {
                string PluginBaseDir = "$(PluginDir)/ThirdParty/vlc/Linux";
                RuntimeDependencies.Add($"{PluginBaseDir}/libvlc.so", StagedFileType.NonUFS);
                RuntimeDependencies.Add($"{PluginBaseDir}/libvlccore.so", StagedFileType.NonUFS);
                RuntimeDependencies.Add($"{PluginBaseDir}/plugins/*", StagedFileType.NonUFS);
            }
            else if (Target.Platform == UnrealTargetPlatform.Mac)
            {
                string PluginBaseDir = "$(PluginDir)/ThirdParty/vlc/Mac";
                RuntimeDependencies.Add($"{PluginBaseDir}/libvlc.dylib", StagedFileType.NonUFS);
                RuntimeDependencies.Add($"{PluginBaseDir}/libvlccore.dylib", StagedFileType.NonUFS);
                RuntimeDependencies.Add($"{PluginBaseDir}/plugins/*", StagedFileType.NonUFS);
            }
            */

            // Optional: if needed by VLC headers or your wrapper
            // bEnableExceptions = true;
            // bUseRTTI = true;
        }
    }
}
