#include <Wire.h>
#include <Adafruit_MotorShield.h>
#define IR_LEFT A0  // Left IR sensor connected to pin A0
#define IR_RIGHT A1 // Right IR sensor connected to pin A1

Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 
Adafruit_DCMotor *leftMotor = AFMS.getMotor(1);
Adafruit_DCMotor *rightMotor = AFMS.getMotor(2);

int leftSensorValue;
int rightSensorValue;

void setup() {
  Serial.begin(9600);
  AFMS.begin();
  
  leftMotor->setSpeed(150);
  rightMotor->setSpeed(150);
  leftMotor->run(FORWARD);
  rightMotor->run(FORWARD);
}

void loop() {
  // Read sensor values
  leftSensorValue = analogRead(IR_LEFT);
  rightSensorValue = analogRead(IR_RIGHT);

  // Print values for debugging and calibration
  Serial.print("Left Sensor: ");
  Serial.print(leftSensorValue);
  Serial.print(" | Right Sensor: ");
  Serial.println(rightSensorValue);

  delay(100);
}
