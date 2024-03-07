---
layout: page
title: Poka-yoke
description: Poka-yoke design philosophy
parent: Build
nav_order: 1
---

# Poka yoke design
When designing the Sofle Pico, an effort was made to '[poka-yoke](https://en.wikipedia.org/wiki/Poka-yoke)' the design, that is, to make the design as 'fool proof' as possible to assemble. 

Specifically, clear markings/symbols and selective masking of footprint through-holes are used to ensure that components are soldered to the correct side & in the correct orientation. Outlines indicate the side the component should be inserted into. The side with the outlines has footprint through-holes masked, so that if the user inserted the component from the wrong side, it would not be solderabe.

<img src="/images/build_guide_pico/poka-yoke-pcb.jpeg" alt="Tilted MCU corrected" width="32%" />
<img src="/images/build_guide_pico/poka-yoke-back.jpeg" alt="Tilted MCU corrected" width="32%" />
<img src="/images/build_guide_pico/poka-yoke-front.jpeg" alt="Tilted MCU corrected" width="32%" />


Please open an issue if you have a suggestion for improving the poka-yoke. I'd like to move away from English language notes on the PCB, and replace them with universal pictograms.