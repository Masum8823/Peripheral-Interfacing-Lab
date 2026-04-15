// LED pins (3 colors)
const int orangeLed = 2;   // Orange LED connected to pin 2
const int redLed = 4;      // Red LED connected to pin 4
const int greenLed = 3;    // Green LED connected to pin 3

// Ultrasonic sensor pins
const int trigPin = 9;     // Trigger pin (sends signal)
const int echoPin = 10;    // Echo pin (receives signal)

void setup()
{
  pinMode(trigPin, OUTPUT);   // trigPin will send signal
  pinMode(echoPin, INPUT);    // echoPin will receive signal
  
  pinMode(redLed, OUTPUT);    // set red LED as output
  pinMode(orangeLed, OUTPUT); // set orange LED as output
  pinMode(greenLed, OUTPUT);  // set green LED as output
  
  Serial.begin(19600);        // start serial communication (for monitor)
}

void loop()
{
  long duration;   // variable to store time taken by sound
  float distance;  // variable to store calculated distance

  // Step 1: Send ultrasonic pulse
  digitalWrite(trigPin, LOW);       
  delayMicroseconds(2);             // small delay
  digitalWrite(trigPin, HIGH);      
  delay(10);                        // send pulse for 10 microseconds (should be delayMicroseconds)
  digitalWrite(trigPin, LOW);       

  // Step 2: Receive echo signal
  duration = pulseIn(echoPin, HIGH); // time for signal to return

  // Step 3: Calculate distance
  distance = duration * 0.034 / 2;   // convert time to distance (cm)

  // Step 4: Print distance in Serial Monitor
  Serial.println(distance);

  delay(500); // wait for half a second

  // Step 5: LED control based on distance

  if (distance > 50)  // object is far
  {
    digitalWrite(redLed, LOW);      
    digitalWrite(greenLed, HIGH);   // green ON (safe)
    digitalWrite(orangeLed, LOW);   
  }
  else if (distance > 20 && distance < 50) // object is medium distance
  {
    digitalWrite(redLed, LOW);      
    digitalWrite(greenLed, LOW);    
    digitalWrite(orangeLed, HIGH);  // orange ON (warning)
  }
  else if (distance < 20) // object is very near
  {
    digitalWrite(redLed, HIGH);     // red ON (danger)
    digitalWrite(greenLed, LOW);    
    digitalWrite(orangeLed, LOW);   
  }
}