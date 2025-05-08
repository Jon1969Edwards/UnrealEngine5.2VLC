// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
    using System.IO;

    public class VlcMedia : ModuleRules
    {
        public VlcMedia(ReadOnlyTargetRules Target) : base(Target)
        {
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

            DynamicallyLoadedModuleNames.AddRange(
                new string[] {
                    "Media",
                });

            PrivateDependencyModuleNames.AddRange(
                new string[] {
                    "Core",
                    "CoreUObject",
                    "MediaUtils",
                    "Projects",
                    "RenderCore",
                    "VlcMediaFactory",
                });

            PrivateIncludePathModuleNames.AddRange(
                new string[] {
                    "Media",
                });

            PrivateIncludePaths.AddRange(
                new string[] {
                    "VlcMedia/Private",
                    "VlcMedia/Private/Player",
                    "VlcMedia/Private/Shared",
                    "VlcMedia/Private/Vlc",
                });

            // === Add VLC libraries ===
            string BaseDirectory = Path.GetFullPath(Path.Combine(ModuleDirectory, "..", ".."));
            string VlcDirectory = Path.Combine(BaseDirectory, "ThirdParty", "vlc", Target.Platform.ToString());

            if (Target.Platform == UnrealTargetPlatform.Win64)
            {
                // Normalize full paths and delay-load DLLs
                string LibVlcDLL = Path.GetFullPath(Path.Combine(VlcDirectory, "libvlc.dll"));
                string LibVlcCoreDLL = Path.GetFullPath(Path.Combine(VlcDirectory, "libvlccore.dll"));

                RuntimeDependencies.Add(LibVlcDLL, StagedFileType.NonUFS);
                RuntimeDependencies.Add(LibVlcCoreDLL, StagedFileType.NonUFS);

                PublicDelayLoadDLLs.Add("libvlc.dll");
                PublicDelayLoadDLLs.Add("libvlccore.dll");
            }

            // Linux (optional, uncomment if needed)
            // else if (Target.Platform == UnrealTargetPlatform.Linux)
            // {
            //     VlcDirectory = Path.Combine(VlcDirectory, Target.Architecture, "lib");
            //     AddLinuxDependency(VlcDirectory, "libvlc.so");
            //     AddLinuxDependency(VlcDirectory, "libvlc.so.5");
            //     AddLinuxDependency(VlcDirectory, "libvlccore.so");
            //     AddLinuxDependency(VlcDirectory, "libvlccore.so.9");
            // }

            // Mac (optional, uncomment if needed)
            // else if (Target.Platform == UnrealTargetPlatform.Mac)
            // {
            //     RuntimeDependencies.Add(Path.Combine(VlcDirectory, "libvlc.dylib"), StagedFileType.NonUFS);
            //     RuntimeDependencies.Add(Path.Combine(VlcDirectory, "libvlccore.dylib"), StagedFileType.NonUFS);
            // }

            // === Add VLC plug-ins ===
            string PluginDirectory = Path.Combine(VlcDirectory, "plugins");

            if (Target.Platform == UnrealTargetPlatform.Linux)
            {
                PluginDirectory = Path.Combine(VlcDirectory, "vlc", "plugins");
            }

            if (Directory.Exists(PluginDirectory))
            {
                foreach (string Plugin in Directory.EnumerateFiles(PluginDirectory, "*.*", SearchOption.AllDirectories))
                {
                    string FullPluginPath = Path.GetFullPath(Plugin);
                    RuntimeDependencies.Add(FullPluginPath, StagedFileType.NonUFS);
                }
            }

            // === (Optional) Exception/RTTI support if needed by VLC ===
            // Uncomment if VLC headers or your wrapper code require it
            // bEnableExceptions = true;
            // bUseRTTI = true;
        }

        // Optional helper for Linux
        // private void AddLinuxDependency(string DirectoryPath, string FileName)
        // {
        //     string FullPath = Path.Combine(DirectoryPath, FileName);
        //     RuntimeDependencies.Add(Path.GetFullPath(FullPath), StagedFileType.NonUFS);
        // }
    }
}
