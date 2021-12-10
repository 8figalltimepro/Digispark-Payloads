# Digispark-Payloads
**Multiple payloads for the digispark digistump AVR boards. Some are translated from RubberDucky and some are original.**
## All scripts are created by 8figurealltimepro.
To learn about the workings of digispark [click here](https://null-byte.wonderhowto.com/how-to/run-usb-rubber-ducky-scripts-super-inexpensive-digispark-board-0198484/)
> All the payloads are tested on Attiny85 and created on Arduino IDE.

> Please give Delay as per needed. You can actually change many codes to one-liners as well. I have given a suffecient amount of delay please increase if needed.

> Auto-Subscribe :- auto subscribes to a yt channel.

> Very Simple Backdoor :- opens up a simple admin cmd when alt-shift-printscreen is pressed on login screen

> Chrome Default Webpage Changer :- changes the starting page of chrome. You can se it to open any link

> Multi Browser Password Grabber :- grabs all the passwords of all web browsers and sends it to you. Don't worry its not mimikatz or anything of such sort. It uses nirsoft password recovery utility.

> Eternal Lock :- Keeps on locking Windows even if a restart is done. Basically the person won't be able to work. A deadly prank! indeed. It's a true IZANAMI

## Setup (*Need not follow But Recommended*)
1. windows + r
2. AppData
3. Local
4. Arduino15
5. packages
6. digistump
7. hardware
8. then go on till you find libraries
9. digisparkkeyboard
10. open DigiKeyboard using notepad
11. ctrl + g
12. 130 and enter
13. Add on the 130th line

````
#define KEY_ARROW_LEFT 0x50
#define KEY_DOWN 0x51
#define KEY_ENTER 0x28
#define KEY_ARROW_RIGHT 0x4F
#define KEY_ARROW_UP 0x52
#define KEY_TAB 0x2b
#define KEY_ESCAPE 0x29

````

### Tested Platforms
*Windows 10 updated: 8 dec 2021*
