---
layout: page
title: Plate foam
description: Instructions for cutting of plate foam for the Sofle Pico
parent: Cases
nav_order: 4
---

# Plate foam

A Cricut can be used to cut plate foam. 2mm PVA craft foam is used with the FDM & the acrylic case to fill the 2mm gap between the plate and the PCB.

<img src="/images/cases/plate_foam_2_sets.jpeg" alt="Two sets of plate foam for the Sofle Pico" width="100%">

## BOM

<img src="/images/cases/plate_foam_materials.jpeg" alt="Materials used to make plate foam for the Sofle Pico" width="100%">

This are the Cricut recommended tools and materials for cutting foam. Starting with a fresh knife, my cuts started looking ragged by the second set of plate foam. (The black set in the image above was cut second). 

| Name | Count | Remarks | Potential Storefront | 
|:-----|:------|:--------|:---------------------|
| Cricut Maker 3 Deep Cut Blade | 1 |  | [Amazon](https://www.amazon.com/Explore-Venture-Metallic-Aluminum-Magnetic/dp/B0CQPD6GRX) | 
| Cricut Strong grip mat | 1 | 12x12 or 12x24 | [Amazon](https://www.amazon.com/Cricut-12x24-StrongGrip-Cutting-Mat/dp/B01M35TL5W) | 
| 2mm Craft foam | 1 | I've only tried the 'Silly Winks' brand because that's what my local store carried. If there's a better foam, please submit a PR. | [Amazon](https://www.amazon.com/Sheets-Colors-Handicraft-Crafts-ACTIVITYya/dp/B0BD629SWP) | 

## Cutting the foam plates with Cricut Design Space
1. Import the svg into the Cricut Design Space. The svg can be found [here](https://github.com/JellyTitan/Sofle-Pico/blob/main/Sofle_Pico/Case/Plate_foam/Sofle_Pico_foam_outline.svg). 
2. Duplicate and mirror as necessary to optimize the use of space on your material.
3. Browse materials:<br><img src="/images/cases/1_browse-all-materials.png" alt="Browsing materiels in the Cricut Design Space" width="100%">
4. <img src="/images/cases/2_select-foam.png" alt="Selecting the material 'foam' in the Cricut Design Space" width="100%">
5. <img src="/images/cases/3_select-craft-foam.png" alt="Selecting the subset from material 'foam' in the Cricut Design Space" width="100%">
6. <img src="/images/cases/4_deep-point-blade.png" alt="Selecting the blade to be used with the 'foam' setting in the Cricut Design Space" width="100%">

## About generating new plate foam
The foam outlines were created by exporting svg layers directly from KiCad. The Svg's were imported directly into cricut creator with _no_ scaling. 