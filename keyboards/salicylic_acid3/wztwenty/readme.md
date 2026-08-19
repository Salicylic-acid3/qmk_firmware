# WzTwenty

![WzTwenty](https://cdn-ak.f.st-hatena.com/images/fotolife/S/Salicylic_acid3/20260409/20260409002855.jpg)

Compact numpad with all-convex keycaps (RP2040 version).

* Keyboard Maintainer: [Salicylic-acid3](https://github.com/Salicylic-acid3)
* Hardware Supported: RP2040
* Hardware Availability: [Booth Shop](https://salicylic-acid3.booth.pm/items/8139092)

Make example for this keyboard (after setting up your build environment):

    make salicylic_acid3/wztwenty:default

Flashing example for this keyboard:

    make salicylic_acid3/wztwenty:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

[Build guide](https://salicylic-acid3.hatenablog.com/entry/wz20-build-guide)

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
