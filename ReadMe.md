# OpenSourceLogger

This is a logging software for measuring and control. With this software you can measure different types of signals and control different types of acturators. This software has also CAN-bus such as regular CAN, SAE J1939 and CANopen. All communications goes over USB. That means that this software 
is a CAN-bus diagnostic tool as well. When the data is measured, it can later be uploaded to a database and later bring back for plotting the data.

# Features

This software has the following

- 8: PWM NPN-drain with adjustable PWM frequency
- 3: Analog 0-20mA output
- 12: 0-20mA 16-bit Single Analog To Digital Converter
- 5: 0-20mA 16-bit Differential Analog To Digital Converter
- 2: 16-bit Encoder
- 2: 0.1526 Hz to 10 kHz Input Capture
- 9: Digital inputs
- 1: CAN channel with support for different CAN protocols
- Database connection
- USB connection for sending signals between the computer and STM32 microcontroller

All input and outputs are protected up to 30V. 

# How to build this project

This project is large and requires many steps to build up.

1. Install KiCad, STM32CubeIDE, MySQL/MSSQL, QT Creator, A C++ compiler for QT e.g MinGW or GCC.
2. Download this repository.
3. Go to hardware -> DAC ADC PWM IO and open the KiCad project and then order a circuit board from your PCB printer manufacture.
3. Once you got the circuit board finished, you go to hardware -> STM32 PLC and open the project with STM32CubeIDE and flash your STM32 microcontroller with that project.
4. Start OpenSourceLogger project with QT Creator. If you are using MySQL with OpenSourceLogger, please see this [video](https://www.youtube.com/watch?v=qeErME39zvw)

# Todo

- Create a manual how to use, even if the software is easy to use.
- Redesign the circuit board for the three 0-20 mA DAC outputs. They are using a Widlar current mirror. Construct a Wilson current mirror instead.
- Remove Low Speed External crystal, Battery holder, some 2.54mm pins, Serial RX TX holes and chip select holes (The circuit board was made for become an independent PLC, but I changed the software and made USB connections instead and constructed a C++ QT software instead of having a cheap touch LCD at the circuit board). The board will have the same functionality, with lesser eletrical components.

# Pictures

Main view window will show the measurements in real time

![a](https://raw.githubusercontent.com/DanielMartensson/OpenSourceLogger/main/pictures/MainView.png)

Control window is the user panel for sending CAN-bus signals or regular control signals

![a](https://raw.githubusercontent.com/DanielMartensson/OpenSourceLogger/main/pictures/ControlWindow.PNG)

OpenSourceLogger is also an ECU for CAN-bus

![a](https://raw.githubusercontent.com/DanielMartensson/OpenSourceLogger/main/pictures/CANSettingsWindow.PNG)


