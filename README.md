# Project Overview: Footstep Power Generation and Monitoring System using Arduino

## 🎯 Problem Statement

In everyday environments such as roads, walkways, and public spaces, a large amount of **human kinetic energy (footsteps)** is wasted. There is a need for a **low-cost and simple system** that can capture this energy and convert it into measurable electrical signals.

---

## 💡 Proposed Solution

This project uses **piezoelectric sensors** to convert footstep pressure into electrical energy.

- Multiple piezo discs generate voltage when stepped on  
- A **bridge rectifier** converts AC signals into DC  
- Capacitors smooth the signal  
- Arduino processes the signal and counts steps  
- LCD displays real-time **step count and voltage**

This creates a **low-cost, real-time monitoring system** for footstep energy.

---



## 📌 Features

- Real-time step detection using piezo sensor  
- Threshold-based signal processing  
- Noise reduction using hysteresis  
- Live step count display on I2C LCD  
- Serial monitor output for calibration and debugging  

---

## 🔑 Key Components

- **Arduino Uno** – Main controller  
- **Piezoelectric Discs** – Generate voltage from footsteps  
- **Bridge Rectifier (Diodes)** – AC to DC conversion  
- **Capacitors (10µF)** – Signal smoothing  
- **BC547 Transistor** – Signal control/amplification  
- **Resistors (10kΩ)** – Current control  
- **16x2 I2C LCD** – Display output  
- **Breadboard & Jumper Wires** – Connections  
- **Power Supply (Battery/5V)** – System power  

## ⚙️ Working Principle

- Footstep applies pressure on piezo discs  
- Piezo generates AC voltage  
- Rectifier converts AC → DC  
- Capacitor smooths signal  
- Arduino reads analog voltage  
- If voltage crosses threshold → step counted  
- LCD displays step count and voltage

## 🔄 System Operation

1. Footstep → vibration on piezo  
2. Piezo generates voltage  
3. Rectifier converts signal  
4. Arduino reads from A0  
5. Threshold check → step detected  
6. LCD updates output  
7. Serial monitor logs data  


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


---

## ▶️ How to Run

1. Open `step_counter.ino` in Arduino IDE  
2. Select **Board: Arduino Uno**  
3. Select correct **COM Port**  
4. Upload the code  
5. Open **Serial Monitor (9600 baud)**  
6. Tap or apply pressure to piezo sensor to simulate steps  

## ⚠️ Challenges & Limitations

- Piezo sensors are highly sensitive to noise  
- False step detection may occur without proper calibration  
- Threshold varies depending on environment and mounting  
- Less accurate compared to accelerometer-based systems  

---

## 🚀 Future Improvements

- Implement digital filtering (moving average / low-pass filter)  
- Use peak detection algorithm for better accuracy  
- Integrate accelerometer (MPU6050)  
- Add Bluetooth/WiFi for remote monitoring  


