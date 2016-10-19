# Trampoline

Trampoline is a static RTOS for small embedded systems.
Its API is aligned with OSEK/VDX OS and AUTOSAR OS 4.1 standards.

5 platforms are supported by now, but this fork is only focusing on :
* avr: AVR 8 bits microcontrollers

And we welcome external contributors to extend this list.


Trampoline runs on the following plateforms :

| MCU                          | Architecture       | Cores | Evaluation Board                  |
|------------------------------|--------------------|:-----:|-----------------------------------|
| Atmel ATMega328p             | 8-bit AVR          | 1     | Arduino Uno                       |
| Atmel ATMega2560             | 8-bit AVR          | 1     | Arduino Mega                      |


Some examples have been added (check examples):

* avr: 3 examples for Arduino Uno (ATMega328p chip) and Arduino Mega (ATMega2560 chip)
  * **blink**. Blinks a LED using an alarm and a task.
  * **serial**. improve 'blink': use the standard Arduino serial API.
  * **extInterrupt**. improve 'serial': add 2 ISRs to change the alarm period.

More examples are coming.


## Precompiled binaries of goil, the OIL compiler

Updated to version 3.1.3 on october 18.

* Mac OS X: [goil-mac-os-x.zip](http://trampoline.rts-software.org/bin/goil-mac-os-x.zip)
* Mac OS X Cocoa Application with editor: [CocoaGoil.app.zip](http://trampoline.rts-software.org/bin/CocoaGoil.app.zip)
* Linux 32 bits: [goil-linux-32.zip](http://trampoline.rts-software.org/bin/goil-linux-32.zip)
* Linux 64 bits: [goil-linux-64.zip](http://trampoline.rts-software.org/bin/goil-linux-64.zip)
* Windows: [goil-windows.zip](http://trampoline.rts-software.org/bin/goil-windows.zip)


## Useful links

For an unknown reason the OSEK-VDX portal is down since at least june. Here are copies of documents that was available for download:
* [OIL specification](http://trampoline.rts-software.org/bin/oil25.pdf)
* [OS specification](http://trampoline.rts-software.org/bin/os223.pdf)
* [COM specification](http://trampoline.rts-software.org/bin/OSEKCOM303.pdf)
* [ORTI A](http://trampoline.rts-software.org/bin/orti-a-22.pdf) and [ORTI B](http://trampoline.rts-software.org/bin/orti-b-22.pdf) specifications
