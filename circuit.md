### Components Needed:
1. **Arduino Uno**
2. **Adafruit Motor Shield v2**
3. **DC Motors (2)** – for moving the robot
4. **Infrared (IR) Reflectance Sensors (2)** – for line following
5. **Power supply (e.g., 9V or 12V battery)** – to power the motors
6. **Wiring cables**

### Connections:
# Place the **Adafruit Motor Shield v2** on top of the Arduino Uno. This shield handles all motor control wiring and allows for easy control of DC motors using the `AFMotor` library.

    1. Arduino Uno with Motor Shield Mounted on Top:
    - DC Motor 1 -> M1 terminals
    - DC Motor 2 -> M2 terminals
    - External power supply -> Vin and GND of the motor shield

    2. Left IR Sensor:
    - Vcc (Anode Pin) -> 5V on Arduino
    - GND (Cathode Pin and Emitter Pin) -> GND on Arduino
    - Signal (Collector Pin) -> A0 on Arduino

    3. Right IR Sensor:
    - Vcc (Anode Pin) -> 5V on Arduino
    - GND (Cathode Pin and Emitter Pin) -> GND on Arduino
    - Signal (Collector Pin) -> A0 on Arduino

# Sensor Pin Labels
   https://cdn-shop.adafruit.com/product-files/3930/ITR20001-T.pdf (Page 8)
   https://www.vishay.com/docs/83760/tcrt5000.pdf (Page 4)