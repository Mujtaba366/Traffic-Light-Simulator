# Traffic Light System

Create a simple traffic light system using an Arduino Nano and three LEDs. The LEDs automatically switch between red, yellow, and green to simulate a real traffic light sequence.

## Features

* Automatic traffic light sequence
* Red, yellow, and green LED control
* Beginner friendly
* Simple timing system
* Great introduction to digital outputs

## Components

* Arduino Nano
* Red LED
* Yellow LED
* Green LED
* 3x 220Ω resistors
* Breadboard
* Jumper wires

## Pin Connections

| Component              | Arduino Pin          |
| ---------------------- | -------------------- |
| Red LED Cathode (-)    | D9                   |
| Yellow LED Cathode (-) | D11                  |
| Green LED Cathode (-)  | D12                  |
| LED Anodes (+)         | 220Ω resistor → 3.3V |

## How It Works

The Arduino controls the three LEDs in a timed sequence:

1. Red light turns on
2. Red and yellow turn on together
3. Green light turns on
4. Yellow light turns on
5. The sequence repeats continuously

The LEDs are wired in an inverted configuration:

* LOW = ON
* HIGH = OFF

## Instructions

1. Connect the Arduino Nano to the breadboard.
2. Connect the cathode (-) of the red LED to D9.
3. Connect the cathode (-) of the yellow LED to D11.
4. Connect the cathode (-) of the green LED to D12.
5. Connect each LED anode (+) to a 220Ω resistor.
6. Connect the other side of each resistor to 3.3V.
7. Upload the code to the Arduino Nano.
8. Watch the traffic light sequence run automatically.

## Difficulty

Beginner

## Build Time

10 Minutes

## Estimated Cost

Low Cost

## Applications

* Learning digital outputs
* Understanding timed systems
* Traffic light simulations
* Beginner Arduino projects
* LED control practice
