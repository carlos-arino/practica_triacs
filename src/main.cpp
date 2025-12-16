#include <LiquidCrystal.h>
#include <Arduino.h>

LiquidCrystal lcd(12, 13, 17, 16, 27, 14);

void setup()
{
  pinMode(26, INPUT);
  pinMode(25, OUTPUT);
  lcd.begin(16, 2);
}

void loop()
{
  digitalWrite(25, 1);
  delay(1000);
  digitalWrite(25, 0);
  delay(1000);
}
