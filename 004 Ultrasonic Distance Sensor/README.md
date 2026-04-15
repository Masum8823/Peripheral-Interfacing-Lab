# 🚦 Smart Distance Indicator using Ultrasonic Sensor (Arduino + LEDs)

## 📌 Project Overview
This project uses an ultrasonic sensor to measure the distance of an object and indicates the safety level using three LEDs:
- 🟢 Green → Safe (far distance)  
- 🟠 Orange → Warning (medium distance)  
- 🔴 Red → Danger (very close)  

It simulates a basic obstacle detection or parking assist system.

---

## 🔧 Components Used
- Arduino Uno  
- Ultrasonic Sensor (HC-SR04)  
- 3 LEDs (Red, Orange, Green)  
- Resistors  
- Jumper Wires  

---

## 🔌 Pin Configuration

| Component   | Arduino Pin | Type   |
|------------|------------|--------|
| Trig Pin   | 9          | Output |
| Echo Pin   | 10         | Input  |
| Green LED  | 3          | Output |
| Orange LED | 2          | Output |
| Red LED    | 4          | Output |

---

## ⚙️ Working Principle

### 🔹 Input
Ultrasonic sensor sends a sound wave from the **Trig Pin** and receives it back through the **Echo Pin**.

### 🔹 Processing
Arduino calculates the time taken for the signal to return and converts it into distance using the formula:


distance = duration × 0.034 / 2


- 0.034 = Speed of sound (cm/µs)  
- Divided by 2 because signal travels forward and backward  

### 🔹 Output
Based on the distance:
- Distance > 50 cm → Green LED ON (Safe)
- Distance between 20–50 cm → Orange LED ON (Warning)
- Distance < 20 cm → Red LED ON (Danger)

---

## 🧠 Important Functions

### 🔹 pinMode()
Sets pin as INPUT or OUTPUT.

### 🔹 digitalWrite()
Controls LED ON (HIGH) or OFF (LOW).

### 🔹 pulseIn()
Measures time taken by echo signal.

### 🔹 Serial.begin(19600)
Starts serial communication (⚠️ usually 9600 is preferred).

### 🔹 Serial.println()
Prints distance to Serial Monitor.

---

## 🔄 System Flow

1. Send ultrasonic pulse  
2. Receive echo signal  
3. Measure duration  
4. Convert duration → distance  
5. Apply conditions using if-else  
6. Control LEDs accordingly  

---

## ⚠️ Improvements

- Use `delayMicroseconds(10)` instead of `delay(10)`  
- Better condition:

distance >= 20 && distance <= 50

- Recommended baud rate:

Serial.begin(9600);


---

## 🎯 Key Learning Points

- Ultrasonic sensor working mechanism  
- Distance calculation using time  
- Conditional logic (if-else)  
- Digital input and output handling  
- Real-life application of sensors  

---

## ✅ Conclusion
This project demonstrates how distance sensing can be used for safety indication using LEDs, forming the base for systems like parking sensors and obstacle detection.