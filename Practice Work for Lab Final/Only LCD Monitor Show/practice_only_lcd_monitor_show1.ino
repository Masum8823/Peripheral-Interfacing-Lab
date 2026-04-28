

#include <LiquidCrystal.h>


LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd_1.begin(16, 2); 
  lcd_1.print("System ON!");
  delay(1000);
  lcd_1.clear();
}

void loop()
{
  
  lcd_1.setCursor(0, 0);
  lcd_1.print("Hello");
  
  delay(1000); 
  
}