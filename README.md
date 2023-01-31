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
Vss-GND
Vdd-5V(power)
Vo-3.3k resistor then GND
RS-13(digital PWM arduino)
RW-12(digital PWM arduino)
E-11(digital PWM arduino)
D0-10(digital PWM arduino)
D1-9(digital PWM arduino)
D2-8(digital PWM arduino)
D3-7(digital PWM arduino)
D4-6(digital PWM arduino)
D5-5(digital PWM arduino)
D6-4(digital PWM arduino)
D7-3(digital PWM arduino)
A-5V(high)
K-GND

Dont forget to include LiquidCrystal.h and dht.h
