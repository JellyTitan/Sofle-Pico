# Sofle Pico Pimoroni Support

The Sofle Pico was designed with Pimoroni support. The outermost column of pins on the patch bay are intended for use with the Pimoroni. However - after trying it out, the experience is not great, so it's not recommended.  The cursor movement is 'jenky' at best. 


QMK does [officially support](https://docs.qmk.fm/#/feature_pointing_device?id=pimoroni-trackball) the Pimoroni. There may be a way to improve the movement in QMK. If you'd like to add support, please submit a PR. An additional mounting bracket will likely need to be designed to position the trackball comfortably.

<video width="320" height="240" controls>
  <source src="docs/images/pimoroni/jenk_mouse.mov" type="video/mp4">
</video>
