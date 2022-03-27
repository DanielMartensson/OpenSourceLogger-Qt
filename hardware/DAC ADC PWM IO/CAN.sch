EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 4 9
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Interface_CAN_LIN:TCAN332 U6
U 1 1 6089F1B5
P 5700 3050
F 0 "U6" H 5700 3631 50  0000 C CNN
F 1 "TCAN332" H 5700 3540 50  0000 C CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 5700 2550 50  0001 C CIN
F 3 "" H 5700 3050 50  0001 C CNN
F 4 "595-TCAN332DR" H 5700 3050 50  0001 C CNN "Mouser Eletronics"
	1    5700 3050
	1    0    0    -1  
$EndComp
Text HLabel 4050 2850 0    50   Input ~ 0
PD1
Text HLabel 4050 2950 0    50   Input ~ 0
PD0
$Comp
L power:+3.3V #PWR079
U 1 1 604ECD1E
P 4800 2500
F 0 "#PWR079" H 4800 2350 50  0001 C CNN
F 1 "+3.3V" H 4815 2673 50  0000 C CNN
F 2 "" H 4800 2500 50  0001 C CNN
F 3 "" H 4800 2500 50  0001 C CNN
	1    4800 2500
	1    0    0    -1  
$EndComp
Wire Wire Line
	4800 2650 4800 2500
$Comp
L Device:C C?
U 1 1 604F097D
P 4800 3150
AR Path="/604F097D" Ref="C?"  Part="1" 
AR Path="/6089DCA3/604F097D" Ref="C28"  Part="1" 
F 0 "C28" H 4915 3196 50  0000 L CNN
F 1 "10nF" H 4915 3105 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 4838 3000 50  0001 C CNN
F 3 "" H 4800 3150 50  0001 C CNN
F 4 "C57112" H 4800 3150 50  0001 C CNN "LCSC"
	1    4800 3150
	1    0    0    -1  
$EndComp
Wire Wire Line
	4800 3000 4800 2650
Connection ~ 4800 2650
Wire Wire Line
	4800 3300 4800 3450
$Comp
L power:GND #PWR081
U 1 1 604F1C3F
P 4800 3450
F 0 "#PWR081" H 4800 3200 50  0001 C CNN
F 1 "GND" H 4805 3277 50  0000 C CNN
F 2 "" H 4800 3450 50  0001 C CNN
F 3 "" H 4800 3450 50  0001 C CNN
	1    4800 3450
	1    0    0    -1  
$EndComp
Connection ~ 4800 3450
Wire Wire Line
	4800 2650 5700 2650
Wire Wire Line
	4800 3450 5700 3450
Text HLabel 8000 3150 2    50   Input ~ 0
CAN-
Text HLabel 8000 2950 2    50   Input ~ 0
CAN+
$Comp
L power:GND #PWR0109
U 1 1 607184C9
P 7250 3050
F 0 "#PWR0109" H 7250 2800 50  0001 C CNN
F 1 "GND" H 7255 2877 50  0000 C CNN
F 2 "" H 7250 3050 50  0001 C CNN
F 3 "" H 7250 3050 50  0001 C CNN
	1    7250 3050
	1    0    0    -1  
$EndComp
$Comp
L Device:C C?
U 1 1 6072C2CA
P 6600 4150
AR Path="/6072C2CA" Ref="C?"  Part="1" 
AR Path="/6089DCA3/6072C2CA" Ref="C34"  Part="1" 
F 0 "C34" H 6715 4196 50  0000 L CNN
F 1 "10nF" H 6715 4105 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 6638 4000 50  0001 C CNN
F 3 "" H 6600 4150 50  0001 C CNN
F 4 "C57112" H 6600 4150 50  0001 C CNN "LCSC"
	1    6600 4150
	1    0    0    -1  
$EndComp
$Comp
L Device:C C?
U 1 1 6072C89F
P 6600 1850
AR Path="/6072C89F" Ref="C?"  Part="1" 
AR Path="/6089DCA3/6072C89F" Ref="C33"  Part="1" 
F 0 "C33" H 6715 1896 50  0000 L CNN
F 1 "10nF" H 6715 1805 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 6638 1700 50  0001 C CNN
F 3 "" H 6600 1850 50  0001 C CNN
F 4 "C57112" H 6600 1850 50  0001 C CNN "LCSC"
	1    6600 1850
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR084
U 1 1 6072D073
P 6350 1700
F 0 "#PWR084" H 6350 1450 50  0001 C CNN
F 1 "GND" H 6355 1527 50  0000 C CNN
F 2 "" H 6350 1700 50  0001 C CNN
F 3 "" H 6350 1700 50  0001 C CNN
	1    6350 1700
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR085
U 1 1 6072D265
P 6600 4300
F 0 "#PWR085" H 6600 4050 50  0001 C CNN
F 1 "GND" H 6605 4127 50  0000 C CNN
F 2 "" H 6600 4300 50  0001 C CNN
F 3 "" H 6600 4300 50  0001 C CNN
	1    6600 4300
	1    0    0    -1  
$EndComp
Wire Wire Line
	6350 1700 6600 1700
$Comp
L Device:C C?
U 1 1 607351C5
P 4200 2550
AR Path="/607351C5" Ref="C?"  Part="1" 
AR Path="/6089DCA3/607351C5" Ref="C35"  Part="1" 
F 0 "C35" H 4315 2596 50  0000 L CNN
F 1 "10nF" H 4315 2505 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 4238 2400 50  0001 C CNN
F 3 "" H 4200 2550 50  0001 C CNN
F 4 "C57112" H 4200 2550 50  0001 C CNN "LCSC"
	1    4200 2550
	1    0    0    -1  
$EndComp
$Comp
L Device:C C?
U 1 1 607355D2
P 4200 3200
AR Path="/607355D2" Ref="C?"  Part="1" 
AR Path="/6089DCA3/607355D2" Ref="C36"  Part="1" 
F 0 "C36" H 4315 3246 50  0000 L CNN
F 1 "10nF" H 4315 3155 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 4238 3050 50  0001 C CNN
F 3 "" H 4200 3200 50  0001 C CNN
F 4 "C57112" H 4200 3200 50  0001 C CNN "LCSC"
	1    4200 3200
	1    0    0    -1  
$EndComp
Wire Wire Line
	4050 2950 4200 2950
Wire Wire Line
	5200 2850 4200 2850
Wire Wire Line
	4200 2700 4200 2850
Connection ~ 4200 2850
Wire Wire Line
	4200 2850 4050 2850
Wire Wire Line
	4200 3050 4200 2950
Connection ~ 4200 2950
Wire Wire Line
	4200 2950 5200 2950
$Comp
L power:GND #PWR087
U 1 1 60737C81
P 4200 3350
F 0 "#PWR087" H 4200 3100 50  0001 C CNN
F 1 "GND" H 4205 3177 50  0000 C CNN
F 2 "" H 4200 3350 50  0001 C CNN
F 3 "" H 4200 3350 50  0001 C CNN
	1    4200 3350
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR086
U 1 1 607381FE
P 3950 2400
F 0 "#PWR086" H 3950 2150 50  0001 C CNN
F 1 "GND" H 3955 2227 50  0000 C CNN
F 2 "" H 3950 2400 50  0001 C CNN
F 3 "" H 3950 2400 50  0001 C CNN
	1    3950 2400
	1    0    0    -1  
$EndComp
Wire Wire Line
	4200 2400 3950 2400
$Comp
L Device:R R58
U 1 1 609C4A6C
P 6450 3350
F 0 "R58" H 6520 3396 50  0000 L CNN
F 1 "120" H 6520 3305 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 6380 3350 50  0001 C CNN
F 3 "" H 6450 3350 50  0001 C CNN
F 4 "C22787" H 6450 3350 50  0001 C CNN "LCSC"
	1    6450 3350
	1    0    0    -1  
$EndComp
$Comp
L Device:C C?
U 1 1 609C558B
P 6900 3050
AR Path="/609C558B" Ref="C?"  Part="1" 
AR Path="/6089DCA3/609C558B" Ref="C40"  Part="1" 
F 0 "C40" H 7015 3096 50  0000 L CNN
F 1 "10nF" H 7015 3005 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 6938 2900 50  0001 C CNN
F 3 "" H 6900 3050 50  0001 C CNN
F 4 "C57112" H 6900 3050 50  0001 C CNN "LCSC"
	1    6900 3050
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6750 3050 6600 3050
Connection ~ 6600 3050
Wire Wire Line
	6200 2950 6300 2950
Wire Wire Line
	8000 2950 7900 2950
Wire Wire Line
	7050 3050 7250 3050
Connection ~ 7250 3050
Wire Wire Line
	7250 3050 7500 3050
Wire Wire Line
	6300 3150 6200 3150
Wire Wire Line
	8000 3150 7900 3150
Wire Wire Line
	8000 2000 6600 2000
Connection ~ 6600 2000
Wire Wire Line
	6600 4000 6300 4000
Connection ~ 6600 4000
Wire Wire Line
	6600 4000 8000 4000
Wire Wire Line
	6600 2000 6300 2000
Text Notes 7200 1900 0    50   ~ 0
CAN-bus with split terminal + two diodes for high voltage protection.
Wire Notes Line
	7150 1800 9950 1800
Wire Notes Line
	9950 1800 9950 1950
Wire Notes Line
	9950 1950 7150 1950
Wire Notes Line
	7150 1950 7150 1800
Text Notes 3850 2150 0    50   ~ 0
Capacitors are made for filtering noise.
Wire Notes Line
	5400 2000 5400 2250
Wire Notes Line
	3800 2250 3800 2000
Wire Notes Line
	3800 2000 5400 2000
Wire Notes Line
	3800 2250 5400 2250
$Comp
L Power_Protection:NUP2105L D28
U 1 1 6088C597
P 7700 3050
F 0 "D28" H 7905 3096 50  0000 L CNN
F 1 "PESD5V0L2BT,215" H 7905 3005 50  0000 L CNN
F 2 "Package_TO_SOT_SMD:SOT-23" H 7925 3000 50  0001 L CNN
F 3 "" H 7825 3175 50  0001 C CNN
F 4 "755-MMBZ6V8ALFHT116" H 7700 3050 50  0001 C CNN "Mouser Eletronics"
	1    7700 3050
	0    1    1    0   
$EndComp
$Comp
L Device:R R56
U 1 1 60E6E466
P 6600 3750
F 0 "R56" H 6670 3796 50  0000 L CNN
F 1 "0" H 6670 3705 50  0000 L CNN
F 2 "Resistor_SMD:R_0402_1005Metric" V 6530 3750 50  0001 C CNN
F 3 "" H 6600 3750 50  0001 C CNN
F 4 "~" H 6600 3750 50  0001 C CNN "LCSC"
F 5 "Size: 0402" H 6600 3750 50  0001 C CNN "Comment"
F 6 "~" H 6600 3750 50  0001 C CNN "Mouser Eletronics"
	1    6600 3750
	1    0    0    -1  
$EndComp
Wire Wire Line
	6600 2100 6600 2000
Wire Wire Line
	6600 2450 6600 2400
Wire Wire Line
	6600 3900 6600 4000
$Comp
L Device:R R55
U 1 1 60E75075
P 6600 2250
F 0 "R55" H 6670 2296 50  0000 L CNN
F 1 "0" H 6670 2205 50  0000 L CNN
F 2 "Resistor_SMD:R_0402_1005Metric" V 6530 2250 50  0001 C CNN
F 3 "" H 6600 2250 50  0001 C CNN
F 4 "~" H 6600 2250 50  0001 C CNN "LCSC"
F 5 "Size: 0402" H 6600 2250 50  0001 C CNN "Comment"
F 6 "~" H 6600 2250 50  0001 C CNN "Mouser Eletronics"
	1    6600 2250
	1    0    0    -1  
$EndComp
$Comp
L Device:R R83
U 1 1 60972474
P 6750 3350
F 0 "R83" H 6820 3396 50  0000 L CNN
F 1 "120" H 6820 3305 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 6680 3350 50  0001 C CNN
F 3 "" H 6750 3350 50  0001 C CNN
F 4 "C22787" H 6750 3350 50  0001 C CNN "LCSC"
	1    6750 3350
	1    0    0    -1  
$EndComp
Wire Wire Line
	6450 3500 6600 3500
Wire Wire Line
	6600 3500 6600 3600
Wire Wire Line
	6600 3500 6750 3500
Connection ~ 6600 3500
Wire Wire Line
	6750 3200 6600 3200
Wire Wire Line
	6600 3050 6600 3200
Wire Wire Line
	6450 3200 6600 3200
Connection ~ 6600 3200
Wire Wire Line
	6300 3150 6300 4000
$Comp
L Device:R R53
U 1 1 6097FA2E
P 6450 2600
F 0 "R53" H 6520 2646 50  0000 L CNN
F 1 "120" H 6520 2555 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 6380 2600 50  0001 C CNN
F 3 "" H 6450 2600 50  0001 C CNN
F 4 "C22787" H 6450 2600 50  0001 C CNN "LCSC"
	1    6450 2600
	1    0    0    -1  
$EndComp
$Comp
L Device:R R82
U 1 1 6097FA35
P 6750 2600
F 0 "R82" H 6820 2646 50  0000 L CNN
F 1 "120" H 6820 2555 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 6680 2600 50  0001 C CNN
F 3 "" H 6750 2600 50  0001 C CNN
F 4 "C22787" H 6750 2600 50  0001 C CNN "LCSC"
	1    6750 2600
	1    0    0    -1  
$EndComp
Wire Wire Line
	6300 2000 6300 2950
Wire Wire Line
	6450 2750 6600 2750
Wire Wire Line
	6750 2450 6600 2450
Wire Wire Line
	6450 2450 6600 2450
Connection ~ 6600 2450
Wire Wire Line
	6600 2750 6600 3050
Connection ~ 6600 2750
Wire Wire Line
	6600 2750 6750 2750
Wire Wire Line
	8000 2000 8000 2950
Wire Wire Line
	8000 3150 8000 4000
Text Notes 7000 2650 0    50   ~ 0
60 Ohm total
Wire Notes Line
	7000 2550 7000 2650
Wire Notes Line
	7000 2650 7550 2650
Wire Notes Line
	7550 2550 7000 2550
Wire Notes Line
	7550 2550 7550 2650
$EndSCHEMATC