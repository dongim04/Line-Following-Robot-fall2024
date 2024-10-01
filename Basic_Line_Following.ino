int threshold = 500;  // Adjust based on calibration

void loop() {
  // Read sensor values
  leftSensorValue = analogRead(IR_LEFT);
  rightSensorValue = analogRead(IR_RIGHT);

  // Basic line following logic
  if (leftSensorValue < threshold && rightSensorValue >= threshold) {
    // Line detected on the left side -> Turn right
    leftMotor->setSpeed(150);
    rightMotor->setSpeed(100);  // Slow down the right motor
  } 
  else if (rightSensorValue < threshold && leftSensorValue >= threshold) {
    // Line detected on the right side -> Turn left
    leftMotor->setSpeed(100);  // Slow down the left motor
    rightMotor->setSpeed(150);
  }
  else {
    // Both sensors detect the tape (or none) -> Go straight
    leftMotor->setSpeed(150);
    rightMotor->setSpeed(150);
  }

  delay(50);  // Adjust loop delay as necessary
}
