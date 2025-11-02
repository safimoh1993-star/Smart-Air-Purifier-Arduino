# 🌿 Smart Air Purifier using Arduino

A smart air purification system designed and built by **high school students** under the supervision of **Teacher Safia Mohammed Al-Qarni** for the *Internet of Things (IoT)* course.  

The device monitors **gas**, **dust**, and **temperature/humidity** levels using Arduino sensors.  
When pollution or heat exceeds safe limits, a **fan** is automatically activated to purify the air.  

🎥 *A short demo video is included in this repository — the teacher is very proud of her students and their creativity!* 💚

---

## ⚙️ Components
| Component | Function |
|------------|-----------|
| Arduino UNO | Main microcontroller |
| MQ-135 Gas Sensor | Detects harmful gases or smoke |
| Dust Sensor (GP2Y1010AU0F) | Measures dust particles in the air |
| DHT11 Sensor | Reads temperature and humidity |
| DC Fan | Cleans the air when activated |
| NPN Transistor (2N2222) | Controls the fan motor |
| 10kΩ Resistor | For signal stabilization |
| LEDs (Red / Green) | Show air status |
| Breadboard & Jumper Wires | Circuit connections |

---

## 💡 How It Works
1. Sensors continuously read air quality data.  
2. Arduino compares the readings to preset safety thresholds.  
3. If pollution or heat is high → fan turns **ON** and **red LED** lights up.  
4. If the air is clean → fan turns **OFF** and **green LED** lights up.  

---

## 💻 Code File
All Arduino logic is included in **[SmartAir.ino](https://github.com/safimoh1993-star/Smart-Air-Purifier-Arduino/blob/main/SmartAir.ino)**.  
The code can easily be simulated using **Tinkercad Circuits**.

---

## 🔌 Simulation
You can simulate this project on [Tinkercad](https://www.tinkercad.com/).  
Use these available components: **MQ-135**, **DHT11**, and **DC Motor** (as the fan).

---

## 📸 Project Files
- `/Circuit` → Circuit diagram 
- `/Docs` → Components list, detailed explanation  
- `/Video` → [Demo video of the working project ](https://www.linkedin.com/posts/%D8%B5%D8%A7%D9%81%D9%8A%D8%A9-%D8%A7%D9%84%D9%82%D8%B1%D9%86%D9%8A-513176240_smart-air-purifier-iot-project-im-truly-activity-7295511179689394177-k6-6?utm_source=share&utm_medium=member_desktop&rcm=ACoAADvTLl8BAWX2L7FEtmTU9TsTPiuXL_oggqk) 

---

## ✨ Credits
**Teacher:** Safia Mohammed Al-Qarni  
**Subject:** Internet of Things (IoT)  
**School Level:** High School – Riyadh, Saudi Arabia  

> “I’m truly proud of my students for their creativity, teamwork, and passion for learning technology.” 💚
