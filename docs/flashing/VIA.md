---
layout: page
title: VIA
description: Instructions for modifying the Sofle Pico key map using the online VIA configurator
# permalink: /pcb-ordering
parent: Flashing
nav_order: 2
---

## VIA
Until the Sofle Pico layout is merged into the official VIA repo, you'll need to load the VIA definition manually. ()
> [!IMPORTANT]
> Editing with VIA will only work after you've flashed the Sofle Pico at least once.

1. Visit https://usevia.app/
1. Open the "Settings" tab by clicking on the gear icon at the top of the page. 
1. Enable "Show Design tab". <br>
![VIA show design tab switch](/images/VIA/via_1.png)
1. Now you should see a paintbrush icon at the top of the screen. Click on that to open the "Design tab".
1. Download the Sofle Pico via config file: [sofle_pico.json](https://raw.githubusercontent.com/JellyTitan/Sofle-Pico/main/Sofle_Pico/Firmware/sofle_pico.json). (Right click and 'Save As' to download the .json file).<br>
Once you have the file locally, Click "Load" to upload `sofle_pico.json`.<br> (The Sofle Pico PR for VIA can't be submitted until the QMK PR is submitted and approved. That PR is waiting and ready to go: [VIA PR for Sofle Pico](https://github.com/JellyTitan/keyboards/blob/sofle_pico/v3/sofle_pico/sofle_pico.json)).<br>
![VIA uploading config](/images/VIA/via_2.png)
1. After the definition is loaded, you will be asked to authorize a connection to your device.<br> ![VIA device authorization](/images/VIA/via_3.png)
1. Clicking on the "Configure" tab will let you modify your layout.<br>
![VIA Configure tab](/images/VIA/via_4.png)
