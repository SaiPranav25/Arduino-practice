#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "DHT.h"

#define DHTPIN 2     // Digital pin connected to the DHT sensor

#define DHTTYPE DHT11   // DHT 11

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  lcd.init();         // initialize
  lcd.backlight();    // turn ON backlight
dht.begin();
  
}

void loop() {

  

  float h = dht.readHumidity();

  float t = dht.readTemperature();

  float f = dht.readTemperature(true);

  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }



  lcd.setCursor(0,0);
  delay(2000);
  lcd.print(F("Humidity:"));
  lcd.print(h);
  lcd.print(F("%"));

  lcd.setCursor(0,1);
  delay(2000);
 lcd.print(F("Temp:"));
 lcd.print(t);
  lcd.print(F("°C"));
}