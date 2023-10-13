# Sofle Pico Build log
These notes were made in KiCad during the design & build process. There were ultimately 4 produced iterations to get things dialed in. Mostly a personal punch list.

## First Draft, V3.1

* NOT RELEVENT: (REPLACE WITH DIFFERNT OLED) Increased annular ring size for 32x128 stacked oled. (This footprint will be replaced by a 64x128)
* DONE: Swap in the correct oled
* DONE: Removed pico pads & rebuilt teardrops
* WONT DO: Update communication from serial to TX/RX. Maybe add the optional I2C back in, with better jumpers nad markings? (ARM spli boards do not support I2C. Half duplex/Serial comm is recommended. Left a pin open to expand to TX/RX in the future)
* DONE: (Mostly) TRRS/TRS jack is all loosey goosey. Go back to TRRS jack that is asymetrical for stability.
* WONT DO: Move components out from under the Pico so it can be drag soldered (The off-brand Picos don't support this, plus we want the picos all facing down)
* DONE: Modify pico holes to account for off-brand Picos. 
* DONE: What to do about pico led? Maybe split out to double footprint again? (Added double footrpint so the LED always faces down)
* DONE: The RH Oled is under the pico. Respect the board outlines (Moving to new OLED style fixes this)
* DONE: Add puck footprint
* DONE: Add level shifter bypass
* DONE: After moving Oled and trrs, add 3rd hole for OLED plexi screen protector
* DONE: Does the vsys diode have an orientation?(Validated orientation matches the Junco)
* DONE: The hotswop sockets and LEDs are in a single combo footprint. This is great for design, but a PITA for automated production. Need to create a placebo to generate proper PNP/BOM files. (Used a "dummy" footprint). The sk6812mini-e's require 'standard' assembly, which is a large upcharge. 

## V3.1 -> 3.2
* Notes to self: The Pico variants are pretty fat. The pico outline is flush with the double sided OLED footprint. The double sided oled footprint sides can be seperated a bit if need be.
* DONE: Validate that the first sk6812 acts as a level shifter, then remove the
	 level shifter bypass. (THis doesn't work - they overheat the boards)
* DONE: Consider removing volt shifter. Really hard to solder, may not be necessary. 
	(Testing shifter bypass to asses SK6812 instead of SK6803) (DONT DO THIS! THE BOARD OVERHEATS)
* * Lessons learned/TODO 5-22-23:
* DONE: Remove OLED pin markings after prototype validation
* DONE: The 4 holes in the keyplate need to be smaller, otherwise the posts go through, and that sucks.
* DONE: Make a hole in the bottom plate for the tenting puck to recess into.
* DONE: Adding the unused pins to breakouts next to thumb.
* WONT DO: Moving LED junk where pimaronit tie in is now.
* DONE: When preparing keyplate pcbs, add the gold rimmed footprint. Currently its an extra big hole on the keyplate layer for the spacer to pass through.

* WONT DO: Enlarge plate below thumb to accomodate space bars in plank layouts
* DONE: Tweak keyplate holes for OLEDs as they moved a bit between v3.02 and v3.03
* DONE: when writing FAQ link to tenting punk on printables.ocm

## V3.2 -> 3.3
Improvements made while building prototype 3.02, included in version3.03
* OLEDs incorrectly wired. GP6 went to SCL, and GP7 went to SDA, when those two should have been switched. Fixed, 
* OLED jack moved -y 2.54*1.5 for visual balance.
* Pico footprint made through-holes for buttons wider and moved bottom hole down
* Pico flipped footprint so now pico jack faces board. THen flipped it back, so reset button is always accessible.
* Pico - fixed rectangular gnd pads (now square)
* Added more visible markings to LED ground (Outline marking was obscured by solder/pad
* Reduced LED tweezer placement hole size from 1.5mm to 1mm
* Added breakouts for unused pins.
* Shrunk jumper plates. (Not sure if we're keeping those)
* Enlarged puck hole for 3d printed tenting pucks
* Moved thumb post hole between switches rather than above, so its like Sofle v1 &v2, also helps hide screw head.
* Modified OLED footprint to support both types of 128x64. (GND & VCC are switched)
* Added help text for OLEDs
* Center oled plate holes for round outline
![Sofle Pico](docs/images/build_log_pico/sofle_pico_v3.3.png)
# 3.7795 is the keyplate multiplier when creating Fusion 360 imports

## 3.3 -> 3.4
Improvements made while building prototype 3.03, included in version3.04
* CONSIDER: Adding jumpers that route from the TRRS control pins on the Pico to unused pins, so that if someone pulls out a TRRS cable and burns out a pin, the Pico can be salvaged by re-flashing TRRS to a different pin.
* DONE: 5-pin MX footprint fit validated.
* moved diode labels
* Removed Solenoid (Left it in blueprint to install on a backplate)
* Updated branding 
* Explored moving the rotary encoder farther from thumb cluster to allow for 'low profile' encoder knobs on EC12's. There is not enough room. (That particular encoder knob is 29mm). Added this feature to the list for Pico Zero features.
![Sofle Pico](docs/images/build_log_pico/low_profile_encoder_test.png)
* @todo refresh Gerbers and update path
* @todo: Mention "Lead free" 
* @todo: Mention Jlcpcbpart number placement
* @todo: seperate jlcpcb gerber?

## Future Feature Wish list
* USB-C in addition to TRRS (Maybe a 'low-cost' version with solder only switches & [RP2040 Zero](https://www.aliexpress.us/item/3256804095235134.html?spm=a2g0o.order_list.order_list_main.16.60e51802e6Bxwl&gatewayAdapt=glo2usa)?)
* Solenoid backplate
* Move Rotary encoder so there is enough space for a 30mm "low profile" rotary encoder knob.
* Piezo speaker (QMK doesn't support this for ARM boards yet)?
