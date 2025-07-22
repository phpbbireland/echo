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
Tested keyboard operation and RGB, with *Keyboard Development Module* version 2.0, module and code work perfectly.  
EN014 keyboard was designed to work with Module 2.x (the version with the 34 pin connector)...  

**Printed Case & Plate:**  
I have designed a 3D printed enclosure/case for the Keyboard, both printed in two parts with dove tail for best fit/alignment. See echo/EN14/images folder for case.png and case-top.png.
Will also included the keyboard plate print (again in two parts) as it is much cheaper than any other material and has a pleasant sound compared to other materials...

