#### Components Needed:
- Arduino Uno
- Adafruit Motor Shield v2
- DC Motors (2)
- Infrared (IR) Reflectance Sensors (2)
- 12V Power supply
- Wiring cables

### 1.  Place the **Adafruit Motor Shield v2** on top of the Arduino Uno.

### 2. Arduino Uno with Motor Shield Mounted on Top:
   - DC Motor 1 -> M1 terminals
   - DC Motor 2 -> M2 terminals
   - External power supply -> Vin and GND of the motor shield

### 3. Left IR Sensor:
   - Vcc (Anode Pin) -> 5V on Arduino
   - GND (Cathode Pin and Emitter Pin) -> GND on Arduino
   - Signal (Collector Pin) -> A0 on Arduino

### 4. Right IR Sensor:
   - Vcc (Anode Pin) -> 5V on Arduino
   - GND (Cathode Pin and Emitter Pin) -> GND on Arduino
   - Signal (Collector Pin) -> A1 on Arduino

#### Useful Sources for Sensor Pins (Step 3 and 4)
- ITR20001-T: https://cdn-shop.adafruit.com/product-files/3930/ITR20001-T.pdf (Page 8)
- TCRT5000: https://www.vishay.com/docs/83760/tcrt5000.pdf (Page 4)