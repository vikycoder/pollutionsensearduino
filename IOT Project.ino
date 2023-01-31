#include <LiquidCrystal.h>
#include <dht.h>
#define dht_apin A1
 dht DHT;
LiquidCrystal lcd(13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3);
int sensorValue;
void setup() {
  lcd.begin(16,2);
  lcd.setCursor(0,0);	
  lcd.print("Welcome");	
  lcd.setCursor(0,1);  
  lcd.print("Loading ...");
  delay(1000);
}

void loop() 
{
  DHT.read11(dht_apin);
  sensorValue = analogRead(0);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Air Qua: ");
  lcd.print(sensorValue,DEC);
  lcd.print(" PPM");
  lcd.setCursor(0,1);  
  if (sensorValue<50)
  {
    lcd.print("Good");
  }
  if (sensorValue>51&&sensorValue<=100)
  {
    lcd.print("Satisfactory");
  }
  if (sensorValue>=101&&sensorValue<=200)
  {
    lcd.print("Moderate");
  }
  if (sensorValue>=201&&sensorValue<=300)
  {
    lcd.print("Poor");
  }
  if (sensorValue>=301&&sensorValue<=400)
  {
    lcd.print("VERY POOR ! ! !");
  }
  if (sensorValue>401)
  {
    lcd.print("SEVERE ! ! !");
  }
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Humidity: ");
  lcd.print(DHT.humidity);
  lcd.print("%");
  lcd.setCursor(0,1);
  lcd.print("Temp: ");
  lcd.print(DHT.temperature);
  lcd.print(" C");
  delay(2000);
}