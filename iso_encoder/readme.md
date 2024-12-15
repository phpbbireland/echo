# echo keyboard ayla STM32F411

*This code is for the new 6x17 matrix with rotary encoder version of the board*

* Keyboard Maintainer: [Michael O'Toole](https://github.com/phpbbireland)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*
* Loads in usevia.app...
* iso and ansi...

Kicad Files: Echo_Ayla_Final

Make example for this keyboard (after setting up your build environment):

    make echo/iso_encoder:via 

Flashing example for this keyboard:

    qmk flash echo_iso_encoder_via.bin

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
