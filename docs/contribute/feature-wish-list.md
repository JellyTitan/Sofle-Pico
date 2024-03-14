---
layout: page
title: Feature Wish List
permalink: /contributing/wish-list
nav_order: 1
parent: Contributing
---

# Feature wish list

There's some features & cleanup that I would like to add if time permits. They are all nice-to-have's, so if you've got the time and inclination, I'd appreciate the help!
- [ ] Markings on the PCB for rubber bumper placement. (5 per side) On the bottom of the case, placement doesn't matter so much, but between the acrylic keyplate and the pcb, this would be helpful. (The acrylic keyplate can flex lots during assembly, this prevents key-popout.)
- [ ] Convert the rotary encoders to a combo switch/rotary footprint, so you can choose either. (May need to update case files)? <br><img src="/images/build_guide_pico/thumb_combo_wish_list.png" alt="Rotary encoder and switch combo footprint from the Junco" width="100px">
- [ ] Markdown files - fixing typos / grammar or improving clarity, documentation, etc. (I lean towards 'overly-verbose' - can you help me make this more 'concise')?
- [ ] Validate the PCB case. The files have been created, but not ordered & tested.
- [ ] Adapt bongocat for 128x64. I haven't been able to find any variants formatted for the orientation/size the Sofle Pico uses. (doio/kb16 has a 128x32 library that can be adapted)?
- [ ] "boot mode" graphic: https://docs.qmk.fm/#/feature_oled_driver?id=other-examples. I haven't found any examples in the QMK repo. Does this feature still work?
- [ ] Improving the case files and/or adding new cases.
- PCBA ordering guide. (See [this guide](https://github.com/daneski13/Junco/blob/main/Ordering%20from%20JLC/jlc_ordering.md) on the Junco).
- [ ] Adding underglow. See [Junco](https://github.com/daneski13/Junco).
- [ ] "Master key" variant that supports soldered MX 3-pin, MX 5-pin, Choc V1, and Choc V2. ([See Cantor MX](https://github.com/diepala/cantor)) for example. (This would allow for a very inexpensive 'caseless' version).
- [ ] Add support for color displays. Not sure this is viable with the current form factor. I couldn't find any reasonably priced i2c that fit nicely. I looked into e-ink - but the refresh rate on those is crazy slow, so they are not viable in their current state.
- [ ] Piezo speaker. QMK doesn't support this for ARM boards yet, but maybe someday.
- [ ] USB-C jack in addition to TRRS.
- [ ] Horizontal encoder/ec12 encoder combo. (The horiontal encoder needs additional cutouts - there isn't room for those with the base Pico)
- [ ] Haptic buzzer? (https://github.com/GEIGEIGEIST/KLOR/blob/main/docs/buildguide_3DP.md#haptic-feedback-optional)
- [ ] Cirque trackpad support. I included a jack for the beekeeb pinout, but never got it to work. More details in build log.
- [ ] Automatic 'handedness'. There are no free spots in the matrix to use the matrix designation, and pulling one of the free pins  high/low would requires a 4.7k resistor, and I would rather not complicate the build with additional parts for something that will only get used once. (By 'once', i mean the alternative is to flash left/right hands seperately. Presumably after the initial flash, all changes/updates would be done using VIA).

If you have another idea, feel free to open an issue for discussion!