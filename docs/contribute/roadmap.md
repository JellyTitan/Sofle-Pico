---
layout: page
title: Variant Roadmap
description: Sofle Pico variant creation roadmap
permalink: /contributing/variants
nav_order: 2
parent: Contributing
---

# Variant Roadmap

The Sofle Pico was designed to make it easy to swap out footprints. Most of these variants could be created in an afternoon. Writing the docs usually takes longer than designing the variant. Here's some variants that I think have appeal. If you want to contribute, please open an issue on Github.

| Name | Switch | Hotswop | RGB   | Notes | Status |
|-----:|-------:| :-----: | :---: |:-----|:----|
|Sofle Pico| MX | Y | Y |Stable release v3.5.4| New features added in v3.5.5 (to be validated) |
| Sofle Pico Choc | Choc V1 | Y | Y | v3.5.5 alpha release |  @TheWerle submitted v3.5.5 (to be validated) Plenty of electrical improvements that can apply to all models. |
| Sofle Pico Master Key | MX 3-pin, MX 5-pin, Choc v1 Choc V2 | N | N | Pico version of the Sofle_v2_soldered. Use the Cantor MX sweet combo footprint | Unclaimed |
| Sofle Pico Done | MX | Y | Y | Single sided 2-up pcb optimized for automated PCBA. Encourages vendor adoption, and lets us use the castelated holes on the Pico.| Unclaimed |
| Sofle Pico Gateron low profile | Gateron Low profile | N | ?? | Not many boards use these switches - but they are really cheap. Maybe combine with Cherry low profile? | Unclaimed |
| Sofle Pico Zero | MX | Y | Y | Pico Zero has a smaller footprint that would allow for a horizontal screen. Also supports 5v output, so a solenoid backplate could be added | Unclaimed |
| Sofle Pico Optical | Optical | Y (MX) | ?? |There are no optical switch split keyboards that I'm aware of. This would likely need to be based on the 'Sofle Pico Done' because PCBA would likely be required. There is an [optical board](https://github.com/girishji/optical-keyboard-old?tab=readme-ov-file) that has QMK firmware, but i've not validated that this is viable. | Unclaimed |
| Sofle Pico Magnetic | Magnetic | Y (MX) | ??? | There are no magnetic switch split keyboards that I'm aware of. This would likely need to be based on the 'Sofle Pico Done' because PCBA would likely be required. Not sure if this is viable, but the recent flood of magnetic switches, along with the potential to customize actuation distance make this appealing. | Unclaimed |
| Sofle Pico Master Key Wireless | MX 3-pin, MX 5-pin, Choc v1 Choc V2 | Y | N | Pico version of the Sofle_v2_soldered - but wireless. Use the Cantor MX sweet combo footprint. See discussion of merits and LOE [here](https://github.com/JellyTitan/Sofle-Pico/discussions/36). | Unclaimed |