---
layout: page
title: Acrylic
parent: Cases
permalink: /cases/acrylic-case
description: Acrylic case files and ordering instructions
nav_order: 1
image: /images/build_guide_pico/acrylic_case_hero_shot.jpeg
---

# Acrylic case

{: .info}
>  Files are in the Github Repo [here](https://github.com/JellyTitan/Sofle-Pico/tree/main/Sofle_Pico/Case/Acrylic_case).

<hr>

<a href="/images/cases/acrylic_case_hero_shot.jpeg"><img src="/images/cases/acrylic_case_hero_shot.jpeg" alt="Acrylic sofle pico case" width="49%"></a>
<a href="/images/cases/sofle_pico_acrylic_case.jpeg"><img src="/images/cases/sofle_pico_acrylic_case.jpeg" alt="Acrylic sofle pico case" width="49%"></a>

<hr>

## Details

These don't retain the switches as tightly as the 3d printed or the PCB cases, but they look fantastic. You can use rubber bump feet between the front plate and the PCB to improve switch retention. (See note in bom).

The production ready files for upload can be found in the "production_ready" folder. They are zipped .dxf files. I recommend 3mm thickness. Some online vendors ask you to manually input the dimensions for pricing. Dimensions can be found in the BOM remarks below.

<hr>

## BOM

 | Name | Count | Remarks | Potential Storefront |
|-|-|-|-|
| keyplates   | 2 | Use the same file for both sides: `sofle_pico_key_plate_v3.5.5.dxf.zip`<br> Dimensions: `146mm x 117mm` |[Elecrow](https://www.elecrow.com/)|
| backplates  | 2 | Use the same file for both sides: `sofle_pico_backplate_v3.4.dxf.zip`<br> Dimensions: `146mm x 117mm` |[Elecrow](https://www.elecrow.com/)|
| OLED plates | 2 | Use the same file for both sides: `sofle_pico_OLED_v3.4.dxf.zip`<br> Dimensions: `34mm x 72mm` |[Elecrow](https://www.elecrow.com/)|
|M2 5mm screws|32| Any old M2 will do. I prefer 'button head' for aesthetics. 4mm or 6mm works too, but 6mm may bottom out. |[Amazon](https://www.amazon.com/gp/product/B07ZH6GRK2)<br>[AliExpress](https://www.aliexpress.us/item/3256805706765925.html)|
| M2 6mm female-female standoffs | 10 | Connects the front plate to the back plate, runs _through_ the pcb. Aluminum versions are available, but I've found they tend to arrive 'greasy', so I recommend the brass versions.|[Amazon](https://www.amazon.com/gp/product/B07B9X1KY6)<br>[AliExpress](https://www.aliexpress.us/item/3256804317893173.html)|
| M2 18mm female-female standoffs | 6 | Connects the OLED plate to the back plate, runs _through_ the pcb and the key plate. These can be harder to find in small quantities. You can use an assortment kit to make these. |[Amazon](https://www.amazon.com/gp/product/B07B9X1KY6)<br>[AliExpress](https://www.aliexpress.us/item/3256804317893173.html)|
| 2mm adhesive Rubber bumper feet. | 20 | These improve switch retention, and keep the board from sliding on the desk. Put 5 on the top of each PCB, below the keyplate. Since the acrylic keyplate doesn't nestle into the switch retention nubs, placing these bumps between the plate and the pcb keeps the plate from flexing. Put another 5 on the bottom side of each hand to keep from sliding on the desk. | [Amazon](https://www.amazon.com/ROCHU-Self-Adhesive-Rubber-Bumpons-Furniture/dp/B073SVKFYJ) |

<hr>

## About these plates
This case was created by exporting svg layers directly from KiCad. The Svg's were imported into Fusion360 with a 3.7795% scale. (Not sure why the KiCad exports are so small - but that multiplier seems to get them where they need to go). From Fusion360, the outlines are exported as a .dxf. The .dxf's have been zipped because the only vendor I've tested these with is Elecrow. If you need another file type, you can find the initial svg's in the 'source' folder.

