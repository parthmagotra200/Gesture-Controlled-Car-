# 🤖 Gesture-Controlled Wireless Car

This is an embedded systems project using an Arduino Uno, an ADXL335 accelerometer, and an RF module to control a robotic car through hand gestures.

## 🔧 Hardware Used

- Arduino Uno
- ADXL335 Accelerometer
- RF Transmitter & Receiver
- Motor Driver Module (L298N or similar)
- Chassis + Motors + Wheels + Battery

## 🧠 How It Works

- The ADXL335 detects tilt in X and Y axes
- The Arduino interprets those tilts as directional input
- Commands are sent wirelessly to the receiver connected to the car

### Example Directions:
- Tilt forward → Move forward
- Tilt back → Move backward
- Tilt left → Turn left
- Tilt right → Turn right

## ⚙️ Arduino Sketch

Upload the `gesture_controlled_car.ino` file to your Arduino.

## 🧪 Notes

- Tune the analog threshold values if needed
- The serial output can be connected to an RF module or Bluetooth module for wireless control

---

Built by [Parth Magotra](https://www.linkedin.com/in/parth-magotra-cs)