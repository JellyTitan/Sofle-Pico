---
layout: page
title: Current Project Status
description: Outstanding tasks for the Sofle Pico
permalink: /status
nav_order: 2
---

# Current Project Status
{: .no_toc }

The current hardware iteration is stable and functional, (v.3.5.4). I'm still tidying up the docs, but it's mostly done.

Work on v3.5.5 Choc and MX variants had started, but the development on those has stalled, and may be abandoned.

## Table of contents
{: .no_toc .text-delta }

1. TOC
{:toc}

## Update November 2025
User [@suboworx](https://github.com/subworx) [reported in discussion #51](https://github.com/JellyTitan/Sofle-Pico/discussions/51#discussioncomment-13701701) that a pre-built version can be purchased on [Aliexpress](https://www.aliexpress.us/item/3256807417919453.html). 

## Outstanding VIAL Documentation Tasks
- Thanks to [@zaki](https://github.com/zakki) [VIAL now supports Sofle Pico](https://github.com/vial-kb/vial-qmk/pull/972). I built a stub page for the docs - but it needs to be fleshed out. (I've not used VIAL before, so any doc help would be appreciated).

## Outstanding Hardware Tasks
- TheWerle's contributed Choc and MX variants (v.3.5.4) have been sent out for production/testing 6-15-24
- JLC & PCBWay part number placeholders have been added to v3.5.6. Post validation of 3.5.5, regen the Gerbers before releasing. (The docs refer to using these part number placeholders).

## Outstanding Documentation Tasks
- Add documentation for TheWerle Choc variant
- Add documentation for TheWerle additional MX features
- Setup a Twitter account and add a `twitter_username` in `config.yml`
- Refactor README for simplicity and clarity. (Great example: [KLOR keyboard README](https://github.com/GEIGEIGEIST/KLOR))
- Convert this [MCU comparison spreadsheet](https://docs.google.com/spreadsheets/d/1LPjy6F5lHfUkmsrM5zlZmc5auYy5YBakW8Awe6hYFWo/edit#gid=0) to a markdown table
- Review docs and update images 
- Add a 'releases' page.
- Run `mogrify -strip` against images before final publishing.

## Outstanding QMK Tasks
- EE_Hands was removed during the PR. Recompile alternate .uf2 files with RH Master set, so that VIA users won't have to compile in QMK. See [QMK handedness-by-define docs](https://docs.qmk.fm/features/split_keyboard#handedness-by-define).
- TheWerle added handedness by pin. Once v3.5.5 is validated and released, update the QMK PR with the handedness update.


