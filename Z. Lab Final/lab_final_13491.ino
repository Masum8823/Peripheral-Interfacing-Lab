#include <LiquidCrystal.h>

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

int r = 6;
int g = 7;
int y = 8;

int t = 13;
int e = 10;

void setup()
{
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(y, OUTPUT);
  
  pinMode(t, OUTPUT);
  pinMode(e, INPUT);
  
  lcd_1.begin(16, 2); 

  
  lcd_1.print("System ON");
  delay(1000);
  lcd_1.clear();
}

float getD(){
  
  digitalWrite(t, LOW);
  delayMicroseconds(2);
  
  digitalWrite(t, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(t, LOW);
  
  long dur = pulseIn(e, HIGH);
  float dis = dur * 0.034/2;
  
  return dis;
}


void loop()
{
  
  float distance = getD();
  
  float gas = analogRead(A2);
  
  lcd_1.setCursor(0, 0);
  lcd_1.print("G:");
  lcd_1.print(gas);
  lcd_1.print(" D:");
  lcd_1.print(distance);
  
  if(gas <= 25 && distance > 20){
    digitalWrite(g, HIGH);
    digitalWrite(r, LOW);
    digitalWrite(y, LOW);
  }
  
  else if((gas >= 26 && gas <= 30) || (distance >= 10 && distance <= 20)){
    digitalWrite(g, LOW);
    digitalWrite(r, LOW);
    digitalWrite(y, HIGH);
  }
  
  else if(gas > 80 && distance >= 10){
    digitalWrite(g, LOW);
    digitalWrite(r, HIGH);
    digitalWrite(y, LOW);
  }
  
  else if(gas > 30 && distance < 10){
    digitalWrite(g, LOW);
    digitalWrite(r, HIGH);
    delay(1000);
    digitalWrite(r, LOW);    
    digitalWrite(y, LOW);
  }
  
  else{
    digitalWrite(g, LOW);
    digitalWrite(r, LOW);
    digitalWrite(y, LOW);
  }
  
  delay(1000); 
}