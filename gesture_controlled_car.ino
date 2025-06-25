// Gesture Controlled Wireless Car
// Components: Arduino Uno, ADXL335 Accelerometer, RF Module

const int xPin = A0;
const int yPin = A1;
const int threshold = 50;

void setup() {
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
}

void loop() {
  int xValue = analogRead(xPin);
  int yValue = analogRead(yPin);

  String direction = "STOP";

  if (xValue < 400) {
    direction = "LEFT";
  } else if (xValue > 600) {
    direction = "RIGHT";
  } else if (yValue < 400) {
    direction = "FORWARD";
  } else if (yValue > 600) {
    direction = "BACKWARD";
  }

  Serial.println(direction);
  delay(200);
}