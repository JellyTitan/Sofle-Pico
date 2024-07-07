---
layout: page
title: Build Guide
description: Sofle Pico keyboard build guide.
parent: Build
permalink: /build/build-guide
nav_order: 5
image: /images/build_guide_pico/sofle_pico_MCU_heroshot.png
---
# Build Guide
{: .no_toc }

## Table of contents
{: .no_toc .text-delta }

1. TOC
{:toc}


## Prepare

This guide includes all optional components. 

It's recommended to build the left hand first, from start to finish. I would recommend putting a piece of tape with "LH TOP" and "RH TOP" on the top of each board before you start, so when you go to build the second hand you don't build on the wrong side. (I've built 2 left hands at least twice)! 

This guide is written in the order I like to install components, starting with the components on the back, shortest to tallest:
 - diodes
 - LEDs
 - switch sockets

Then install the components on the front:
 - level shifter
 - Pico MCU & socket
 - Schottky diodes
 - OLED & socket
 - TRRS connector
 - Rotary encoder

The order of assembly does not matter **except** for these 2 components because they stack on top of one another:
1. the Pico MCU
1. the OLED screen

<hr>

## Diodes
There is 1 diode per key, 1 diode on the rotary encoder.

<a href="/images/build_guide_pico/sofle_pico_diode_highlights.png"><img src="/images/build_guide_pico/sofle_pico_diode_highlights.png" width="100%" alt="Sofle Pico diode locations highlighted" /></a>

Diodes _must_ be oriented with the white band in the direction of the "arrow" symbol on the PCB.

<a href="/images/build_guide_pico/smd_diode_orientation_1.jpeg"><img src="/images/build_guide_pico/smd_diode_orientation_1.jpeg" width="49%" alt="SMD orientation marking example" /></a> <a href="/images/build_guide_pico/smd_diode_orientation_2.jpeg"><img src="/images/build_guide_pico/smd_diode_orientation_2.jpeg" width="49%" alt="SMD orientation example closeup" /></a>

Diodes, surface mount or through-hole, can be installed on either the front or the back. The back is preferred for a cleaner look. If you are hand soldering, through hole diodes are recommended because they are easier. If you damage a pad on one side, feel free to move that diode to the other side.

For surface mount diodes, a common method is to tin one pad, place the diode on, apply the soldering iron to the diode leg until it melts the solder underneath and sinks flush with the PCB. Then come back and solder the other leg. Alternately, you can use a rework station heat gun and solder paste. (I prefer this method for smds).

For through-hole diodes, there is a bending jig on the upper right corner of the board. This is a painfully slow way to get pretty bends. <a href="/images/build_guide_pico/1N4148_diode_jig.png"><img src="/images/build_guide_pico/1N4148_diode_jig.png" alt="Diode bending jig built into the PCB" /></a>

If you've got a 3d printer handy, a printed diode [bending jig](https://www.printables.com/model/734696-diode-bending-jig-8mm) can be used to make quick uniform bends. Alternately, a carpenters pencil is roughly the right size. (The diode holes are 8mm apart, wooden pencils are often 7mm - 8mm).<br><a href="/images/build_guide_pico/diode_jig_fold.jpeg"><img src="/images/build_guide_pico/diode_jig_fold.jpeg" width="32%" alt="Using a bending jig" /></a> <a href="/images/build_guide_pico/diode_jig_cut.jpeg"><img src="/images/build_guide_pico/diode_jig_cut.jpeg" width="32%" alt="Diodes on tape that were bent with a bending jig" /></a> <a href="/images/build_guide_pico/carpenter_pencil.JPG"><img src="/images/build_guide_pico/carpenter_pencil.JPG" width="32%" alt="Using a carpenters pencil as a bending jig" /></a>

With the PCB eleveated via workholding, insert the bent diodes into the holes on the back of the board. 
Diodes _must_ be oriented with the black band in the direction of the "arrow" symbol on the PCB. There is also a black outline around the pad to make it easy to check the diode orientation is correct after the diode has been soldered in place.<br><a href="/images/build_guide_pico/diode_orientation.jpeg"><img src="/images/build_guide_pico/diode_orientation.jpeg" alt="Through hole diode orientation" width="100%" /></a>

Solder the legs in place. flip over the board, and trim the legs. When you trim off the diode legs, save 2 for use as bypass jumpers.<br>
<a href="/images/build_guide_pico/sofle_pico_diodes_soldered.jpeg"><img src="/images/build_guide_pico/sofle_pico_diodes_soldered.jpeg" alt="Soldered diodes protruding through the Sofle Pico PCB" width="49%" /></a> <a href="/images/build_guide_pico/sofle_pico_diodes_clipping.jpeg"><img src="/images/build_guide_pico/sofle_pico_diodes_clipping.jpeg" alt="Trimming diode legs protruding through the Sofle Pico PCB" width="49%" /></a>

<hr>

## Switch Sockets
Switch sockets installed on the back of the PCB facing up towards the front of the PCB. Make sure they are flush with the PCB. 

1. Put all the sockets in place. PCB hole tolerance can vary quite a bit, so some sockets may snap in, while others rest in the holes. If you have some that snap in, be sure to check everything is flush before you start soldering. 
1. Solder _one_ side of each socket by heating the metal connector. Apply solder and look for the solder to wick down to the PCB. You want a solid joint since this may take some mechanical strain from switch installation and removal. The 3d printed workholding feet are really handy here. You can reposition the board as you work to get the best angle for soldering those connectors.
1. Give the board a few good taps to make sure there are no loose sockets.
1. Rotate the board 180 degrees and solder the remaining sides.

<a href="/images/build_guide_pico/sofle_pico_sockets_1.jpeg"><img src="/images/build_guide_pico/sofle_pico_sockets_1.jpeg" alt="Left hand backside of solfe pico with switch sockets in place viewed from a tilted angle" width="49%" /></a> <a href="/images/build_guide_pico/sofle_pico_sockets_2.jpeg"><img src="/images/build_guide_pico/sofle_pico_sockets_2.jpeg" alt="Left hand backside of solfe pico with switch sockets in place viewed from a above" width="49%" /></a>

<hr>

## Level shifter Bypass
Sofle Pico versions 3.5.4 and earlier have a footprint for a level shifter component. This part was unnecessary, as the first LED in the chain acts as a level shifter. The level shifter footprint is in the LED power chain, so the level shifter bypass jumper must be bridged.<br><a href="/images/build_guide_pico/sofle_pico_level_shifter_placement.png"><img src="/images/build_guide_pico/sofle_pico_level_shifter_placement.png" alt="Sofle Pico level shifter" width="49%" /></a> <a href="/images/build_guide_pico/sloppy_bypass_jumper.png"><img src="/images/build_guide_pico/sloppy_bypass_jumper.png" alt="Sofle Pico jumper bridged with solder" width="49%" /></a>

You can [drag solder](https://www.youtube.com/watch?v=wUyetZ5RtPs) across the jumper, or bend a diode leg and solder it through the holes. Modern flux core solder can make drag bridging difficult - i recommend the jumper leg method. The right-most hole on the bending jig is for this. Do this for both hands.

<a href="/images/build_guide_pico/jumper_jig.jpeg"><img src="/images/build_guide_pico/jumper_jig.jpeg" alt="Sofle Pico jumper bender location" width="32%" /></a> <a href="/images/build_guide_pico/jumper_bender_in_use.jpeg"><img src="/images/build_guide_pico/jumper_bender_in_use.jpeg" alt="Sofle Pico jumper bender in use" width="32%" /></a> <a href="/images/build_guide_pico/level_shifter_bypass_jumper.jpeg"><img src="/images/build_guide_pico/level_shifter_bypass_jumper.jpeg" alt="Sofle Pico jumper bender in use" width="32%" /></a>

<hr>

## LEDs

![LED](/images/build_guide_pico/sofle_pico_led_orientation.png)

LEDs are placed on the back of the PCB. The lens should point up through the PCB so they shine into the bottom of the switch. One leg will have a diagonal cut. This cut leg should be aligned with the mark on the PCB.

To solder: tin one pad, place the LED and hold using tweezers, apply heat to the leg until the solder melts and the LED is flush with the board. Now the remaining legs can be soldered without the component moving. The LEDs are sensitive to heat. Let the LED cool between soldering each leg. Use the lowest heat needed for your solder.

Alternately, you can use a rework station heat gun and solder paste. I prefer this method for the LEDs, i think it's easier to get components to sit flush. Put a dab of solder paste on each pad, then place your LEDs with tweezers or a steady hand. (The holes above/below the LED hole are intended to make tweezer placement easier).

The LEDs are wired in one long chain. If a LED is not working, replace the LED and the LED preceding it. Sometimes just the output of a LED is damaged. The full chain does not need to be installed if you want to test a partially built board. 
<a href="/images/build_guide_pico/sofle_pico_led_wiring_chain.png"><img src="/images/build_guide_pico/sofle_pico_led_wiring_chain.png" alt="Sofle Pico LED circuit sequence." width="100%" /></a>
<br>
Revisions v3.5.4 and later will have the LED number directly above the LED to make troubleshooting the LED chain easier.<br><a href="/images/build_guide_pico/sofle_pico_led_chain_markings.jpeg"><img src="/images/build_guide_pico/sofle_pico_led_chain_markings.jpeg" alt="Sofle Pico LED sequence markings." width="32%" /></a>

<hr>

## Pico MCU
<a href="/images/build_guide_pico/sofle_pico_MCU_heroshot.png"><img src="/images/build_guide_pico/sofle_pico_MCU_heroshot.png" alt="Sofle Pico MCU with elevated OLED closeup" width="100%" /></a>

The Pico is installed on the top of the board, face up, and in the marked holes. (There are many variants of the Pico - the face up orientation ensures easy access to the reset button wherever it may be).

* Top of the board: this is the side of the PCB opposite the diodes, LEDs and switch sockets
* Marked holes: Insert the Pico into the holes with the rectangular outline on the top of the board. 

Double-check your work here. This step is hard to reverse if a mistake is made.

### Pico MCU installed permanently with header pins
You can permanently install the Pico using the 20-pin male-male headers that came with the Pico. 
1. insert the headers into the board and the Pico both before soldering. (The header pin rows can tilt a little if it's not inserted into both the board and the Pico.) The header pins may have one longer side. Install the longer side on the PCB, because you'll need to trim these, and the trimmed pins look better on the underside of the board. Use a piece of kapton tape to attach the Pico to the PCB while soldering.

1. Flip the board over. The pins on the back of the board that you will be soldering should _not_ be in the outline. Soldering 1 of the outermost pins on each pin header on the PCB. Hold the board up to make sure the pin header is sitting flush with the pcb. If it's not, you can reheat that joint until it is flush. 
![Pico MCU](/images/build_guide_pico/sofle_pico_starter_pins.jpeg) 
1. Solder the remaining pcb/pin header joints on the back.
2. Flip the board over. With the Pico, repeat the process of soldering & checking 1 pin with the pin header and the Pico. 
3. Solder all the remaining Pico/pin header pins.

### Pico MCU installed with sockets
Previous versions of the Sofle used diode legs. This guide does not - instead we'll use "needle pins", which are now readily available, inexpensive, and less fussy then diode legs, but they add more height than diode legs would, which works well to support the OLEDs.
![Pico socketed MCU](/images/build_guide_pico/sofle_pico_sockets_add_height.png)

To install a socketed Pico using the diode leg approach [from splitkb.com][ProMicrosocketing]:

1. Insert the needle pins into the female sockets, and then insert the female sockets into the PCB and the Pico. Assembling the sockets/Pico/PCB before soldering ensures an excellent alignment. Be sure that the Pico is face up, and that the socket pins are inserted into the square outline on the front of the board. Applying a piece of kapton tape to hold everything in place can be helpful. 
<a href="/images/build_guide_pico/needle_pin_inserts.jpeg"><img src="/images/build_guide_pico/needle_pin_inserts.jpeg" alt="Sofle Pico with needle pins to be socketed" width="50%" /></a>

1. Flip the board over. On the back of the PCB, solder one pin on each side, pushing down on the PCB to ensure the headers are perpendicular and fully seated. Pick up the board and inspect to insure that everything is seated flush. If it's not flush, reheat the joint and push the socket down until it's flush. (Be sure you're not touching the pin your heating when you push it down).<br><a href="/images/build_guide_pico/wonky_MCU.jpeg"><img src="/images/build_guide_pico/wonky_MCU.jpeg" alt="Tilted MCU" width="47%" /></a> <a href="/images/build_guide_pico/wonky_fixed_MCU.jpeg"><img src="/images/build_guide_pico/wonky_fixed_MCU.jpeg" alt="Tilted MCU corrected" width="47%" /></a>
1. Solder the remaining pins on the back of the pcb.<br><a href="/images/build_guide_pico/backside_MCU_pins_soldered.jpeg"><img src="/images/build_guide_pico/backside_MCU_pins_soldered.jpeg" alt="Tilted MCU corrected" width="47%" /></a>
1. Flip over the board. On the front, solder 1 pin on each side to the Pico. Again check that everything is flush before soldering the remaining pins.
<br><a href="/images/build_guide_pico/MCU_solder_1_pin.jpeg"><img src="/images/build_guide_pico/MCU_solder_1_pin.jpeg" alt="One pin on the MCU soldered" width="47%" /></a> <a href="/images/build_guide_pico/MCU_solder_all_pins.jpeg"><img src="/images/build_guide_pico/MCU_solder_all_pins.jpeg" alt="All pins on the MCU soldered - quite badly" width="47%" /></a>

If you ever need to remove the Pico, do it by gently prying the board up in small increments, working your way around the board. Avoid pressure on the USB connector. The diode legs are quite weak and will usually bend if you pull the Pico off in one action. A [spudger](https://www.aliexpress.us/item/3256804504939626.html) tool is really handy for this sort of thing.

<hr>

## Schottky Diodes
There's one for each side. Insert on the front, right next to the MCU footprint. Be certain to orient these correctly. Solder on the back.
The leftmost hole on the diode jig is for these. 

<a href="/images/build_guide_pico/Schottky_diode.jpeg"><img src="/images/build_guide_pico/Schottky_diode.jpeg" alt="Schottky diode placement" width="32%" /></a> <a href="/images/build_guide_pico/1N5817_schottky_diode_jig.jpeg"><img src="/images/build_guide_pico/1N5817_schottky_diode_jig.jpeg" alt="Diode bending jig" width="32%" /></a>
<a href="/images/build_guide_pico/power_circuit_bend.jpeg"><img src="/images/build_guide_pico/power_circuit_bend.jpeg" alt="Schottky diode legs bending with jig" width="32%" /></a><br><a href="/images/build_guide_pico/power_circuit_diode_top.jpeg"><img src="/images/build_guide_pico/power_circuit_diode_top.jpeg" alt="Schottky diode inserted next to MCU" width="49%" /></a> <a href="/images/build_guide_pico/power_circuit_diode_snip.jpeg"><img src="/images/build_guide_pico/power_circuit_diode_snip.jpeg" alt="Schottky diode leg trimming" width="49%" /></a>

<hr>

## OLED

There are two common variants of the SSD1306 OLED. They are easily distinguishable by the corner holes. There is a separate socket for each of these, because they switch the GND/VCC pins. This pins are usually labeled on the OLEDs themselves. 

**Please check the OLED pin labels against the marking on the PCB to ensure everything matches.** It's entirely possible that the OLEDS have GND/VCC in different locations than expected. (If you do find some that differ from the oval/round below, please update this doc ans submit a PR)! The GND pin is square.
<br><a href="/images/build_guide_pico/oled_round.png"><img src="/images/build_guide_pico/oled_round.png" alt="Round corner hole OLED" width="25%" /></a> <a href="/images/build_guide_pico/oled_oval.png"><img src="/images/build_guide_pico/oled_oval.png" alt="Oval corner hole OLED" width="25%" /></a> <a href="/images/build_guide_pico/sofle_pico_oled_socket_closeup.png"><img src="/images/build_guide_pico/sofle_pico_oled_socket_closeup.png" alt="Sofle Pico OLED sockets with corner shape indicators" width="50%" /></a>
<a href="/images/build_guide_pico/sofle_pico_LH_OLED_socket.png"><img src="/images/build_guide_pico/sofle_pico_LH_OLED_socket.png" alt="Close up of OLED socketed" width="100%" /></a> 
@todo get a new picture with updated socket markings.

We will be installing the OLED so it overhangs the Pro Micro. 
1. Determine which socket your model of OLED will use.
2. Add a strip of electrician's tape to the bottom of the OLED module where it might contact the Pico. (Or a sticker)!
3. Insert the 4 pin, half height female header into the appropriate outlined footprint on the top of the PCB. On both the right and left hands, this will be to the right of the Pico. Use kapton tape to hold the socket in place while you solder the first pin. Check that the socket is perpendicular to the pcb. If it's not, reheat that solder joint and adjust.
4. Solder the remaining socket pins.
5. Push the OLED pins into the socket. You may need to trim the OLED pins so the insulation on the female and male headers mate and the OLED sits just above the Pro Micro. The downside to socketing is the OLED isn't as secure in the half height socket. When turning the keyboard upside down I find the OLED will lever away from the Pro Micro somewhat.
6. If you chose to solder the Pico without sockets, there may be a gap between the OLED and the Pico. You can add an [adhesive bumper pad](https://www.amazon.com/gp/product/B074C2XKXH/?th=1) to ensure it rests level. A rolled up piece of electrical tape will also work.<br>
<a href="/images/build_guide_pico/sofle_pico_OLED_bumper.png"><img src="/images/build_guide_pico/sofle_pico_OLED_bumper.png" alt="OLED bumper" width="100%" /></a><br>If you installed MCU sockets, the OLED may not seat all the way down. This is ugly, and I hate it. YMMV.<br><a href="/images/build_guide_pico/socket_gap.jpeg"><img src="/images/build_guide_pico/socket_gap.jpeg" alt="gap between OLED and OLED socket" width="100%" /></a>

<hr>

## TRRS Jacks
Insert into the outline on the front of the board, solder on the back.
Some brands of jack will snap into the board, holding them in place while you solder. Other brands may require tape to hold them in place while you flip the board over. Solder 1 pin first to check that everything is flush and adjust as needed. Solder remaining pins.<br><a href="/images/build_guide_pico/trrs_1.jpeg"><img src="/images/build_guide_pico/trrs_1.jpeg" alt="TRRS jack inserting into outline on top of PCB" width="47%" /></a> <a href="/images/build_guide_pico/trrs_2.jpeg"><img src="/images/build_guide_pico/trrs_2.jpeg" alt="TRRS jack inserted into outline on top of PCB" width="47%" /></a>

<hr>

## Rotary encoders
Saved for last because they are tallest. Insert into the top of the board, and solder on the backside. Some EC11's have metal tabs on opposite sides that add mechanical stability - no need to solder those. Solder 1 pin first to check that everything is flush and adjust as needed. Solder remaining pins.<br><a href="/images/build_guide_pico/ec11_2.jpeg"><img src="/images/build_guide_pico/ec11_2.jpeg" alt="EC11 rotary encoder inserted into outline on top of PCB" width="47%" /></a> <a href="/images/build_guide_pico/ec11_1.jpeg"><img src="/images/build_guide_pico/ec11_1.jpeg" alt="EC11 rotary encoder soldered on the back of the PCB" width="47%" /></a> 

<hr>

## Installing key switches and case plates

The standoff lengths mentioned assume you are using an acrylic or 3d printed plate. 

<!-- The embedded link works in a github .md, but fails as a jekyll page. The <video> was cribbed from a github rendered markdown page
<!-- The video in this repo is an older version - the latest version was uploaded to GH:
https://github.com/JellyTitan/Sofle-Pico/assets/72168556/54e6d6f9-5af3-4b82-98af-0372871ad146 -->

<video width="100%" height="auto" controls>
  <source src="https://github.com/JellyTitan/Sofle-Pico/assets/72168556/54e6d6f9-5af3-4b82-98af-0372871ad146 " type="video/mp4">
Your browser does not support the video tag.
</video>

1. Place the PCB on a flat surface. This will keep the pressure distributed evenly when pressing in the switches.
2. Snap a few switches into the top plate to help align things. The corner switches work best.
3. Carefully lower the top plate with the alignment switches onto the main PCB and push into sockets. Ensure pins are aligned.
4. Snap the remaining switches into the top plate pressing into the sockets.
5. Attach the bottom plate to the five M2 6mm standoffs.
6. Place the pcb on the back plate, aligning the standoffs with holes in the PCB.
7. On the top of the pcb, attach the key plate to the standoffs using the M2 screws.
8. Use M2 screws to attach the three 18mm standoffs to the OLED cover plate.
9. Slide the three standoff on the OLED plate through the PCB. Attach those standoffs to the backplate using M2 screws.
10. Place the encoder knob on the shaft. Tighten the set screw with a hex key. A small screwdriver for glasses may do in a pinch.
11. Put at least 4 adhesive rubber feet in the corners so the keyboard is not moving when you type.

## Warnings and disclaimers
- Don't connect or disconnect the TRRS cable when the keyboard is powered. It may short out. Always disconnect the USB cable first.
- Be gentle with USB-C ports on your microcontrollers. They are easy to break.
- Keep in mind that this is a prototype of a DIY keyboard. It’s not a polished product.
