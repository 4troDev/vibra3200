# vibra3200
 The Vibra3200, a DIY vibration generator powered by a microcontroller, is an excellent tool for studying the effects of different vibrations on animals, specifically insects. With its adjustable settings and the ability to reproduce vibrations within a frequency range of 0 to 500 Hz, you can conduct experiments to observe how varying vibrations impact insect behavior, movement, or even physiological responses.


## Table of Contents

 - [Materials](#materials)
    - [Materials - Rasberry Pi Pico](#materials---rasberry-pi-pico)
    - [Materials - Arduino](#materials---arduino)

  - [Getting Started](#getting-started)
     - [Pi Pico](/Pi-Pico/GettingStarted.md)
     - [ESP32](/ESP32/GettingStarted.md)

  - 3D Case
     - [3D case Download](download.link.here)
     - [3D case Assembly](/3DCase/Assembly.md)
  

### Materials - Rasberry Pi Pico

- [Raspberry Pi Pico](https://www.raspberrypi.org/products/raspberry-pi-pico/)

- [Vibration Moduel](https://www.amazon.com/Vibration-3-0-5-3v-Interactive-Products-Reminders/dp/B08XXBSF1P/ref=sr_1_7_sspa?keywords=vibration+module&qid=1691768383&sr=8-7-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9tdGY&psc=1)

- [Jumper Wires](https://www.amazon.com/EDGELEC-Breadboard-Optional-Assorted-Multicolored/dp/B07GD2BWPY/ref=sr_1_3?dchild=1&keywords=jumper+wires&qid=1691768423&sr=8-3)

- [Breadboard](https://www.amazon.com/Breadboards-Solderless-Breadboard-Distribution-Connecting/dp/B07DL13RZH/ref=pd_bxgy_sccl_1/134-8608439-4014425?pd_rd_w=c3qVl&content-id=amzn1.sym.26a5c67f-1a30-486b-bb90-b523ad38d5a0&pf_rd_p=26a5c67f-1a30-486b-bb90-b523ad38d5a0&pf_rd_r=4AVHX1MR92N2M7KWY2HC&pd_rd_wg=kVl1K&pd_rd_r=91773a14-f3c7-4cfd-9371-c0c7dda83063&pd_rd_i=B07DL13RZH&psc=1)

- [LCD Module 20x04 LCD Screen Module Display for Arduino Raspberry Pi](https://www.amazon.com/dp/B0C1G9GBRZ/ref=twister_B0C2H8TPXL?_encoding=UTF8&th=1)

- [Power Supply](https://www.amazon.com/Breadboard-Minidodoca-Alligator-Raspberry-Electronic/dp/B0BP9V6WXX/ref=sr_1_6?keywords=power%2Bsupply%2Barduino&qid=1691769024&sr=8-6&th=1)

- [Rotary Encoder](https://www.amazon.com/WayinTop-Degree-Encoder-Development-Arduino/dp/B07T3672VK/ref=sr_1_5?keywords=rotary+encoder&qid=1691769153&sr=8-5)

- [2N2222 Transistor](https://www.amazon.com/BOJACK-2N2222-General-Purpose-Transistors/dp/B07T61M92G/ref=sr_1_2_sspa?crid=OU7CH90736DX&keywords=2N2222+Transistor&qid=1691769233&sprefix=2n2222+transistor%2Caps%2C216&sr=8-2-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1)

- [1N4001 Diode](https://www.amazon.com/BOJACK-Values-Rectifier-Schottky-Assortment/dp/B07YG8K1R9/ref=sr_1_2_sspa?keywords=1n4001+diode&qid=1691769331&sr=8-2-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1)

- [Sordering Kit - Optional](https://www.amazon.com/Soldering-Iron-Kit-Temperature-Desoldering/dp/B07S61WT16/ref=sr_1_5?crid=1IO2JZ6RRRRWT&keywords=soldering+iron+kit&qid=1691769406&sprefix=SO%2Caps%2C153&sr=8-5)


### Materials - Arduino

- [ESP32 Dev Board](https://www.amazon.com/ESP-WROOM-32-Development-Microcontroller-Integrated-Compatible/dp/B08D5ZD528/ref=pd_lpo_sccl_2/134-8608439-4014425?pd_rd_w=seEst&content-id=amzn1.sym.116f529c-aa4d-4763-b2b6-4d614ec7dc00&pf_rd_p=116f529c-aa4d-4763-b2b6-4d614ec7dc00&pf_rd_r=ZYEQTJB2NNKBDQCSPZSQ&pd_rd_wg=WU0t3&pd_rd_r=b66f63d4-d013-4530-beed-7b1f9d601d71&pd_rd_i=B08D5ZD528&th=1)

- [Vibration Moduel](https://www.amazon.com/Vibration-3-0-5-3v-Interactive-Products-Reminders/dp/B08XXBSF1P/ref=sr_1_7_sspa?keywords=vibration+module&qid=1691768383&sr=8-7-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9tdGY&psc=1)

- [Jumper Wires](https://www.amazon.com/EDGELEC-Breadboard-Optional-Assorted-Multicolored/dp/B07GD2BWPY/ref=sr_1_3?dchild=1&keywords=jumper+wires&qid=1691768423&sr=8-3)

- [Breadboard](https://www.amazon.com/Breadboards-Solderless-Breadboard-Distribution-Connecting/dp/B07DL13RZH/ref=pd_bxgy_sccl_1/134-8608439-4014425?pd_rd_w=c3qVl&content-id=amzn1.sym.26a5c67f-1a30-486b-bb90-b523ad38d5a0&pf_rd_p=26a5c67f-1a30-486b-bb90-b523ad38d5a0&pf_rd_r=4AVHX1MR92N2M7KWY2HC&pd_rd_wg=kVl1K&pd_rd_r=91773a14-f3c7-4cfd-9371-c0c7dda83063&pd_rd_i=B07DL13RZH&psc=1)

- [LCD Module 20x04 LCD Screen Module Display for Arduino Raspberry Pi](https://www.amazon.com/dp/B0C1G9GBRZ/ref=twister_B0C2H8TPXL?_encoding=UTF8&th=1)

- [Power Supply](https://www.amazon.com/Breadboard-Minidodoca-Alligator-Raspberry-Electronic/dp/B0BP9V6WXX/ref=sr_1_6?keywords=power%2Bsupply%2Barduino&qid=1691769024&sr=8-6&th=1)

- [Rotary Encoder](https://www.amazon.com/WayinTop-Degree-Encoder-Development-Arduino/dp/B07T3672VK/ref=sr_1_5?keywords=rotary+encoder&qid=1691769153&sr=8-5)

- [Sordering Kit - Optional](https://www.amazon.com/Soldering-Iron-Kit-Temperature-Desoldering/dp/B07S61WT16/ref=sr_1_5?crid=1IO2JZ6RRRRWT&keywords=soldering+iron+kit&qid=1691769406&sprefix=SO%2Caps%2C153&sr=8-5)

[Inspiration: Pico Wave Generator by GurgleApps](https://github.com/gurgleapps/pico-wave-vibration-generator)


