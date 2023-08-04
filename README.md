# vibra3200
 The Vibra3200, a DIY vibration generator powered by a microcontroller, is an excellent tool for studying the effects of different vibrations on animals, specifically insects. With its adjustable settings and the ability to reproduce vibrations within a frequency range of 0 to 500 Hz, you can conduct experiments to observe how varying vibrations impact insect behavior, movement, or even physiological responses.


# v3 of that will be use to control the vibration generator for ESP32 Dev Board [Code v3.ino](https://github.com/4troDev/vibra3200/blob/main/v3.ino)

<details open>
<summary>Error | After checking Arduino forum it might be related to library issue</summary> 
<br>
```/usr/local/bin/arduino-cli compile --fqbn esp32:esp32:esp32:CPUFreq=240,DebugLevel=none,EraseFlash=none,EventsCore=1,FlashFreq=80,FlashMode=qio,FlashSize=4M,LoopCore=1,PSRAM=disabled,PartitionScheme=default,UploadSpeed=921600 --build-cache-path /tmp --output-dir /tmp/163488195/build --build-path /tmp/arduino-build-C9D67B84A11F279AFE628B6F98582EDB /tmp/163488195/Vibration

/tmp/163488195/Vibration/Vibration.ino:16:30: error: no matching function for call to 'LiquidCrystal::LiquidCrystal(int, int, int)'

LiquidCrystal lcd(0x27, 16, 2); // I2C address is 0x27, 16 columns, and 2 rows

^

In file included from /tmp/163488195/Vibration/Vibration.ino:5:

/home/builder/Arduino/libraries/liquidcrystal_1_0_7/src/LiquidCrystal.h:55:3: note: candidate: 'LiquidCrystal::LiquidCrystal(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)'

LiquidCrystal(uint8_t rs, uint8_t enable,

^~~~~~~~~~~~~

/home/builder/Arduino/libraries/liquidcrystal_1_0_7/src/LiquidCrystal.h:55:3: note: candidate expects 6 arguments, 3 provided

/home/builder/Arduino/libraries/liquidcrystal_1_0_7/src/LiquidCrystal.h:53:3: note: candidate: 'LiquidCrystal::LiquidCrystal(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)'

LiquidCrystal(uint8_t rs, uint8_t rw, uint8_t enable,

^~~~~~~~~~~~~

/home/builder/Arduino/libraries/liquidcrystal_1_0_7/src/LiquidCrystal.h:53:3: note: candidate expects 7 arguments, 3 provided

/home/builder/Arduino/libraries/liquidcrystal_1_0_7/src/LiquidCrystal.h:50:3: note: candidate: 'LiquidCrystal::LiquidCrystal(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)'

LiquidCrystal(uint8_t rs, uint8_t rw, uint8_t enable,

^~~~~~~~~~~~~

/home/builder/Arduino/libraries/liquidcrystal_1_0_7/src/LiquidCrystal.h:50:3: note: candidate expects 11 arguments, 3 provided

/home/builder/Arduino/libraries/liquidcrystal_1_0_7/src/LiquidCrystal.h:47:3: note: candidate: 'LiquidCrystal::LiquidCrystal(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)'

LiquidCrystal(uint8_t rs, uint8_t enable,

^~~~~~~~~~~~~

/home/builder/Arduino/libraries/liquidcrystal_1_0_7/src/LiquidCrystal.h:47:3: note: candidate expects 10 arguments, 3 provided

/home/builder/Arduino/libraries/liquidcrystal_1_0_7/src/LiquidCrystal.h:45:7: note: candidate: 'constexpr LiquidCrystal::LiquidCrystal(const LiquidCrystal&)'

class LiquidCrystal : public Print {

^~~~~~~~~~~~~

/home/builder/Arduino/libraries/liquidcrystal_1_0_7/src/LiquidCrystal.h:45:7: note: candidate expects 1 argument, 3 provided

/home/builder/Arduino/libraries/liquidcrystal_1_0_7/src/LiquidCrystal.h:45:7: note: candidate: 'constexpr LiquidCrystal::LiquidCrystal(LiquidCrystal&&)'

/home/builder/Arduino/libraries/liquidcrystal_1_0_7/src/LiquidCrystal.h:45:7: note: candidate expects 1 argument, 3 provided

Error during build: exit status 1```
</details>
