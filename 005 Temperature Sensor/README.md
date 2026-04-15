# 🌡️ Temperature Monitoring System using Analog Sensor (Arduino)

## 📌 Project Overview
This project reads temperature data from an analog temperature sensor and displays it on the Serial Monitor.  
If the temperature exceeds a certain limit, it shows a warning message.

It simulates a basic temperature monitoring and alert system.

---

## 🔧 Components Used
- Arduino Uno  
- Temperature Sensor (e.g., LM35 / TMP36)  
- Jumper Wires  

---

## 🔌 Pin Configuration

| Component           | Arduino Pin | Type  |
|--------------------|------------|-------|
| Temperature Sensor | A0         | Input |

---

## 📸 Circuit Design & Simulation

Here is the full circuit architecture designed in **Tinkercad**:

![Circuit Diagram](temperature-sensor-circuit.png)

---

## ⚙️ Working Principle

### 🔹 Input
The temperature sensor sends an **analog signal** to pin A0 based on temperature.

### 🔹 Processing
Arduino reads the analog value and converts it into voltage, then calculates temperature using the formula:


voltage = analog_reading × 5 / 1024
temperature (°C) = 100 × (voltage - 0.5)


- `5V` = reference voltage  
- `1024` = ADC resolution (10-bit)  
- `0.5` = offset voltage (for TMP36 sensor)  

### 🔹 Output
- Temperature value is printed in Serial Monitor  
- If temperature > 40°C → shows **"Extreme Heat" warning**

---

## 🧠 Important Functions

### 🔹 analogRead()
Reads analog value (0–1023) from sensor.

### 🔹 Serial.begin(19600)
Starts serial communication (⚠️ usually 9600 is preferred).

### 🔹 Serial.println()
Prints values (reading & temperature).

### 🔹 delay()
Pauses program execution.

---

## 🔄 System Flow

1. Read analog value from sensor  
2. Convert analog value → voltage  
3. Convert voltage → temperature  
4. Print values in Serial Monitor  
5. Check condition (temperature > 40°C)  
6. Show warning if needed  

---

## ⚠️ Improvements

- Use `Serial.begin(9600)` for standard communication  
- Use `float` calculation like:

voltage = analog_reading * 5.0 / 1024.0;

- Add LED or buzzer for real hardware alert  

---

## 🎯 Key Learning Points

- Analog input reading (ADC concept)  
- Voltage conversion from sensor data  
- Temperature calculation using formula  
- Conditional alert system  
- Serial monitoring for debugging  

---

## ✅ Conclusion
This project demonstrates how analog sensor data can be converted into meaningful temperature