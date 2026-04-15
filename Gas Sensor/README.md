# 🚨 Gas Detection System using Analog Sensor (Arduino)

## 📌 Project Overview
This project detects the presence of gas using an analog gas sensor and provides output through an LED and Serial Monitor.

- If gas is detected → LED turns ON + warning message  
- If no gas → LED remains OFF  

It simulates a basic gas leakage detection system.

---

## 🔧 Components Used
- Arduino Uno  
- Gas Sensor (e.g., MQ-2)  
- LED  
- Resistor  
- Jumper Wires  

---

## 🔌 Pin Configuration

| Component   | Arduino Pin | Type   |
|------------|------------|--------|
| Gas Sensor | A0         | Input  |
| LED        | 13         | Output |

---

## ⚙️ Working Principle

### 🔹 Input
The gas sensor outputs an **analog value** based on gas concentration.

### 🔹 Processing
Arduino reads the analog value and compares it with a threshold value.

### 🔹 Output
- If sensor value ≥ 250 → Gas Detected → LED ON  
- If sensor value < 250 → No Gas → LED OFF  

---

## 🧠 Important Functions

### 🔹 analogRead()
Reads sensor value (0–1023).

### 🔹 digitalWrite()
Controls LED ON/OFF.

### 🔹 Serial.begin(9600)
Starts serial communication.

### 🔹 Serial.print() / Serial.println()
Displays sensor value and status message.

### 🔹 delay()
Adds delay between readings.

---

## 🔄 System Flow

1. Read gas sensor value from A0  
2. Compare value with threshold (250)  
3. If value is high → Gas detected  
4. Turn ON LED + show warning  
5. Else → Turn OFF LED + show safe message  
6. Repeat continuously  

---

## ⚠️ Improvements

- Use a **buzzer** for sound alert  
- Adjust threshold based on environment:

if(sensorVal >= threshold)

- Convert sensor value into gas concentration (advanced)  

---

## 🎯 Key Learning Points

- Gas sensor working with analog signals  
- Threshold-based detection system  
- Conditional logic (if-else)  
- Real-time monitoring using Serial Monitor  
- Basic safety system design  

---

## ✅ Conclusion
This project demonstrates how gas leakage can be detected using a sensor and how immediate al