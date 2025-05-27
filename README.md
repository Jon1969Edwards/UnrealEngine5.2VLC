# VLC Media Plugin for Unreal Engine 5.2.1 and 5.4.4 [WIP]

## Description
A media framework plugin for Unreal Engine 5.4.4 that enables playback of a wide range of video and audio formats using the VideoLAN (VLC) library. Supports network streams, local files, and advanced codecs not natively supported by Unreal.

## Features
- Play network streams (RTSP, HLS, MPEG-TS, etc.) and local files
- Supports a wide range of codecs via VLC
- Works on Windows (Win64)
- Blueprint and C++ integration
- MediaTexture and MediaSound support
- Packaged plugin ready for distribution (no need to compile from source)

## Installation

### Option A: Use the Packaged Plugin
1. Extract the contents of the `PackagedPlugins/VlcMedia` folder into your project's `Plugins` directory.
2. Ensure the `ThirdParty/vlc/Win64` folder contains `libvlc.dll` and `libvlccore.dll`.
3. Open your project in Unreal Engine 5.4.4.
4. Enable the plugin under **Edit > Plugins** if not already enabled.
5. Restart the editor.

### Option B: Use the Source Plugin (Developers)
1. Extract the source plugin into your project's `Plugins` folder.
2. Follow the same steps above and rebuild the project if prompted.

## Usage
1. Create a new VLC Media Player asset (right-click in Content Browser > Media > VLC Media Player).
2. Assign a Media Source (URL or file) to the player.
3. Create a MediaTexture and link it to the VLC Media Player.
4. Use the MediaTexture in your materials (e.g., on a TV mesh).
5. Control playback via Blueprints or C++.

## Documentation
[Wiki documentation](https://github.com/Jon1969Edwards/VlcMedia_UnrealEngine/wiki/%F0%9F%8F%A0-Home)

## Support
- For issues, please open an issue on the plugin's GitHub page or contact the author.
- Check the [Wiki documentation](https://github.com/Jon1969Edwards/VlcMedia_UnrealEngine/wiki/%F0%9F%8F%A0-Home)
- Check the [VideoLAN documentation](https://www.videolan.org/doc/) for supported formats.

## Licensing
- This plugin is distributed under the MIT License (see LICENSE file).
- VLC binaries are distributed under the LGPL. See `ThirdParty/vlc` for details and licensing information.

## Credits
- Original plugin by Timo Helmers
- Adapted for Unreal Engine 5.4.4 by Jon Edwards with help from his 8 year old son Charles.
- This plugin is open-source under the BSD 3-Clause license and is not affiliated with Epic Games.

- <a href='https://ko-fi.com/Z8Z81F4OEC' target='_blank'><img height='36' style='border:0px;height:36px;' src='https://storage.ko-fi.com/cdn/kofi6.png?v=6' border='0' alt='Buy Me a Beer at ko-fi.com' /></a>
