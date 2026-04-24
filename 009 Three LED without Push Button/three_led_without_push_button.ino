// C++ code
//

int red = 11;
int green = 10;
int yellow = 9;

int button = 2;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
}

void loop()
{
      
    digitalWrite(red, HIGH);
    delay(1000); 
    digitalWrite(red, LOW);
  
    digitalWrite(green, HIGH);
    delay(1000); 
    digitalWrite(green, LOW);
  
    digitalWrite(yellow, HIGH);
    delay(1000);
    digitalWrite(yellow, LOW);
  
}