#include <Wire.h>
#include <Adafruit_MotorShield.h>

// Create the motor shield object
Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 

// Select the motors connected to the shield (M1 and M2 in this example)
Adafruit_DCMotor *leftMotor = AFMS.getMotor(1);
Adafruit_DCMotor *rightMotor = AFMS.getMotor(2);

void setup() {
  Serial.begin(9600);
  Serial.println("Robot Starting");

  // Initialize the motor shield
  AFMS.begin();  

  // Set the initial speed for motors (speed between 0-255)
  leftMotor->setSpeed(150);
  rightMotor->setSpeed(150);

  // Run motors forward
  leftMotor->run(FORWARD);
  rightMotor->run(FORWARD);
}

void loop() {
  // Basic loop to keep motors running
  // You will modify this with control logic based on IR sensor inputs
}
