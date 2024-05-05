---
layout: page
title: Pimoroni Support
description: Pimaroni implementation notes
parent: Build
permalink: /build/pimarnoi
nav_order: 7
image: /images/pimoroni/pimoroni_model.png
---

# Sofle Pico Pimoroni Support

The Sofle Pico was designed for [Pimoroni](https://shop.pimoroni.com/en-us/products/trackball-breakout) support on the right hand in lieu of a rotary encoder. The outermost column of pins on the patch bay on the right hand line up with the Pimoroni pin out. However - after trying it out, the experience is not great, so it's not recommended.  The cursor movement is 'jenky' at best. 

<a href="/images/pimoroni/pimoroni_spot.png"><img src="/images/pimoroni/pimoroni_spot.png" alt="pcb with diode inserted from the top" width="49%" /></a> <a href="/images/pimoroni/pimoroni_model.png"><img src="/images/pimoroni/pimoroni_model.png" alt="pcb with bent diode legs" width="49%" /></a>

QMK does [officially support](https://docs.qmk.fm/#/feature_pointing_device?id=pimoroni-trackball) the Pimoroni. There may be a way to improve the jenky movement in QMK. 

If you find a way to make this work well, please submit a PR. 

An additional mounting bracket will likely need to be designed to position the trackball comfortably, positioned above the pcb and angled toward the thumb.

Jenky movement example:

<video controls>
  <source src="/videos/jenk_mouse.mov" type="video/mp4">
</video>
