### Components Needed:
1. **Arduino Uno**
2. **Adafruit Motor Shield v2** (or any motor driver)
3. **DC Motors (2)** – for moving the robot
4. **Infrared (IR) Reflectance Sensors (2)** – for line following
5. **Power supply (e.g., 9V or 12V battery)** – to power the motors
6. **Wiring cables** – jumper wires for connections

#### **Motor Connections:
   - **Motor Shield:**
     - Place the **Adafruit Motor Shield v2** on top of the Arduino Uno. This shield handles all motor control wiring and allows for easy control of DC motors using the `AFMotor` library.
    1. **Arduino Uno with Motor Shield Mounted on Top:**
    - **DC Motor 1 (Left Motor)** connected to **M1 terminals**.
    - **DC Motor 2 (Right Motor)** connected to **M2 terminals**.
    - External power supply connected to **Vin and GND** of the motor shield.

#### **IR Reflectance Sensor Connections:
   - Each IR sensor consists of two parts: an **IR emitter (LED)** and an **IR receiver (phototransistor)**. They are commonly connected to **analog pins** on the Arduino for reading values.
    2. **Left IR Sensor:**
    - **Vcc** -> **5V on Arduino**.
    - **GND** -> **GND on Arduino**.
    - **Signal** -> **A0 on Arduino**.

    3. **Right IR Sensor:**
    - **Vcc** -> **5V on Arduino**.
    - **GND** -> **GND on Arduino**.
    - **Signal** -> **A1 on Arduino**.

#### Powering the Motors:
   - The motors typically need more power than the Arduino can provide, so ensure your **external power supply** is connected to the motor shield via the **Vin and GND** terminals (or the external power input).
   - Ensure the **jumper for motor power** is set correctly (usually removed if using an external power source).