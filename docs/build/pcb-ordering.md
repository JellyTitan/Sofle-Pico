---
layout: page
title: PCB Ordering
description: Sofle Pico PCB ordering guide
parent: Build
permalink: /build/pico-ordering-guide
nav_order: 4
---

# PCB Ordering Guide.

How to order this board from a PCB vendor - helpful info if it's your first time ordering a PCB. This should be easy enough even for those who are new to the PCB manufacturing process. Keep in mind, nobody can guarantee that there are not going to be some problems. If this is your first time ordering PCB's, it might be more difficult to deal with any issues along the way.

Most PCB vendors have a similar ordering process. I use [JLCPCB](https://jlcpcb.com/) because they are usually the most cost effective. I've had good luck with [Elecrow](https://www.elecrow.com/) too. [You can find PCB price comparison tools online.](https://pcbshopper.com/) When comparing pricing, be sure to enter the board dimensions, and set the minimum quantity to 5. Usually anything under 100x100mm is really inexpensive - so be sure to use actual dimensions when pricing. The Sofle Pico is 147mm x 117mm.

Most manufacturers have a 5 board minimum order quantity (MOQ). All the Sofle boards have been designed to be double sided. You'll need two pcb's to make a set, so a batch of five boards gets you two and a half sets.

The production files are known as "gerbers", and they are usually uploaded as a `.zip` file. (It's essentially a collection of files for each layer of the board, like holes, graphics, traces etc.) 

The latest Sofle Pico Gerber files can be found in a `.zip` file on github under [releases](https://github.com/JellyTitan/Sofle-Pico/releases).

![Sofle Pico releases section on Github](/images/ordering_guide/sofle_pico_gerber_zipped.png)

The homepage of JLCPCB has a drag & drop upload. Drag the gerber `.zip` and drop it on the "add gerber file" box.

![JLCPCB Home](/images/ordering_guide/JLCPCB_Ordering_1.png)

While the file is uploading, it will take you to an options screen. Once the board size is detected<sup>1</sup>, the price<sup>2</sup> will update accordingly.
Changing the pcb color<sup>3</sup> may impact production time and price.
Shipping estimates<sup>4</sup> can vary widely, so be sure to check those. (You'll see these options again during checkout).
![JLCPCB Home](/images/ordering_guide/JLCPCB_Ordering_2.png)

{: .warning}
> The default pcb surface finish contains Lead. For boards in cases, this is usually not a problem. If you're going to rock a naked board, consider going with "lead free"<sup>5</sup> for a few bucks more. The more popular colors like green and black tend to cost less for the lead free option.

By default, all JLC boards have a part number printed on them. (Most people won't notice them unless your looking for them). You can pay extra to have them removed. Sofle Pico supports the option to "Specify a location"<sup>6</sup>. (Essentially this is a line of text on the PCB that JLC will substitute with their part number). There is no additional charge for specifying the location.

The remainder of the checkout process is standard ecommerce stuff. After you pay for your order, it will be reviewed before going into production. They will let you know if the file has any issues.

JLC has been known to request an additional fee for 'too many holes'. The application of this fee has been inconsistent. YMMV.
