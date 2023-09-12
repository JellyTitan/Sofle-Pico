# Sofle Pico Keyboard
Sofle is 6×4+5 keys column-staggered split keyboard with encoder support, per-key RGB, dual 128x64 OLEDs, and uses the RP2040 based Pi Pico MCU. 

The Sofle Pico was designed by [Ryan Neff](https://github.com/JellyTitan), based on the excellent Sofle Choc designed by [Brian Low](https://github.com/brianlow), that is based on the fantastic Sofle RGB by [Dane Evans](https://github.com/DaneEvans) which was based on the original Sofle v2 by [Josef Adamčík](https://github.com/josefadamcik). The MX footprints came from the well-regarded foostan [kbd library](https://github.com/foostan/kbd). 
![Sofle Pico](images/sofle_pico_v3.3_hero.png)
![Sofle Pico](images/build_guide_v3/sofle_pico_v3.3.png)

[Overview](#overview)
 - [Pi Pico vs. ProMicro](#pi-pico-vs-promicro)
 - [Features inherited from V2](#features-inherited-from-v2)
 - [New features](#new-features-in-the-sofle-pico)
 - [Notable changes](#notable-changes)

[Build Guide / Assembly](#build-guide--assembly)
 - [Required Parts](#required-parts)
 - [Optional - RGB](#optional---rgb)
 - [Optional - OLED](#optional---oled)
 - [Optional - MCU Sockets](#optional---mcu-sockets)
 - [Optional - Solenoid](#optional---solenoid)
 - [Optional - Pimaroni trackball](#optional---pimaroni-trackball)
 - [Regarding key plates](#regarding-key-plates)
 - [Soldering](#soldering)
 - [Diodes](#diodes)
 - [RGB (Optional)](#rgb-optional)
 - [Pico](#pico)
 - [Hot-swap Sockets](#hot-swap-sockets)
 - [TRRS jack and Rotary Encoders](#trrs-jack-and-rotary-encoders)
 - [Case](#case)
 - [Flashing the firmware](#flashing-the-firmware)

[Troubleshooting](#troubleshooting)
 - [No LEDs are working](#no-leds-are-working)
 - [Some LEDs are not working](#some-leds-are-not-working)
 - [An entire row or column of keys is not working](#an-entire-row-or-column-of-keys-is-not-working)
 - [Random key or keys not working](#random-key-or-keys-not-working)

## Overview

### Pi Pico vs. ProMicro
Whereas [Sofle v1 & v2](https://github.com/josefadamcik/SofleKeyboard) used the Promicro MCU, Sofle Pico uses the rp2040 MCU, which offers larger memory options at a low price point. This allows for more features like screen animations and RGB animation effects.

Although there is a QMK option to port the legacy pro-micro config to rp2040 boards that are backwards compatible, the rp2040 pins are not 5v tolerant. Essentially, the per key rgb doesn't work as it should.

There are many rp2040 boards available in the same form factor as the Promicro, but they tend to be 4-8 times more costly than the Pi Pico form factor, and inexpensive Pi Pico clones are readily available.

Sofle's have traditionally had a cutout above the thumb cluster. That space is now occupied by the larger form factor of the pi pico, so some of the aesthetic heritage is lost. PCB manufacturing generally charges by the square mm, so there was no additional cost from a production perspective.

Accommodating the voltage variances between the Promicro and the Pi Pico required drastic wiring changes which results in the loss of backward compatibility with Sofle v1/v2 firmware. The SK6812MINI-E LEDs commonly used with Promicro keyboards require 5v logic. The Pi Pico uses 3.3v logic. A level shifter, along with a lower current variant of the SK6803MINI-E make this work. Thank you to the [Junco](https://github.com/Daneski13/Junco#optional---rgb) for providing a viable 3V logic circuit.

### Features inherited from V2
 - Hotswap sockets are required. 
 - Per-key RGB remains optional and uses the relatively easy to solder SK6803 MINI-E LEDs. (Note lower current variant required for Pico)
 - Key placement has not changed. (mostly - 3deg thumb key rotation).

### New features in the Sofle Pico
* Default OLED is now 64x128, as opposed to 32x128.
* OLED ports are separated and offset, so no jumper soldering is required.
* 2 Common SSD1306 64x128 OLED variants are supported. (circle corner and oval corner).
* Added clearly labeled and easily accessible [Pimoroni trackball](https://shop.pimoroni.com/en-us/products/trackball-breakout) tie in footprint.
* Simplified the PCB & improved labeling to help with build troubleshooting. (The addition of a GND & VCC planes specifically).
* Added through-hole/Surface mount hybrid footprints for the per-switch diodes.
* Added a 'breakout' section for the unused pico pins to allow for easy tinkering.
* The default communication protocol is full duplex TX/RX.
* Designed for automated PCB Assembly. 

### Notable changes
* Improved labeling and footprint masking to poke-yoke the build process.
* 3 degree rotation of the innermost thumb key. 
* Sofle V1 & V2 firmware is not compatible due to the complete rewire for pi pico.
* Added drill holes above the mini-e hole to allow for easier tweezer placement.
* MCU footprints side-by-side to reduce potential shorts.
* Removed legacy I2C Bus implementation.
* Modified thumb cluster outline to accommodate 1.25u thumb keycap.
* Rounded board corners with a consistent radius. 
* Added teardrops to decrease likelihood of acid traps during manufacture.
* Added VCC & GND net to simplify routing.
* Poka-yoke TRRS footprint by removing unnecessary solder masks.
* Tweaked diode placement & improved labeling for easier troubleshooting.
* Removed reset button. It is no longer needed, as the Pico has a physical rest button.
* The MCU is now facing upward. There are many PiPico board variants with buttons placed differently. Facing the MCU upward ensures accessability.
* Optimized for PNP manufacture. The SMD location below the switches allows the diode to be installed on either side.
* Optimized for hand building - every SMD component has an alternate through hole footprint. (Except for the level-shifter, because 3.3v logic became popular after SMDs became common, so there is no through-hole component available).
* Tenting puck mounting holes added. [SplitKB](https://splitkb.com/products/tenting-puck) or 3d print your own: design by [
Bubbleology](https://www.printables.com/model/235433-tenting-puck-for-keyboard-tripod-mount/comments/943096).
![Sofle V3](images/build_guide_v3/tenting_puck.webp)
## Build Guide / Assembly

<hr>

### Required Parts



| Name | Count | Remarks | Potential Storefront |
| ------------------------------------ | ----------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------- |
| PCB | 2 | The PCB should be 1.6mm thick. I used JLCPCB's default settings only customizing the PCB color, and selecting 'lead free'. | Manufacturers such as JLCPCB, LCSC, and Elecrow. [Price comparison tool](https://pcbshopper.com/) | |
| MX Hot-swap Sockets | 58 | The PCB requires sockets. Switches cannot be soldered directly to the board. | [Aliexpress](https://www.aliexpress.us/item/3256803687338432.html) |
| Diodes | 62 | Surface mount SOD-123 1N4148, or through-hole 1N4148 diode. These are common, any old one should do. Through hole is usually easier to solder. | SMD: [AliExpress](https://www.aliexpress.us/item/2251832663565152.html) [JLCPCB](https://jlcpcb.com/partdetail/3368026-1N4148SOD123/C2972760) Through-hole: [AliExpress](https://www.aliexpress.us/item/2251832473773777.html) |
| Raspberry Pi Picos | 2 | PCB is specifically designed with the official Pico and YD-2040 type clone in mind, however several [other clone types](https://docs.google.com/spreadsheets/d/1LPjy6F5lHfUkmsrM5zlZmc5auYy5YBakW8Awe6hYFWo) should be compatible (Waveshare, WeAct, EstarDyn, Tenstar). Although the Pico is designed with a surface mount option, the Sofle Pico is designed assuming the Pico is soldered with [headers](https://www.sparkfun.com/products/17907).| [AliExpress, YD-2040](https://www.aliexpress.us/item/3256803909832318.html) |
| TRRS Jacks | 2 | PJ-320A | [AliExpress](https://www.aliexpress.us/item/2255800474897706.html) |
| TRRS or TRS Cable (3.5mm "Headphone" Cable) | 1 | TRRS (4 pole) or TRS (3 pole) will work. | |
| MX Style Switches | 58 | | |
| Key Caps | 58 | | |
| Rotary Encoders and Caps | 2 | EC-11 Rotary Encoder. 20mm stem is the most common. Make sure the knob matches the encoder's shaft diameter, depth and shape. SA keycaps can be quite tall, so you may want to use tall knobs as well.| [AliExpress 20mm](https://www.aliexpress.us/item/2261799870168498.html) |
| M2 8mm FF spacers | 12 | Connects the bottom plate to the key plate, running through the PCB | |
| M2 12mm FF spacers | 6 | Connects the bottom plate to the OLED plate, running through the PCB and the keyplate. @todo - is it really 12mm? | |
| M2x4mm screws | 18 | M2 screws. | |
| Case | 1 Left Set, 1 Right Set | Case files are located in the [case folder](./Case). | @todo - regenerate after v3.3 prototype validated |
| Micro USB Cable or USB-C Cable | 1 | USB cable for connecting the keyboard to your computer, dependent on what the Pico you chose uses. | |

<hr>

### Optional Parts - RGB

These parts are necessary for the RGB lighting.

| Name | Count | Remarks | Potential Storefront |
| --------------------------------------------- | ----- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------ |
| 74AHCT1G125 Voltage Level Shifter/ Bus Buffer | 2 | SOT23-5 Footprint <br/> <br/> Required for LEDs to work properly, Pico runs at 3.3V while the LEDs will require 5V | [AliExpress](https://www.aliexpress.us/item/3256803831434811.html) [JLCPCB](https://jlcpcb.com/partdetail/TexasInstruments-SN74AHCT1G125DBVR/C7484)|
| RGB SMD LEDs (Prefer SK6803MINI-E) | 74 | The 3MA SK6803MINI-E is highly recommended over the more traditional 12MA SK6812MINI-E due to its smaller current draw, allowing the LEDs to be very bright at manageable wattage. | [AliExpress](https://www.aliexpress.us/item/3256803450292556.html) [JLCPCB](https://jlcpcb.com/partdetail/Normand-SK6803MINIE/C5184589)|

<hr>

### Optional Parts - OLED
| Name | Count | Remarks | Potential Storefront |
| - | - |-|-|
| SSD1306	128x64 | 1-2 | These are monochromatic, usually white, yellow, or blue. <br> <br> *!Note - at the time this board was built, the 128x64 SSD1306 OLED is not officially supported on ARM boards. (Pico is ARM, promicro is AMD). @todo - verify 64 & submit PR? Note: There are two common variants of this OLED. One has circular holes in the corner, and the other has oval holes. These variants have the GND/VCC pins switched. The version with the round holes is preferred, but either will work. (The round holes is installed 10mm higher, so it is preferred based soley on aesthetics.) ![Sofle V3](images/build_guide_v3/oled_round.png) ![Sofle V3](images/build_guide_v3/oled_oval.png)| [AliExpress](https://www.aliexpress.us/item/2251832457635357.html)|


### Optional - MCU Sockets
This is strictly a quality of life upgrade. The older ProMicro's were notorious for weak jacks that could snap off. This is probably not needed with the PiPico.
| Name | Count | Remarks | Potential Storefront |
| - | - |-|-|
2.54mm Round Female Pin Header | 4 sets of 20 | They commonly come in strips of 40. They don't always snap in half cleanly, so get extra | [Aliexpress](https://www.aliexpress.us/item/2251832729504304.html)
Needle pin male connectors | 80 | Diode legs would also work, but these little sets of 4 are nice to work with. | [Aliexpress](https://www.aliexpress.us/item/2251832650595759.html?spm=a2g0o.order_list.order_list_main.186.15a91802YueygY&gatewayAdapt=glo2usa)
### Optional - Solenoid
The solenoid feature is still a work in progress. It is designed to attach to a seperate backplate.
Based on this [diagram by Adafruit](https://cdn-shop.adafruit.com/product-files/412/solenoid_driver.pdf). 
[QMK Docs for solenoid.](https://docs.qmk.fm/#/feature_haptic_feedback?id=solenoids) This needs to be re-worked to account for the lower voltage and draw of the Pico. (I tried the existing circuit with a 1k resistor - Pico was not strong enough).
| Name | Count | Remarks | Potential Storefront |
| - | - |-|-|
| Solenoid | 1 | 4.5v Solenoid - I've only been able to get the Amazon Uxcell solenoid to work. I suspect the voltage is a bit low. | [Amazon](https://www.amazon.com/dp/B013DR655A/ref=cm_sw_em_r_mt_dp_YHJRTZ5YY042HC7522VG?_encoding=UTF8&psc=1)
 ~~2.2k Resistor~~ | 1 | ~~The 2.2k resistor works with the 5v ProMicro.~~ @todo do the math here.| |
 1N4001 Diode or MUR340 | 1 | Either the through hole IN4001 or the Surface mount MUR340 will work. | [AliExpress](https://www.aliexpress.us/item/3256802685977811.html)|
 TIP 120 | 1 | @todo Do the math here - is this still the best part? | 

### Optional - Pimoroni trackball
Electrically, this should work - but i have not validated it. 
| Name | Count | Remarks | Potential Storefront |
|-|-|-|-|
| Pimoroni trackball | 1 | The default footprint replaces a rotary encoder. Installing flush to the board is a bit too low to be comfortable, so you may want to raise it. @todo elaborate.|[Pimoroni](https://shop.pimoroni.com/en-us/products/trackball-breakout)|


### Regarding key plates:
 - The top/key plates from Sofle v1, v2, RGB and Choc versions are not compatible.
 - The OLEDs are taller than the switch plate, so they have their own separate taller plates. Acrylic is recommended for the OLED plates because the two types of OLEDS can be installed higher/lower.
 - Spacers are intended to pass through the main pcb and screw onto the bottom plates, top plates, and OLED plates. 

@todo - where does this go?
The Sofle Pico was designed by [Ryan Neff](https://github.com/JellyTitan), based on the excellent Sofle Choc designed by [Brian Low](https://github.com/brianlow), that is based on the fantastic Sofle RGB by [Dane Evans](https://github.com/DaneEvans) which was based on the original Sofle v2 by [Josef Adamčík](https://github.com/josefadamcik). The Choc V2 footprints came from the well-regarded foostan [kbd library](https://github.com/foostan/kbd). 

## Updated Build Guide and Kits

@todo - write this.

@todo refresh Gerbers and update path
@todo: Mention "Lead free" 
@todo: Mention Jlcpcbpart number placement
@todo: seperate jlcpcb gerber?
@todo: revise this -> See [sourcing][sourcing].

@todo - rewrite left off here <<<<<
## Tools and materials

- soldering iron and solder
- no-clean flux makes soldering easier
- solder wick or desoldering pump to correct mistakes
- good tweezers
- flush cutters to trim diode legs
- masking, kapton or electrical tape
- isopropyl-alcohol for cleaning
- screwdriver
- 1.5mm hex key for the set screw on the encoder knob
- multimeter for troubleshooting


## Steps

### Prepare

Make sure you know which side you are working on, and don't make two left hand sides by mistake. Stick a piece of tape on the front side of both PCBs to help remember.

This guide is written in the order I like to install components.

We will start with the components on the back, shortest to tallest:
 - diodes
 - LEDs
 - switch sockets

Then install the components on the front:
 - OLED jumpers
 - ProMicro & socket
 - OLED & socket
 - reset switch
 - TRRS connector
 - encoder

The order of assemby does not matter **except** for these 3 components because they stack on top of one another:
 1. the four OLED jumpers
 2. the Pro Micro
 3. the OLED screen

The build guides for the Sofle and Sofle RGB have some good tips and photos. However there are differences so use this page as your primary reference. In particular, use the ProMicro orientation described on this page.

### Switch Sockets and Diodes

![Switch sockets and diodes](images/build_guide_choc/socket_and_diode.jpeg)

These components are placed on the back of the PCB.

Diodes must be oriented with the white band in the direction of the "arrow" symbol on the PCB. I typically tin one pad, place the diode on, apply the soldering iron to the diode leg until it melts the solder underneath and sinks flush with the PCB. Then come back and solder the other leg.

The sockets are the largest and easiest to solder. They are installed on the back of the PCB facing up towards the front of the PCB. Make sure they are flush with the PCB. Heat the metal connector, apply solder and look for the solder to wick down to the PCB. You want a solid joint since this may take some mechanical strain from switch installation and removal.

### The LEDs

![LED](images/build_guide_choc/led.jpg)

LEDs are placed on the back of the PCB. The lens should point up through the PCB so they shine into the bottom of the switch. One leg will have a diagonal cut. This cut leg should be aligned with the triangular marking on the PCB.

To solder: tin one pad, place the LED and hold using tweezers, apply heat to the leg until the solder melts and the LED is flush with the board. Now the remaining legs can be soldered without the component moving. The LEDs are sensitive to heat. Let the LED cool between soldering each leg. Use the lowest heat needed for your solder.

The LEDs are wired in one long chain. If a LED is not working, replace the LED and the LED preceeding it. Sometimes just the output of a LED is damaged. The full chain does not need to be installed if you want to test a partially built board.

![LED](images/build_guide_choc/led_sequence.jpg)


### OLED Jumpers

![OLED Jumpers](images/build_guide_choc/oled_jumper.jpg )

Now we move to the front of the PCB.

The jumpers in the photo should be bridged if using an OLED dispay. The jumpers may not be accessible later in the build depending on how the Pro Micro is attached. Bridge the jumpers on the top side of the board, the same side the ProMicro will be mounted on.


### Pro Micro

![Pro Micro](images/build_guide_choc/promicro.jpeg)

The Pro Micro is installed on the top of the board, upside down and in the marked holes.

* Top of the board: this is the side of the PCB opposite the diodes, LEDs and switch sockets
* Upside down: both Pro Micro components should face the PCB with the mostly plain back facing out
* Marked holes: there are two sets of holes in the PCB, use the holes with the rectangular outline on the top of the board

Double-check your work here. This step is hard to reverse if a mistake is made.

To install a socketed Pro Micro using the diode leg approach [from splitkb.com][promicrosocketing]:

 1. Install the 12-pin female headers on the top of the board in the outlined through holes. Use some tape to temporarily tack them in place. Flip the board over onto a flat, hard surface. While soldering the first pins, push down on the PCB to ensure the headers are perpendicular and fully seated.

 2. Flip the board upright again. Optionally place some tape over the sockets to protect against fusing parts together. Place the Pro Micro upside down on top. Push diodes though the Pro Micro holes, through the tape and seated into the socket below.

 3. Solder the legs to the Pro Micro. Snip off the legs above the Pro Micro.

If you ever need to remove the Pro Micro: do it by gently prying the board up in small increments, working your way around the board. Avoid pressure on the USB connector. The diode leags are quite weak and will usually bend if you pull the Pro Micro off in one action.


### OLED

Install the OLED so it overhangs the Pro Micro. I added electrican's tape to the bottom of the OLED module where it might contact the Pro Micro.

If you are socketing the OLED, install the 4 pin, half height female header on the top of the PCB. Then push the OLED pins into the socket. You may need to trim the OLED pins so the insulation on the female and male headers mate and the OLED sits just above the Pro Micro. The downside to socketing is the OLED isn't as secure in the half height socket. When turning the keyboard upside down I find the OLED will lever away from the Pro Micro somewhat.


### Solder misc components

Use tape to tack each component in place while flipping the board over to solder.

Solder the TRRS connector. You may need to bend the TRRS connector pins 90 degrees so they point down into the PCB. The R1 and R2 locations should remain empty.

Solder the encoder.


### Assemble

- Snap a few switches into the top plate, the corner switches work best

- Place the PCB on a flat surface. This will save some strain on the solder joints in the next step (though they should be able handle it).

- Carefully lower the top plate with switches on the main PCB and push into sockets. Ensure pins are aligned.

- Snap the remaining switches into the top plate pressing into the sockets.

- There are no standoff between the PCB and top plate

- Place the encoder knob on the shaft. Tighten the set screw with a hex key. A small screwdriver for glasses may do in a pinch.

- Optionally add oled covers

- Put at least 4 adhesive rubber feet in the corners so the keyboard is not moving when you type.


## Warnings and disclaimers

- Don't connect or disconnect the TRRS cable when the keyboard is powered. It may short out. Always disconnect the USB cable first.
- Be gentle with micro USB ports on your microcontrollers. They are easy to break.
- Keep in mind that this is a prototype of a DIY keyboard. It's not a polished product.

## Firmware and programming


The Sofle Choc uses [QMK Firmware][qmk_firmware]. Support is not in the main QMK repository [yet](https://github.com/qmk/qmk_firmware/pull/16736). Instead use the [brianlow/qmk_firmware](https://github.com/brianlow/qmk_firmware) fork.
Suggested approach is to build the firmware yourself. You should be familiar with QMK and be able to make it work on your local environment. If not, please [follow the instructions in the documentation][qmkintro]. Note QMK setup is fairly invasive (upgrade every homebrew package on your system) so you might want to consider the [QMK Docker image](https://beta.docs.qmk.fm/using-qmk/guides/development-environments/getting_started_docker) for compiling.

To flash:

- Clone [https://github.com/brianlow/qmk_firmware](https://github.com/brianlow/qmk_firmware)
- Switch to the `choc2` branch with `git checkout choc2`
- Make sure your QMK environment [is setup][qmkintro].
- Make sure halves are not connected together with TRRS cable.
- Connect one half to USB, flash the firmware (always follow the current instructions in the QMK documentation! The command might look something like this: `qmk flash -kb sofle_choc -km default`). Use the reset button to reset the keyboard when you are asked to in console. Some Pro Micros require double-clicking the reset button to enter bootloader mode.
- Connect the second half and flash it in the same way as the previous one.
- Disconnect the USB cable. Connect both halves together with TRRS cable.
- Connect USB cable to the **left** side.
- Enjoy SofleKeyboard!

There is also a firmware version that uses [VIA](https://caniusevia.com/). VIA allows you to quickly change your keymap without flashing or a QMK build environment. I highly recommend it for experimenting. There are few downsides:
- it doesn't support custom logic like a key for switching betwen Mac/Win
- the exporting/importing keymaps has some problems with some multi-chord keys though typically I don't find I need to export/import
- lighting configuration keys only seem to affect lighting on the master side. If you don't change lighting much, a workaround is to plug just the right side in to the computer, change the lighting then plug everrything back normally

To use the VIA firmware

- Clone https://github.com/brianlow/qmk_firmware
- Switch to the `choc-brian` branch with `git checkout choc-brian`
- When flashing use the `choc_brian` keymap: `qmk flash -kb sofle/rev1 -km choc-brian`
- Download the VIA app from https://caniusevia.com/, it should recognize the keyboard when it opens

## Troubleshooting

See the Sofle build guide.


## Links

- [Github with KiCad projects][soflegithub]
- [Layout in KeyboardLayout editor][soflechoclayout]
- [QMK Firmware][qmk_firmware]
- [QMK Configurator][qmk_configurator]


## Default layout

The default layout for the Sofle Choc is in the QMK fork and demonstrates some LED functions.

![Default layout for Sofle Choc Keyboard](./images/sofle-choc-keyboard-layout.png)

## Images of keyboard

![Keyboard Photo 1](./images/SofleChoc_2.jpg)

![Keyboard Photo 2](./images/SofleChoc_3.jpg)

## Version History

* v2.1.1 - Top plate: moved the version label to less visible location, widened the area above the encoder. PCB version remains at v2.1
* v2.1 - First published version

## Footnotes
[layoutarticle]: <https://josef-adamcik.cz/electronics/in-search-of-the-best-custom-keyboard-layout.html> "In search of the best custom keyboard layout"
[introductionarticle]: <https://josef-adamcik.cz/electronics/let-me-introduce-you-sofle-keyboard-split-keyboard-based-on-lily58.html> "Let me introduce you SofleKeyboard - a split keyboard based on Lily58 and Crkbd"
[soflelayout]: http://www.keyboard-layout-editor.com/#/gists/76efb423a46cbbea75465cb468eef7ff "Sofle Keyboard layout at keyboard-layout-editor.com"
[soflechoclayout]: http://www.keyboard-layout-editor.com/#/gists/5604075ad16c10a8c634828c5911d2b6 "Sofle Choc Keyboard layout at keyboard-layout-editor.com"
[soflegerber]: https://github.com/josefadamcik/SofleKeyboard/releases "SofleKeyboard - gerber files"
[qmk_firmware]: https://github.com/qmk/qmk_firmware/ "QMK firmware"

[qmk_configurator]: https://config.qmk.fm/#/sofle/rev1/LAYOUT "QMK configurator"
[springpinheader]: <https://yushakobo.jp/shop/a01mc-00/> "Spring pin headers - Japanese"
[qmkprotonc]: https://qmk.fm/proton-c/ "QMK Proton-C"
[promicrosocketing]: <https://docs.splitkb.com/hc/en-us/articles/360011263059> "How do I socket a microcontroller? by splitkb.com"
[qmkintro]: <https://beta.docs.qmk.fm/newbs/newbs_getting_started> "QMK getting started"
[qmkhandedness]: <https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness> "QMK firmware - setting handedness"
[manufacturingproblems]: https://josef-adamcik.cz/electronics/corne-keyboard-build-log.html#manufacturing-at-jlcpcb---update-27112019 "Possible problems when manufacturing top plate for Corne"
[nooledlag]: https://github.com/qmk/qmk_firmware/issues/7522 "No OLED lag bug"
[soflegithub]: https://github.com/josefadamcik/SofleKeyboard "SofleKeyboard - KiCad project on Github.com"
[sourcing]: <{{ site.baseurl }}/sourcing_parts.html> "Sourcing parts"
