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

## Table of contents
{: .no_toc .text-delta }

1. TOC
{:toc}

## Outstanding Hardware tasks
- [ ] Add a 'key' notch to the tenting puck footprints and regenerate cases. (Or add a key notch below encoder)?
- [ ] Validate the PCB case Gerbers
- [ ] theWerle has made some excellent improvements during the Choc Variant development. Review notes and fold incorporate those into MX version.

### Outstanding Documentation tasks
- [ ] Increase container width on desktop.
- [ ] setup a twitter account
- [ ] Add a `twitter_username` in `config.yml`
- [ ] Add an email in `_config.yml`. Can i use the @soflepico.com email? (soflepico@gmail.com already taken)
- [ ] Refactor README for simplicity and clarity. (Great example: https://github.com/GEIGEIGEIST/KLOR)
- [ ] Update docs for the troubleshooting section.
- [ ] Review docs and update images 
- [ ] Update path to case files from the Main README
- [ ] Add UF2 files and update relative path in README.
- [ ] Add a 'releases' page.

### Outstanding tasks before Main Sofle Repo PR submission
- [ ] Started a sofle doc commit - docs mostly done, needs hero images and build guide decisions. (See @todo) [DRAFT PR HERE](https://github.com/josefadamcik/SofleKeyboard/pull/195)
- [ ] Update PCB & Cases before submitting PR

### QMK Outstanding tasks
- [ ] Move the Animations into a separate file. (Out of keymap files)
- [ ] The Jellytitan keymap has better animations - move those to default
- [ ] Refactor the LH Jellytitan layout, it could be using the space better.
- [ ] Review OLED rotation config. (May be out of date in relation to current hardware).

### VIA Outstanding tasks
- [ ] VIA PR is ready - but there _must_ be a QMK commit in master before a VIA PR will be considered. (It will be auto-deleted!)
