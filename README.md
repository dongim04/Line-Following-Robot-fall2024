# Arduino-Based Line Following Robot with Closed-Loop Motor Control

### Setting Up the Environment
Arduino IDE -> Go to Sketch -> Include Library -> Manage Libraries -> Search for Adafruit Motor Shield V2 Library -> Install it


### Basic Motor Control Setup
Start by initializing the motors and making the robot move.
    Run `Basic_Motor_Control_Setup.ino`


### Reading from the IR Reflectance Sensors
Integrate IR sensors by reading the sensor values and printing them to the serial monitor. Calibrate the threshold for detecting the black tape.
    Run `Reading_IR_Sensors.ino`


### Implementing Basic Line Following Logic
Implement basic control logic to steer the robot based on the IR sensor readings. If the left sensor detects the line, slow down the right motor and vice versa.
    Run `Basic_Line_Following.ino`


### Tuning via Serial Communication
Use Serial commands to adjust motor speed.
    Run `Control_Serial_Connection.ino`