---
layout: page
title: BOM
description: Bill of Materials and sourcing notes
parent: Build
permalink: /build/bom
nav_order: 3
---
# Bill of Materials (BOM aka "Parts list")
{: .no_toc }

## Table of contents
{: .no_toc .text-delta }

1. TOC
{:toc}
  
## Sourcing parts
This sourcing guide was heavily influenced by the [legacy sourcing guide](https://josefadamcik.github.io/SofleKeyboard/sourcing_parts.html) written by Josef Adamčík.

Sofle Keyboard is supposed to be simple DIY keyboard so it’s possible to source all the parts yourself starting with PCBs, case plates and ending with every component on the board.

In the case of PCBs and plates it might be more cost effective to buy them through a vendor, but it’s possible to go through manufacturing process as well. There is a guide to help you [place an order with a PCB vendor](/build/pico-ordering-guide). This can be an interesting process, and I encourage trying it.

For the remaining components, most of them can be bought on Ebay on AliExpress, or Amazon. There used to be significant savings found through AliExpress - but that price gap has been closing in the past few years. If the component is similar in price, I would recommend deferring to the more trusted vendor. 

## Vendors
There are not yet vendors selling the Sofle Pico. 

## Bill of materials

### Required Parts

| Name | Count | Remarks | Potential Storefront |
| ---- | ----- | ------- | -------------------- |
| PCB | 2 | The PCB should be 1.6mm thick. I used JLCPCB's default settings only customizing the PCB color, and selecting 'lead free' if not using a case. | Manufacturers such as JLCPCB, LCSC, and Elecrow. [Price comparison tool](https://pcbshopper.com/) | 
| MX Hot-swap Sockets | 58 | The PCB requires sockets. Switches cannot be soldered directly to the board. | [Aliexpress](https://www.aliexpress.us/item/3256803687338432.html) |
| Diodes | 60 | Surface mount SOD-123 1N4148, or through-hole 1N4148 diode. These are common, any old one should do. Through hole is usually easier to solder. | SMD: [AliExpress](https://www.aliexpress.us/item/2251832663565152.html) [JLCPCB](https://jlcpcb.com/partdetail/3368026-1N4148SOD123/C2972760) Through-hole: [AliExpress](https://www.aliexpress.us/item/2251832473773777.html) |
| Schottky diodes | 2 | Through-hole 1N5817 diodes. These are common, any old one should do. Since you only need 2, consider getting it as part of diode kit. |  [AliExpress](https://www.aliexpress.us/item/3256805521351480.html) |
| Raspberry Pi Picos | 2 | PCB is specifically designed with the Official Pico and YD-2040 type clone in mind, however several [other clone types](https://docs.google.com/spreadsheets/d/1LPjy6F5lHfUkmsrM5zlZmc5auYy5YBakW8Awe6hYFWo) should be compatible (Waveshare, WeAct, EstarDyn, Tenstar). Although the Pico is designed with a surface mount option, the Sofle Pico is designed assuming the Pico is soldered with [headers](https://www.sparkfun.com/products/17907). The Official Pico uses Micro USB, which has been known to snap off. The USB-C variants are recommended. ([Avoid 'tenstar' variants, they have a pinout that is non-compliant with the official Pico](https://github.com/JellyTitan/Sofle-Pico/discussions/29#discussioncomment-10584762)). | [AliExpress: YD-2040](https://www.aliexpress.us/item/3256803909832318.html), [Official Raspberry Pi Resellers](https://www.raspberrypi.com/products/raspberry-pi-pico/)|
| TRRS Jacks | 2 | PJ-320A | [AliExpress](https://www.aliexpress.us/item/2255800474897706.html) |
| TRRS  (3.5mm "Headphone" Cable) | 1 | TRRS ("4 pole" required) | |
| MX Style Switches | 58 | 3-pin or 5-pin will work. If you're not using a keyplate, you'll want 5-pin.| 
| Key Caps | 58 | | |
| Rotary Encoders and Caps | 2 | EC-11 Rotary Encoder. 20mm stem is the most common. Make sure the knob matches the encoder's shaft diameter, depth and shape. SA keycaps can be quite tall, so you may want to use tall knobs as well.| [AliExpress 20mm](https://www.aliexpress.us/item/2261799870168498.html) |
| Micro USB Cable or USB-C Cable | 1 | USB cable for connecting the keyboard to your computer, dependent on what the Pico you chose uses. Some inexpensive USB-C cables are not built to spec, and [may not be reversible](/troubleshooting#plug-in-the-usb-cable-and-nothing-happens). |
| RGB SMD LEDs SK6803MINI-E | 58 | The 3MA SK68<b>03</b>MINI-E must be used instead of the 12MA SK68<b>12</b>MINI-E that was used in the Sofle V2. The SK68<b>03</b>MINIE-E has a smaller current draw, allowing the LEDs to be very bright at manageable wattage. I recommend ordering a few extra of these because they can be tricky to solder. | [AliExpress](https://www.aliexpress.us/item/3256803450292556.html) [JLCPCB](https://jlcpcb.com/partdetail/Normand-SK6803MINIE/C5184589)|
| SSD1306 128x64 | 2 | These are monochromatic, usually white, yellow, or blue. Note: There are two common variants of this OLED. One has circular holes in the corner, and the other has oval holes. These variants have the GND/VCC pins switched. The version with the round holes is preferred, but either will work. The round holes is installed 10mm higher, so it is preferred based solely on aesthetics. If you come across more variants or different pin positions, please submit a PR.<br>![Sofle V3](/images/build_guide_pico/oled_round.png) <br>![Sofle V3](/images/build_guide_pico/oled_oval.png) | [AliExpress](https://www.aliexpress.us/item/2251832457635357.html) |
| 4 pin female headers | 2 | 2.54 pitch. ~8mm high is preferable if you'll be socketing the MCU. If you can't find 8mm, ~6mm or ~10mm is fine. ![Sofle V3](/images/build_guide_pico/sofle_pico_4-pin_femalesockets.png)|[Aliexpress](https://www.aliexpress.us/item/2251832667924622.html) |

<hr>

### Optional Parts

#### Optional - MCU Sockets

The [official Pico](https://www.raspberrypi.com/products/raspberry-pi-pico/) uses [Micro USB](https://en.wikipedia.org/wiki/USB_hardware#Micro_connectors) which can snap off. The MCU sockets are strongly recommended if you choose those. There are many Pico clones available that offer USB-C, which is known to be less fragile. (These are my preference).

If you have your heart set on micro-usb connectors, or plan on disconnecting the board often, consider [magnetic data cables](https://www.aliexpress.us/item/3256803453035055.html).

If the TRRS cable connecting the two halves is disconnected while the board is powered, it may short one of the communication pins on the Pico. The easy fix for that is to swap out the Pico, which is where sockets are real handy. 

Sockets also raise the height of the MCU enough to help support the OLEDs.
![Pico socketed MCU](/images/build_guide_pico/sofle_pico_sockets_add_height.png)
![Pico socketed MCU](/images/build_guide_pico/sofle_pico_socket_w_OLED.jpeg)

| Name | Count | Remarks | Potential Storefront |
| - | - |-|-|
2.54mm Round Female Pin Header | 4 sets of 20 | They commonly come in strips of 40. They don't always snap in half cleanly, so get extra | [Aliexpress](https://www.aliexpress.us/item/2251832729504304.html)
Needle pin male connectors | 80 | Diode legs would also work, but these little sets of 4 are nice to work with. | [Aliexpress](https://www.aliexpress.us/item/2251832650595759.html?spm=a2g0o.order_list.order_list_main.186.15a91802YueygY&gatewayAdapt=glo2usa)

<hr>

#### Optional - Case
There are plenty of case options. See the [Cases](/cases) section.

<hr>

#### Optional - low profile header pins
If you've chosen not to socket the MCU, these are nicer than the header pins that come with the Pico. The default pins that ship with the Pico are usually too long. Clipping them off after soldering can look 'rough'. Instead I prefer to use [low profile header pins](https://www.aliexpress.us/item/3256805874707460.html). You only need 4, but I haven't seen them sold in quantities smaller than 50. I recommend the 20-pin 8.5mm. The 7.5mm, & 9.5mm work just fine too. If they are out of 20-pin, you can break 40-pins in twain.<br><img src="/images/build_guide_pico/sofle_pico_luxary_pins.png" alt="low-profile header pins" width="200px">

<hr>

#### Optional - Pimoroni trackball - not recommended
Electrically, this works, but it's not a great experience. The footprint is there if you want to continue development. See [Pimoroni Support](pimoroni.md) for more details.

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
