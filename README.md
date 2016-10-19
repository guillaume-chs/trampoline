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

FOr further details, refer to [trampoline RTOS](https://github.com/TrampolineRTOS/trampoline)
