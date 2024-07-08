---
layout: page
title: Pico Clone comparisons
description: Raspberry Pi Pico Clone comparison
permalink: /build/mcu-compare
nav_order: 8
parent: Build
published: false

---

# Raspberry Pi Pico Clone comparison


This MCU comparison chart is a work in progressed, and not ready to be published yet.

|                                          | RPico         | Waveshare     | WeAct         | RTrobot      | Tenstar    | YD-RP2040     | SZYTF      | EstarDyn      |
| ---------------------------------------- | ------------- | ------------- | ------------- | ------------ | ---------- | ------------- | ---------- | ------------- |
| length f-l pin [mm]                      | 48.26         |               | 48.26         |              |            | 48.26         |            | 48.26         |
| width f-l pin [mm]                       | 17.78         |               | 17.78         | 22.86 (?)    |            | 17.78         |            | 17.78         |
| length [mm]                              | 51.00         |               | 53.00         | 56.50        |            | 53.34         | 53.80      |               |
| width [mm]                               | 21.00         |               | 21.52         | 26.00        |            | 22.86         | 21.00      |               |
| FLASH [MB]                               | 2             | 4             | 2/4/8/16      | 16           | 2          | 4             | 16         |               |
| USB                                      | Micro         | USB-C         | USB-C         | USB-C        | USB-C      | USB-C         | USB-C      | USB-C         |
| Max current [A]                          | 0.3           | 1.8           |               |              |            |               |            |               |
|                                          |               |               |               |              |            |               |            |               |
| Pin (white=matches RPico, red=different) |               |               |               |              |            |               |            |               |
| 1                                        | GP0           | GP0           | GP0           | GND          | GP0        | GP0           | GP0        | GP0           |
| 2                                        | GP1           | GP1           | GP1           | 3.3V         | GP1        | GP1           | GP1        | GP1           |
| 3                                        | GND           | GND           | GND           | DP           | GND        | GND           | GP2        | GND           |
| 4                                        | GP2           | GP2           | GP2           | DM           | GP2        | GP2           | GP3        | GP2           |
| 5                                        | GP3           | GP3           | GP3           | RUN          | GP3        | GP3           | GP4        | GP3           |
| 6                                        | GP4           | GP4           | GP4           | GP0          | GP4        | GP4           | GND        | GP4           |
| 7                                        | GP5           | GP5           | GP5           | GP1          | GP5        | GP5           | GP5        | GP5           |
| 8                                        | GND           | GND           | GND           | GP2          | GND        | GND           | GP6        | GND           |
| 9                                        | GP6           | GP6           | GP6           | GP3          | GP6        | GP6           | GP7        | GP6           |
| 10                                       | GP7           | GP7           | GP7           | GP4          | GP7        | GP7           | GP8        | GP7           |
| 11                                       | GP8           | GP8           | GP8           | GP5          | GP8        | GP8           | GP9        | GP8           |
| 12                                       | GP9           | GP9           | GP9           | GP6          | GP9        | GP9           | GP10       | GP9           |
| 13                                       | GND           | GND           | GND           | GP7          | GND        | GND           | GP11       | GND           |
| 14                                       | GP10          | GP10          | GP10          | GP8          | GP10       | GP10          | GP12       | GP10          |
| 15                                       | GP11          | GP11          | GP11          | GP9          | GP11       | GP11          | GND        | GP11          |
| 16                                       | GP12          | GP12          | GP12          | GP10         | GP12       | GP12          | GP13       | GP12          |
| 17                                       | GP13          | GP13          | GP13          | GP11         | GP13       | GP13          | GP14       | GP13          |
| 18                                       | GND           | GND           | GND           | GP12         | GND        | GND           | GP15       | GND           |
| 19                                       | GP14          | GP14          | GP14          | GP13         | GP14       | GP14          | GP16       | GP14          |
| 20                                       | GP15          | GP15          | GP15          | GP14         | GP15       | GP15          | GP17       | GP15          |
| 21                                       | GP16          | GP16          | GP16          | GP15         | GP16       | GP16          | GP18       | GP16          |
| 22                                       | GP17          | GP17          | GP17          | GP16         | GP17       | GP17          | GP19       | GP17          |
| 23                                       | GND           | GND           | GND           | GP17         | GND        | GND           | GP20       | GND           |
| 24                                       | GP18          | GP18          | GP18          | GP18         | GP18       | GP18          | GP21       | GP18          |
| 25                                       | GP19          | GP19          | GP19          | GP19         | GP19       | GP19          | GP22       | GP19          |
| 26                                       | GP20          | GP20          | GP20          | GP20         | GP20       | GP20          | GP23       | GP20          |
| 27                                       | GP21          | GP21          | GP21          | GP21         | GP21       | GP21          | GP24       | GP21          |
| 28                                       | GND           | GND           | GND           | GP22         | GND        | GND           | GP25       | GND           |
| 29                                       | GP22          | GP22          | GP22          | GP23         | GP22       | GP22          | GND        | GP22          |
| 30                                       | RUN           | RUN           | GP26          | GP24         | RUN        | RUN           | GP26       | RUN           |
| 31                                       | GP26          | GP26          | GP27          | GP25         | GP26       | GP26          | GP27       | GP26          |
| 32                                       | GP27          | GP27          | GP28          | GP26         | GP27       | GP27          | GP28       | GP27          |
| 33                                       | GND           | GND           | GND           | GP27         | GND        | GND           | GP29       | GND           |
| 34                                       | GP28          | GP28          | GP29          | GP28         | GP28       | GP28          | RUN        | GP28          |
| 35                                       | \- (ADC VREF) | \- (ADC VREF) | \- (ADC VREF) | GP29         | GP29       | GP29          | GND        | \- (ADC VREF) |
| 36                                       | 3V3_OUT       | 3V3_OUT       | GP24          | MODE         | 3V3_OUT    | 3V3_OUT       | 3V3_OUT    | 3V3_OUT       |
| 37                                       | 3V3_EN        | 3V3_EN        | 3V3           | VREF         | GP23       | GP23          | 3V3_EN     |               |
| 38                                       | GND           | GND           | GND           | GND          | GND        | GND           | GND        | GND           |
| 39                                       | VSYS          | VSYS          | VSYS          | 5V           | VIN        | VIN           | VIN        | VSYS          |
| 40                                       | VBUS          | VBUS          | VBUS          | GND          | VOUT       | VOUT          | VBUS       | VBUS          |
| 41                                       | SWCLK         |               | GND           | SWCLK        | 3v3        | 3v3           | 3v3        | SWCLK         |
| 42                                       | GND           |               | SWDIO         | SWDIO        | SWDIO      | SWDIO         | SWDIO      | GND           |
| 43                                       | SWDIO         |               | SWCLK         | GND          | SWDCK      | SWDCK         | SWDCK      | SWDIO         |
| 44                                       |               |               | 3V3           |              | GND        | GND           | GND        |               |
| 45                                       |               |               |               |              | VREF       | VREF          |            |               |
| 46                                       |               |               |               |              | GND        | GND           |            |               |
| TP1                                      | GND           | USB DM        |               | unknown      |            |               |            | no            |
| TP2                                      | USB DM        | USB DP        |               | unknown      |            |               |            | no            |
| TP3                                      | USB DP        | BOOT          |               | unknown      |            |               |            | no            |
| TP4                                      | GP23/SMPS PS  | SWDIO         |               | unknown      |            |               |            | no            |
| TP5                                      | GP25/LED      | GND           |               |              |            |               |            | no            |
| TP6                                      | BOOTSEL       | SWCLK         |               |              |            |               |            | no            |
| LED                                      |               |               | PWR           |              | PWR        | PWR           |            |               |
| LED                                      | LED - GP25    | LED - GP?     | LED - GP25    | LED - GP25   | LED - GP25 | LED - GP25    | LED - GP25 | LED - GP25    |
| Btn1                                     | BOOTSEL       | boot          | BOOTSEL       | MODE/bootsel | boot       | boot          | BOOTSEL    |               |
| Btn2                                     |               | reset         | nrst/RUN      | RUN          | reset      | reset         |            |               |
| Btn3                                     |               |               | User - GP23   |              | User/GP?   | User - GP24   |            |               |
| Extras                                   |               |               |               |              | WS2812     | WS2812 - GP23 |            |