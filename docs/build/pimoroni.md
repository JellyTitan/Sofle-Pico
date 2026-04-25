---
layout: page
title: Pimoroni Support
description: Pimoroni implementation notes
parent: Build
permalink: /build/pimoroni
nav_order: 7
image: /images/pimoroni/pimoroni_model.png
---

# Sofle Pico Pimoroni Support

The Sofle Pico was designed for [Pimoroni](https://shop.pimoroni.com/en-us/products/trackball-breakout) support on the right hand in lieu of a rotary encoder. The outermost column of pins on the patch bay on the right hand line up with the Pimoroni pin out. However - after trying it out, the experience is not great, so it's not recommended.  The cursor movement is 'janky' at best. 

<a href="/images/pimoroni/pimoroni_spot.png"><img src="/images/pimoroni/pimoroni_spot.png" alt="Sofle Pico PCB highlighting the Pimoroni trackball footprint location" width="49%" /></a> <a href="/images/pimoroni/pimoroni_model.png"><img src="/images/pimoroni/pimoroni_model.png" alt="3D model of the Pimoroni trackball positioned on the Sofle Pico PCB" width="49%" /></a>

QMK does [officially support](https://docs.qmk.fm/#/feature_pointing_device?id=pimoroni-trackball) the Pimoroni. There may be a way to improve the janky movement in QMK. 

If you find a way to make this work well, please submit a PR. 

An additional mounting bracket will likely need to be designed to position the trackball comfortably, positioned above the pcb and angled toward the thumb.

Jenky movement example:

<video controls>
  <source src="/videos/jenk_mouse.mov" type="video/mp4">
</video>
