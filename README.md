# 🌿 Smart Air Purifier using Arduino

A smart air purification system built with **Arduino Uno** that monitors **gas**, **dust**, and **temperature/humidity** levels.  
When pollution or heat rises beyond a safe threshold, the fan activates automatically, ensuring cleaner air.

---

## ⚙️ Components
| Component | Function |
|------------|-----------|
| Arduino UNO | Main microcontroller |
| MQ-135 Gas Sensor | Detects harmful gases or smoke |
| Dust Sensor (GP2Y1010AU0F) | Measures dust particles in air |
| DHT11 Sensor | Reads temperature and humidity |
| DC Fan | Cleans air when activated |
| NPN Transistor (2N2222) | Controls the fan |
| 10kΩ Resistor | For signal stabilization |
| LEDs (Red / Green) | Indicate air status |
| Breadboard & Jumper Wires | Circuit connections |

---

## 💡 How It Works
1. Sensors continuously read air quality data.  
2. Arduino compares sensor values to set thresholds.  
3. If pollution or heat is high → fan turns ON and red LED lights up.  
4. If air is clean → fan turns OFF and green LED lights up.  

---

## 💻 Code File
All Arduino logic is contained in `SmartAir.ino`.

---

## 🔌 Simulation
You can simulate this project on [Tinkercad Circuits](https://www.tinkercad.com/).  
Use available sensors: **MQ-135**, **DHT11**, and **DC Motor** (as a fan).

---

## 📸 Project Files
- `/Circuit` → Circuit diagram & Fritzing file  
- `/Docs` → Detailed component list, explanation, and PowerPoint  
- `/Images` → Prototype and simulation screenshots  

---

## ✨ Author
Developed by **Safia Mohammed Al-Qarni**  
📍 *Academy of Learning – Riyadh, Saudi Arabia*
