# echo (Keyboards)
This is the final repository for all prior keyboard development code, and hardware.

Models included are: 
+ Alya: ayla80 (iso/ansi)
+ Cashel: cashel100 (ansi/iso)
+ Mioke: xpad (macro/num pad)
+ Echo: test code for RP2040 ayla80 (iso).
+ EN015_60_AKL (iso)
+ EN014 (iso) June 2025

The current STM32F411 keyboard code works for all versions, however, the RGB is not tested, to put it simply, I don't know how to implement the RGB code as including it resulted in compile errors, best use the RP2040 modulesfor now.  

Moved on to version 2.x of the Keyboard Development Modules (these have a single 34 pin 1.27mm pitch connector), otherwise they are the same...

**Latest Updates**  
I have switched to my RP2040 Development Module as everything works perfectly, no more issues with RGB...  
Going forward, I will use this for all development but may revisit my STM32F411 development board later...

**Notes**  
On Keyboad PCB, the 34 pin connetor is mounted on components (bottom side) of PCB.
On moules the 34 pin connector is mounted on ***bottom*** of PCB, not the component side, the image supplied does not reflect this.
