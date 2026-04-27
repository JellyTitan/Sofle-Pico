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

<table>
  <thead>
    <tr>
      <th scope="col">Pin / Property</th>
      <th scope="col">RPico</th>
      <th scope="col">Waveshare</th>
      <th scope="col">WeAct</th>
      <th scope="col">RTrobot</th>
      <th scope="col">Tenstar</th>
      <th scope="col">YD-RP2040</th>
      <th scope="col">SZYTF</th>
      <th scope="col">EstarDyn</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <th scope="row">length f-l pin [mm]</th>
      <td>48.26</td>
      <td></td>
      <td>48.26</td>
      <td></td>
      <td></td>
      <td>48.26</td>
      <td></td>
      <td>48.26</td>
    </tr>
    <tr>
      <th scope="row">width f-l pin [mm]</th>
      <td>17.78</td>
      <td></td>
      <td>17.78</td>
      <td>22.86 (?)</td>
      <td></td>
      <td>17.78</td>
      <td></td>
      <td>17.78</td>
    </tr>
    <tr>
      <th scope="row">length [mm]</th>
      <td>51.00</td>
      <td></td>
      <td>53.00</td>
      <td>56.50</td>
      <td></td>
      <td>53.34</td>
      <td>53.80</td>
      <td></td>
    </tr>
    <tr>
      <th scope="row">width [mm]</th>
      <td>21.00</td>
      <td></td>
      <td>21.52</td>
      <td>26.00</td>
      <td></td>
      <td>22.86</td>
      <td>21.00</td>
      <td></td>
    </tr>
    <tr>
      <th scope="row">FLASH [MB]</th>
      <td>2</td>
      <td>4</td>
      <td>2/4/8/16</td>
      <td>16</td>
      <td>2</td>
      <td>4</td>
      <td>16</td>
      <td></td>
    </tr>
    <tr>
      <th scope="row">USB</th>
      <td>Micro</td>
      <td>USB-C</td>
      <td>USB-C</td>
      <td>USB-C</td>
      <td>USB-C</td>
      <td>USB-C</td>
      <td>USB-C</td>
      <td>USB-C</td>
    </tr>
    <tr>
      <th scope="row">Max current [A]</th>
      <td>0.3</td>
      <td>1.8</td>
      <td></td>
      <td></td>
      <td></td>
      <td></td>
      <td></td>
      <td></td>
    </tr>
    <tr>
      <th scope="row"></th>
      <td></td>
      <td></td>
      <td></td>
      <td></td>
      <td></td>
      <td></td>
      <td></td>
      <td></td>
    </tr>
    <tr>
      <th scope="row">Pin (white=matches RPico, red=different)</th>
      <td></td>
      <td></td>
      <td></td>
      <td></td>
      <td></td>
      <td></td>
      <td></td>
      <td></td>
    </tr>
    <tr>
      <th scope="row">1</th>
      <td>GP0</td>
      <td>GP0</td>
      <td>GP0</td>
      <td>GND</td>
      <td>GP0</td>
      <td>GP0</td>
      <td>GP0</td>
      <td>GP0</td>
    </tr>
    <tr>
      <th scope="row">2</th>
      <td>GP1</td>
      <td>GP1</td>
      <td>GP1</td>
      <td>3.3V</td>
      <td>GP1</td>
      <td>GP1</td>
      <td>GP1</td>
      <td>GP1</td>
    </tr>
    <tr>
      <th scope="row">3</th>
      <td>GND</td>
      <td>GND</td>
      <td>GND</td>
      <td>DP</td>
      <td>GND</td>
      <td>GND</td>
      <td>GP2</td>
      <td>GND</td>
    </tr>
    <tr>
      <th scope="row">4</th>
      <td>GP2</td>
      <td>GP2</td>
      <td>GP2</td>
      <td>DM</td>
      <td>GP2</td>
      <td>GP2</td>
      <td>GP3</td>
      <td>GP2</td>
    </tr>
    <tr>
      <th scope="row">5</th>
      <td>GP3</td>
      <td>GP3</td>
      <td>GP3</td>
      <td>RUN</td>
      <td>GP3</td>
      <td>GP3</td>
      <td>GP4</td>
      <td>GP3</td>
    </tr>
    <tr>
      <th scope="row">6</th>
      <td>GP4</td>
      <td>GP4</td>
      <td>GP4</td>
      <td>GP0</td>
      <td>GP4</td>
      <td>GP4</td>
      <td>GND</td>
      <td>GP4</td>
    </tr>
    <tr>
      <th scope="row">7</th>
      <td>GP5</td>
      <td>GP5</td>
      <td>GP5</td>
      <td>GP1</td>
      <td>GP5</td>
      <td>GP5</td>
      <td>GP5</td>
      <td>GP5</td>
    </tr>
    <tr>
      <th scope="row">8</th>
      <td>GND</td>
      <td>GND</td>
      <td>GND</td>
      <td>GP2</td>
      <td>GND</td>
      <td>GND</td>
      <td>GP6</td>
      <td>GND</td>
    </tr>
    <tr>
      <th scope="row">9</th>
      <td>GP6</td>
      <td>GP6</td>
      <td>GP6</td>
      <td>GP3</td>
      <td>GP6</td>
      <td>GP6</td>
      <td>GP7</td>
      <td>GP6</td>
    </tr>
    <tr>
      <th scope="row">10</th>
      <td>GP7</td>
      <td>GP7</td>
      <td>GP7</td>
      <td>GP4</td>
      <td>GP7</td>
      <td>GP7</td>
      <td>GP8</td>
      <td>GP7</td>
    </tr>
    <tr>
      <th scope="row">11</th>
      <td>GP8</td>
      <td>GP8</td>
      <td>GP8</td>
      <td>GP5</td>
      <td>GP8</td>
      <td>GP8</td>
      <td>GP9</td>
      <td>GP8</td>
    </tr>
    <tr>
      <th scope="row">12</th>
      <td>GP9</td>
      <td>GP9</td>
      <td>GP9</td>
      <td>GP6</td>
      <td>GP9</td>
      <td>GP9</td>
      <td>GP10</td>
      <td>GP9</td>
    </tr>
    <tr>
      <th scope="row">13</th>
      <td>GND</td>
      <td>GND</td>
      <td>GND</td>
      <td>GP7</td>
      <td>GND</td>
      <td>GND</td>
      <td>GP11</td>
      <td>GND</td>
    </tr>
    <tr>
      <th scope="row">14</th>
      <td>GP10</td>
      <td>GP10</td>
      <td>GP10</td>
      <td>GP8</td>
      <td>GP10</td>
      <td>GP10</td>
      <td>GP12</td>
      <td>GP10</td>
    </tr>
    <tr>
      <th scope="row">15</th>
      <td>GP11</td>
      <td>GP11</td>
      <td>GP11</td>
      <td>GP9</td>
      <td>GP11</td>
      <td>GP11</td>
      <td>GND</td>
      <td>GP11</td>
    </tr>
    <tr>
      <th scope="row">16</th>
      <td>GP12</td>
      <td>GP12</td>
      <td>GP12</td>
      <td>GP10</td>
      <td>GP12</td>
      <td>GP12</td>
      <td>GP13</td>
      <td>GP12</td>
    </tr>
    <tr>
      <th scope="row">17</th>
      <td>GP13</td>
      <td>GP13</td>
      <td>GP13</td>
      <td>GP11</td>
      <td>GP13</td>
      <td>GP13</td>
      <td>GP14</td>
      <td>GP13</td>
    </tr>
    <tr>
      <th scope="row">18</th>
      <td>GND</td>
      <td>GND</td>
      <td>GND</td>
      <td>GP12</td>
      <td>GND</td>
      <td>GND</td>
      <td>GP15</td>
      <td>GND</td>
    </tr>
    <tr>
      <th scope="row">19</th>
      <td>GP14</td>
      <td>GP14</td>
      <td>GP14</td>
      <td>GP13</td>
      <td>GP14</td>
      <td>GP14</td>
      <td>GP16</td>
      <td>GP14</td>
    </tr>
    <tr>
      <th scope="row">20</th>
      <td>GP15</td>
      <td>GP15</td>
      <td>GP15</td>
      <td>GP14</td>
      <td>GP15</td>
      <td>GP15</td>
      <td>GP17</td>
      <td>GP15</td>
    </tr>
    <tr>
      <th scope="row">21</th>
      <td>GP16</td>
      <td>GP16</td>
      <td>GP16</td>
      <td>GP15</td>
      <td>GP16</td>
      <td>GP16</td>
      <td>GP18</td>
      <td>GP16</td>
    </tr>
    <tr>
      <th scope="row">22</th>
      <td>GP17</td>
      <td>GP17</td>
      <td>GP17</td>
      <td>GP16</td>
      <td>GP17</td>
      <td>GP17</td>
      <td>GP19</td>
      <td>GP17</td>
    </tr>
    <tr>
      <th scope="row">23</th>
      <td>GND</td>
      <td>GND</td>
      <td>GND</td>
      <td>GP17</td>
      <td>GND</td>
      <td>GND</td>
      <td>GP20</td>
      <td>GND</td>
    </tr>
    <tr>
      <th scope="row">24</th>
      <td>GP18</td>
      <td>GP18</td>
      <td>GP18</td>
      <td>GP18</td>
      <td>GP18</td>
      <td>GP18</td>
      <td>GP21</td>
      <td>GP18</td>
    </tr>
    <tr>
      <th scope="row">25</th>
      <td>GP19</td>
      <td>GP19</td>
      <td>GP19</td>
      <td>GP19</td>
      <td>GP19</td>
      <td>GP19</td>
      <td>GP22</td>
      <td>GP19</td>
    </tr>
    <tr>
      <th scope="row">26</th>
      <td>GP20</td>
      <td>GP20</td>
      <td>GP20</td>
      <td>GP20</td>
      <td>GP20</td>
      <td>GP20</td>
      <td>GP23</td>
      <td>GP20</td>
    </tr>
    <tr>
      <th scope="row">27</th>
      <td>GP21</td>
      <td>GP21</td>
      <td>GP21</td>
      <td>GP21</td>
      <td>GP21</td>
      <td>GP21</td>
      <td>GP24</td>
      <td>GP21</td>
    </tr>
    <tr>
      <th scope="row">28</th>
      <td>GND</td>
      <td>GND</td>
      <td>GND</td>
      <td>GP22</td>
      <td>GND</td>
      <td>GND</td>
      <td>GP25</td>
      <td>GND</td>
    </tr>
    <tr>
      <th scope="row">29</th>
      <td>GP22</td>
      <td>GP22</td>
      <td>GP22</td>
      <td>GP23</td>
      <td>GP22</td>
      <td>GP22</td>
      <td>GND</td>
      <td>GP22</td>
    </tr>
    <tr>
      <th scope="row">30</th>
      <td>RUN</td>
      <td>RUN</td>
      <td>GP26</td>
      <td>GP24</td>
      <td>RUN</td>
      <td>RUN</td>
      <td>GP26</td>
      <td>RUN</td>
    </tr>
    <tr>
      <th scope="row">31</th>
      <td>GP26</td>
      <td>GP26</td>
      <td>GP27</td>
      <td>GP25</td>
      <td>GP26</td>
      <td>GP26</td>
      <td>GP27</td>
      <td>GP26</td>
    </tr>
    <tr>
      <th scope="row">32</th>
      <td>GP27</td>
      <td>GP27</td>
      <td>GP28</td>
      <td>GP26</td>
      <td>GP27</td>
      <td>GP27</td>
      <td>GP28</td>
      <td>GP27</td>
    </tr>
    <tr>
      <th scope="row">33</th>
      <td>GND</td>
      <td>GND</td>
      <td>GND</td>
      <td>GP27</td>
      <td>GND</td>
      <td>GND</td>
      <td>GP29</td>
      <td>GND</td>
    </tr>
    <tr>
      <th scope="row">34</th>
      <td>GP28</td>
      <td>GP28</td>
      <td>GP29</td>
      <td>GP28</td>
      <td>GP28</td>
      <td>GP28</td>
      <td>RUN</td>
      <td>GP28</td>
    </tr>
    <tr>
      <th scope="row">35</th>
      <td>- (ADC VREF)</td>
      <td>- (ADC VREF)</td>
      <td>- (ADC VREF)</td>
      <td>GP29</td>
      <td>GP29</td>
      <td>GP29</td>
      <td>GND</td>
      <td>- (ADC VREF)</td>
    </tr>
    <tr>
      <th scope="row">36</th>
      <td>3V3_OUT</td>
      <td>3V3_OUT</td>
      <td>GP24</td>
      <td>MODE</td>
      <td>3V3_OUT</td>
      <td>3V3_OUT</td>
      <td>3V3_OUT</td>
      <td>3V3_OUT</td>
    </tr>
    <tr>
      <th scope="row">37</th>
      <td>3V3_EN</td>
      <td>3V3_EN</td>
      <td>3V3</td>
      <td>VREF</td>
      <td>GP23</td>
      <td>GP23</td>
      <td>3V3_EN</td>
      <td></td>
    </tr>
    <tr>
      <th scope="row">38</th>
      <td>GND</td>
      <td>GND</td>
      <td>GND</td>
      <td>GND</td>
      <td>GND</td>
      <td>GND</td>
      <td>GND</td>
      <td>GND</td>
    </tr>
    <tr>
      <th scope="row">39</th>
      <td>VSYS</td>
      <td>VSYS</td>
      <td>VSYS</td>
      <td>5V</td>
      <td>VIN</td>
      <td>VIN</td>
      <td>VIN</td>
      <td>VSYS</td>
    </tr>
    <tr>
      <th scope="row">40</th>
      <td>VBUS</td>
      <td>VBUS</td>
      <td>VBUS</td>
      <td>GND</td>
      <td>VOUT</td>
      <td>VOUT</td>
      <td>VBUS</td>
      <td>VBUS</td>
    </tr>
    <tr>
      <th scope="row">41</th>
      <td>SWCLK</td>
      <td></td>
      <td>GND</td>
      <td>SWCLK</td>
      <td>3v3</td>
      <td>3v3</td>
      <td>3v3</td>
      <td>SWCLK</td>
    </tr>
    <tr>
      <th scope="row">42</th>
      <td>GND</td>
      <td></td>
      <td>SWDIO</td>
      <td>SWDIO</td>
      <td>SWDIO</td>
      <td>SWDIO</td>
      <td>SWDIO</td>
      <td>GND</td>
    </tr>
    <tr>
      <th scope="row">43</th>
      <td>SWDIO</td>
      <td></td>
      <td>SWCLK</td>
      <td>GND</td>
      <td>SWDCK</td>
      <td>SWDCK</td>
      <td>SWDCK</td>
      <td>SWDIO</td>
    </tr>
    <tr>
      <th scope="row">44</th>
      <td></td>
      <td></td>
      <td>3V3</td>
      <td></td>
      <td>GND</td>
      <td>GND</td>
      <td>GND</td>
      <td></td>
    </tr>
    <tr>
      <th scope="row">45</th>
      <td></td>
      <td></td>
      <td></td>
      <td></td>
      <td>VREF</td>
      <td>VREF</td>
      <td></td>
      <td></td>
    </tr>
    <tr>
      <th scope="row">46</th>
      <td></td>
      <td></td>
      <td></td>
      <td></td>
      <td>GND</td>
      <td>GND</td>
      <td></td>
      <td></td>
    </tr>
    <tr>
      <th scope="row">TP1</th>
      <td>GND</td>
      <td>USB DM</td>
      <td></td>
      <td>unknown</td>
      <td></td>
      <td></td>
      <td></td>
      <td>no</td>
    </tr>
    <tr>
      <th scope="row">TP2</th>
      <td>USB DM</td>
      <td>USB DP</td>
      <td></td>
      <td>unknown</td>
      <td></td>
      <td></td>
      <td></td>
      <td>no</td>
    </tr>
    <tr>
      <th scope="row">TP3</th>
      <td>USB DP</td>
      <td>BOOT</td>
      <td></td>
      <td>unknown</td>
      <td></td>
      <td></td>
      <td></td>
      <td>no</td>
    </tr>
    <tr>
      <th scope="row">TP4</th>
      <td>GP23/SMPS PS</td>
      <td>SWDIO</td>
      <td></td>
      <td>unknown</td>
      <td></td>
      <td></td>
      <td></td>
      <td>no</td>
    </tr>
    <tr>
      <th scope="row">TP5</th>
      <td>GP25/LED</td>
      <td>GND</td>
      <td></td>
      <td></td>
      <td></td>
      <td></td>
      <td></td>
      <td>no</td>
    </tr>
    <tr>
      <th scope="row">TP6</th>
      <td>BOOTSEL</td>
      <td>SWCLK</td>
      <td></td>
      <td></td>
      <td></td>
      <td></td>
      <td></td>
      <td>no</td>
    </tr>
    <tr>
      <th scope="row">LED</th>
      <td></td>
      <td></td>
      <td>PWR</td>
      <td></td>
      <td>PWR</td>
      <td>PWR</td>
      <td></td>
      <td></td>
    </tr>
    <tr>
      <th scope="row">LED</th>
      <td>LED - GP25</td>
      <td>LED - GP?</td>
      <td>LED - GP25</td>
      <td>LED - GP25</td>
      <td>LED - GP25</td>
      <td>LED - GP25</td>
      <td>LED - GP25</td>
      <td>LED - GP25</td>
    </tr>
    <tr>
      <th scope="row">Btn1</th>
      <td>BOOTSEL</td>
      <td>boot</td>
      <td>BOOTSEL</td>
      <td>MODE/bootsel</td>
      <td>boot</td>
      <td>boot</td>
      <td>BOOTSEL</td>
      <td></td>
    </tr>
    <tr>
      <th scope="row">Btn2</th>
      <td></td>
      <td>reset</td>
      <td>nrst/RUN</td>
      <td>RUN</td>
      <td>reset</td>
      <td>reset</td>
      <td></td>
      <td></td>
    </tr>
    <tr>
      <th scope="row">Btn3</th>
      <td></td>
      <td></td>
      <td>User - GP23</td>
      <td></td>
      <td>User/GP?</td>
      <td>User - GP24</td>
      <td></td>
      <td></td>
    </tr>
    <tr>
      <th scope="row">Extras</th>
      <td></td>
      <td></td>
      <td></td>
      <td></td>
      <td>WS2812</td>
      <td>WS2812 - GP23</td>
      <td></td>
      <td></td>
    </tr>
  </tbody>
</table>
