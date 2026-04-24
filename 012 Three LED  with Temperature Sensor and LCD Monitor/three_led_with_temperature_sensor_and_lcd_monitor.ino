#include<LiquidCrystal.h>

LiquidCrystal lcd(13,12,5,4,3,2);

int red = 10;
int green = 9;
int yellow = 8;

void setup(){
  
  pinMode(red,OUTPUT); 
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  
  Serial.begin(9600);
  
  lcd.begin(16,2);
  lcd.print("System is ready");
  delay(1000);
  lcd.clear();
  
}

float Temp(){
  
  float analog_read = analogRead(A0);
  
  float voltage = analog_read * 5/1024;
  
  float temperature = 100 * (voltage - 0.5);
  
  return temperature;
  
}

void loop(){
  
  float Temperature = Temp();
  
  Serial.print(Temperature);
  
  
  lcd.setCursor(0,0);
  lcd.print("Temp: ");
  lcd.print(Temperature);
  lcd.print("C");
  lcd.setCursor(0,1);
  
  if(Temperature > -40 && Temperature < 20){
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    digitalWrite(yellow,HIGH);
    
    lcd.print("Too much cold");
    delay(500);
  }
  
  else if(Temperature > 20 && Temperature < 40){
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    digitalWrite(yellow,LOW);
    
    lcd.print("Moderate Temp");
    delay(500);
  }
  
  else{
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
    digitalWrite(yellow,LOW);
    
    lcd.print("Extreme Heat");
    delay(500);
  }
  
}