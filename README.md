# VLC Media Plugin for Unreal Engine 5.4.4 [WIP]

## Description
A media framework plugin for Unreal Engine 5.4.4 that enables playback of a wide range of video and audio formats using the VideoLAN (VLC) library. Supports network streams, local files, and advanced codecs not natively supported by Unreal.

## Features
- Play network streams (RTSP, HLS, MPEG-TS, etc.) and local files
- Supports a wide range of codecs via VLC
- Works on Windows (Win64)
- Blueprint and C++ integration
- MediaTexture and MediaSound support

## Installation
1. Extract the plugin folder into your project's `Plugins` directory.
2. Ensure the `ThirdParty/vlc/Win64` folder contains `libvlc.dll` and `libvlccore.dll`.
3. Open your project in Unreal Engine 5.4.4. If prompted, rebuild the plugin.
4. Enable the plugin in Edit > Plugins if not already enabled.
5. Restart the editor.

## Usage
1. Create a new VLC Media Player asset (right-click in Content Browser > Media > VLC Media Player).
2. Assign a Media Source (URL or file) to the player.
3. Create a MediaTexture and link it to the VLC Media Player.
4. Use the MediaTexture in your materials (e.g., on a TV mesh).
5. Control playback via Blueprints or C++.

## Support
- For issues, please open an issue on the plugin's GitHub page or contact the author.
- Check the [VideoLAN documentation](https://www.videolan.org/doc/) for supported formats.

## Licensing
- This plugin is distributed under the MIT License (see LICENSE file).
- VLC binaries are distributed under the LGPL. See `ThirdParty/vlc` for details and licensing information.

<a href='https://ko-fi.com/Z8Z81F4OEC' target='_blank'><img height='36' style='border:0px;height:36px;' src='https://storage.ko-fi.com/cdn/kofi6.png?v=6' border='0' alt='Buy Me a Beer at ko-fi.com' /></a>

## Credits
- Original plugin by Timo Helmers
- Adapted for Unreal Engine 5.4.4 by Jon Edwards with help from his 8 year old son Charles.
