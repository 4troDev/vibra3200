#include <Wire.h>

const int vibrationMotorPin = 14;
const int encoderCLK = 16;
const int encoderDT = 17;
const int encoderSW = 18;
volatile int encoderPos = 0;
int vibrationFrequency = 100; // Default frequency in Hz
unsigned long previousMillis = 0;
const long interval = 1000 / vibrationFrequency;

void setup() {
  pinMode(vibrationMotorPin, OUTPUT);
  pinMode(encoderCLK, INPUT);
  pinMode(encoderDT, INPUT);
  pinMode(encoderSW, INPUT_PULLUP); // Set internal pull-up resistor for the switch pin

  attachInterrupt(digitalPinToInterrupt(encoderCLK), updateEncoder, CHANGE);
}

void loop() {
  int newPos = encoderPos;
  if (newPos != 0) {
    vibrationFrequency += newPos;
    if (vibrationFrequency < 1) vibrationFrequency = 1;
    newPos = 0;
    encoderPos = 0;
  }

  // Handle switch press
  if (digitalRead(encoderSW) == LOW) {
    // Increase or decrease vibration frequency when the switch is pressed
    vibrationFrequency += 10; // You can adjust the step size as needed
    if (vibrationFrequency > 1000) vibrationFrequency = 1000; // Limit the maximum frequency
  }

  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    digitalWrite(vibrationMotorPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(vibrationMotorPin, LOW);
  }
}

void updateEncoder() {
  static unsigned long lastInterruptTime = 0;
  unsigned long interruptTime = millis();
  if (interruptTime - lastInterruptTime > 1) {
    if (digitalRead(encoderCLK) == LOW) {
      if (digitalRead(encoderDT) == LOW)
        encoderPos--;
      else
        encoderPos++;
    }
    lastInterruptTime = interruptTime;
  }
}
