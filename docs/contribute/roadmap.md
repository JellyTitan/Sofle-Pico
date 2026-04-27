---
layout: page
title: Variant Roadmap
description: Sofle Pico variant creation roadmap
permalink: /contributing/variants
nav_order: 2
parent: Contributing
---

# Variant Roadmap

The Sofle Pico was designed to make it easy to swap out footprints. Most of these variants could be created in an afternoon. Writing the docs usually takes longer than designing the variant. Here's some variants that I think have appeal. If you want to contribute, please open an issue on Github.

<table>
  <thead>
    <tr>
      <th style="text-align: right">Name</th>
      <th style="text-align: right">Switch</th>
      <th style="text-align: center">Hotswop</th>
      <th style="text-align: center">RGB</th>
      <th style="text-align: left">Notes</th>
      <th style="text-align: left">Status</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td style="text-align: right">Sofle Pico</td>
      <td style="text-align: right">MX</td>
      <td style="text-align: center">Y</td>
      <td style="text-align: center">Y</td>
      <td style="text-align: left">Stable release v3.5.4</td>
      <td style="text-align: left">New features added in v3.5.5 (to be validated)</td>
    </tr>
    <tr>
      <td style="text-align: right">Sofle Pico Choc</td>
      <td style="text-align: right">Choc V1</td>
      <td style="text-align: center">Y</td>
      <td style="text-align: center">Y</td>
      <td style="text-align: left">v3.5.5 alpha release</td>
      <td style="text-align: left">@TheWerle submitted v3.5.5 (to be validated) Plenty of electrical improvements that can apply to all models.</td>
    </tr>
    <tr>
      <td style="text-align: right">Sofle Pico Master Key</td>
      <td style="text-align: right">MX 3-pin, MX 5-pin, Choc v1 Choc V2</td>
      <td style="text-align: center">N</td>
      <td style="text-align: center">N</td>
      <td style="text-align: left">Pico version of the Sofle_v2_soldered. Use the Cantor MX sweet combo footprint</td>
      <td style="text-align: left">Unclaimed</td>
    </tr>
    <tr>
      <td style="text-align: right">Sofle Pico Done</td>
      <td style="text-align: right">MX</td>
      <td style="text-align: center">Y</td>
      <td style="text-align: center">Y</td>
      <td style="text-align: left">Single sided 2-up pcb optimized for automated PCBA. Encourages vendor adoption, and lets us use the castelated holes on the Pico.</td>
      <td style="text-align: left">Unclaimed</td>
    </tr>
    <tr>
      <td style="text-align: right">Sofle Pico Gateron low profile</td>
      <td style="text-align: right">Gateron Low profile</td>
      <td style="text-align: center">N</td>
      <td style="text-align: center">??</td>
      <td style="text-align: left">Not many boards use these switches - but they are really cheap. Maybe combine with Cherry low profile?</td>
      <td style="text-align: left">Unclaimed</td>
    </tr>
    <tr>
      <td style="text-align: right">Sofle Pico Zero</td>
      <td style="text-align: right">MX</td>
      <td style="text-align: center">Y</td>
      <td style="text-align: center">Y</td>
      <td style="text-align: left">Pico Zero has a smaller footprint that would allow for a horizontal screen. Also supports 5v output, so a solenoid backplate could be added</td>
      <td style="text-align: left">Unclaimed</td>
    </tr>
    <tr>
      <td style="text-align: right">Sofle Pico Optical</td>
      <td style="text-align: right">Optical</td>
      <td style="text-align: center">Y (MX)</td>
      <td style="text-align: center">??</td>
      <td style="text-align: left">There are no optical switch split keyboards that I'm aware of. This would likely need to be based on the 'Sofle Pico Done' because PCBA would likely be required. There is an <a href="https://github.com/girishji/optical-keyboard-old?tab=readme-ov-file">optical board</a> that has QMK firmware, but i've not validated that this is viable.</td>
      <td style="text-align: left">Unclaimed</td>
    </tr>
    <tr>
      <td style="text-align: right">Sofle Pico Magnetic</td>
      <td style="text-align: right">Magnetic</td>
      <td style="text-align: center">Y (MX)</td>
      <td style="text-align: center">???</td>
      <td style="text-align: left">There are no magnetic switch split keyboards that I'm aware of. This would likely need to be based on the 'Sofle Pico Done' because PCBA would likely be required. Not sure if this is viable, but the recent flood of magnetic switches, along with the potential to customize actuation distance make this appealing.</td>
      <td style="text-align: left">Unclaimed</td>
    </tr>
    <tr>
      <td style="text-align: right">Sofle Pico Master Key Wireless</td>
      <td style="text-align: right">MX 3-pin, MX 5-pin, Choc v1 Choc V2</td>
      <td style="text-align: center">Y</td>
      <td style="text-align: center">N</td>
      <td style="text-align: left">Pico version of the Sofle_v2_soldered - but wireless. Use the Cantor MX sweet combo footprint. See discussion of merits and LOE <a href="https://github.com/JellyTitan/Sofle-Pico/discussions/36">here</a>.</td>
      <td style="text-align: left">Unclaimed</td>
    </tr>
  </tbody>
</table>
