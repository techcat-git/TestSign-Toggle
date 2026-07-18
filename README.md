An extremely simple program that enables/disables test signing, then restarts the users computer.

THIS PROGRAM WILL ***NOT*** WORK IF SECURE BOOT IS ENABLED.

ALSO, ENABlING TEST SIGNING ON WINDOWS IS A HUGE SECURITY RISK. PLEASE PROCEED WITH CAUTION.

----------------------------------------------------------


Before using the app:

Right click on the program, and select "Properties". Go to the "Compatiblity" tab and tick the checkbox labeled "Run this program as administrator". This app will not function correctly without administrator privileges.

----------------------------------------------------------

There are two apps:

TestSign-ON.exe - Enables test signing, then force restarts.

TestSign-OFF.exe - Disables test signing, then force restarts.

----------------------------------------------------------

Why does this program exist?

I made this program because I wanted to run some "legally obtained" Denuvo Hypervisor repacks. and test signing had to be on in order for them to work correctly. However, keeping this enabled would cause some games (mostly ones with anti-cheat) to stop working properly. Copying and pasting commands manually to enable/disable test signing was frustrating. So I whipped together this app in a matter of minutes that did all of that for me.

----------------------------------------------------------

How does this program work?

This program is basically a batch file nested inside of an executable. It runs a command that either disables/enables test signing, then restarts.

----------------------------------------------------------

Troubleshooting:

Before making an issue, try these steps:

1. Make sure you're running the program as administrator. It will not work without these privileges.

2. Disable secure boot. Having secure boot enabled will cause this program to fail.

3. Run the commands manually:

bcdedit /set testsigning on

(or if you want it off)

bcdedit /set testsigning off

(then restart)

shutdown /r /t 0

4. Certain games broken after enabling test signing? Just disable it.

----------------------------------------------------------

<img width="258" height="92" alt="{B9EB95FD-304A-4D6E-905F-843B43B704CF}" src="https://github.com/user-attachments/assets/a98c2b4c-b5d8-41bd-b7b4-5a0ec457020e" />

^ If you see this on the bottom right corner of your desktop, test signing is enabled. This watermark cannot be removed *when test signing is **ON***
