# Echo EN014 Keyboard Code (June 24th)

+ Create an **echo/en014_june** directory inside: qmk_firmware/keyboards/  
+ Copy all files to qmk_firmware/keyboards/echo/en014_june
+ Change back to the qmk_firmware directory
+ Compile with: make echo/en014_june:via    
+ Copy resulting file (echo_en014_june_via.uf2) to the Module Board (Version 2.x)  

**Testing**  
1 In Chrome browser, browse to http://https://usevia.app/  
2 Authorize the Keyboard, select Michael O'Toole Echo  
3 Click on the *Design Icon* and select (browse to the) usevia_en014_june.json file.  

**Notes**  
The RGB is working but in the *Solid Reactive Option* rows 2,4,6 are reversed... how do I set RGB matrix to correct this?  
