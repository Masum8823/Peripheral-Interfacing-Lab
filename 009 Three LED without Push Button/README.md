# 💡 Three LED Sequential Blinking System (Arduino)

## 📌 Project Overview
This project controls three LEDs (Red, Green, Yellow) in a sequence.  
Each LED turns ON one after another for a fixed time and then turns OFF before the next LED turns ON.

It simulates a simple sequential lighting system.

---

## 🔧 Components Used
- Arduino Uno  
- 3 LEDs (Red, Green, Yellow)  
- Resistors  
- Jumper Wires  

---

## 🔌 Pin Configuration

| Component   | Arduino Pin | Type   |
|------------|------------|--------|
| Red LED    | 11         | Output |
| Green LED  | 10         | Output |
| Yellow LED | 9          | Output |

---

## ⚙️ Working Principle

### 🔹 Output Sequence
The LEDs turn ON one by one in a loop:

1. 🔴 Red LED ON → wait → OFF  
2. 🟢 Green LED ON → wait → OFF  
3. 🟡 Yellow LED ON → wait → OFF  

Then the cycle repeats continuously.

---

## 🧠 Important Functions

### 🔹 pinMode()
Sets LED pins as OUTPUT.

### 🔹 digitalWrite()
Controls LED ON (HIGH) and OFF (LOW).

### 🔹 delay()
Controls how long each LED stays ON.

---

## 🔄 System Flow

1. Turn ON Red LED  
2. Wait 1 second  
3. Turn OFF Red LED  
4. Turn ON Green LED  
5. Wait 1 second  
6. Turn OFF Green LED  
7. Turn ON Yellow LED  
8. Wait 1 second  
9. Turn OFF Yellow LED  
10. Repeat continuously  

---

## ⏱️ Timing Logic


delay(1000) = 1 second


- Each LED stays ON for 1 second before switching  

---

## ⚠️ Improvements

- Add button control to start/stop sequence  
- Increase/decrease delay for speed control  
- Create looping patterns (forward + reverse)  
- Use arrays to reduce repetitive code  

---

## 🎯 Key Learning Points

- Sequential control of multiple outputs  
- Timing using delay()  
- Loop-based execution  
- Basic embedded system patterns  

---

## ✅ Conclusion
This project demonstrates how multiple LEDs can be controlled in a sequence, which is useful for creating patterns, indicators, and simple automation systems.