int motorSpeed = 150;  // Default speed

void setup() {
  Serial.begin(9600);
  AFMS.begin();

  leftMotor->setSpeed(motorSpeed);
  rightMotor->setSpeed(motorSpeed);

  Serial.println("Enter motor speed (0-255): ");
}

void loop() {
  if (Serial.available()) {
    motorSpeed = Serial.parseInt();  // Read integer from serial input
    motorSpeed = constrain(motorSpeed, 0, 255);  // Ensure the speed is within bounds

    leftMotor->setSpeed(motorSpeed);
    rightMotor->setSpeed(motorSpeed);

    Serial.print("New speed set to: ");
    Serial.println(motorSpeed);
  }

  delay(100);
}
