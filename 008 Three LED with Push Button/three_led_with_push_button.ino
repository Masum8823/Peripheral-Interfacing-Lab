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
  
  pinMode(button, INPUT_PULLUP);
}

void loop()
{
  if ( digitalRead(button)== LOW){
      
    digitalWrite(red, HIGH);
    delay(1000); 
    digitalWrite(green, HIGH);
    delay(1000); 
    digitalWrite(yellow, HIGH);
    
  }
  
  else{
    digitalWrite(red, LOW);
    digitalWrite(green, LOW); 
    digitalWrite(yellow, LOW);
  }
}