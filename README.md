# POLLUTION MONITORING SYSTEM

The proposed system has various parameters such as Air Quality, Temperature and Humidity sensors with an Arduino module 
having Atmel ATmega328P and ATmega16U2 microcontrollers.
<br>
## MQ135 Gas sensor  
Analog out connect to A0 in arduino
<br>
## DHT11 temperature sensor 
Analog out connect to A1 in arduino
<br>
## RG1602A(2x16 lcd display) is used for display
Vss-GND <br>
Vdd-5V(power) <br>
Vo-3.3k resistor then GND <br>
RS-13(digital PWM arduino) <br>
RW-12(digital PWM arduino) <br>
E-11(digital PWM arduino) <br>
D0-10(digital PWM arduino) <br>
D1-9(digital PWM arduino) <br>
D2-8(digital PWM arduino) <br>
D3-7(digital PWM arduino) <br>
D4-6(digital PWM arduino) <br>
D5-5(digital PWM arduino) <br>
D6-4(digital PWM arduino) <br>
D7-3(digital PWM arduino) <br>
A-5V(high) <br>
K-GND <br>
Dont forget to include LiquidCrystal.h and dht.h
