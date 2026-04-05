# 🦶 Arduino Piezo Step Counter

An Arduino-based step counter that uses a **piezoelectric sensor** to detect footsteps through vibration signals. The system processes analog input to identify step events and displays real-time step count and voltage on a **16x2 I2C LCD**.

---

## 📌 Features

- Real-time step detection using piezo sensor  
- Threshold-based signal processing  
- Noise reduction using hysteresis  
- Live step count display on I2C LCD  
- Serial monitor output for calibration and debugging  

---

## 🛠 Hardware Components

- Arduino Uno  
- Piezoelectric Sensor  
- 16x2 LCD with I2C module  
- Jumper wires  

---

## ⚙️ Working Principle

The piezoelectric sensor generates voltage when mechanical stress (like a footstep) is applied.

- Arduino reads analog signal from the sensor  
- When signal crosses a defined **threshold**, a step is detected  
- A **hysteresis mechanism** prevents false triggering due to noise  
- Step count and voltage are displayed on LCD  

---

## 🔌 Wiring Diagram

### 📍 Connections Table

| Component         | Arduino Pin |
|------------------|------------|
| Piezo (+)        | A0         |
| Piezo (–)        | GND        |
| LCD VCC          | 5V         |
| LCD GND          | GND        |
| LCD SDA          | A4         |
| LCD SCL          | A5         |

---

### 🖼 Circuit Diagram

![Circuit Diagram](images/circuit-diagram.png)


## 📷 Project Output

![Project Output](images/output.jpg)

> Add a real photo of your setup for better presentation.

---

## ▶️ How to Run

1. Open `step_counter.ino` in Arduino IDE  
2. Select **Board: Arduino Uno**  
3. Select correct **COM Port**  
4. Upload the code  
5. Open **Serial Monitor (9600 baud)**  
6. Tap or apply pressure to piezo sensor to simulate steps  

---

## ⚠️ Calibration

Adjust the threshold value in code:

```cpp
int threshold = 100;
