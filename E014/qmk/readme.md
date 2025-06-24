# Echo EN014 Keyboard Code (June 24th)

+ Create an **echo/en014_june** directory inside: qmk_firmware/keyboards/  
+ Copy all files to qmk_firmware/keyboards/echo/en014_june
+ Change back to the qmk_firmware directory
+ Compile with: make echo/en014_june:via    
+ Copy resulting file (echo_en014_june_via.uf2) to the Module Board (Version 2.x)  

**Note:**
echo.c and echo.h are not required, all RGB matrix data now in keyboard.json.  

**Testing:**  
1 In **Chrome** browser, browse to: https://usevia.app/  
2 Authorize the Keyboard, select: *Michael O'Toole Echo*  
3 Click on the *Design Icon* and select (browse to the) usevia_en014_june.json file.  

**More Notes:**  
Tested keyboard operation (and RGB), with Module 2.0, everything perfect... 
