#include <Wire.h>
#include <Adafruit_MotorShield.h>
#define IR_LEFT A0
#define IR_RIGHT A1

// Motor speed control
int baseSpeed = 150;   // Base motor speed
int maxSpeed = 255;    // Maximum speed
int minSpeed = 0;      // Minimum speed

// Motor shield object
Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 
Adafruit_DCMotor *leftMotor = AFMS.getMotor(1);
Adafruit_DCMotor *rightMotor = AFMS.getMotor(2);

// Sensor values
int leftSensorValue;
int rightSensorValue;
int threshold = 500;   // Adjust based on calibration

void setup() {
  Serial.begin(9600);
  AFMS.begin();
  leftMotor->setSpeed(baseSpeed);
  rightMotor->setSpeed(baseSpeed);
  leftMotor->run(FORWARD);
  rightMotor->run(FORWARD);
  Serial.println("Tuning interface started. Use 'speed=<value>' to adjust base speed.");
}

void loop() {
  // Read sensor values
  leftSensorValue = analogRead(IR_LEFT);
  rightSensorValue = analogRead(IR_RIGHT);

  // Basic line following logic
  if (leftSensorValue < threshold && rightSensorValue >= threshold) {
    // Line detected on the left side -> Turn right
    leftMotor->setSpeed(baseSpeed);
    rightMotor->setSpeed(baseSpeed - 50);  // Slow down right motor
  } 
  else if (rightSensorValue < threshold && leftSensorValue >= threshold) {
    // Line detected on the right side -> Turn left
    leftMotor->setSpeed(baseSpeed - 50);   // Slow down left motor
    rightMotor->setSpeed(baseSpeed);
  } 
  else {
    // Both sensors see tape (or neither sees it) -> Go straight
    leftMotor->setSpeed(baseSpeed);
    rightMotor->setSpeed(baseSpeed);
  }

  // Check for serial input to adjust motor speed
  serialTuning();

  delay(50);  // Adjust the delay based on how fast you want the control loop to update
}

void serialTuning() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    input.trim();

    if (input.startsWith("speed=")) {
      baseSpeed = input.substring(6).toInt();
      baseSpeed = constrain(baseSpeed, minSpeed, maxSpeed);  // Constrain speed to valid range
      Serial.print("Updated base speed: ");
      Serial.println(baseSpeed);
    } else {
      Serial.println("Unknown command. Use: speed=<value>");
    }
  }
}
