# O51Go

![O51Go](https://keeb-on.com/cdn/shop/files/DSC0071.png?v=1741176744&width=823)

40% Ortholinear Keyboard

* Keyboard Maintainer: [Salicylic-acid3](https://github.com/Salicylic-acid3)
* Hardware Supported: ATmega32U4
* Hardware Availability: [PCB & Case Data](https://github.com/Salicylic-acid3/PCB_Data), [Shop](https://keeb-on.com/products/40keyboard-goforty)

Make example for this keyboard (after setting up your build environment):

    make salicylic_acid3/o51go:default

Flashing example for this keyboard:

    make salicylic_acid3/o51go:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

[Build guide](https://salicylic-acid3.hatenablog.com/entry/go40keeb-build-guide)

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
