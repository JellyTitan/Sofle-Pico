# Sofle Pico Keyboard
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](./LICENSE)
[![QMK: Compatibility](https://img.shields.io/badge/QMK-Powered-brightgreen?logo=data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGQAAABkCAYAAABw4pVUAAAK+UlEQVR4nOyda1AT5/7HfwkbYkjCNMBAaqFcWpBOibRFauZfhoLV/imMnNrqnLbTDjMeprX1hZw57YtWe9pxRnt1zHlxOvqCURzfnCO+kCPSqgeRcZggXsCMRyr3ABoYYCXJJibI5swT1zMx2WR3c9msZD8zzOgvv32eX57vZp/LPhcMYkxDQ8NXOp3urwAgp0y2EydObOvt7f3N31epVKZ88cUX51Qq1f9RJhLH8bMGg2EzQRAP/P3r6+s/qaysPAgACsrk7O7u/nNbW9thmrSxpqamf2k0mjcBQIpsdru956efftpEEITD33/9+vX/v23bthMAoKZMLpPJtLelpWV/ZCUSGmksE0fodLrPfMRAqIuKit4N4vuqjxje+DQaTY1Go1lD56/X6z/xEQOhoGwBoDRQWr7fGeWF8qTzp2JU+5jk1HeJKTEXBACSWNo425OTkwPsdLYo5hnMN2rwIYgIB0RBBIYoiMAQBREYoiACQxREYIiCCAxJtBJKSUl5JjU1dZNSqVwnk8meedQZfO655zZIJBLfjiHqIU9ZLBaTfxqpqanpmZmZAR21ycnJSy6Xy+ZvLygoqJBKpb6dNyBJ0jY6OnrJ31cul6tzcnIq/O2zs7OXrVbrvL9dq9XqVCpVtq/N4/G4RkZGOqn/upaWlqYJgrhitVrPORyOadqC4UjEgqSlpVVotdo9CoViIx8dJ4Gy7HQ6z1ksln0LCwsBNwMXwhYkJSUlNy8v728KheIPkQSw0nA6nafGx8d3ORyOiXCuD0uQjIyM9bm5uWfQDySc6xOA+YmJidq5ubnLXC/kXKmjX4YoBiPpubm5HaisuF7IWRD0mBLFYEUaVVac4CQIqsDFOoM9qKxQmXG5hpMgWq12N+eoEhyuZcZaENTPUCgUm8KKKoFBZYbKjq0/a0FQpy+B+xmRkESVHStYC4J64GGHlOBwKTvWgshkstVhR5TgcCk7LpX6qvDCEeFSduJor8CQUPOmPmOqsC9cuKCxWCxy/kJbOWi1Wld1dTXO4LZsMpl+wfwmsQVFIonaSH3CQb1+0DL5IS0wNmJEi9zcXNi+fTs8++yzqH0OTqcTpqenoaWlBYaGhjilhWEYNDQ0wLp160CtVntvGLvdDtevX4fm5mZYWlrilF5eXp43tpycHFi1ahW4XC4wm81w5MgRGBsb4/hNw0Ye86mkvqACrKure8ym0+kgKSkJvvzyS05pvfjii/Dpp58G2MvKyqCvrw+uXr3KKb0PP/wQamtrH7OVlJSAx+OBb775hlNakYAq9YA3cbFCJpNxsoeTFlC/Hq4Euyac2CLAhrW2tm4rLCzcytTistlsbwJANn+xrRxsNtvUwMDAWQY3cmhoqBUzGo2/oT+mRIuLi88olUpRkDCYmZkxXbx48U9sfMV+iMAQBREYoiACQxREYGBKpTKFWkUUcuhkeXk5nSRJ/iJbQajV6nS9Xv8Gg9uyyWS6jPmt6QtKV1cX3L17N3pRJhBZWVmvVlVVnWfyq6mp6ZGyEUOEH5AWYh0iMJAgYsUgHEgpjuNMXXoRnkBaYAaDYTO1DjxkKys9Pf3vGIZxmvQl8pDJyclLBoNhJ4PbMo7jv2MEQTwgCOImU6IqlcoWziiqCIDL5bJNTU3dYOMrVuoCQxREYIiCMMD36ASvgrjdblp7cnIyn2HQIpfTTy1wOAI2CoopWH19/Q69Xv9JcnJySHE6OzvzZ2ZmIsrs/v37tHa1Wh1RutEgNTWV1u50OiNOu6CgoKKxsXEglI/b7SaNRuNhrLKy8gAApDAlKpVG/mMiCILWvnp1/GeparX0s3QivQnhYdmhO25tKB/0lEBaSNmIES2mp+lXDqenp4NGo+ErjAAUCgVkZ9O/nQ4Wc4xI4bUOMZvNQT8rKyvjM5THeOWVV7xTkei4eZOxixZVkCC81Vq3bt2CBw8CdurzUl1dzVcYAWzaRL98Y2pqCubm5vgMxYF1d3f/hU2lTpJkvt+Wd5xBlbrJZIKXX3454DMkSEZGBt8F4H1cbty4kfazzs7OqORBkqQNAEJOf/xfpd7W1nYI/TElSk0DeivS4M6fP08rCKrUPv74Y9i/P6Z7TAawY8cO79RROjo6OqKSx+jo6KUzZ87UsvHlvWPY3t4OVquV9rMtW7ZATU0Nb7Fs3rzZmycdfX19nOcbRwPeBbHb7XDq1CnazyQSCXz77bfw2muvxTyODRs2wNdffx308+bm5pjHQEdchk6OHz8etAeMYRj88MMP8Pbbb8ckb9Sfeu+992Dfvn1B+1bd3d1w5cqVmOTPRFwEmZ+fhx9//DHo5+iZvmfPHjh69Ci8/vrrUemUojTQr+LYsWPw+eefB51EjTqCe/fujTi/cMGUSiXG5gWVXC6P6vjG6dOnoaioCD744IOgPiUlJXDgwAHAcRx6enq8LbSxsTGwWCygUqmCXqdUKuHpp5+GzMxMyM/Ph7Vr10JFRQWkpYXeEQTVbbt27YJ79+5F9N38QWWXnZ0dsqf+6AWVZPfu3R3Ujs8hidU0IHS3okdIvEG/2qamJm9fKdqgm6OqqorRD8fxX6XUXuhx4+eff4bvvvvOu2IpXty4ccO7mCgWYnABaSEVwjuRkydPwvvvvw+9vb285oseUQcPHoTGxkbvY1AASAXzktxsNsPOnTvhhRdegHfeecfbe47VsPzIyAi0tbV5m9+oGS4kMLvd3iOk2YvosYGapN9//z2UlpaCXq/3ridcs2YNPPXUU5zTI0kSZmdnvYOE/f393iYtzyO4rEFaSDhMtt5PkiTt0Q58gVpPWVlZ3qH6l156iXbRJ+LQoUNw7do1WFhY8DZE4lk/wcMm9+WkpKSvGNweTrYmCMJhNBq7mBItLi6eRwUSTwiCgNHRUe+/Q62bR81jJIhQsNls84ODg/9m4xv3Cl3kcURBBIYoiMAQBREYmF6vryksLHyXSRyz2awTWpv9SSErK0tXXl7ONJ5PDg0NncS2bt36TzavZnEcF1wn6klBrVZnl5aWbmfyKy0t/aM00vfkIlFF/cTWIXfu3KGdeOd2u5/oxakYALj43DMrWiBB6urq4Pnnn/dOA0UdRavVCsPDw6gjFu/wwsWFmUymvWy2+PN4PBqhCYfqtP7+/niHwYjH40E3Past/ljv2xetaUCJCEEQHYODg8KcBiQSGi6C0K8lEGED67JjLcjS0tKdsMNJcLiUHWtBCIKIz0SlFQCXsmMtiNVqPYdaAmFHlbgsU2XHCtaCOByOaafTyTphkYegMuNyxiGnVpbFYtkXVlQJDNcy4yTIwsLCJafTST9TWiQAVFZcD5rk3A8ZHx/fhbThel0CskCVFSc4C+JwOCYmJiZqRVFCMj8xMfFWOKd9hnWmFKqkFhcX/6FSqfJlMllxOGmsVNBjanh4eMvi4uJ/wrk+WocT76ZOcEvUQ8PifzixP37Hd69+dMzPCj6++z7qgUf7+O6oze1FATkcjqMAcNTX3tjYeNf/MJOBgYGzXV1dAXuh6/X6N+h27zQYDDvp9puitqvwX3cxRrfAMjs7e+1HH30UsL1Fa2vrV3ST2MrLy5tpXrvi7e3trEZtw0Uc7RUYoiACQxREYIiCCAxREIEhCiIwREEEBh+C0L3UCvaii5Pd7XYH2OlsUcwz5i/oYi6IyWT6hZqM9wjb7du3TwbxvWy323t8TCSO47/iOP47nb/RaDzst9+Xg7IFgNJAafnudY/yQnnS+VMx+o4OuKjvElP+GwAA////ISGpAX/O0QAAAABJRU5ErkJggg==)](https://github.com/qmk/qmk_firmware)
<!-- [![VIA: Compatibility](https://img.shields.io/badge/VIA-Supported-brightgreen?logo=data:image/png;base64,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)](https://usevia.app/) -->

Sofle is 6×4+5 keys column-staggered split keyboard with encoder support, per-key RGB, dual 128x64 OLEDs, and uses the RP2040 based Pi Pico MCU. 

The Sofle Pico was designed by [Ryan Neff](https://github.com/JellyTitan), based on the excellent Sofle Choc designed by [Brian Low](https://github.com/brianlow), that is based on the fantastic Sofle RGB by [Dane Evans](https://github.com/DaneEvans) which was based on the original Sofle v2 by [Josef Adamčík](https://github.com/josefadamcik). The MX footprints came from the well-regarded foostan [kbd library](https://github.com/foostan/kbd). Thank you to the [Junco](https://github.com/Daneski13/Junco#optional---rgb) for providing a viable Pico LED level shifting circuit, and user [@uberrice](https://github.com/uberrice) for clever pcb improvements & contributions.
![Sofle Pico](docs/images/build_guide_pico/sofle_pico_v3.4_hero.jpeg)
## Punchlist before Sofle PR
* @todo refresh Gerbers and update path 
* @todo: Update build guide flashing to include pico 'drag and drop' flashing
* Add UF2 files and update relative path in README.
* Review docs and update images 
* Add sofle Pico branding at title to the Repo
* Update docs for the troubleshooting section.
* Uncomment via badge
* Buy me a coffee link

## Punchlist before QMK PR
* @todo Added handedness by pull an unused pin high/low
* Add "boot mode" graphic: https://docs.qmk.fm/#/feature_oled_driver?id=other-examples
* @todo adapt bongocat for 128x64 (doio/kb16 has a 128x32 library that can be adapted.)
* @todo: via support. (Update docs too!)

[Overview](#overview)
 - [Pi Pico vs. ProMicro](#pi-pico-vs-promicro)
 - [Features inherited from V2](#features-inherited-from-v2)
 - [New features](#new-features-in-the-sofle-pico)
 - [Notable changes](#notable-changes)

[Bill of Materials](#bill-of-materials)
 - [Required Parts](#required-parts)
 - [Optional - RGB](#optional---rgb)
 - [Optional - OLED](#optional---oled)
 - [Optional - MCU Sockets](#optional---mcu-sockets)
 - [Optional - key plates](#optional---key-plates)
 - [Optional - low profile header pins](#optional---low-profile-header-pins)
 - [Optional - Pimaroni trackball (not recommended)](#optional---pimoroni-trackball---not-recommended)
 - [Tools and materials](#tools-and-materials)

[Build Guide / Assembly steps](#build-guide--assembly-steps)
 - [Prepare](#prepare)
 - [Soldering](#soldering)
 - [Diodes](#diodes)
 - [Switch Sockets](#switch-sockets)
 - [Level Shifter](#level-shifter)
 - [LEDs](#leds)
 - [Pi Pico MCU](#pi-pico-mcu)
 - [OLED](#oled)
 - [TRRS Jacks](#trrs-jacks)
 - [Rotary Encoders](#rotary-encoders)
 - [Hot-swap Sockets](#hot-swap-sockets)
 - [Final assembly](#final-assembly)
 - [Warnings and disclaimers](#warnings-and-disclaimers)
 - [Firmware and programming](#firmware-and-programming)

[Troubleshooting](#troubleshooting)
 - [No LEDs are working](#no-leds-are-working)
 - [Some LEDs are not working](#some-leds-are-not-working)
 - [An entire row or column of keys is not working](#an-entire-row-or-column-of-keys-is-not-working)
 - [Random key or keys not working](#random-key-or-keys-not-working)

## Overview

### Pi Pico vs. ProMicro
Whereas [Sofle v1 & v2](https://github.com/josefadamcik/SofleKeyboard) used the Promicro MCU, Sofle Pico is built specifically for the RP2040 Pico MCU. The Pico offers larger memory options at a low price point. [Inexpensive clones are readily available](https://www.aliexpress.us/w/wholesale-raspberry-pi-pico.html). The increased MCU capacity of the Pico allows for more features like screen animations and RGB animation effects.

Although there is a QMK option to port the legacy pro-micro config to rp2040 boards that are backwards compatible, some rp2040 pins are not 5v tolerant. Essentially, the per key rgb doesn't always work as it should.

There are many rp2040 boards available in the same form factor as the Promicro, but they tend to be 4-8 times more costly than the Pi Pico form factor, and there are plenty of inexpensive [Pi Pico clones](https://docs.google.com/spreadsheets/d/1LPjy6F5lHfUkmsrM5zlZmc5auYy5YBakW8Awe6hYFWo/edit#gid=0).

Accommodating the voltage variances between the ProMicro and the Pi Pico required drastic wiring changes which results in the loss of backward compatibility with Sofle v1/v2 firmware. The SK6812MINI-E LEDs commonly used with ProMicro keyboards require 5v logic. The Pi Pico uses 3.3v logic. A level shifter, along with a lower current LED variant, specifically the SK6803MINI-E, work with the lower voltage. Thank you to Dane Skalski and the [Junco](https://github.com/Daneski13/Junco#optional---rgb) for providing this excellent 3V logic circuit.

### Features inherited from V2
 - Key placement has not changed. (mostly - 1 thumb key got a 3 degree rotation).
 - Hotswap sockets are required. 
 - Per-key RGB remains optional and uses the _relatively_ easy to solder SK6803 MINI-E LEDs.

### New features in the Sofle Pico
* Default OLED is now 64x128, as opposed to 32x128.
* OLED ports are separated and offset, so no jumper soldering is required.
* 2 Common SSD1306 64x128 OLED variants are supported. The two common variants are circle corner and oval corner, which have different pinouts. There may be more pinout variants out there! (Please submit a PR if you come across them)!
* Added easily accessible [Pimoroni trackball](https://shop.pimoroni.com/en-us/products/trackball-breakout) tie in footprint. It works, but it's still a Pimoroni - so IMO it's still not a great experience. Your mileage may vary. 
* Simplified the PCB & improved labeling to help with build troubleshooting. (The addition of a GND & VCC planes specifically).
* Added through-hole/smd hybrid footprints for the per-switch diodes. (Making for easy manual assembly or automated assembly).
* Added a 'breakout' section for the unused Pico pins to allow for easy tinkering.
* The default communication protocol is full duplex TX/RX.
* Should be able to support [Cirque trackpads](https://shop.beekeeb.com/product/40mm-cirque-glidepoint-circle-trackpad-module-diy-kit-for-split-mechanical-keyboard/) that use a breakout board to tie into the i2C bus. (I haven't tried this yet - please submit a PR if you can validate).

### Notable changes
* Improved labeling and footprint masking to poke-yoke the build process.
* 3 degree rotation of the innermost thumb key. 
* Sofle V1 & V2 firmware is not compatible due to the complete rewire for the Pico.
* MCU footprints side-by-side to reduce potential shorts.
* Modified thumb cluster outline to accommodate 1.25u thumb keycap.
* Added teardrops to decrease likelihood of acid traps during manufacture.
* Added VCC & GND net to simplify routing.
* Poka-yoke TRRS footprint by removing unnecessary solder masks.
* Diode placement & labeling improved for easier troubleshooting.
* Diodes can be installed on the front or back, making for lower cost PCBA.
* Reset button removed. It is no longer needed, as the Pico has a physical rest button.
* The MCU is now facing upward. There are many PiPico board variants with buttons placed differently. Facing the MCU upward ensures accessability.

* Tenting puck mounting holes added. [SplitKB](https://splitkb.com/products/tenting-puck) or 3d print your own: design by [
Bubbleology](https://www.printables.com/model/235433-tenting-puck-for-keyboard-tripod-mount/comments/943096).
![Sofle Pcb puck mount footprint](docs/images/build_guide_pico/puck_mount.png)
![Sofle V3](docs/images/build_guide_pico/tenting_puck.webp)
## Bill of materials

### Required Parts

| Name | Count | Remarks | Potential Storefront |
| ------------------------------------ | ----------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------- |
| PCB | 2 | The PCB should be 1.6mm thick. I used JLCPCB's default settings only customizing the PCB color, and selecting 'lead free'. | Manufacturers such as JLCPCB, LCSC, and Elecrow. [Price comparison tool](https://pcbshopper.com/) | |
| MX Hot-swap Sockets | 58 | The PCB requires sockets. Switches cannot be soldered directly to the board. | [Aliexpress](https://www.aliexpress.us/item/3256803687338432.html) |
| Diodes | 62 | Surface mount SOD-123 1N4148, or through-hole 1N4148 diode. These are common, any old one should do. Through hole is usually easier to solder. | SMD: [AliExpress](https://www.aliexpress.us/item/2251832663565152.html) [JLCPCB](https://jlcpcb.com/partdetail/3368026-1N4148SOD123/C2972760) Through-hole: [AliExpress](https://www.aliexpress.us/item/2251832473773777.html) |
| Raspberry Pi Picos | 2 | PCB is specifically designed with the official Pico and YD-2040 type clone in mind, however several [other clone types](https://docs.google.com/spreadsheets/d/1LPjy6F5lHfUkmsrM5zlZmc5auYy5YBakW8Awe6hYFWo) should be compatible (Waveshare, WeAct, EstarDyn, Tenstar). Although the Pico is designed with a surface mount option, the Sofle Pico is designed assuming the Pico is soldered with [headers](https://www.sparkfun.com/products/17907).| [AliExpress, YD-2040](https://www.aliexpress.us/item/3256803909832318.html) |
| TRRS Jacks | 2 | PJ-320A | [AliExpress](https://www.aliexpress.us/item/2255800474897706.html) |
| TRRS  (3.5mm "Headphone" Cable) | 1 | TRRS ("4 pole" required) | |
| MX Style Switches | 58 | 3-pin or 5-pin will work. If you're not using a keyplate, you'll want 5-pin.| |
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
| 74AHCT1G125 Voltage Level Shifter/ Bus Buffer | 2 | SOT23-5 Footprint <br/> <br/> Optional - but not technically required. The Pico runs at 3.3V while the LEDs require 5V logic. If you omit this level shifter, the first LED in the circuit acts as a level shifter. In [casual tests](./build_log#thermal-imaging-led-test-conclusion.), omitting the level shifter makes the board run about 6°C hotter, which is still in the acceptable Pico operating range. I'm not sure if this will eventually burn out the LEDs prematurely. | [AliExpress](https://www.aliexpress.us/item/3256803831434811.html) [JLCPCB](https://jlcpcb.com/partdetail/TexasInstruments-SN74AHCT1G125DBVR/C7484)|
| RGB SMD LEDs SK6803MINI-E | 74 | The 3MA SK6803MINI-E must be used instead of the traditional 12MA SK6812MINI-E. The SK6803MINIE-E has a smaller current draw, allowing the LEDs to be very bright at manageable wattage. | [AliExpress](https://www.aliexpress.us/item/3256803450292556.html) [JLCPCB](https://jlcpcb.com/partdetail/Normand-SK6803MINIE/C5184589)|

<hr>

### Optional Parts - OLED
| Name | Count | Remarks | Potential Storefront |
| - | - |-|-|
| SSD1306	128x64 | 2 | These are monochromatic, usually white, yellow, or blue. <br> <br> Note: There are two common variants of this OLED. One has circular holes in the corner, and the other has oval holes. <br> These variants have the GND/VCC pins switched. The version with the round holes is preferred, but either will work. (The round holes is installed 10mm higher, so it is preferred based solely on aesthetics.) If you come across more variants or different pin positions, please submit a PR! ![Sofle V3](docs/images/build_guide_pico/oled_round.png) ![Sofle V3](docs/images/build_guide_pico/oled_oval.png)| [AliExpress](https://www.aliexpress.us/item/2251832457635357.html)|
| 4 pin female headers | 2 | 2.54 pitch. ~8mm high is preferable if you'll be socketing the MCU. If you can't find 8mm, ~6mm or ~10mm is fine. ![Sofle V3](docs/images/build_guide_pico/sofle_pico_4-pin_femalesockets.png)|[Aliexpress](https://www.aliexpress.us/item/2251832667924622.html)|

<hr>


### Optional - MCU Sockets
This is strictly a quality of life upgrade. The older ProMicro's were notorious for weak Micro USB jacks that could snap off. This is not needed with the Pi Pico which uses USB-C. However - if your using socketed OLEDs, the OLED sockets put the OLEDs about 5mm (@todo - measure this) above the board, so socketing the MCU helps support the OLEDs.
| Name | Count | Remarks | Potential Storefront |
| - | - |-|-|
2.54mm Round Female Pin Header | 4 sets of 20 | They commonly come in strips of 40. They don't always snap in half cleanly, so get extra | [Aliexpress](https://www.aliexpress.us/item/2251832729504304.html)
Needle pin male connectors | 80 | Diode legs would also work, but these little sets of 4 are nice to work with. | [Aliexpress](https://www.aliexpress.us/item/2251832650595759.html?spm=a2g0o.order_list.order_list_main.186.15a91802YueygY&gatewayAdapt=glo2usa)

<hr>

### Optional - key plates:
 - The top/key plates from Sofle v1, v2, RGB and Choc versions are not compatible.
 - Key plates are strongly recommended, but not technically required. (If you use 3 pin MX keys, the thumb keys tend to fall out if you don't use a key plate).
 - The key plates combined with a backplate make a nice 'sandwich' case. Another plate can be added to protect the OLEDs. 
 - Spacers are intended to pass through the main pcb and screw onto the bottom plates, top plates, and OLED plates.
 - The OLEDs are taller than the switch plate, which is why they have their own separate taller plates. Acrylic is recommended for the OLED plates because the two types of OLEDs can be installed higher/lower.
 - Plates can be made from acrylic or pcb.
 - Having a standoff kit is helpful when assembling the keyplates. [M2 Brass Standoff Kit](https://www.amazon.com/gp/product/B07B9X1KY6)
 - Acrylic key plates should be 3mm thick, and PCBs should be 1.6mm thick. The switches fit better in the PCBs because most switches have 'retention nubs' designed for PCBs. 

![retention nubs](docs/images/build_guide_pico/sofle_pico_retention_nubs.png)

 | Name | Count | Remarks | Potential Storefront |
|-|-|-|-|
| keyplates | 2 | |Elecrow is great for acrylic, JLC is good for PCB|
| backplates | 2 | |Elecrow is great for acrylic, JLC is good for PCB|
| OLED plates | 2 | If using PCB, note there are variants for the different types of OLED's that have higher/lower holes. |Elecrow is great for acrylic, JLC is good for PCB|
|M2 5mm screws|16| Any old M2 will do. I prefer hex cap for aesthetics. 6mm works in a pinch - but may bottom out when using acrylic plates.|[Amazon](https://www.amazon.com/gp/product/B07ZH6GRK2)|
| M2 18mm female-female standoffs (Same height for Acrylic or PCB)| 6 | Connects the OLED plate to the back plate, runs _through_ the pcb and the key plate.|[M2 Brass Standoff Kit](https://www.amazon.com/gp/product/B07B9X1KY6)|
| M2 6mm female-female standoffs (6mm for acrylic, 8mm for PCB)| 10 | Connects the front plate to the back plate, runs _through_ the pcb.|[M2 Brass Standoff Kit](https://www.amazon.com/gp/product/B07B9X1KY6)|

<hr>

### Optional - low profile header pins
- The header pins that come with the Pico are usually too long. You can either clip them off after soldering, or use [low profile header pins](https://www.aliexpress.us/item/3256805874707460.html). You only need 4, but I haven't seen them sold in quantities smaller than 50. I recommend the 20-pin 8.5mm. The 7.5mm, & 9.5mm work just fine too. If they are out of 20-pin, you can break 40-pins in twain.
![retention nubs](docs/images/build_guide_pico/sofle_pico_luxary_pins.png)

<hr>

### Optional - Pimoroni trackball - not recommended
Electrically, this works, but it's not a great experience. See [Pimaroni.md](pimoroni.md) for more details.
| Name | Count | Remarks | Potential Storefront |
|-|-|-|-|
| Pimoroni trackball | 1 | The default footprint replaces a rotary encoder. Installing flush to the board is a bit too low to be comfortable, so you may want to raise it. @todo elaborate.|[Pimoroni](https://shop.pimoroni.com/en-us/products/trackball-breakout)|

<hr>

## Tools and materials

- soldering iron and solder
- no-clean flux makes soldering easier
- solder wick or desoldering pump to correct mistakes
- good tweezers
- flush cutters to trim diode legs
- masking, kapton or electrical tape
- isopropyl-alcohol for cleaning
- multimeter for troubleshooting

## Build Guide / Assembly steps
This guide includes all optional components.
### Prepare

Make sure you know which side you are working on, and don't make two left hand sides by mistake. Stick a piece of tape on the front side of both PCBs to help remember.
![Sofle V3](docs/images/build_guide_pico/sofle_pico_tape.png)

This guide is written in the order I like to install components, starting with the components on the back, shortest to tallest:
 - diodes
 - LEDs
 - level shifter
 - switch sockets

Then install the components on the front:
 - Pico MCU & socket
 - OLED & socket
 - TRRS connector
 - Rotary encoder

The order of assembly does not matter **except** for these 2 components because they stack on top of one another:
1. the Pico MCU
1. the OLED screen

### Poka yoke
When designing the Sofle Pico, an effort was made to '[poka-yoke](https://en.wikipedia.org/wiki/Poka-yoke)' the design, that is, to make the design as 'fool proof' as possible to assemble. 

Specifically, clear markings/symbols and selective masking of footprint through-holes are used to ensure that components are soldered to the correct side & in the correct orientation. Outlines indicate the side the component should be inserted into. The side with the outlines has footprint through-holes masked, so that if the user inserted the component from the wrong side, it would not be solderabe.
![diode orientation](docs/images/build_guide_pico/sofle_pico_poke-yoke.png)

Please open an issue if you have a suggestion for improving the poka-yoke. (I'd like to move away from English language notes, and replace them with universal pictograms if the time ever


### Diodes

![diode orientation](docs/images/build_guide_pico/sofle_pico_diode_orientation.png)

Diodes, surface mount or through-hole, can be installed on either the front or the back. The back is preferred for a cleaner look. If you are hand soldering, through hole diodes are recommended because they are easier. If you damage a pad on one side, feel free to move that diode to the other side.

Diodes _must_ be oriented with the white band in the direction of the "arrow" symbol on the PCB.

For surface mount diodes, a common method is to tin one pad, place the diode on, apply the soldering iron to the diode leg until it melts the solder underneath and sinks flush with the PCB. Then come back and solder the other leg. Alternately, you can use a rework station heat gun and solder paste. (I prefer this method for smds).
.

There is 1 diode per key, 1 diode on the rotary encoder, and one for the Pico on the far right.
![diode orientation](docs/images/build_guide_pico/sofle_pico_diode_highlights.png)

### Switch Sockets
Switch sockets installed on the back of the PCB facing up towards the front of the PCB. Make sure they are flush with the PCB. 

Heat the metal connector, apply solder and look for the solder to wick down to the PCB. You want a solid joint since this may take some mechanical strain from switch installation and removal.

### Level shifter
The level shifter is tiny & squirrley. It's the same size as an SMD, but with 5 pins. There is only one footprint for this component - so it will be on the front on the left hand, and on the back on the right hand. Tack one corner down, and then "[drag soldering](https://www.youtube.com/watch?v=wUyetZ5RtPs)" the remaining pins. 
![level shifter](docs/images/build_guide_pico/sofle_pico_level_shifter_placement.png)
Alternately, if you've decided to omit the level shifter, be sure to bridge the level shifter bypass jumper. It's next to the level shifter footprint. You can drag solder across it, or bend a diode leg and solder it through the holes. You'll need to do this for both hands.

![Sloppy bypass jumper soldering](docs/images/build_guide_pico/sloppy_bypass_jumper.png)

### LEDs

![LED](docs/images/build_guide_pico/sofle_pico_led_orientation.png)

LEDs are placed on the back of the PCB. The lens should point up through the PCB so they shine into the bottom of the switch. One leg will have a diagonal cut. This cut leg should be aligned with the mark on the PCB.

To solder: tin one pad, place the LED and hold using tweezers, apply heat to the leg until the solder melts and the LED is flush with the board. Now the remaining legs can be soldered without the component moving. The LEDs are sensitive to heat. Let the LED cool between soldering each leg. Use the lowest heat needed for your solder.

Alternately, you can use a rework station heat gun and solder paste. I prefer this method for the LEDs, i think it's easier to get components to sit flush. Put a dab of solder paste on each pad, then place your LEDs with tweezers or a steady hand. (The holes above/below the LED hole are intended to make tweezer placement easier).

The LEDs are wired in one long chain. If a LED is not working, replace the LED and the LED preceding it. Sometimes just the output of a LED is damaged. The full chain does not need to be installed if you want to test a partially built board.

![LED](docs/images/build_guide_pico/sofle_pico_led_wiring_chain.png)

### Pi Pico MCU

![Pi Pico MCU](docs/images/build_guide_pico/sofle_pico_MCU_heroshot.png)

The Pico is installed on the top of the board, face up, and in the marked holes. (There are many variants of the Pi Pico - the face up orientation ensures easy access to the reset button wherever it may be).

* Top of the board: this is the side of the PCB opposite the diodes, LEDs and switch sockets
* Marked holes: Insert the Pico into the holes with the rectangular outline on the top of the board. 

Double-check your work here. This step is hard to reverse if a mistake is made.
#### Pi Pico MCU installed permanently with header pins
You can permanently install the Pico using the 20-pin male-male headers that came with the Pico. 
1. insert the headers into the board and the Pico both before soldering. (The header pin rows can tilt a little if it's not inserted into both the board and the Pico.) The header pins may have one longer side. Install the longer side on the PCB, because you'll need to trim these, and the trimmed pins look better on the underside of the board. Use a piece of kapton tape to attach the Pico to the PCB while soldering.

1. Flip the board over. The pins on the back of the board that you will be soldering should _not_ be in the outline. Soldering 1 of the outermost pins on each pin header on the PCB. Hold the board up to make sure the pin header is sitting flush with the pcb. If it's not, you can reheat that joint until it is flush. 
*@todo - this pick is gross - grab another without smudges and cathair.*
![Pi Pico MCU](docs/images/build_guide_pico/sofle_pico_starter_pins.png) 
1. Solder the remaining pcb/pin header joints on the back.
1. Flip the board over. With the Pico, repeat the process of soldering & checking 1 pin with the pin header and the Pico. 
1. Solder all the remaining Pico/pin header pins.
#### Pi Pico MCU installed with sockets
Previous versions of the Sofle used diode legs. This guide does not - instead we'll use "needle pins", which are now readily available, inexpensive, and less fussy then diode legs. The needle pins will add some height to your MCU, which works well to support the OLEDs.
![Pi Pico socketed MCU](docs/images/build_guide_pico/sofle_pico_sockets_add_height.png)
You can use diode legs if you're feeling fancy.
To install a socketed Pico using the diode leg approach [from splitkb.com][promicrosocketing]:

1. Insert the needle pins into the female sockets, and then insert the female sockets into the PCB and the Pico. Assembling the sockets/Pico/PCB before soldering ensures an excellent alignment. Be sure that the Pico is face up, and that the socket pins are inserted into the square outline on the front of the board. Applying a piece of kapton tape to hold everything in place can be helpful. 

1. Flip the board over. On the back of the PCB, solder one pin on each side, pushing down on the PCB to ensure the headers are perpendicular and fully seated. Pick up the board and inspect to insure that everything is seated flush. If it's not flush, reheat the joint and push the socket down until it's flush. (Be sure you're not touching the pin your heating when you push it down).

1. Solder the remaining pins on the back of the pcb.

1. Flip over the board. On the front, solder 1 pin on each side to the Pico. Again check that everything is flush before soldering the remaining pins.


If you ever need to remove the Pico: do it by gently prying the board up in small increments, working your way around the board. Avoid pressure on the USB connector. The diode legs are quite weak and will usually bend if you pull the Pro Micro off in one action.


### OLED
@todo add updated images when v3.4 prototype comes in.

There are two common variants of the SSD1306 OLED. They are easily distinguishable by the corner holes. There is a separate socket for each of these, because they switch the GND/VCC pins. This pins are usually labeled on the OLEDs themselves. 

**Please check the OLED pin labels against the marking on the PCB to ensure everything matches.** It's entirely possible that the OLEDS have GND/VCC in different locations than expected. (If you do find some that differ from the oval/round below, please update this doc ans submit a PR)! The GND pin is square.

![Sofle V3](docs/images/build_guide_pico/oled_round.png) ![Sofle V3](docs/images/build_guide_pico/oled_oval.png) ![OLED sockets](docs/images/build_guide_pico/sofle_pico_oled_socket_closeup.png)
![OLED sockets](docs/images/build_guide_pico/sofle_pico_LH_OLED_socket.png)
We will be installing the OLED so it overhangs the Pro Micro. 
1. Determine which socket your model of OLED will use.
1. Add a strip of electrician's tape to the bottom of the OLED module where it might contact the Pico.
1. Insert the 4 pin, half height female header into the appropriate outlined footprint on the top of the PCB. On both the right and left hands, this will be to the right of the Pico. Use kapton tape to hold the socket in place while you solder the first pin. Check that the socket is perpendicular to the pcb. If it's not, reheat that solder joint and adjust.
1. Solder the remaining socket pins.
1. Push the OLED pins into the socket. You may need to trim the OLED pins so the insulation on the female and male headers mate and the OLED sits just above the Pro Micro. The downside to socketing is the OLED isn't as secure in the half height socket. When turning the keyboard upside down I find the OLED will lever away from the Pro Micro somewhat.
1. If you chose to solder the Pico without sockets, there may be a gap between the OLED and the Pico. You can add an [adhesive bumper pad](https://www.amazon.com/gp/product/B074C2XKXH/?th=1) to ensure it rests level. A rolled up piece of electrical tape will also work.
![OLED bumper](docs/images/build_guide_pico/sofle_pico_OLED_bumper.png)

### TRRS Jacks
Solder these on the front of the boards, inserting into the outline.
Some brands of jack will snap into the board, holding them in place while you solder. Other brands may require tape. Solder 1 pin first to check that everything is flush. Adjust as needed. Solder remaining pins. 

### Rotary encoders
Saved these for last because they are tallest. Insert into the top of the board, and solder on the backside. Some EC11's have metal tabs on opposite sides that add mechanical stability - no need to solder those.

### Final assembly
Installing the keys and case. (The standoff lengths mentioned assume you are using an acrylic plate).

https://github.com/JellyTitan/Sofle-Pico/assets/72168556/54e6d6f9-5af3-4b82-98af-0372871ad146

1. Place the PCB on a flat surface. This will keep the pressure distributed evenly when pressing in the switches.
1. Snap a few switches into the top plate to help align things. The corner switches work best.
1. Carefully lower the top plate with the alignment switches onto the main PCB and push into sockets. Ensure pins are aligned.
1. Snap the remaining switches into the top plate pressing into the sockets.
1. Attach the bottom plate to the five M2 6mm standoffs.
1. Place the pcb on the back plate, aligning the standoffs with holes in the PCB.
1. On the top of the pcb, attach the key plate to the standoffs using the M2 screws.
1. Use M2 screws to attach the three 18mm standoffs to the OLED cover plate.
1. Slide the three standoff on the OLED plate through the PCB. Attach those standoffs to the backplate using M2 screws.
1. Place the encoder knob on the shaft. Tighten the set screw with a hex key. A small screwdriver for glasses may do in a pinch.
1. Put at least 4 adhesive rubber feet in the corners so the keyboard is not moving when you type.

## Warnings and disclaimers
- Don't connect or disconnect the TRRS cable when the keyboard is powered. It may short out. Always disconnect the USB cable first.
- Be gentle with USB-C ports on your microcontrollers. They are easy to break.
- Keep in mind that this is a prototype of a DIY keyboard. It’s not a polished product.

## Firmware and programming
@todo - update hte firmware.
### The easy way
The rp2040 supports 'drag and drop' flashing with a UF2 file on Mac or PC. This is the recommended approach if you're not familiar with compiling QMK firmware yourself. After the first 'drag and drop' flash, you can tweak your keymaps further using [VIA](https://www.caniusevia.com/).

VIA allows you to quickly change your keymap without flashing or a QMK build environment. I highly recommend it for experimenting. There are few downsides:
- it doesn't support custom logic like a key for switching between Mac/Win
- the exporting/importing keymaps has some problems with some multi-chord keys though typically I don't find I need to export/import
- lighting configuration keys only seem to affect lighting on the master side. If you don't change lighting much, a workaround is to plug just the right side in to the computer, change the lighting then plug everything back normally

To flash with 'drag 'n drop':
These instructions are a summarization of the [official explanation found in the QMK docs](https://docs.qmk.fm/#/flashing?id=raspberry-pi-rp2040-uf2).
1. Make sure halves are not connected together with TRRS cable.
1. Connect one half to USB.
1. Enter the bootloader using any of the following methods. These are dependant on where your RP2040 came from. You may have to remove an OLED to access the `BOOT` button.
    * Hold down `BOOT` and tap `RESET`.
    * Hold the `BOOT` button while pluging in the usb cable.
    * Double tapping the `RESET` button on the RP2040. ([Double tap reset is enabled by default on the RP2040](https://github.com/qmk/qmk_firmware/blob/master/docs/platformdev_rp2040.md#double-tap-reset-boot-loader-entry-iddouble-tap)).
    * **Bootmagic reset** (works after you have flashed once): Hold down the top far corner key while plugging in the keyboard (`~` left half, `-` right half). This will also clear the EEPROM.
1. Wait for the OS to detect the device.
1. Copy the .uf2 file to the new USB disk. 
  * The files can be found in this repo at ./Sofle_Pico/Firmware
  * There is a different file for right hand and left hand, as denoted by a `_RH` or `_LH` suffix. (@todo - can we use matrix detection to use a single file for both hands)?
  * On Mac after the file is dropped, the 'Keyboard setup assistant' may be triggered. You can ignore and quit the assistant.(@todo add relative path to UF2 files.) 
1. Unplug the side you just flashed, and repeat the process with the other side.
1. Disconnect both halves from USB.
1. Connect both halves together using the TRRS cable. 
1. Connect the left half to USB.
1. Test everything using VIA. (After you've downloaded and installed the VIA app from https://caniusevia.com/, it should recognize the keyboard when it opens).

### The less easy way
If you want to build your own firmware, Sofle Pico uses [QMK Firmware][qmk_firmware]. Support is not in the main QMK repository [yet](@todo: Update this url with official PR). Instead use the [jellytitan/qmk_firmware](https://github.com/jellytitan/qmk_firmware) fork.
https://docs.qmk.fm/#/flashing?id=raspberry-pi-rp2040-uf2

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

## Troubleshooting

See the Sofle build guide.


## Links
- [Github with KiCad projects][soflegithub]
- [Layout in KeyboardLayout editor][soflechoclayout]
- [QMK Firmware][qmk_firmware]
- [QMK Configurator][qmk_configurator]


## Default layout

The default layout for the Sofle Choc is in the QMK fork and demonstrates some LED functions.
@todo: validate this image works as expected after folding into the main repo.
![Default layout for Sofle Choc Keyboard](./images/sofle-choc-keyboard-layout.png)

## Images of keyboard
@todo update these after final hardware!!
![Keyboard Photo 1](./images/SofleChoc_2.jpg)
![Keyboard Photo 2](./images/SofleChoc_3.jpg)

## Version History
See the [build log](build_log.md).

<style>
mark{
    position: fixed;
    right: 25px;
    bottom: 25px;
}
</style>
<mark>[🔼 Back to top](#sofle-pico-keyboard)</mark>
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
[qmkintro]: <https://docs.qmk.fm/#/newbs_getting_started> "QMK getting started"
[qmkhandedness]: <https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness> "QMK firmware - setting handedness"
[soflegithub]: https://github.com/josefadamcik/SofleKeyboard "SofleKeyboard - KiCad project on Github.com"
[sourcing]: <{{ site.baseurl }}/sourcing_parts.html> "Sourcing parts"

v3.5: Board routing revision made by [uberrice](https://github.com/uberrice)
