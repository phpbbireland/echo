# echo (Keyboards)
This is the final repository for all prior keyboard development code, and hardware.

Models included are: 
+ Alya: ayla80 (iso/ansi)
+ Cashel: cashel100 (ansi/iso)
+ Mioke: xpad (macro/num pad)
+ Echo: test code for RP2040 ayla80 (iso).
+ EN015_60_AKL (iso)
+ EN014 (iso)

I'm building/compiling two versions, one with rgblight & one with rgb_matrix.

The current STM32F411 keyboard code works for all versions, however, the RGB not tested, to put it simply, I don't know how to implement the RGB code as including it resulted in compile errors, best use the RP2040 modulesfor now.  

A new keyboard vesion using the RP2040 should have working RGB, I'm awaiting my [module test board](https://hackaday.io/project/198392/log/237192-rp2040-version).

**Latest Updates**  
I have switched to my RP2040 Development Module as everything works perfectly, no more issues with RGB...  
Going forward, I will use this for all development but may revisit my STM32F411 development board later...
