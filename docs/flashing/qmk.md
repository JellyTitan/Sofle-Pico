---
layout: page
title: QMK
description: Instructions for compiling QMK firmware for the Sofle Pico
permalink: flashing/qmk
parent: Flashing
nav_order: 3
---
{: .warning}
> There is currently a [Pull Request](https://github.com/qmk/qmk_firmware/pull/23338) open to merge the Sofle Pico into QMK master. [Recent changes](https://github.com/qmk/qmk_firmware/issues/22724) to QMK require new keyboards be submitted as '[pristine](https://docs.qmk.fm/#/pr_checklist)' layouts - specifically, minimal keymap with no custom keycodes and no advanced features. The official QMK recommended method for supporting advanded features is to use `[qmk_userspace](https://github.com/qmk/qmk_userspace)`. However - until the Sofle Pico is merged into the `qmk_firmware` master branch, it will not be available for use in `qmk_userspace`. Until that merge completes, you can develop advanced features by forking the JellyTitan qmk_firmware branch `[sofle_pico_fancy](https://github.com/JellyTitan/qmk_firmware/tree/sofle_pico_fancy)`. The `default` keymap is a port of the legacy Sofle keymap, including Colemak, custom keys, and OLED status updates. 

### Compile your own firmware with QMK
If you want to build your own firmware, Sofle Pico uses [QMK Firmware][qmk_firmware]. Support is not in the main QMK repository yet, but there is a PR pending review. See the <a href="flashing/qmk">flashing help page</a> for more details. Until that PR is merged, you can use the [jellytitan/qmk_firmware](https://github.com/JellyTitan/qmk_firmware/tree/sofle_pico) fork. (Be sure to use the `sofle_pico` branch).

https://docs.qmk.fm/#/flashing?id=raspberry-pi-RP2040-uf2

To flash:
- Clone [https://github.com/jellytitan/qmk_firmware](https://github.com/jellytitan/qmk_firmware)
- Switch to the `sofle_pico` branch with `git checkout sofle_pico`
- Make sure your QMK environment [is setup][qmkintro].
- Make sure halves are not connected together with TRRS cable.
- Connect one half to USB, flash the firmware (always follow the current instructions in the QMK documentation! The command might look something like this: `qmk flash -kb sofle_choc -km default`). Use the reset button to reset the keyboard when you are asked to in console. 
- Connect the second half and flash it in the same way as the previous one.
- Disconnect the USB cable. Connect both halves together with TRRS cable.
- Connect USB cable to the **left** side.
- Enjoy!