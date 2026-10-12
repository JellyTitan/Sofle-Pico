---
layout: page
title: VIAL
description: Instructions for flashing and configuring the Sofle Pico keymap using VIAL
permalink: flashing/vial
parent: Flashing
nav_order: 5
---

## VIAL

[VIAL](https://get.vial.today/) is a fork of QMK and VIA that adds real-time keymap editing with support for additional features: up to 32 layers, tap dance, combos, key overrides, and macros — all without recompiling firmware. Unlike VIA, VIAL embeds the keyboard definition directly in the firmware, so no JSON file upload is required.

Sofle Pico support is included in [vial-qmk](https://github.com/vial-kb/vial-qmk), contributed by [@zakki](https://github.com/zakki). To get started, follow the [official VIAL firmware build and flashing guide](https://get.vial.today/manual/first-use.html), using keyboard name `sofle_pico` and keymap `vial`.

{: .warning}
> VIAL requires its own firmware. The standard VIA `.uf2` files included in this repo will **not** work with VIAL.
