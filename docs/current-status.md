---
layout: page
title: Current Project Status
description: Outstanding tasks for the Sofle Pico
permalink: /status
nav_order: 2
---

# Current Project status
{: .no_toc }

The current hardware iteration is stable and functional, (v.3.5.4). I'm still tidying up the docs, but it's mostly done.

Work on v3.5.5 Choc and MX variants had started, but the development on those has stalled, and may be abandoned.

## Table of contents
{: .no_toc .text-delta }

1. TOC
{:toc}

## Update November 2025
User [@suboworx](https://github.com/subworx) [reports](https://github.com/JellyTitan/Sofle-Pico/discussions/51#discussioncomment-13701701) a pre-built version can be purchased on [Aliexpress](https://www.aliexpress.us/item/3256807560779539.html). 

## Outstanding Hardware tasks
- [ ] theWerle contributed Choc and MX variants v.3.5.4 have been sent out for production/testing 6-15-24
- [ ] JLC & PCBWay part number placeholders have been added to v3.5.6. Post validation of 3.5.5, regen the Gerbers before releasing. (The docs refer to using these part number placeholders).

### Outstanding Documentation tasks
- [ ] Add documentation for TheWerle Choc variant
- [ ] Add documentation for TheWerle additional MX features
- [ ] setup a twitter account
- [ ] Add a `twitter_username` in `config.yml`
- [ ] Refactor README for simplicity and clarity. (Great example: https://github.com/GEIGEIGEIST/KLOR)
- [ ] Convert this spreadsheet for MCU's to a markdown table https://docs.google.com/spreadsheets/d/1LPjy6F5lHfUkmsrM5zlZmc5auYy5YBakW8Awe6hYFWo/edit#gid=0
- [ ] Review docs and update images 
- [ ] Add a 'releases' page.
- [ ] Run `mogrify -strip` against images before final publishing.

### QMK Outstanding tasks
- [ ] EE_Hands was removed during the PR. Recompile alternate .uf2 files with RH Master set, so that VIA users won't have to compile in QMK https://github.com/qmk/qmk_firmware/blob/master/docs/feature_split_keyboard.md#handedness-by-define
- [ ] TheWerle added handedness by pin. Once v3.5.5 is validated and release, updated QMK PR with the handedness update.

### QMK Userspace
- [ ] Move legacy & JellyTitan Sofle keymaps into a fork of qmk_userspace. (The updated qmk guidelines only allow for a simple pristine keymap in main qmk). These keymaps are temporarily in the jellytitan qmk_firmware branch `sofle_pico_fancy` while the main `sofle_pico` branch is being updated for main qmk commit. `qmk_userspace` only works with keyboards that are in QMK master - so this will have to wait.
- [ ] Revisit the sofle_classic layout on qmk_userspace. The QMK firmware sofle classic layout has been updated since I split out the keymap in the userspace
