#include <LiquidCrystal.h>

LiquidCrystal lcd(11, 9, 4, 3, 2, 8);

int red = 7;
int green = 6;
int yellow = 5;

int trig = 12;
int echo = 10;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);

  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  Serial.begin(9600);

  lcd.begin(16, 2);
  lcd.print("System Ready");
  delay(1000);
  lcd.clear();
}

float getDistance()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);

  digitalWrite(trig, LOW);

  long duration = pulseIn(echo, HIGH);

  if(duration == 0) return 0;  

  float dist = duration * 0.034 / 2;
  return dist;
}

void loop()
{
  float distance = getDistance();

  Serial.println(distance);

  lcd.setCursor(0, 0);
  lcd.print("Dist: ");
  lcd.print(distance);
  lcd.print(" cm");

  lcd.setCursor(0, 1);

  if (distance > 0 && distance < 20)
  {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);

    lcd.print("STOP (RED)");
  }
  else if (distance >= 20 && distance < 50)
  {
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);

    lcd.print("GO (GREEN)");
  }
  else
  {
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);

    lcd.print("WAIT (YELLOW)");
  }

  delay(300); 
}