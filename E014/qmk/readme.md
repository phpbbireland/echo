# Echo EN014 Keyboard Code (June 24th)

+ Create an **echo/en014_june** directory inside: qmk_firmware/keyboards/  
+ Copy all files to qmk_firmware/keyboards/echo/en014_june
+ Change back to the qmk_firmware directory
+ Compile with: make echo/en014_june:via    
+ Copy resulting file (echo_en014_june_via.uf2) to the Module Board (Version 2.x)  

**Note:**
echo.c and echo.h are not required, will remove them (appears to be old method), all RGB matrix data now in keyboard.json.  

**Testing the Module:**  
1 In **Chrome** browser, browse to: https://usevia.app/  
2 Authorize the Keyboard, select: *Michael O'Toole Echo*  
3 Click on the *Design Icon* and browse to the **usevia_en014_june.json** file, select it.  
4 You may need to go back to step 2 and select keyboard again (I do), then test away...  

**More Notes:**  
Tested keyboard operation and RGB, with *Keyboard Development Module* version 2.0... everything works perfectly... 
EN014 keyboard was designed to work with Module 2.x (the version with the 34 pin connector)...  

**3d Print Files (Keyboard Case)**
Case too big for single print, my Voron is 300x300mm, I used OrcaSlicer to cut in two, turned out perfect.
Both top and bottom print in two parts (dah!), will add stl's later
