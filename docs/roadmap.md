---
layout: page
title: Variant Roadmap
description: Sofle Pico variant creation roadmap
permalink: /variants
nav_order: 6
---

# Variant Roadmap

The Sofle Pico was designed to make it easy to swap out footprints. Most of these variants could be created in an afternoon. Writing the docs usually takes longer than designing the variant. Here's some variants that I think have appeal. If you want to contribute, please open an issue on Github.

| Name | Switch | Hotswop | Notes | Status |
|-----:|-------:|-----: |-----|-----|
|Sofle Pico| MX | Y | Stable release | Done-ish. |
| Sofle Pico Choc | Choc V1 | Y |In progress | user @TheWerle is working on this. Plenty of electrical improvements that can apply to all models. |
| Sofle Pico Master Key | MX 3-pin, MX 5-pin, Choc v1 Choc V2 | N | Pico version of the Sofle_v2_soldered. Use the Cantor MX sweet combo footprint | Unassigned |
| Sofle Pico Done | MX | Y | Single sided 2-up pcb optimized for automated PCBA. Encourages vendor adoption, and lets us use the castelated holes on the Pico.| Unassigned |
| Sofle Pico Gateron low profile | Gateron Low profile | N | Not many boards use these switches - but they are really cheap. Maybe combine with Cherry low profile? | Unassigned |
| Sofle Pico Zero | MX | Y | Pico Zero has a smaller footprint that would allow for a horizontal screen. Also supports 5v output, so a solenoid backplate could be added | Unassigned |
| Sofle Pico Optical | Optical | Y (MX) | There are no optical switch split keyboards that I'm aware of. This would likely need to be based on the 'Sofle Pico Done' because PCBA would likely be required. There is an [optical board](https://github.com/girishji/optical-keyboard-old?tab=readme-ov-file) that has QMK firmware, but i've not validated that this is viable. | Unassigned |
| Sofle Pico Magnetic | Magnetic | Y (MX) | There are no magnetic switch split keyboards that I'm aware of. This would likely need to be based on the 'Sofle Pico Done' because PCBA would likely be required. Not sure if this is viable, but the recent flood of magnetic switches, along with the potential to customize actuation distance make this appealing. | Unassigned |