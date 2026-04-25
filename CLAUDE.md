# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Repository overview

This is the Sofle Pico split keyboard project — a 6×4+5 key column-staggered split keyboard using the RP2040-based Raspberry Pi Pico MCU. The repo contains hardware design files (KiCad PCB, cases), QMK firmware, and a Jekyll documentation site hosted at [soflepico.com](https://www.soflepico.com) via GitHub Pages.

```
docs/          Jekyll documentation site (soflepico.com)
Sofle_Pico/    Hardware files: PCB (KiCad), Case, Firmware
Gerbers/       PCB manufacturing output files
qmk/           QMK firmware files
Design/        Design assets
```

## Jekyll docs site

### Commands

All commands run from the `docs/` directory:

```bash
bundle exec jekyll serve        # local preview at http://localhost:4000
bundle exec jekyll build        # build to docs/_site/
bundle update                   # update gem lockfile (see constraints below)
```

### Gem constraints

The `Gemfile` pins `github-pages` to version `231`. This constrains several gems to older versions than their latest — notably `activesupport` (3.1.12) and `faraday` (2.0.0). Do not attempt to bump these in `Gemfile.lock` manually; `bundle update` will correctly resolve them. Past dependabot PRs incorrectly pushed these past the allowed versions and broke the GitHub Pages build.

### Deployment

GitHub Actions (`.github/workflows/pages.yml`) deploys automatically on push to `main` when any file under `docs/**` changes. It uses Ruby 3.1 with `bundler-cache: true`. The built `docs/_site/` is uploaded as an artifact and deployed to GitHub Pages.

### Theme and customization

- Theme: `just-the-docs` 0.12.0 with a custom color scheme (`color_scheme: pico`)
- Custom color scheme: `docs/_sass/color_schemes/pico.scss` (uses `$green-300` for link color, Roboto font)
- Custom CSS: `docs/_sass/custom/custom.scss`
- Theme extension hooks: `docs/_includes/head_custom.html` (fonts, favicons, cache headers), `docs/_includes/footer_custom.html` (lightbox), `docs/_includes/components/aux_nav.html`

### Writing docs pages

Front matter required for all pages:

```yaml
---
layout: page
title: Page Title
description: One-line description (used by jekyll-seo-tag for meta/JSON-LD)
permalink: /slug
nav_order: 2
---
```

Table of contents pattern (used on longer pages):

```markdown
## Table of contents
{: .no_toc .text-delta }

1. TOC
{:toc}
```

Add `{: .no_toc }` after any heading that should be excluded from the TOC.

### Accessibility (WCAG 2.1)

- **Do not use GFM task list syntax** (`- [ ]`, `- [x]`). Jekyll renders these as `<input type="checkbox" disabled>` with no `<label>`, violating WCAG 4.1.2. Use plain list items instead.
- Use descriptive link text — not bare URLs, not single words like "here" or "reports".
- Heading levels must not skip ranks (e.g. `###` under `##`, not directly under `#`).

## Hardware

Current stable release: **v3.5.4** (MX). A Choc variant (v3.5.5) is in development but stalled.

- PCB designed in KiCad; Gerbers are in `Gerbers/`
- Firmware: QMK (not yet in QMK master — PR open). Use the `sofle_pico_fancy` branch of [JellyTitan/qmk_firmware](https://github.com/JellyTitan/qmk_firmware/tree/sofle_pico_fancy) for builds with advanced features.
- Keymap configuration: VIA (requires manual JSON upload until VIA PR merges) and VIAL (merged into vial-qmk)
- Flashing: drag-and-drop `.uf2` files supported
