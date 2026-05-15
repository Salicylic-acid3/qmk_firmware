# R36Be

![R36Be](https://keeb-on.com/cdn/shop/files/2025-02-0413.34.21.jpg?v=1740587160&width=823)

30% Row-Staggered Keyboard

* Keyboard Maintainer: [Salicylic-acid3](https://github.com/Salicylic-acid3)
* Hardware Supported: ATmega32U4
* Hardware Availability: [PCB & Case Data](https://github.com/Salicylic-acid3/PCB_Data), [Shop](https://keeb-on.com/products/bethirty-aluminium)

Make example for this keyboard (after setting up your build environment):

    make salicylic_acid3/r36be:default

Flashing example for this keyboard:

    make salicylic_acid3/r36be:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

[Build guide](https://salicylic-acid3.hatenablog.com/entry/be30alu-build-guide)

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
