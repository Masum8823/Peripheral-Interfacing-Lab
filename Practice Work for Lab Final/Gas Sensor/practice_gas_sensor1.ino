// C++ code
//

int led = 12;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  float gas = analogRead(A3);
  if(gas >= 550){
    Serial.println(gas);
    Serial.println(" |Gas Detected");
      digitalWrite(led, HIGH);
    delay(500);
  }
  else{
  Serial.println(gas);
  Serial.println(" |NO Gas Detected");
  digitalWrite(led, LOW);
    delay(500);
  }
}