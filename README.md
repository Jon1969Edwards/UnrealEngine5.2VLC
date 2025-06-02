## ▶️ Usage Guide

### 1. Included TV Blueprint (Auto-Start)

This plugin includes a preconfigured Blueprint actor (`BP_TV`) that automatically plays a stream on game start. No extra setup is required other than placing the actor into your level.

- **Location:** `Plugins/VlcMedia/Content/BP_TV`
- **Function:** When placed in the scene, the TV automatically starts playback of the selected stream.

This Blueprint includes logic for:
- Automatically binding to `OnMediaOpened`
- Selecting a stream from the `ChannelList` using `ChannelIndex`
- Opening the stream and triggering playback

### 2. Assigning Channels

Inside `BP_TV`:
- Use the `ChannelList` array variable to define one or more Stream Media Sources (e.g., `.m3u8`, RTSP URLs).
- Set the `ChannelIndex` to select which channel to play at runtime.

> 💡 Example: Set `ChannelList[0]` to an RTSP or M3U8 stream and `ChannelIndex = 0` to play it when the game begins.

---

### 3. Optional: Create Your Own Setup

If you'd like to configure your own setup manually, follow these steps:

1. **Create a VLC Media Player Asset**
   - Right-click → **Media > VLC Media Player**
   - Name it (e.g., `MyVLCPlayer`)

2. **Create a Stream Media Source**
   - Right-click → **Media > Stream Media Source**
   - Enter your stream URL (e.g., `http://yourstream.m3u8`)

3. **Create Media Texture & Material**
   - Create a **Media Texture** → assign `MyVLCPlayer`
   - Create a **Material** using the texture and apply it to a mesh

4. **Control Playback with Blueprints**
   - Use the nodes:
     - `Open Source`
     - `Play`
     - (Optional) `Bind Event to On Media Opened`

---

### 🎬 Reference

This setup is inspired by the [Tutorial RTSP Livestream Media in Unreal Engine](https://www.youtube.com/watch?v=nNNzUf3zNjM). The auto-start logic is now embedded in the included `BP_TV` actor for ease of use.

