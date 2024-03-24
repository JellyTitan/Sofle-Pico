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
- [ ] setup a twitter account
- [ ] Add a `twitter_username` in `config.yml`
- [ ] Refactor README for simplicity and clarity. (Great example: https://github.com/GEIGEIGEIST/KLOR)
- [ ] Update docs for the troubleshooting section.
- [ ] Review docs and update images 
- [ ] Add a 'releases' page.

### Outstanding tasks before Main Sofle Repo PR submission
- [ ] PR Submitted: https://github.com/josefadamcik/SofleKeyboard/pull/195

### QMK Outstanding tasks
Open PR in review: 
[https://github.com/qmk/qmk_firmware/pull/23338](https://github.com/qmk/qmk_firmware/pull/23338)

### VIA Outstanding tasks
- [ ] VIA PR [draft is ready](https://github.com/the-via/keyboards/pull/2207). There _must_ be a QMK commit in master before a VIA PR will be considered or it will be auto-deleted. Submit this draft after QMK PR is approved.
