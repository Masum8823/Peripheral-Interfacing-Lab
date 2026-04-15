// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
	float sensorVal;
  	sensorVal = analogRead(A0);
  	if(sensorVal >= 250)
    { 
      Serial.print(sensorVal);
      Serial.println(" |Gas Detected");
      digitalWrite(13, HIGH);
    }
  	else
    {Serial.print(sensorVal);
      Serial.println(" |No Gas Detected");
      digitalWrite(13, LOW);}
	delay(1000);
}
