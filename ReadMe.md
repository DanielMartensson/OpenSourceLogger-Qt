# OpenSourceLogger

This is a logging software for measuring and control. With this software you can measure different types of signals and control different types of acturators. This software has also CAN-bus such as regular CAN, SAE J1939. All communications goes over USB. That means that this software 
is a CAN-bus diagnostic tool as well. When the data is measured, it can later be uploaded to a database and later bring back for plotting the data.

# Features

This software has the following

 * 8 x PWM NPN-drain with adjustable PWM frequency
 * 3 x Analog 0-20mA output
 * 12 x 0-20mA 16-bit Single Analog To Digital Converter with programmable gain
 * 5 x 0-20mA 16-bit Differential Analog To Digital Converter with programmable gain
 * 3 x 16-bit Encoder
 * 4 x 0 kHz to 10 kHz Input Capture
 * 10 x Digital inputs
 * 1 x CAN channel with support for different CAN protocols
 * 1 x Database connection
 * 1 x USB connection for sending signals between the computer and STM32 microcontroller

# How to build this project

## Using pre-compiled
1. Go to [STM32-PLC](https://github.com/DanielMartensson/STM32-PLC) and build that PCB
2. Install MySQL/MariaDB/MSSQL and download the pre-compiled OpenSourceLogger from `pre-compiled` folder.

## Compile from source
3. QT 6.3.0 and QT Creator
4. Download this repository
5. Download the [MySQL Driver For QT](https://github.com/thecodemonkey86/qt_mysql_driver) and extract `release\sqldrivers\qsqlmysql.dll` to `C:\QT6.3.0\mingw_64\plugins\sqldrivers`
6. Start the `.pro` project with QT Creator and compile the project with `release` configuration, not debug configuration.
7. Make sure that everything is working e.g connect to database and connect to USB. 
8. If everything is working, then deploy it e.g `c:\QT\6.3.0\mingw_64\bin>windeployqt.exe --release "C:\Users\danie\Documents\GitHub-Workspace\build-OpenSourceLogger-Desktop_Qt_6_3_0_MinGW_64_bit-Release\release\OpenSourceLogger.exe"` Make sure that `OpenSourceLogger.exe` is empty in the folder `release`.
9. Then extract `release\sqldrivers\qsqlmysql.dll` from your `.zip` file to your `sqldrivers` folder in your `release` folder
10. Extract also the rest of the `.dll` files at the same folder location as `OpenSourceLogger.exe` is. Done!

It's the same step for Linux and Mac. Just other extensions of the files.

# Minimum requriments for software

- MySQL 8
- QT Creator 4.15.1
- QT 6.3.0
- QCustomPlot 2.1.0

# Pictures

Main view window will show the measurements in real time

![a](https://raw.githubusercontent.com/DanielMartensson/OpenSourceLogger/main/pictures/MainView.png)

Control window is the user panel for sending CAN-bus signals or regular control signals

![a](https://raw.githubusercontent.com/DanielMartensson/OpenSourceLogger/main/pictures/ControlWindow.PNG)

OpenSourceLogger is also an ECU for CAN-bus

![a](https://raw.githubusercontent.com/DanielMartensson/OpenSourceLogger/main/pictures/CANSettingsWindow.PNG)

But to make this work, you need to connect a to USB and database

![a](https://raw.githubusercontent.com/DanielMartensson/OpenSourceLogger/main/pictures/ConnectionWindow.PNG)

Add a new measurement variable

![a](https://raw.githubusercontent.com/DanielMartensson/OpenSourceLogger/main/pictures/MeasurementListWindow.PNG)

Change the STM32 ADC and PWM prescalar settings

![a](https://raw.githubusercontent.com/DanielMartensson/OpenSourceLogger/main/pictures/STM32Window.PNG)

This is the PCB board

![a](https://raw.githubusercontent.com/DanielMartensson/OpenSourceLogger/main/pictures/PCB.PNG)

SAE J1939 CAN bus protocol

![a](https://raw.githubusercontent.com/DanielMartensson/OpenSourceLogger/main/pictures/SaeJ1939.PNG)

Upload measurement to the datbase

![a](https://raw.githubusercontent.com/DanielMartensson/OpenSourceLogger/main/pictures/UploadWindow.PNG)

View past measurements

![a](https://raw.githubusercontent.com/DanielMartensson/OpenSourceLogger/main/pictures/ViewWindow.PNG)

And the results

![a](https://raw.githubusercontent.com/DanielMartensson/OpenSourceLogger/main/pictures/FromDatabase.PNG)

# Status of the project
It's working and I don't have any plans right now to add new functionality(perhaps in the future if it's needed e.g CANopen). Right now everything is working and it will remain like that for now.