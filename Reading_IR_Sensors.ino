#define IR_LEFT A0  // Left IR sensor connected to analog pin A0
#define IR_RIGHT A1 // Right IR sensor connected to analog pin A1

int leftSensorValue;
int rightSensorValue;

void setup() {
  Serial.begin(9600);
  
  // Setup motor shield
  AFMS.begin();
  
  // Setup motors
  leftMotor->setSpeed(150);
  rightMotor->setSpeed(150);
}

void loop() {
  // Read sensor values
  leftSensorValue = analogRead(IR_LEFT);
  rightSensorValue = analogRead(IR_RIGHT);

  // Print values for debugging
  Serial.print("Left Sensor: ");
  Serial.print(leftSensorValue);
  Serial.print(" | Right Sensor: ");
  Serial.println(rightSensorValue);

  delay(100);  // Small delay to avoid spamming serial output
}
