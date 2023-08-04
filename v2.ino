#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int vibrationMotorPin = 14;
const int encoderCLK = 16;
const int encoderDT = 17;
const int encoderSW = 18;
volatile int encoderPos = 0;
int vibrationFrequency = 100; // Default frequency in Hz
unsigned long previousMillis = 0;
const long interval = 1000 / vibrationFrequency;

LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address is 0x27, 16 columns, and 2 rows

void setup() {
  pinMode(vibrationMotorPin, OUTPUT);
  pinMode(encoderCLK, INPUT);
  pinMode(encoderDT, INPUT);
  pinMode(encoderSW, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(encoderCLK), updateEncoder, CHANGE);
  lcd.begin(16, 2);
  lcd.print("Vibration Gen");
}

void loop() {
  int newPos = encoderPos;
  if (newPos != 0) {
    vibrationFrequency += newPos;
    if (vibrationFrequency < 1) vibrationFrequency = 1;
    newPos = 0;
    encoderPos = 0;
    lcd.setCursor(0, 1);
    lcd.print("Freq:       "); // Clear the previous frequency value
    lcd.setCursor(6, 1);
    lcd.print(vibrationFrequency);
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
