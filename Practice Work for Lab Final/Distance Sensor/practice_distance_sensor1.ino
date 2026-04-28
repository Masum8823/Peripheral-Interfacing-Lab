int r = 2;
int g = 12;
int y = 10;

int t = 9;
int e = 13;

void setup(){
  
    pinMode(r, OUTPUT);
    pinMode(g, OUTPUT);
    pinMode(y, OUTPUT);
  
    pinMode(t, OUTPUT);
    pinMode(e, INPUT);
  
  	Serial.begin(9600);
}

float dis(){
  
  digitalWrite(t, LOW);
    delayMicroseconds(2);
  digitalWrite(t, HIGH);
    delayMicroseconds(10);
  digitalWrite(t, LOW);
    
  long duration = pulseIn(e, HIGH);
  
  float dist = duration * 0.034/2;
  
  return dist;
}

void loop(){
  
  float distance = dis();
  
  Serial.println(distance);
  
  if(distance > 0 && distance < 50){
    digitalWrite(r, HIGH);
    digitalWrite(g, LOW);
    digitalWrite(y, LOW);
    
  }
  
  else if(distance > 50 && distance < 80){
    digitalWrite(r, LOW);
    digitalWrite(g, HIGH);
    digitalWrite(y, LOW);
    
    delay(300);
  }
  
  else{
    digitalWrite(r, LOW);
    digitalWrite(g, LOW);
    digitalWrite(y, HIGH);
    
    delay(300);
  }
}