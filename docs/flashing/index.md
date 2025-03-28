---
layout: page
title: Flashing
description: Overview of methods used for flashing Sofle Pico
permalink: /flashing
nav_order: 4
has_children: true
---

# Sofle Pico Firmware and programming
The RP2040 supports 'drag and drop' flashing with a UF2 file on Mac or PC. This is the recommended approach if you're not familiar with compiling QMK firmware yourself.

After the first 'drag and drop' flash, you can tweak your keymaps further using VIA.

Alternately, you can compile your own firmware using QMK.

The Sofle Pico is defaults to use the left hand as master. If you want to set right hand as master, you'll need to add the [recompile in QMK](https://github.com/qmk/qmk_firmware/blob/master/docs/feature_split_keyboard.md#handedness-by-define).