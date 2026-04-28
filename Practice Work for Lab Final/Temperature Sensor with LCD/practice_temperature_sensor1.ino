#include <LiquidCrystal.h>

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd_1.begin(16, 2); 
  
  lcd_1.print("System is ON");
  delay(1000);
  lcd_1.clear();
}

float tempo(){
  int read = analogRead(A3);
  float voltage = read * 5/1024.0;
  float tem = 100 * (voltage - 0.5);
  return tem;
}

void loop()
{
  float t = tempo();
  
  lcd_1.setCursor(0, 0);
  lcd_1.print("Temp:");
  lcd_1.print(t);
  lcd_1.print(" C");
  
 
  delay(1000); 
}