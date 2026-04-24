// C++ code
//

int red = 7;
int green = 6;
int yellow = 5;

int trig = 12;
int echo = 10;

void setup()
{
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  
  Serial.begin(9600);
}

float Getdistance(){
  
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  
  long duration = pulseIn(echo,HIGH);
  float dist = duration * 0.034/2;
  return dist;
  
}

void loop()
{
  
  
  float distance = Getdistance();
  Serial.println(distance);
  delay(200);
    
  if(distance > 0 && distance < 20){
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
    digitalWrite(yellow,LOW);
  }
  
  else if(distance > 20 && distance < 50){
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    digitalWrite(yellow,LOW);
  }
  
  else{
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    digitalWrite(yellow,HIGH);
  }
    
}