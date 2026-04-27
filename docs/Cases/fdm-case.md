---
layout: page
title: "3d Printable (FDM)"
parent: Cases
permalink: /cases/fdm-case
description: 3d printable Sofle Pico case instructions and links
nav_order: 2
image: /images/cases/sofle_pico_3d_printed_case_green_glow.jpeg
---

# 3d printable Sofle Pico case

{: .info}
> Files are in the Github Repo [here](https://github.com/JellyTitan/Sofle-Pico/tree/main/Sofle_Pico/Case/3d_printable_case).
> This is also posted on [Printables](https://www.printables.com/model/760098-sofle-pico-case). You'll find the latest discussion there.

<hr>


<a href="/images/cases/sofle_pico_3d_printable_case.jpeg"><img src="/images/cases/sofle_pico_3d_printable_case.jpeg" alt="Sofle Pico with 3d printed case overhead view" width="49%"></a>
<a href="/images/cases/sofle_pico_3d_printed_case_backside.jpeg"><img src="/images/cases/sofle_pico_3d_printed_case_backside.jpeg" alt="Backside of Sofle Pico with 3d printed case" width="49%"></a>
<a href="/images/cases/sofle_pico_3d_printed_case_green_glow.jpeg"><img src="/images/cases/sofle_pico_3d_printed_case_green_glow.jpeg" alt="Sofle Pico with 3d printed case lit up with green LEDs" width="32%"></a>
 <a href="/images/cases/full_plate_set.jpeg"><img src="/images/cases/full_plate_set.jpeg" alt="Sofle Pico 3d printed full set of case plates" width="32%"></a> <a href="/images/cases/back_plate_with_helper_discs.jpeg"><img src="/images/cases/back_plate_with_helper_discs.jpeg" alt="Sofle Pico back plate with 'helper discs' attached to the corners" width="32%"></a>

<hr>

## Details
The slicer-ready files can be found in the "production_ready" folder. These are 3mm thick. 'Helper discs' are recommended on the corners to prevent curling.

The latest version of the key plates have notches that the switches slot into. The non-notched earlier version of the key plate have been removed from the repo. The notched key plate should be printed with the pretty side toward the print bed, so there is a right hand & left hand versions of the file.

<a href="/images/cases/sofle_pico_notched_keyplates.png"><img src="/images/cases/sofle_pico_notched_keyplates.png" alt="Sofle Pico keyplate with retention notches" width="65%"></a> <a href="/images/cases/switch_retention_nub.png"><img src="/images/cases/switch_retention_nub.png" alt="Kailh switch data sheet excerpt showing the switch retention nubs" width="32%"></a>

There are two variants for the OLED covers due to the two types of OLEDs that can be used. 

<a href="/images/cases/sofle_pico_oled_window_variants.png"><img src="/images/cases/sofle_pico_oled_window_variants.png" alt="Sofle Pico OLED cover plate variants for round and oval corner OLEDs" ></a>

<hr>

## BOM

<table>
  <thead>
    <tr>
      <th>Name</th>
      <th>Count</th>
      <th>Remarks</th>
      <th>Potential Storefront</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>keyplates</td>
      <td>2</td>
      <td><code>sofle_pico_keyplate_notched_LH_v3.5.5.stl</code> <br> and <br> <code>sofle_pico_keyplate_notched_RH_v3.5.5.stl</code></td>
      <td></td>
    </tr>
    <tr>
      <td>backplates</td>
      <td>2</td>
      <td><code>sofle_pico_backplate_v3.4.stl</code></td>
      <td></td>
    </tr>
    <tr>
      <td>OLED plates</td>
      <td>2</td>
      <td>Note there are variants for the different types of OLED's that have higher/lower holes. <code>Sofle_pico_OLED_oval_window_v3.4.stl</code> and <code>Sofle_pico_OLED_circle_window_v3.4.stl</code></td>
      <td></td>
    </tr>
    <tr>
      <td>M2 5mm screws</td>
      <td>32</td>
      <td>Any old M2 will do. I prefer 'button head' for aesthetics. 4mm or 6mm works too, but 6mm may bottom out.</td>
      <td><a href="https://www.amazon.com/gp/product/B07ZH6GRK2">Amazon</a><br><a href="https://www.aliexpress.us/item/3256805706765925.html">AliExpress</a></td>
    </tr>
    <tr>
      <td>M2 6mm female-female standoffs</td>
      <td>10</td>
      <td>Connects the front plate to the back plate, runs <em>through</em> the pcb. Aluminum versions are available, but I've found they tend to arrive 'greasy', so I recommend the brass versions.</td>
      <td><a href="https://www.amazon.com/gp/product/B07B9X1KY6">Amazon</a><br><a href="https://www.aliexpress.us/item/3256804317893173.html">AliExpress</a></td>
    </tr>
    <tr>
      <td>M2 18mm female-female standoffs</td>
      <td>6</td>
      <td>Connects the OLED plate to the back plate, runs <em>through</em> the pcb and the key plate. These can be harder to find in small quantities. You can use an assortment kit to make these.</td>
      <td><a href="https://www.amazon.com/gp/product/B07B9X1KY6">Amazon</a><br><a href="https://www.aliexpress.us/item/3256804317893173.html">AliExpress</a></td>
    </tr>
    <tr>
      <td>2mm adhesive Rubber bumper feet.</td>
      <td>10</td>
      <td>Stick on the underside of the bottom keyboard to keep it from sliding around on the desk.</td>
      <td><a href="https://www.amazon.com/ROCHU-Self-Adhesive-Rubber-Bumpons-Furniture/dp/B073SVKFYJ">amazon</a></td>
    </tr>
  </tbody>
</table>

<hr>

## About these plates
These plates were created by exporting svg layers directly from KiCad. The SVGs were imported into Fusion360 with a 3.7795% scale. (Not sure why the KiCad exports are so small - but that multiplier seems to get them where they need to go). The svg sketches were fixed up, then extruded to 3mm.

The fusion 360 export is included in the 'source' folder. Feel free to get fancy with it!
