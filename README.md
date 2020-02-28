# Bela, transgender robodog.

My version of the famous https://github.com/PetoiCamp/OpenCat:

https://www.youtube.com/watch?v=ZDXG5VSQvVQ

The legs are taken from https://www.thingiverse.com/thing:3004503

This version has 12 DOF and uses the following parts:

Arduino Pro Mini 16Mhz 5V

12 x MG92b servos

Lipo 2200mAh 7.4V 25C 2S
Smaller original-like version (https://www.thingiverse.com/thing:4015171) works fine with 
molinoRC Turnigy Nano-tech 950mAh Lipo Akku

MPU6050

PCA9685 servo driver 

IR remote kit

5 V Buzzer

Optional: JVSISM YPG 20A HV SBEC to bring down the Voltage to 6 V.

BM3in1 3 In 1 Lipo Batterie Monitor

0,28 Zoll Mini Digital Voltmeter LED-Display, DC 2,5V-30V

## Until here Bela is controlable via Remote Control 

In addition there are more possibilities to control Bela:

 -- Incredible Rhasspy and Node-RED for speech control
    https://github.com/synesthesiam/rhasspy

    Raspberry Pi 3

    3,3 V to 5 V Shifter

    ReSpeaker Mic Array v2.0

    Small USB Speaker

  -- Using the also the great Web GUI of Leukipp https://github.com/leukipp/OpenCatWeb to control the robot
  
  -- Using the HC-06 Bluetooth RF Transceiver Serial Module to control the robot via Smart Phone (voice and keyboard)
  
  -- In Progress:
  
     Robot shall recognize different faces and react (great, bark, bite :) ).
     
     Raspberry Pi 3
     
     Using OpenCV
     
     USB-CAM

     3,3 V to 5 V Shifter

     Small USB Speaker
    
 ## Changed gait/skill mode of the hind legs
To get comatible to smallkat https://github.com/OperationSmallKat and spotmicro https://github.com/FlorianWilk/SpotMicroAI which use a different software but have a nice and stable mechanic.
 
The leg hind right has to move exactly as the leg front left and the leg hind left has to move exactly as the leg front right. Just copy the columns of i.e. the walk gait in instinct.h, change rotation direction in Opencat.h and recalibrate the legs.

For now I changed the skills in Instinkt.h for wk only. All skills and most poses have to be reassigned. 

