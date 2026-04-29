# Smart Power Failure and Line Fault Detection System

## Description
This project is used to detect power failure and faults in multiple power lines. It uses an ESP32 to monitor different input lines and gives output through LEDs to indicate the fault condition.

## Objective
To identify which power line has failed and provide a simple visual indication using LEDs.

## Components Used
- ESP32
- LEDs
- Resistors
- Breadboard
- Connecting wires
- Switches (to simulate faults)

## Working Principle
- Multiple power lines are connected as inputs to the ESP32.
- Each line is continuously monitored.
- If a line is working properly, the corresponding LED remains OFF (or ON based on your logic).
- When a fault or power failure occurs in a line:
  - The ESP32 detects the change in input.
  - The corresponding LED turns ON to indicate the fault.
- Switches are used to simulate faults in different lines.

## How to Use
1. Power the ESP32.
2. Ensure all lines are connected properly.
3. Trigger a fault using the switches.
4. Observe the LED indication for the faulty line.

## Output
- LED glows for the faulty line.
- Helps to quickly identify which line has an issue.

## Limitations
- Built on breadboard, so wiring may appear complex.
- Not implemented on PCB.
- Suitable for basic prototype demonstration.

## Future Improvements
- Design a PCB for better stability.
- Add LCD display for detailed output.
- Use wireless communication for remote monitoring.
