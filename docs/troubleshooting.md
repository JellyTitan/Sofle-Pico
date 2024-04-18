---
layout: page
nav_title: Troubleshooting
title: Troubleshooting
description: Sofle Pico troubleshooting guide
permalink: /troubleshooting
nav_order: 7
---
# Troubleshooting
{: .no_toc }

{: .warning}
> This is still a work in progress!
> @todo - write this. Lean on Junco and Sofle for a structure.

This troubleshooting guide has been compiled from prior Sofle generations and guides, such as the [Sofle Choc troubleshooting guide](https://brianlow.notion.site/Troubleshooting-3633bac9a74b4f0298151b437c992e53), the [Junco build guide](https://github.com/daneski13/Junco?tab=readme-ov-file#troubleshooting), as well as the [Sofle Pico Github issues](https://github.com/JellyTitan/Sofle-Pico/issues). If you find a problem & solution not listed here, please add it using the 'edit on github' link at the bottom of this page.

## Table of contents
{: .no_toc .text-delta }

1. TOC
{:toc}

## Where to get help

* You can open an issue on Github [https://github.com/JellyTitan/Sofle-Pico/issues](https://github.com/JellyTitan/Sofle-Pico/issues)
* You can start a larger discussion in the [Sofle Pico Github discussions page](https://github.com/JellyTitan/Sofle-Pico/discussions).
* Not directly related to Sofle Pico, but there are many helpful folks on the [r/olkb](https://www.reddit.com/r/olkb/), [r/mechanicalKeyboards](https://www.reddit.com/r/MechanicalKeyboards/), [r/ErgoMechKeyboards](https://www.reddit.com/r/ErgoMechKeyboards/) and for all things QMK related, the [QMK Discord](https://discord.com/invite/fBGYurv). 

<hr>

## LED's 

### No LEDs are working
* Verify that the Pico is getting power.
* Ensure the level shifter is properly soldered onto the PCB, re-solder as needed. If no level shifter was used, ensure the bypass jumper was soldered correctly.
* Verify that LED_1 is oriented correctly and all the legs are soldered.

### Some LED's are not working or are flickering.
1. Check that the LED not turning on is in the correct orientation. (The leg with the notch should be aligned with the marked pad).
1. Check that the pads of LED not turning on and its previous are soldered correctly, re-solder for a better connection as needed.
1. If the soldering looks good and the orientation is correct, try re-soldering all the pads any way for good measure.
1. If re-soldering didn't work than the LED is likely dead or damaged in which case replace it. 

<hr>

## Switches

### A single key is not working
1. Check switch socket soldering. Are there any visible gaps or 'wiggle'?
1. Check for excess solder possibly bridging a nearby trace. [Use solder wick](https://www.youtube.com/watch?v=Vou2xlJkuoU) to remove some solder. 
1. Check the diodes near the switch are soldered and in the correct orientation. For surface mount diodes, the white band should be closer to the outlined pad. For through-hole diodes, the black stripe should be closer to the outlined pad.
2. Try shorting the pads with a pair of tweezers. If a key press is registered, then the problem is with the switch, socket, or diode. If no key press is registered when shorting, the problem is elsewhere.

### An entire row or column of keys is not working
1. Likely a problem with the PCB's connection to the Pico.
1. Check that all diodes in the row or column have the correct orientation and good solder joints.
1.
 
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