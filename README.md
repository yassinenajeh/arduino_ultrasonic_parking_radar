# arduino_ultrasonic_parking_radar
Project completed in 2023 – documented here for portfolio purposes.

## Overview
This project was developed during my “Sciences de l’Ingénieur” (Engineering Science) option in 10th grade (Seconde).
The goal was to design and prototype a parking assistance system similar to those used in cars to detect obstacles and warn the driver of the distance.

The system uses:
* An ultrasonic sensor (*HC-SR04*) to measure distance
* A 24-LED NeoPixel ring to display visual alerts
* An *Arduino* microcontroller to process and control the LED color transition

The closer an object gets (from 255 cm to 0 cm), the LED ring smoothly transitions from green → red.

## 🧩 Objectives

- Learn how to generate RGB color transitions based on real-time data
- Control multiple LEDs using Adafruit NeoPixel libraries
- Build a simple but realistic automotive-inspired safety device

## 🛠️ Components & Tools

| Category                 | Tools / Components                |
| ------------------------ | --------------------------------- |
| **Microcontroller**      | Arduino Uno                       |
| **Sensor**               | Ultrasonic HC-SR04                |
| **LED System**           | 24-pixel NeoPixel RGB ring        |
| **Librairies**           | Ultrasonic.h, Adafruit_NeoPixel.h |
| **3D Design**            | SolidWorks (group 1)              |
| **Power Supply**         | 9V battery pack                   |
| **Programming Language** | C++ (Arduino IDE)                 |

## 🧠 How It Works

1. The *HC-SR04* sensor emits an ultrasonic pulse.
2. It measures the time the echo takes to return.
3. The *Arduino* calculates the distance in centimeters.
4. According to this distance (max 255 cm), the NeoPixel ring displays a logical color gradient :

Green → Red

The color updates dynamically in real time as the object moves.

## 🧰 Mechanical Design (SolidWorks)
The radar housing (sensor + LED ring) was designed in *SolidWorks* to:
* position the components properly
* ensure correct sensor exposure
* create a compact, stable prototype layout
<img width="367" height="361" alt="parking_radar" src="https://github.com/user-attachments/assets/dad47c17-c19c-472d-aac2-d584147e1fb3" />

## 💾 Arduino Code Example


## 👥 Team & Collaboration

This project was developed in collaboration beetwen two teams.
I. Group 1 — Mechanical Design (*SolidWorks*)
Responsible for the 3D model of the radar housing using *SolidWorks*.

II. Group 2 — Programming & Electronics (my group)
I was the team lead of the programming group, responsible for:
- writing the *Arduino* code,
- creating the RGB gradient logic,
- testing and calibrating the sensor + LED ring,
- ensuring the system worked in real-time.

## 📊 Results
As programming team lead, I tested and calibrated:
* the stability of ultrasonic readings
* the smoothness of the green → red transition
* LED brightness uniformity across 24 pixels
* reaction time to fast movement
* the maximum effective reading distance (≈ 230–255 cm)

## 🔍 Key Learnings
* Leading a small programming team
* Managing task distribution and testing
* Distance measurement using ultrasonic sensors
* LED color mapping and RGB manipulation
* Basic embedded systems logic
* Building an embedded system with real-world relevance
* Collaborating with a mechanical modeling team

## 🏁 Next Steps
* Use a screen (OLED) to display numeric distance
* Add a second sensor for wider detection
