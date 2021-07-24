Dowload Software

Arduino
prepare Hardwares

esp32
Soil Moisture Sensor
Relay Module 5V
water pump
3.When you get firmware.ino file ,Open it in Arduino ISE

4.In firmware.ino file,You have to change some of them to your data.

5.Connect the hardware as declared in the code.
#define trigPin 7
#defiine echoPin 6
int valvepin = 3;

set Distance if you want to active Valve-Pump
(example)
Distance > 12 // Active
Distance < 4 // Inactive