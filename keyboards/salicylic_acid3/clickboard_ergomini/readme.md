# ClickBoard ErgoMini

![ClickBoard ErgoMini](https://cdn-ak.f.st-hatena.com/images/fotolife/S/Salicylic_acid3/20260129/20260129153029.jpg)

Ergonomic split keyboard using ultra-short-stroke mouse micro switches.

* Keyboard Maintainer: [Salicylic-acid3](https://github.com/Salicylic-acid3)
* Hardware Supported: RP2040
* Hardware Availability: [Booth Shop](https://salicylic-acid3.booth.pm/items/7925807)

Make example for this keyboard (after setting up your build environment):

    make salicylic_acid3/clickboard_ergomini:default

Flashing example for this keyboard:

    make salicylic_acid3/clickboard_ergomini:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

[Build guide](https://salicylic-acid3.hatenablog.com/entry/cb-ergomini-build-guide)

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
