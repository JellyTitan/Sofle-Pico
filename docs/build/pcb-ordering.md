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

By default, all JLC boards have a part number printed on them. Most people won't notice them unless your looking for them, or if the manufacturer puts them somewhere <a href="/images/ordering_guide/dumb_number_placement.png">obtrusive</a>. You can pay extra to have the numbers removed entirely, or you can specify the location - which is free of charge. Sofle Pico supports the "[Specify a location](https://jlcpcb.com/help/article/50-How-to-remove-order-number-from-your-PCB)"<sup>6</sup> option by including an embedded line of placeholder text, 'JLCJLCJLC'. When this option is selected, the placeholder text will be replaced with the part number. The part number appears above key top of the middle finger row. The [placeholder text for PCBWay](https://www.pcbway.com/blog/help_center/Notes_of_Product_No_on_Your_PCB_78d5a03c.html#:~:text=PCBWay%20will%20add%20the%20Product,will%20be%20hidden%20when%20soldering.) has also been included on the opposite side of the board. 

The remainder of the checkout process is standard ecommerce stuff. After you pay for your order, it will be reviewed before going into production. They will let you know if the file has any issues.

JLC has been known to request an additional fee for 'too many holes'. The application of this fee has been inconsistent. YMMV.

JLC may perform a quality check on the PCB and flag the [poke-yoke'd](/build/poka-yoke) solder masks, which are only on one side, as a potential issue. They may offer to add solder masks to both sides of the holes. The PCB is functional with or without this modification. If you do choose to have JLC 'fix' the solder masks, you'll need to pay extra attention during assembly, as it will be easier to assemble things incorrectly. You can read more about it in [this discussion](https://www.soflepico.com/build/poka-yoke).