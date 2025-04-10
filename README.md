
# ProS3 Remote Library - Getting Started

This project is built for ProS3 boards with Espressif MCUs. It provides simple setup and data handling for input devices like joysticks, triggers, buzzers, and more.

All necessary functions and pinouts are included in `<remote.h>`, so you only need to include this one header file in your program.

---

## Setup Instructions

In your `setup()` function, initialize the components you need by calling the following `init___()` functions:

| Function         | Description                                                  |
| ---------------- | ------------------------------------------------------------- |
| `initPeripherals()` | Initializes the joysticks, triggers, and buzzers.             |
| `initRotary()`      | Sets up the rotary encoder sensor.                           |
| `initScreen()`      | Sets up the LCD screen.                                       |
| `initReceiver()`    | Prepares the device to receive data (no MAC address needed).  |
| `initSender()`      | Prepares the device to send data (requires a MAC address).    |

> **Tip:**  
> Use the provided `readoutMacAddress.cpp` program to find the MAC or broadcast address when setting up the sender.

---

## Reading Input Data

Use the `read___()` functions to read from each sensor. The input data is stored in a customizable struct.

> **Note:**  
> Battery voltage is **not currently sent** by default, but it can be easily added. If you add it, make sure to update the data storage structure accordingly.

---

## Pinouts

All pin definitions are pre-set in `<pinouts.h>` and automatically linked through `<remote.h>`.  
No manual pin setup is required.

---

## Additional Notes

- The joystick read functions are **very basic**.
- It is recommended to apply a **deadzone of about 0.03** to prevent stick drift.
- Consider adding **additional filtering** to improve the smoothness of joystick and trigger inputs (See how the battery voltage is read).
- Remove all **delays and Serial prints** to increase the frequency sensors can be read.

---




