# 🚦 Smart Distance Indicator using Ultrasonic Sensor (LED Based)

## 📌 Project Overview
This project uses an ultrasonic sensor to measure distance and indicates the result using three LEDs.

- 🔴 Red → Object is very close (Danger)  
- 🟢 Green → Safe distance  
- 🟡 Yellow → Object is far / standby  

It simulates a basic obstacle detection or parking assist system using only LEDs.

---

## 🔧 Components Used
- Arduino Uno  
- Ultrasonic Sensor (HC-SR04)  
- 3 LEDs (Red, Green, Yellow)  
- Resistors  
- Jumper Wires  

---

## 🔌 Pin Configuration

### 🌡️ Ultrasonic Sensor

| Component | Arduino Pin | Type   |
|----------|------------|--------|
| Trig     | 12         | Output |
| Echo     | 10         | Input  |

### 💡 LEDs

| Component   | Arduino Pin | Type   |
|------------|------------|--------|
| Red LED    | 7          | Output |
| Green LED  | 6          | Output |
| Yellow LED | 5          | Output |

---

## ⚙️ Working Principle

### 🔹 Input
Ultrasonic sensor sends a sound wave and receives the echo to detect distance.

### 🔹 Processing
Distance is calculated using:


distance = duration × 0.034 / 2


- 0.034 = speed of sound (cm/µs)  
- Divided by 2 (go + return path)  

A custom function `Getdistance()` handles this calculation.

### 🔹 Output (LED Indication)

| Distance Range | LED Status     | Meaning        |
|---------------|---------------|----------------|
| < 20 cm       | 🔴 Red ON     | Danger         |
| 20–50 cm      | 🟢 Green ON   | Safe           |
| > 50 cm       | 🟡 Yellow ON  | Far / Standby  |

---

## 🧠 Important Functions

### 🔹 Getdistance()
Custom function to:
- Trigger ultrasonic signal  
- Measure echo duration  
- Return calculated distance  

### 🔹 pulseIn()
Measures time of echo signal.

### 🔹 digitalWrite()
Controls LED states.

### 🔹 Serial.println()
Prints distance for monitoring.

---

## 🔄 System Flow

1. Send ultrasonic pulse  
2. Receive echo signal  
3. Measure duration  
4. Convert duration → distance  
5. Print distance in Serial Monitor  
6. Check distance range  
7. Turn ON corresponding LED  
8. Repeat continuously  

---

## ⚠️ Improvements

- Fix condition:

distance >= 20 && distance <= 50

- Handle no-echo case:

if(duration == 0) return 0;

- Add buzzer for alert system  
- Add LCD display for better visualization  

---

## 🎯 Key Learning Points

- Ultrasonic sensor integration  
- Function-based programming  
- Distance calculation using time  
- Multi-output LED control  
- Real-time monitoring system  

---

## ✅ Conclusion
This project demonstrates a simple yet effective distance detection system using LEDs, which can be used in basic safety systems and obstacle detection applications.