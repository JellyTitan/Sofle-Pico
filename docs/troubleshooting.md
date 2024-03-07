---
layout: page
nav_title: Troubleshooting
title: Troubleshooting
description: Sofle Pico troubleshooting guide
permalink: /troubleshooting
nav_order: 5
---

This troubleshooting guide has been compiled from prior Sofle generations, the [Junco build guide](https://github.com/daneski13/Junco?tab=readme-ov-file#troubleshooting), as well as the [Sofle Pico Github issues](https://github.com/JellyTitan/Sofle-Pico/issues). If you find a problem & solution not listed here, please add it using the 'edit on github' link at the bottom of this page.

{: .warning}
> This is still a work in progress!
> @todo - write this. Lean on Junco and Sofle for a structure.

[Troubleshooting](#troubleshooting)
- [LED's](#leds)
  - [No LEDs are working](#no-leds-are-working)
  - [Some LED's are not working](#some-leds-are-not-working)
- [Switches](#switches)
  - [An entire row or column of keys is not working](#an-entire-row-or-column-of-keys-is-not-working)
- [VIA](#via)
  - [VIA error 'failed to open device' or 'Received invalid protocol from device'](#via-error-failed-to-open-device-or-received-invalid-protocol-from-device)
- [QMK](#qmk)
- [Miscellaneous](#miscellaneous)
  - [Plug in the USB cable and nothing happens](#plug-in-the-usb-cable-and-nothing-happens)
- [Footnotes](#footnotes)

<hr>

## LED's 

### No LEDs are working
* Verify that the Pico is getting power.
* Ensure the level shifter is properly soldered onto the PCB, re-solder as needed. If no level shifter was used, ensure the bypass jumper was soldered correctly.
* Verify that LED_1 is oriented correctly and all the legs are soldered.

### Some LED's are not working
1. Check that the LED not turning on is in the correct orientation.
1. Check that the pads of LED not turning on and its previous are soldered correctly, re-solder for a better connection as needed.
1. If the soldering looks good and the orientation is correct, try re-soldering all the pads any way for good measure.
1. If re-soldering didn't work than the LED is likely dead or damaged in which case replace it. 

<hr>

## Switches

### An entire row or column of keys is not working
1. Likely a problem with the PCB's connection to the Pico.
2. 

<hr>

## VIA

### VIA error 'failed to open device' or 'Received invalid protocol from device'
<img src="images/build_guide_pico/via_problems_undiagnosed.png" alt="via errors" width="25%"><br>This can happen when trying to connect to VIA. Not sure what the root cause is. Users report it can be fixed by re-flashing the Pico's.[^2] Be sure you're using the VIA specific uf2 files: `sofle_pico_via_RH.uf2` & `sofle_pico_via_LH.uf2`.

<hr>

## QMK

<hr>

## Miscellaneous

### Plug in the USB cable and nothing happens
Cheap cables shipped for charging toys/lights/gadgets sometimes leave out the data-wires or don't actually implement the reversible pin-out on the USB-C connectors. Try flipping the USB-C connecter over. If that doesn't work, any spares from USB-C cellphones will likely be fine as they'll be guaranteed to have all the connections and thicker wire suitable for USB 3.0 power delivery.[^1]

## Footnotes
[^1]: Based on issue '[Some USB Cables don't work](https://github.com/JellyTitan/Sofle-Pico/issues/14)'.
[^2]: Based on discussion '[VIA not working](https://github.com/JellyTitan/Sofle-Pico/discussions/18)'.