---
layout: page
nav_title: Troubleshooting
title: Troubleshooting
permalink: /troubleshooting
nav_order: 4
---

@todo - write this. Lean on Junco and Sofle for a structure.

[Troubleshooting](#troubleshooting)
- [Plug in the USB cable and nothing happens](#plug-in-the-usb-cable-and-nothing-happens)
- [VIA error 'failed to open device' or 'Received invalid protocol from device'](#via-error-failed-to-open-device-or-received-invalid-protocol-from-device)
- [Footnotes](#footnotes)

## Plug in the USB cable and nothing happens
Cheap cables shipped for charging toys/lights/gadgets sometimes leave out the data-wires or don't actually implement the reversible pin-out on the USB-C connectors. Try flipping the USB-C connecter over. If that doesn't work, any spares from USB-C cellphones will likely be fine as they'll be guaranteed to have all the connections and thicker wire suitable for USB 3.0 power delivery.[^1]

## VIA error 'failed to open device' or 'Received invalid protocol from device'
<img src="images/build_guide_pico/via_problems_undiagnosed.png" alt="via errors" width="25%"><br>This can happen when trying to connect to VIA. Not sure what the root cause is. Users report it can be fixed by re-flashing the Pico's.[^2] Be sure you're using the VIA specific uf2 files: `sofle_pico_via_RH.uf2` & `sofle_pico_via_LH.uf2`.


## Footnotes
[^1]: Based on issue '[Some USB Cables don't work](https://github.com/JellyTitan/Sofle-Pico/issues/14)'.
[^2]: Based on discussion '[VIA not working](https://github.com/JellyTitan/Sofle-Pico/discussions/18)'.