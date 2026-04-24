int red = 10;
int green = 9;
int yellow = 8;

void setup(){
  
  pinMode(red,OUTPUT); 
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  
  Serial.begin(9600);  
}

float Temp(){
  
  float analog_read = analogRead(A0);
  
  float voltage = analog_read * 5/1024;
  
  float temperature = 100 * (voltage - 0.5);
  
  return temperature;
  
}

void loop(){
  
  float Temperature = Temp();
  
  Serial.println(Temperature);
  
  delay(500);
  
  if(Temperature > -40 && Temperature < 20){
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    digitalWrite(yellow,HIGH);
  }
  
  else if(Temperature > 20 && Temperature < 40){
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    digitalWrite(yellow,LOW);
  }
  
  else{
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
    digitalWrite(yellow,LOW);
  }
  
}