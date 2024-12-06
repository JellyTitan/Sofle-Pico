---
layout: page
title: Current Project Status
description: Outstanding tasks for the Sofle Pico
permalink: /status
nav_order: 2
---

# Current Project status
{: .no_toc }

While the current hardware iteration is stable and functional, (v.3.5.4) there are some supporting tasks still in progress. 
Specifically, QMK & VIA commits, and improving documentation. 
v3.5.5 Choc and MX variants are currently in testing, and will be released when validated. 

## Table of contents
{: .no_toc .text-delta }

1. TOC
{:toc}

## Outstanding Hardware tasks
- [ ] Validate the PCB case Gerbers
- [ ] theWerle contributed Choc and MX variants have been sent out for production/testing 6-15-24
- [ ] JLC & PCBWay part number placeholders have been added to v3.5.6. Post validation of 3.5.5, regen the Gerbers before releasing. (The docs refer to using these part number placeholders).

### Outstanding Documentation tasks
- [ ] Add documentation for TheWerle Choc variant
- [ ] Add documentation for TheWerle additional MX features
- [ ] setup a twitter account
- [ ] Add a `twitter_username` in `config.yml`
- [ ] Refactor README for simplicity and clarity. (Great example: https://github.com/GEIGEIGEIST/KLOR)
- [ ] Update docs for the troubleshooting section.
- [ ] Convert this spreadsheet for MCU's to a markdown table https://docs.google.com/spreadsheets/d/1LPjy6F5lHfUkmsrM5zlZmc5auYy5YBakW8Awe6hYFWo/edit#gid=0
- [ ] Review docs and update images 
- [ ] Add a 'releases' page.
- [ ] Run `mogrify -strip` against images before final publishing.

### Outstanding tasks before Main Sofle Repo PR submission
- [ ] PR Submitted: https://github.com/josefadamcik/SofleKeyboard/pull/195

### QMK Outstanding tasks
Open PR in review: 
[https://github.com/qmk/qmk_firmware/pull/23338](https://github.com/qmk/qmk_firmware/pull/23338)
- [ ] EE_Hands was removed during the PR. Post PR merge, recompile alternate .uf2 files with RH Master set, so that VIA users won't have to compile in QMK https://github.com/qmk/qmk_firmware/blob/master/docs/feature_split_keyboard.md#handedness-by-define
- [ ] TheWerle added handedness by pin. Once v3.5.5 is validated and release, updated QMK PR with the handedness update.

### QMK Userspace
- [ ] Move legacy & JellyTitan Sofle keymaps into a fork of qmk_userspace. (The updated qmk quidelins only allow for a simple pristine keymap in main qmk). These keymaps are temporarily in the jellytitan qmk_firmware branch `sofle_pico_fancy` while the main `sofle_pico` branch is being updated for main qmk commit. `qmk_userspace` only works with keyboards that are in QMK master - so this will have to wait.
- [ ] Post QMK commit - revisit the sofle_classic layout on qmk_userspace. The QMK firmware sofle classic layout has been updated since I split out the keymap in the userspace.

### VIA Outstanding tasks
- [ ] Refactor VIA PR to match the new simplified QMK base keymap
- [ ] VIA PR [draft is ready](https://github.com/the-via/keyboards/pull/2207). There _must_ be a QMK commit in master before a VIA PR will be considered or it will be auto-deleted. Submit this draft after QMK PR is approved.
- [ ] [QMK has removed VIA enabled keyboards from the main repo](https://github.com/qmk/qmk_firmware/pull/23338#issuecomment-2309897287). The VIA keymap was removed from QMK. Post QMK merge, look into updating the existing VIA PR, or figure out what the new process is for adding keymaps to via. 

### VIAL Outstanding tasks
- [ ] Port to VIAL post VIA/QMK merge. (With recent VIA feature enhancements - is VIAL still helpful)?