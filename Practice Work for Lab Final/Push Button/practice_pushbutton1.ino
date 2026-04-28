int led = 4;
int b = 2;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(b, INPUT_PULLUP);
}

void loop()
{
  if(digitalRead(b)==LOW){
  digitalWrite(led, HIGH);
     }
  else{
  digitalWrite(led, LOW);
     }
}