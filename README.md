## ▶️ Usage Guide

### 1. Included TV Blueprint (Auto-Start)

The plugin includes a ready-to-use Blueprint: **`BP_TV`**, designed to automatically play media when the game starts. You can find it in:

📂 `Plugins/VlcMedia/Content/BP_TV`

Place `BP_TV` in your level, set its channel index and list, and the stream will auto-play on BeginPlay.

🧠 **Blueprint logic overview** (included in the plugin):

![BP_TV Autoplay Logic](https://raw.githubusercontent.com/Jon1969Edwards/VlcMedia_UnrealEngine/main/docs/BP_TV_AutoPlay.png)

### 2. Configuring Channels in BP_TV

Inside the Blueprint `BP_TV`:
- `ChannelList`: An array of Stream Media Source assets (M3U8, RTSP, etc.).
- `ChannelIndex`: Selects which channel to open and play on BeginPlay.

🧩 The Blueprint binds to `OnMediaOpened`, opens the selected stream, and plays it when ready.

---

### 3. Full Manual Setup (Build Your Own Actor)

If you want to build your own actor manually, here’s how:

#### Step-by-step:

1. **Create a VLC Media Player**
   - Right-click in Content Browser → *Media > VLC Media Player*
   - Name it (e.g., `MyMediaPlayer`)

2. **Create a Stream Media Source**
   - Right-click → *Media > Stream Media Source*
   - Name it and enter a stream URL (e.g., `http://yourstream.m3u8`)

3. **Create a Media Texture**
   - Right-click → *Materials & Textures > Media Texture*
   - Assign `MyMediaPlayer` as its Media Player

4. **Create a Material**
   - Create a new Material (e.g., `M_TVScreen`)
   - Use the Media Texture as the base color input
   - Set Material Domain to *Surface* and Blend Mode to *Opaque*

5. **Create a Display Mesh**
   - Use a Static Mesh (like a plane or TV screen model)
   - Apply the material to display the stream

6. **Blueprint Setup**
   - In your Actor Blueprint:
     - Add `Media Sound` and `Static Mesh` components
     - Assign `MyMediaPlayer` to both the Media Sound and Media Texture
     - Use the following logic:
       - On BeginPlay:
         - `Open Source` with the Stream Media Source
         - Optionally bind to `OnMediaOpened` to then call `Play`

---

### 📽️ Tutorial Reference

This setup follows the approach in this tutorial:  
🔗 [RTSP Livestream Media in Unreal Engine](https://www.youtube.com/watch?v=nNNzUf3zNjM)

---

### 📁 Directory Structure

Your plugin should include the following (after packaging):

Plugins/
└── VlcMedia/
├── Content/
│ ├── BP_TV.uasset
│ └── YourMediaAssets...
├── Resources/
├── Config/
├── Binaries/
├── README.md
└── VlcMedia.uplugin



> ✅ Note: The packaged plugin is precompiled. No need for source rebuilds in Blueprint-only projects.
