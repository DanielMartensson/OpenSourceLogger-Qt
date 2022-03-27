EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 9
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
L Device:C C6
U 1 1 5FA0A689
P 5300 1150
F 0 "C6" H 5415 1196 50  0000 L CNN
F 1 "100nF" H 5415 1105 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 5338 1000 50  0001 C CNN
F 3 "" H 5300 1150 50  0001 C CNN
F 4 "C14663" H 5300 1150 50  0001 C CNN "LCSC"
	1    5300 1150
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR08
U 1 1 5FA0E24B
P 5300 900
F 0 "#PWR08" H 5300 750 50  0001 C CNN
F 1 "+3.3V" H 5315 1073 50  0000 C CNN
F 2 "" H 5300 900 50  0001 C CNN
F 3 "" H 5300 900 50  0001 C CNN
	1    5300 900 
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR09
U 1 1 5FA0EC78
P 5300 1400
F 0 "#PWR09" H 5300 1150 50  0001 C CNN
F 1 "GND" H 5305 1227 50  0000 C CNN
F 2 "" H 5300 1400 50  0001 C CNN
F 3 "" H 5300 1400 50  0001 C CNN
	1    5300 1400
	1    0    0    -1  
$EndComp
Wire Wire Line
	5300 1000 5300 900 
Wire Wire Line
	5300 1400 5300 1300
Wire Notes Line
	5050 1700 5050 650 
Text Notes 8850 1650 0    50   ~ 0
VDD-VSS
$Comp
L Device:C C10
U 1 1 5FA17F87
P 4000 2300
F 0 "C10" H 4115 2346 50  0000 L CNN
F 1 "10nF" H 4115 2255 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 4038 2150 50  0001 C CNN
F 3 "" H 4000 2300 50  0001 C CNN
F 4 "C57112" H 4000 2300 50  0001 C CNN "LCSC"
	1    4000 2300
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR012
U 1 1 5FA18E70
P 4000 2550
F 0 "#PWR012" H 4000 2300 50  0001 C CNN
F 1 "GND" H 4005 2377 50  0000 C CNN
F 2 "" H 4000 2550 50  0001 C CNN
F 3 "" H 4000 2550 50  0001 C CNN
	1    4000 2550
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR011
U 1 1 5FA19A16
P 4000 2050
F 0 "#PWR011" H 4000 1900 50  0001 C CNN
F 1 "+3.3V" H 4015 2223 50  0000 C CNN
F 2 "" H 4000 2050 50  0001 C CNN
F 3 "" H 4000 2050 50  0001 C CNN
	1    4000 2050
	1    0    0    -1  
$EndComp
Wire Wire Line
	4000 2150 4000 2050
Wire Wire Line
	4000 2450 4000 2550
Wire Notes Line
	4800 1800 3800 1800
$Comp
L power:GND #PWR016
U 1 1 5FA23166
P 5150 2550
F 0 "#PWR016" H 5150 2300 50  0001 C CNN
F 1 "GND" H 5155 2377 50  0000 C CNN
F 2 "" H 5150 2550 50  0001 C CNN
F 3 "" H 5150 2550 50  0001 C CNN
	1    5150 2550
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR015
U 1 1 5FA2316C
P 5150 2050
F 0 "#PWR015" H 5150 1900 50  0001 C CNN
F 1 "+3.3V" H 5165 2223 50  0000 C CNN
F 2 "" H 5150 2050 50  0001 C CNN
F 3 "" H 5150 2050 50  0001 C CNN
	1    5150 2050
	1    0    0    -1  
$EndComp
Wire Wire Line
	5150 2150 5150 2050
Wire Wire Line
	5150 2450 5150 2550
Wire Notes Line
	5950 1800 4950 1800
$Comp
L Switch:SW_Push SW1
U 1 1 5FA334B3
P 1150 2150
F 0 "SW1" H 1150 2435 50  0000 C CNN
F 1 "SW_Push" H 1150 2344 50  0000 C CNN
F 2 "Button_Switch_SMD:SW_SPST_FSMSM" H 1150 2350 50  0001 C CNN
F 3 "" H 1150 2350 50  0001 C CNN
F 4 "506-FSMSM" H 1150 2150 50  0001 C CNN "Mouser Eletronics"
	1    1150 2150
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR02
U 1 1 5FA3B92E
P 950 2650
F 0 "#PWR02" H 950 2400 50  0001 C CNN
F 1 "GND" H 955 2477 50  0000 C CNN
F 2 "" H 950 2650 50  0001 C CNN
F 3 "" H 950 2650 50  0001 C CNN
	1    950  2650
	1    0    0    -1  
$EndComp
Wire Wire Line
	1300 2550 1350 2550
Wire Wire Line
	950  2150 950  2550
Wire Wire Line
	950  2550 1000 2550
Wire Wire Line
	950  2650 950  2550
Connection ~ 950  2550
Wire Wire Line
	1350 2150 1350 2550
Wire Notes Line
	700  1800 1900 1800
Wire Notes Line
	1900 1800 1900 2950
Wire Notes Line
	1900 2950 700  2950
Wire Notes Line
	700  2950 700  1800
Text Notes 1600 2900 0    50   ~ 0
NRST
$Comp
L Device:R R1
U 1 1 5FA5A070
P 3150 2750
F 0 "R1" V 3357 2750 50  0000 C CNN
F 1 "1.5k" V 3266 2750 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 3080 2750 50  0001 C CNN
F 3 "" H 3150 2750 50  0001 C CNN
F 4 "C22843" H 3150 2750 50  0001 C CNN "LCSC"
	1    3150 2750
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR03
U 1 1 5FA63F21
P 2150 2400
F 0 "#PWR03" H 2150 2150 50  0001 C CNN
F 1 "GND" H 2155 2227 50  0000 C CNN
F 2 "" H 2150 2400 50  0001 C CNN
F 3 "" H 2150 2400 50  0001 C CNN
	1    2150 2400
	1    0    0    -1  
$EndComp
Wire Notes Line
	2050 2950 2050 1800
Wire Notes Line
	3750 1800 3750 2950
Text Notes 3200 2900 0    50   ~ 0
HSE Crystal
Wire Notes Line
	7100 1800 6100 1800
Wire Wire Line
	1350 2150 1500 2150
Connection ~ 1350 2150
Text Notes 1550 1650 0    50   ~ 0
ST-LINK V2
$Comp
L power:+3.3V #PWR0105
U 1 1 5FD83B93
P 950 900
F 0 "#PWR0105" H 950 750 50  0001 C CNN
F 1 "+3.3V" H 965 1073 50  0000 C CNN
F 2 "" H 950 900 50  0001 C CNN
F 3 "" H 950 900 50  0001 C CNN
	1    950  900 
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR080
U 1 1 5FEA2C82
P 950 1400
F 0 "#PWR080" H 950 1150 50  0001 C CNN
F 1 "GND" H 955 1227 50  0000 C CNN
F 2 "" H 950 1400 50  0001 C CNN
F 3 "" H 950 1400 50  0001 C CNN
	1    950  1400
	1    0    0    -1  
$EndComp
Wire Notes Line
	700  650  2050 650 
Wire Notes Line
	2050 1700 700  1700
$Comp
L Connector:USB_A J9
U 1 1 606BAA15
P 2500 1200
F 0 "J9" H 2557 1667 50  0000 C CNN
F 1 "USB_A" H 2557 1576 50  0000 C CNN
F 2 "Connector_USB:USB_A_Molex_67643_Horizontal" H 2650 1150 50  0001 C CNN
F 3 "" H 2650 1150 50  0001 C CNN
F 4 "538-67643-0910" H 2500 1200 50  0001 C CNN "Mouser Eletronics"
	1    2500 1200
	1    0    0    -1  
$EndComp
$Comp
L Regulator_Linear:MIC5504-3.3YM5 U2
U 1 1 606BCBAA
P 3900 1100
F 0 "U2" H 3900 1467 50  0000 C CNN
F 1 "AP7365-33WG-7" H 3900 1376 50  0000 C CNN
F 2 "Package_TO_SOT_SMD:SOT-23-5" H 3900 700 50  0001 C CNN
F 3 "" H 3650 1350 50  0001 C CNN
F 4 "621-AP7365-33WG-7" H 3900 1100 50  0001 C CNN "Mouser Eletronics"
	1    3900 1100
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR056
U 1 1 606D2BE1
P 4700 1000
F 0 "#PWR056" H 4700 850 50  0001 C CNN
F 1 "+3.3V" H 4715 1173 50  0000 C CNN
F 2 "" H 4700 1000 50  0001 C CNN
F 3 "" H 4700 1000 50  0001 C CNN
	1    4700 1000
	1    0    0    -1  
$EndComp
Wire Notes Line
	2200 1700 4900 1700
Wire Notes Line
	4900 1700 4900 650 
Wire Notes Line
	4900 650  2200 650 
Wire Notes Line
	2200 650  2200 1700
Text Notes 4700 1650 0    50   ~ 0
USB
Wire Notes Line
	2050 650  2050 1700
Wire Notes Line
	700  650  700  1700
$Comp
L Connector_Generic:Conn_01x06 STLINK2
U 1 1 6041D768
P 1150 1100
F 0 "STLINK2" H 1230 1092 50  0000 L CNN
F 1 "ST-Link V2 connetor" H 1230 1001 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x06_P2.54mm_Vertical" H 1150 1100 50  0001 C CNN
F 3 "~" H 1150 1100 50  0001 C CNN
F 4 "~" H 1150 1100 50  0001 C CNN "LCSC"
F 5 "~" H 1150 1100 50  0001 C CNN "Mouser Eletronics"
	1    1150 1100
	1    0    0    -1  
$EndComp
$Comp
L Device:C C4
U 1 1 6050645D
P 3250 1300
F 0 "C4" H 3365 1346 50  0000 L CNN
F 1 "1uF" H 3365 1255 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 3288 1150 50  0001 C CNN
F 3 "" H 3250 1300 50  0001 C CNN
F 4 "C15849" H 3250 1300 50  0001 C CNN "LCSC"
	1    3250 1300
	1    0    0    -1  
$EndComp
$Comp
L Device:C C5
U 1 1 6052A4A3
P 4350 1150
F 0 "C5" H 4465 1196 50  0000 L CNN
F 1 "1uF" H 4465 1105 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 4388 1000 50  0001 C CNN
F 3 "" H 4350 1150 50  0001 C CNN
F 4 "C15849" H 4350 1150 50  0001 C CNN "LCSC"
	1    4350 1150
	1    0    0    -1  
$EndComp
$Comp
L Device:C C7
U 1 1 603AC710
P 5750 1150
F 0 "C7" H 5865 1196 50  0000 L CNN
F 1 "100nF" H 5865 1105 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 5788 1000 50  0001 C CNN
F 3 "" H 5750 1150 50  0001 C CNN
F 4 "C14663" H 5750 1150 50  0001 C CNN "LCSC"
	1    5750 1150
	1    0    0    -1  
$EndComp
$Comp
L Device:C C8
U 1 1 603C910A
P 6200 1150
F 0 "C8" H 6315 1196 50  0000 L CNN
F 1 "4.7uF" H 6315 1105 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 6238 1000 50  0001 C CNN
F 3 "" H 6200 1150 50  0001 C CNN
F 4 "C19666" H 6200 1150 50  0001 C CNN "LCSC"
	1    6200 1150
	1    0    0    -1  
$EndComp
Wire Wire Line
	5300 1000 5750 1000
Connection ~ 5300 1000
Wire Wire Line
	5300 1300 5750 1300
Connection ~ 5300 1300
$Comp
L Device:C C9
U 1 1 603E53D0
P 4500 2300
F 0 "C9" H 4615 2346 50  0000 L CNN
F 1 "1uF" H 4615 2255 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 4538 2150 50  0001 C CNN
F 3 "" H 4500 2300 50  0001 C CNN
F 4 "C15849" H 4500 2300 50  0001 C CNN "LCSC"
	1    4500 2300
	1    0    0    -1  
$EndComp
Wire Wire Line
	4500 2150 4000 2150
Connection ~ 4000 2150
Wire Wire Line
	4500 2450 4000 2450
Connection ~ 4000 2450
$Comp
L Device:C C12
U 1 1 604078A1
P 5150 2300
F 0 "C12" H 5265 2346 50  0000 L CNN
F 1 "10nF" H 5265 2255 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 5188 2150 50  0001 C CNN
F 3 "" H 5150 2300 50  0001 C CNN
F 4 "C57112" H 5150 2300 50  0001 C CNN "LCSC"
	1    5150 2300
	1    0    0    -1  
$EndComp
$Comp
L Device:C C14
U 1 1 604078A7
P 5650 2300
F 0 "C14" H 5765 2346 50  0000 L CNN
F 1 "1uF" H 5765 2255 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 5688 2150 50  0001 C CNN
F 3 "" H 5650 2300 50  0001 C CNN
F 4 "C15849" H 5650 2300 50  0001 C CNN "LCSC"
	1    5650 2300
	1    0    0    -1  
$EndComp
Wire Wire Line
	5650 2450 5150 2450
Connection ~ 5150 2450
Wire Wire Line
	5650 2150 5150 2150
Connection ~ 5150 2150
$Comp
L power:GND #PWR032
U 1 1 6043168B
P 6300 2550
F 0 "#PWR032" H 6300 2300 50  0001 C CNN
F 1 "GND" H 6305 2377 50  0000 C CNN
F 2 "" H 6300 2550 50  0001 C CNN
F 3 "" H 6300 2550 50  0001 C CNN
	1    6300 2550
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR029
U 1 1 60431691
P 6300 2050
F 0 "#PWR029" H 6300 1900 50  0001 C CNN
F 1 "+3.3V" H 6315 2223 50  0000 C CNN
F 2 "" H 6300 2050 50  0001 C CNN
F 3 "" H 6300 2050 50  0001 C CNN
	1    6300 2050
	1    0    0    -1  
$EndComp
Wire Wire Line
	6300 2150 6300 2050
Wire Wire Line
	6300 2450 6300 2550
$Comp
L Device:C C16
U 1 1 60431699
P 6300 2300
F 0 "C16" H 6415 2346 50  0000 L CNN
F 1 "10nF" H 6415 2255 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 6338 2150 50  0001 C CNN
F 3 "" H 6300 2300 50  0001 C CNN
F 4 "C57112" H 6300 2300 50  0001 C CNN "LCSC"
	1    6300 2300
	1    0    0    -1  
$EndComp
$Comp
L Device:C C18
U 1 1 6043169F
P 6800 2300
F 0 "C18" H 6915 2346 50  0000 L CNN
F 1 "1uF" H 6915 2255 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 6838 2150 50  0001 C CNN
F 3 "" H 6800 2300 50  0001 C CNN
F 4 "C15849" H 6800 2300 50  0001 C CNN "LCSC"
	1    6800 2300
	1    0    0    -1  
$EndComp
Wire Wire Line
	6800 2450 6300 2450
Connection ~ 6300 2450
Wire Wire Line
	6800 2150 6300 2150
Connection ~ 6300 2150
$Comp
L Device:C C1
U 1 1 60440E0C
P 1150 2550
F 0 "C1" H 1265 2596 50  0000 L CNN
F 1 "100nF" H 1265 2505 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 1188 2400 50  0001 C CNN
F 3 "" H 1150 2550 50  0001 C CNN
F 4 "C14663" H 1150 2550 50  0001 C CNN "LCSC"
	1    1150 2550
	0    -1   -1   0   
$EndComp
Text Notes 6800 2900 0    50   ~ 0
VDDSD
Wire Notes Line
	6100 2950 7100 2950
Text Notes 4400 2900 0    50   ~ 0
VREFSD+
Text Notes 5450 2900 0    50   ~ 0
VDDA-VSSA
Wire Notes Line
	4950 2950 5950 2950
Wire Notes Line
	3800 2950 4800 2950
Wire Notes Line
	7100 1800 7100 2950
Wire Notes Line
	6100 1800 6100 2950
Wire Notes Line
	5950 1800 5950 2950
Wire Notes Line
	4950 1800 4950 2950
Wire Notes Line
	4800 1800 4800 2950
Wire Notes Line
	3800 1800 3800 2950
$Comp
L Device:C C11
U 1 1 604C369E
P 6650 1150
F 0 "C11" H 6765 1196 50  0000 L CNN
F 1 "100nF" H 6765 1105 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 6688 1000 50  0001 C CNN
F 3 "" H 6650 1150 50  0001 C CNN
F 4 "C14663" H 6650 1150 50  0001 C CNN "LCSC"
	1    6650 1150
	1    0    0    -1  
$EndComp
$Comp
L Device:C C13
U 1 1 604C36A4
P 7100 1150
F 0 "C13" H 7215 1196 50  0000 L CNN
F 1 "100nF" H 7215 1105 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 7138 1000 50  0001 C CNN
F 3 "" H 7100 1150 50  0001 C CNN
F 4 "C14663" H 7100 1150 50  0001 C CNN "LCSC"
	1    7100 1150
	1    0    0    -1  
$EndComp
$Comp
L Device:C C15
U 1 1 604C36AA
P 7550 1150
F 0 "C15" H 7665 1196 50  0000 L CNN
F 1 "4.7uF" H 7665 1105 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 7588 1000 50  0001 C CNN
F 3 "" H 7550 1150 50  0001 C CNN
F 4 "C19666" H 7550 1150 50  0001 C CNN "LCSC"
	1    7550 1150
	1    0    0    -1  
$EndComp
Wire Notes Line
	9250 1700 9250 650 
Text Notes 10750 1650 0    50   ~ 0
GND holes
$Sheet
S 1750 6650 1000 900 
U 5FB17A23
F0 "INPUT" 50
F1 "INPUT.sch" 50
F2 "PF10" I R 2750 6750 50 
F3 "PE3" I R 2750 7350 50 
F4 "PC13" I R 2750 6950 50 
F5 "PE2" I R 2750 7450 50 
F6 "PE5" I R 2750 7150 50 
F7 "PE4" I R 2750 7250 50 
F8 "PF9" I R 2750 6850 50 
F9 "DI5" I L 1750 6950 50 
F10 "DI1" I L 1750 7350 50 
F11 "DI7" I L 1750 6750 50 
F12 "DI4" I L 1750 7050 50 
F13 "DI2" I L 1750 7250 50 
F14 "DI6" I L 1750 6850 50 
F15 "DI3" I L 1750 7150 50 
F16 "DI0" I L 1750 7450 50 
F17 "PE6" I R 2750 7050 50 
$EndSheet
Wire Wire Line
	4300 1000 4350 1000
$Comp
L power:GND #PWR0102
U 1 1 60A13A1A
P 4350 1300
F 0 "#PWR0102" H 4350 1050 50  0001 C CNN
F 1 "GND" H 4355 1127 50  0000 C CNN
F 2 "" H 4350 1300 50  0001 C CNN
F 3 "" H 4350 1300 50  0001 C CNN
	1    4350 1300
	1    0    0    -1  
$EndComp
Wire Wire Line
	2500 1600 2400 1600
$Comp
L Device:R R44
U 1 1 60A83265
P 4350 850
F 0 "R44" H 4420 896 50  0000 L CNN
F 1 "1.5k" H 4420 805 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 4280 850 50  0001 C CNN
F 3 "" H 4350 850 50  0001 C CNN
F 4 "C22843" H 4350 850 50  0001 C CNN "LCSC"
	1    4350 850 
	1    0    0    -1  
$EndComp
Connection ~ 4350 1000
$Comp
L Mechanical:MountingHole_Pad H6
U 1 1 6047A379
P 9400 1350
F 0 "H6" H 9500 1399 50  0000 L CNN
F 1 "MountingHole_Pad" H 9500 1308 50  0000 L CNN
F 2 "MountingHole:MountingHole_2.7mm_M2.5_DIN965_Pad" H 9400 1350 50  0001 C CNN
F 3 "" H 9400 1350 50  0001 C CNN
F 4 "~" H 9400 1350 50  0001 C CNN "LCSC"
F 5 "~" H 9400 1350 50  0001 C CNN "Mouser Eletronics"
	1    9400 1350
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR064
U 1 1 6047A37F
P 9400 1450
F 0 "#PWR064" H 9400 1200 50  0001 C CNN
F 1 "GND" H 9405 1277 50  0000 C CNN
F 2 "" H 9400 1450 50  0001 C CNN
F 3 "" H 9400 1450 50  0001 C CNN
	1    9400 1450
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole_Pad H7
U 1 1 6047A385
P 10350 1350
F 0 "H7" H 10450 1399 50  0000 L CNN
F 1 "MountingHole_Pad" H 10450 1308 50  0000 L CNN
F 2 "MountingHole:MountingHole_2.7mm_M2.5_DIN965_Pad" H 10350 1350 50  0001 C CNN
F 3 "" H 10350 1350 50  0001 C CNN
F 4 "~" H 10350 1350 50  0001 C CNN "LCSC"
F 5 "~" H 10350 1350 50  0001 C CNN "Mouser Eletronics"
	1    10350 1350
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR067
U 1 1 6047A38B
P 10350 1450
F 0 "#PWR067" H 10350 1200 50  0001 C CNN
F 1 "GND" H 10355 1277 50  0000 C CNN
F 2 "" H 10350 1450 50  0001 C CNN
F 3 "" H 10350 1450 50  0001 C CNN
	1    10350 1450
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole_Pad H5
U 1 1 60481CD0
P 9400 800
F 0 "H5" H 9500 849 50  0000 L CNN
F 1 "MountingHole_Pad" H 9500 758 50  0000 L CNN
F 2 "MountingHole:MountingHole_2.7mm_M2.5_DIN965_Pad" H 9400 800 50  0001 C CNN
F 3 "" H 9400 800 50  0001 C CNN
F 4 "~" H 9400 800 50  0001 C CNN "LCSC"
F 5 "~" H 9400 800 50  0001 C CNN "Mouser Eletronics"
	1    9400 800 
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR018
U 1 1 60481CD6
P 9400 900
F 0 "#PWR018" H 9400 650 50  0001 C CNN
F 1 "GND" H 9405 727 50  0000 C CNN
F 2 "" H 9400 900 50  0001 C CNN
F 3 "" H 9400 900 50  0001 C CNN
	1    9400 900 
	1    0    0    -1  
$EndComp
Wire Wire Line
	1500 5050 1500 5300
Wire Notes Line
	10000 1800 9000 1800
$Comp
L power:GND #PWR070
U 1 1 60667764
P 9200 2550
F 0 "#PWR070" H 9200 2300 50  0001 C CNN
F 1 "GND" H 9205 2377 50  0000 C CNN
F 2 "" H 9200 2550 50  0001 C CNN
F 3 "" H 9200 2550 50  0001 C CNN
	1    9200 2550
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR069
U 1 1 6066776A
P 9200 2050
F 0 "#PWR069" H 9200 1900 50  0001 C CNN
F 1 "+3.3V" H 9215 2223 50  0000 C CNN
F 2 "" H 9200 2050 50  0001 C CNN
F 3 "" H 9200 2050 50  0001 C CNN
	1    9200 2050
	1    0    0    -1  
$EndComp
Wire Wire Line
	9200 2150 9200 2050
Wire Wire Line
	9200 2450 9200 2550
$Comp
L Device:C C17
U 1 1 60667772
P 9200 2300
F 0 "C17" H 9315 2346 50  0000 L CNN
F 1 "10nF" H 9315 2255 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 9238 2150 50  0001 C CNN
F 3 "" H 9200 2300 50  0001 C CNN
F 4 "C57112" H 9200 2300 50  0001 C CNN "LCSC"
	1    9200 2300
	1    0    0    -1  
$EndComp
$Comp
L Device:C C19
U 1 1 60667778
P 9700 2300
F 0 "C19" H 9815 2346 50  0000 L CNN
F 1 "1uF" H 9815 2255 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 9738 2150 50  0001 C CNN
F 3 "" H 9700 2300 50  0001 C CNN
F 4 "C15849" H 9700 2300 50  0001 C CNN "LCSC"
	1    9700 2300
	1    0    0    -1  
$EndComp
Wire Wire Line
	9700 2450 9200 2450
Connection ~ 9200 2450
Wire Wire Line
	9700 2150 9200 2150
Connection ~ 9200 2150
Text Notes 9750 2900 0    50   ~ 0
VREF+
Wire Notes Line
	9000 2950 10000 2950
Wire Notes Line
	9300 650  11200 650 
Wire Notes Line
	11200 1700 9300 1700
Connection ~ 5750 1000
Connection ~ 5750 1300
Wire Wire Line
	5750 1300 6200 1300
Wire Wire Line
	5750 1000 6200 1000
Connection ~ 6200 1000
Connection ~ 6200 1300
Wire Wire Line
	6200 1000 6650 1000
Wire Wire Line
	6200 1300 6650 1300
Connection ~ 6650 1000
Connection ~ 6650 1300
Wire Wire Line
	6650 1000 7100 1000
Wire Wire Line
	6650 1300 7100 1300
Connection ~ 7100 1000
Connection ~ 7100 1300
Wire Wire Line
	7100 1000 7550 1000
Wire Wire Line
	7100 1300 7550 1300
$Sheet
S 3150 5900 1150 850 
U 5FB18307
F0 "Digital" 50
F1 "Digital.sch" 50
F2 "PC0" I R 4300 6650 50 
F3 "PC1" I R 4300 6550 50 
F4 "PC2" I R 4300 6450 50 
F5 "PC3" I R 4300 6350 50 
F6 "PA0" I R 4300 6250 50 
F7 "PA1" I R 4300 6150 50 
F8 "PA2" I R 4300 6050 50 
F9 "PA3" I R 4300 5950 50 
F10 "P0" I L 3150 6650 50 
F11 "P1" I L 3150 6550 50 
F12 "P3" I L 3150 6350 50 
F13 "P2" I L 3150 6450 50 
F14 "P4" I L 3150 6250 50 
F15 "P5" I L 3150 6150 50 
F16 "P6" I L 3150 6050 50 
F17 "P7" I L 3150 5950 50 
$EndSheet
Wire Notes Line
	11200 650  11200 1700
Wire Notes Line
	9300 650  9300 1700
Wire Wire Line
	2400 2150 2400 2400
Wire Wire Line
	2400 2400 2150 2400
Connection ~ 2400 2400
$Comp
L power:GND #PWR017
U 1 1 60526D0B
P 7350 2400
F 0 "#PWR017" H 7350 2150 50  0001 C CNN
F 1 "GND" H 7355 2227 50  0000 C CNN
F 2 "" H 7350 2400 50  0001 C CNN
F 3 "" H 7350 2400 50  0001 C CNN
	1    7350 2400
	1    0    0    -1  
$EndComp
Wire Notes Line
	7250 2950 7250 1800
Wire Notes Line
	8900 1800 8900 2950
Text Notes 8400 2900 0    50   ~ 0
LSE Crystal
Wire Wire Line
	7900 2650 8150 2650
$Comp
L Device:C C27
U 1 1 60526D17
P 7750 2650
F 0 "C27" V 8002 2650 50  0000 C CNN
F 1 "15pF" V 7911 2650 50  0000 C CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 7788 2500 50  0001 C CNN
F 3 "" H 7750 2650 50  0001 C CNN
F 4 "C1644" H 7750 2650 50  0001 C CNN "LCSC"
	1    7750 2650
	0    -1   -1   0   
$EndComp
Wire Wire Line
	7900 2150 8150 2150
Wire Wire Line
	7600 2150 7600 2400
Wire Wire Line
	7600 2400 7350 2400
Wire Wire Line
	7600 2650 7600 2400
Connection ~ 7600 2400
Wire Wire Line
	8150 2550 8150 2650
Wire Wire Line
	8150 2250 8150 2150
Wire Notes Line
	7250 2950 8900 2950
Wire Notes Line
	7250 1800 8900 1800
$Comp
L Mechanical:MountingHole_Pad H1
U 1 1 60578FE4
P 10350 800
F 0 "H1" H 10450 849 50  0000 L CNN
F 1 "MountingHole_Pad" H 10450 758 50  0000 L CNN
F 2 "MountingHole:MountingHole_2.7mm_M2.5_DIN965_Pad" H 10350 800 50  0001 C CNN
F 3 "" H 10350 800 50  0001 C CNN
F 4 "~" H 10350 800 50  0001 C CNN "LCSC"
F 5 "~" H 10350 800 50  0001 C CNN "Mouser Eletronics"
	1    10350 800 
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR025
U 1 1 60578FEA
P 10350 900
F 0 "#PWR025" H 10350 650 50  0001 C CNN
F 1 "GND" H 10355 727 50  0000 C CNN
F 2 "" H 10350 900 50  0001 C CNN
F 3 "" H 10350 900 50  0001 C CNN
	1    10350 900 
	1    0    0    -1  
$EndComp
$Comp
L Device:C C20
U 1 1 605A897E
P 7750 2150
F 0 "C20" V 8002 2150 50  0000 C CNN
F 1 "15pF" V 7911 2150 50  0000 C CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 7788 2000 50  0001 C CNN
F 3 "" H 7750 2150 50  0001 C CNN
F 4 "C1644" H 7750 2150 50  0001 C CNN "LCSC"
	1    7750 2150
	0    -1   -1   0   
$EndComp
$Sheet
S 9950 5300 600  350 
U 6089DCA3
F0 "CAN" 50
F1 "CAN.sch" 50
F2 "PD1" I R 10550 5450 50 
F3 "PD0" I R 10550 5550 50 
F4 "CAN-" I L 9950 5550 50 
F5 "CAN+" I L 9950 5450 50 
$EndSheet
$Comp
L Device:Battery_Cell BT1
U 1 1 605DD91B
P 700 5600
F 0 "BT1" H 818 5696 50  0000 L CNN
F 1 "Battery_Cell" H 818 5605 50  0000 L CNN
F 2 "Battery:BatteryHolder_Keystone_3002_1x2032" V 700 5660 50  0001 C CNN
F 3 "" V 700 5660 50  0001 C CNN
F 4 "534-3002TR" H 700 5600 50  0001 C CNN "Mouser Eletronics"
	1    700  5600
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR082
U 1 1 606344A4
P 6050 5300
F 0 "#PWR082" H 6050 5050 50  0001 C CNN
F 1 "GND" H 6055 5127 50  0000 C CNN
F 2 "" H 6050 5300 50  0001 C CNN
F 3 "" H 6050 5300 50  0001 C CNN
	1    6050 5300
	1    0    0    -1  
$EndComp
Wire Wire Line
	6050 5300 6500 5300
Wire Notes Line
	5950 6400 7550 6400
Wire Notes Line
	7550 4500 5950 4500
Wire Wire Line
	700  4350 700  5400
Wire Wire Line
	700  5700 700  5900
Wire Wire Line
	700  5900 900  5900
$Comp
L power:GND #PWR0101
U 1 1 60460057
P 900 5900
F 0 "#PWR0101" H 900 5650 50  0001 C CNN
F 1 "GND" H 905 5727 50  0000 C CNN
F 2 "" H 900 5900 50  0001 C CNN
F 3 "" H 900 5900 50  0001 C CNN
	1    900  5900
	0    -1   -1   0   
$EndComp
$Comp
L Device:Crystal Y2
U 1 1 60526D23
P 8150 2400
F 0 "Y2" V 8104 2531 50  0000 L CNN
F 1 "32.768 kHz" H 8195 2531 50  0000 L CNN
F 2 "Crystal:Crystal_SMD_2012-2Pin_2.0x1.2mm_HandSoldering" H 8150 2400 50  0001 C CNN
F 3 "" H 8150 2400 50  0001 C CNN
F 4 "732-FC-12M32.768KAA5" H 8150 2400 50  0001 C CNN "Mouser Eletronics"
	1    8150 2400
	0    -1   -1   0   
$EndComp
Text GLabel 1000 5050 3    50   Input ~ 0
NRST
Text GLabel 1500 2150 2    50   Input ~ 0
NRST
Wire Wire Line
	6100 6050 6100 5950
Wire Wire Line
	6100 6050 6500 6050
$Comp
L power:+3.3V #PWR0108
U 1 1 60895673
P 6100 5950
F 0 "#PWR0108" H 6100 5800 50  0001 C CNN
F 1 "+3.3V" H 6115 6123 50  0000 C CNN
F 2 "" H 6100 5950 50  0001 C CNN
F 3 "" H 6100 5950 50  0001 C CNN
	1    6100 5950
	1    0    0    -1  
$EndComp
Text Notes 7250 6350 0    50   ~ 0
2 x SPI
$Comp
L Device:C C3
U 1 1 608C1826
P 2550 2750
F 0 "C3" V 2802 2750 50  0000 C CNN
F 1 "15pF" V 2711 2750 50  0000 C CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 2588 2600 50  0001 C CNN
F 3 "" H 2550 2750 50  0001 C CNN
F 4 "C1644" H 2550 2750 50  0001 C CNN "LCSC"
	1    2550 2750
	0    -1   -1   0   
$EndComp
$Comp
L Device:C C2
U 1 1 608C182C
P 2550 2150
F 0 "C2" V 2802 2150 50  0000 C CNN
F 1 "15pF" V 2711 2150 50  0000 C CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 2588 2000 50  0001 C CNN
F 3 "" H 2550 2150 50  0001 C CNN
F 4 "C1644" H 2550 2150 50  0001 C CNN "LCSC"
	1    2550 2150
	0    -1   -1   0   
$EndComp
Wire Notes Line
	2050 2950 3750 2950
Wire Notes Line
	2050 1800 3750 1800
$Comp
L Device:C C26
U 1 1 608CE0CB
P 8000 1150
F 0 "C26" H 8115 1196 50  0000 L CNN
F 1 "100nF" H 8115 1105 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 8038 1000 50  0001 C CNN
F 3 "" H 8000 1150 50  0001 C CNN
F 4 "C14663" H 8000 1150 50  0001 C CNN "LCSC"
	1    8000 1150
	1    0    0    -1  
$EndComp
$Comp
L Device:C C29
U 1 1 608CE0D1
P 8450 1150
F 0 "C29" H 8565 1196 50  0000 L CNN
F 1 "100nF" H 8565 1105 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 8488 1000 50  0001 C CNN
F 3 "" H 8450 1150 50  0001 C CNN
F 4 "C14663" H 8450 1150 50  0001 C CNN "LCSC"
	1    8450 1150
	1    0    0    -1  
$EndComp
$Comp
L Device:C C30
U 1 1 608CE0D7
P 8900 1150
F 0 "C30" H 9015 1196 50  0000 L CNN
F 1 "4.7uF" H 9015 1105 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 8938 1000 50  0001 C CNN
F 3 "" H 8900 1150 50  0001 C CNN
F 4 "C19666" H 8900 1150 50  0001 C CNN "LCSC"
	1    8900 1150
	1    0    0    -1  
$EndComp
Wire Notes Line
	10000 1800 10000 2950
Wire Notes Line
	9000 1800 9000 2950
Wire Notes Line
	5050 1700 9250 1700
Wire Notes Line
	5050 650  9250 650 
Wire Wire Line
	7550 1000 8000 1000
Connection ~ 7550 1000
Wire Wire Line
	7550 1300 8000 1300
Connection ~ 7550 1300
Wire Wire Line
	8000 1000 8450 1000
Connection ~ 8000 1000
Wire Wire Line
	8450 1300 8000 1300
Connection ~ 8000 1300
Wire Wire Line
	8450 1000 8900 1000
Connection ~ 8450 1000
Wire Wire Line
	8900 1300 8450 1300
Connection ~ 8450 1300
$Comp
L Connector:Screw_Terminal_01x10 J15
U 1 1 608C531C
P 4950 7150
F 0 "J15" H 5030 7142 50  0000 L CNN
F 1 "Screw_Terminal_01x10" H 5030 7051 50  0000 L CNN
F 2 "TerminalBlock_Phoenix:TerminalBlock_Phoenix_PT-1,5-10-5.0-H_1x10_P5.00mm_Horizontal" H 4950 7150 50  0001 C CNN
F 3 "" H 4950 7150 50  0001 C CNN
F 4 "490-TB002-500-10BE" H 4950 7150 50  0001 C CNN "Mouser Eletronics"
	1    4950 7150
	-1   0    0    1   
$EndComp
$Comp
L Connector:Screw_Terminal_01x10 J8
U 1 1 608CF6C5
P 8500 5950
F 0 "J8" H 8580 5942 50  0000 L CNN
F 1 "Screw_Terminal_01x10" H 8580 5851 50  0000 L CNN
F 2 "TerminalBlock_Phoenix:TerminalBlock_Phoenix_PT-1,5-10-5.0-H_1x10_P5.00mm_Horizontal" H 8500 5950 50  0001 C CNN
F 3 "" H 8500 5950 50  0001 C CNN
F 4 "490-TB002-500-10BE" H 8500 5950 50  0001 C CNN "Mouser Eletronics"
	1    8500 5950
	-1   0    0    1   
$EndComp
$Comp
L Connector:Screw_Terminal_01x16 J14
U 1 1 608CF6CB
P 7700 3900
F 0 "J14" H 7780 3892 50  0000 L CNN
F 1 "Screw_Terminal_01x16" H 7780 3801 50  0000 L CNN
F 2 "TerminalBlock_Phoenix:TerminalBlock_Phoenix_PT-1,5-16-5.0-H_1x16_P5.00mm_Horizontal" H 7700 3900 50  0001 C CNN
F 3 "" H 7700 3900 50  0001 C CNN
F 4 "490-TB003-500-P16BE" H 7700 3900 50  0001 C CNN "Mouser Eletronics"
	1    7700 3900
	-1   0    0    1   
$EndComp
Wire Wire Line
	8100 4600 7900 4600
Wire Wire Line
	7900 4500 8100 4500
Wire Wire Line
	8100 4400 7900 4400
Wire Wire Line
	7900 4300 8100 4300
Wire Wire Line
	7900 3100 9500 3100
Wire Wire Line
	9500 3200 7900 3200
Wire Wire Line
	7900 3300 9500 3300
Wire Wire Line
	9500 3400 7900 3400
Wire Wire Line
	7900 3500 9500 3500
Wire Wire Line
	9500 3600 7900 3600
Wire Wire Line
	7900 3700 9500 3700
Wire Wire Line
	9500 3800 7900 3800
Wire Wire Line
	7900 3900 9500 3900
Wire Wire Line
	9500 4000 7900 4000
Wire Wire Line
	7900 4100 9500 4100
Wire Wire Line
	9500 4200 9200 4200
Wire Wire Line
	9200 4200 9200 4150
Wire Wire Line
	9200 4150 8050 4150
Wire Wire Line
	8050 4150 8050 4200
Wire Wire Line
	8050 4200 7900 4200
Text GLabel 2800 1300 2    50   Input ~ 0
USB-
Text GLabel 2800 1200 2    50   Input ~ 0
USB+
Wire Wire Line
	4350 1000 4700 1000
$Comp
L power:GND #PWR0103
U 1 1 60A00693
P 3900 1400
F 0 "#PWR0103" H 3900 1150 50  0001 C CNN
F 1 "GND" H 3905 1227 50  0000 C CNN
F 2 "" H 3900 1400 50  0001 C CNN
F 3 "" H 3900 1400 50  0001 C CNN
	1    3900 1400
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0106
U 1 1 60A11F2F
P 2900 1450
F 0 "#PWR0106" H 2900 1200 50  0001 C CNN
F 1 "GND" H 2905 1277 50  0000 C CNN
F 2 "" H 2900 1450 50  0001 C CNN
F 3 "" H 2900 1450 50  0001 C CNN
	1    2900 1450
	1    0    0    -1  
$EndComp
Wire Wire Line
	2500 1600 2750 1600
Wire Wire Line
	2750 1600 2750 1450
Wire Wire Line
	2750 1450 2900 1450
Connection ~ 2500 1600
Wire Wire Line
	3500 1200 3500 1150
$Comp
L power:GND #PWR0111
U 1 1 60A4605E
P 3250 1450
F 0 "#PWR0111" H 3250 1200 50  0001 C CNN
F 1 "GND" H 3255 1277 50  0000 C CNN
F 2 "" H 3250 1450 50  0001 C CNN
F 3 "" H 3250 1450 50  0001 C CNN
	1    3250 1450
	1    0    0    -1  
$EndComp
Wire Wire Line
	3250 1150 3500 1150
Connection ~ 3500 1150
Wire Wire Line
	3500 1150 3500 1000
$Comp
L power:+5V #PWR0117
U 1 1 60A8C8E9
P 3100 1000
F 0 "#PWR0117" H 3100 850 50  0001 C CNN
F 1 "+5V" H 3115 1173 50  0000 C CNN
F 2 "" H 3100 1000 50  0001 C CNN
F 3 "" H 3100 1000 50  0001 C CNN
	1    3100 1000
	1    0    0    -1  
$EndComp
Wire Wire Line
	2800 1000 3100 1000
Connection ~ 3500 1000
Connection ~ 3100 1000
Wire Wire Line
	3100 1000 3500 1000
Wire Wire Line
	3500 700  4350 700 
Text GLabel 2800 5050 3    50   Input ~ 0
PE2
Text GLabel 2900 5050 3    50   Input ~ 0
PE3
Text GLabel 3000 5050 3    50   Input ~ 0
PE4
Text GLabel 3100 5050 3    50   Input ~ 0
PE5
Text GLabel 3200 5050 3    50   Input ~ 0
PE6
Text GLabel 5600 3250 1    50   Input ~ 0
PC13
Text GLabel 2300 5050 3    50   Input ~ 0
PF9
Text GLabel 2400 5050 3    50   Input ~ 0
PF10
Text GLabel 2800 7450 2    50   Input ~ 0
PE2
Text GLabel 2800 7350 2    50   Input ~ 0
PE3
Text GLabel 2800 7250 2    50   Input ~ 0
PE4
Text GLabel 2800 7150 2    50   Input ~ 0
PE5
Text GLabel 2800 7050 2    50   Input ~ 0
PE6
Wire Wire Line
	2800 7050 2750 7050
Wire Wire Line
	2800 7150 2750 7150
Wire Wire Line
	2800 7250 2750 7250
Wire Wire Line
	2800 7350 2750 7350
Wire Wire Line
	2800 7450 2750 7450
Text GLabel 2800 6850 2    50   Input ~ 0
PF9
Text GLabel 2800 6750 2    50   Input ~ 0
PF10
Wire Wire Line
	2800 6750 2750 6750
Wire Wire Line
	2750 6850 2800 6850
Text GLabel 2800 6950 2    50   Input ~ 0
PC13
Wire Wire Line
	2800 6950 2750 6950
$Comp
L Connector:Screw_Terminal_01x16 J16
U 1 1 608C7AA0
P 1450 6750
F 0 "J16" H 1530 6742 50  0000 L CNN
F 1 "Screw_Terminal_01x16" H 1530 6651 50  0000 L CNN
F 2 "TerminalBlock_Phoenix:TerminalBlock_Phoenix_PT-1,5-16-5.0-H_1x16_P5.00mm_Horizontal" H 1450 6750 50  0001 C CNN
F 3 "" H 1450 6750 50  0001 C CNN
F 4 "490-TB003-500-P16BE" H 1450 6750 50  0001 C CNN "Mouser Eletronics"
	1    1450 6750
	-1   0    0    1   
$EndComp
Wire Wire Line
	1650 7450 1750 7450
Wire Wire Line
	1650 7350 1750 7350
Wire Wire Line
	1650 7250 1750 7250
Wire Wire Line
	1650 7150 1750 7150
Wire Wire Line
	1650 7050 1750 7050
Wire Wire Line
	1650 6950 1750 6950
Wire Wire Line
	1650 6850 1750 6850
Wire Wire Line
	1650 6750 1750 6750
Wire Wire Line
	3150 6650 2800 6650
Wire Wire Line
	2800 6650 2800 6600
Wire Wire Line
	2800 6600 1700 6600
Wire Wire Line
	1700 6600 1700 6650
Wire Wire Line
	1700 6650 1650 6650
Wire Wire Line
	1650 6550 3150 6550
Wire Wire Line
	3150 6450 1650 6450
Wire Wire Line
	1650 6350 3150 6350
Wire Wire Line
	3150 6250 1650 6250
Wire Wire Line
	1650 6150 3150 6150
Wire Wire Line
	3150 6050 1650 6050
Wire Wire Line
	1650 5950 3150 5950
Text GLabel 4350 6650 2    50   Input ~ 0
PC0
Text GLabel 4350 6550 2    50   Input ~ 0
PC1
Text GLabel 4350 6450 2    50   Input ~ 0
PC2
Text GLabel 4350 6350 2    50   Input ~ 0
PC3
Text GLabel 4350 6250 2    50   Input ~ 0
PA0
Text GLabel 4350 6150 2    50   Input ~ 0
PA1
Text GLabel 4350 6050 2    50   Input ~ 0
PA2
Text GLabel 4350 5950 2    50   Input ~ 0
PA3
Text GLabel 4300 3250 1    50   Input ~ 0
PC0
Text GLabel 4400 3250 1    50   Input ~ 0
PC1
Text GLabel 4500 3250 1    50   Input ~ 0
PC2
Text GLabel 4600 3250 1    50   Input ~ 0
PC3
Text GLabel 1200 3250 1    50   Input ~ 0
PA0
Text GLabel 1300 3250 1    50   Input ~ 0
PA1
Text GLabel 1400 3250 1    50   Input ~ 0
PA2
Text GLabel 1500 3250 1    50   Input ~ 0
PA3
Wire Wire Line
	4300 5950 4350 5950
Wire Wire Line
	4350 6050 4300 6050
Wire Wire Line
	4300 6150 4350 6150
Wire Wire Line
	4350 6250 4300 6250
Wire Wire Line
	4300 6350 4350 6350
Wire Wire Line
	4300 6450 4350 6450
Wire Wire Line
	4350 6550 4300 6550
Wire Wire Line
	4300 6650 4350 6650
Text GLabel 1600 3250 1    50   Input ~ 0
PA4
Text GLabel 1700 3250 1    50   Input ~ 0
PA5
Text GLabel 1800 3250 1    50   Input ~ 0
PA6
Text GLabel 9200 4500 2    50   Input ~ 0
PA4
Text GLabel 9200 4400 2    50   Input ~ 0
PA5
Text GLabel 9200 4300 2    50   Input ~ 0
PA6
Wire Wire Line
	9150 4500 9200 4500
Wire Wire Line
	9200 4400 9150 4400
Wire Wire Line
	9150 4300 9200 4300
$Sheet
S 8100 4200 1050 450 
U 5FAFDC1C
F0 "DAC" 50
F1 "DAC.sch" 50
F2 "PA5" I R 9150 4400 50 
F3 "PA4" I R 9150 4500 50 
F4 "PA6" I R 9150 4300 50 
F5 "VDC" I L 8100 4600 50 
F6 "AO1" I L 8100 4400 50 
F7 "AO2" I L 8100 4300 50 
F8 "AO0" I L 8100 4500 50 
$EndSheet
$Sheet
S 9500 3050 1100 1200
U 5FC2CC0E
F0 "SDADC" 50
F1 "SDADC.sch" 50
F2 "AI3" I L 9500 3900 50 
F3 "AI2" I L 9500 4000 50 
F4 "AI0" I L 9500 4200 50 
F5 "AI1" I L 9500 4100 50 
F6 "AI7" I L 9500 3500 50 
F7 "AI6" I L 9500 3600 50 
F8 "AI4" I L 9500 3800 50 
F9 "AI5" I L 9500 3700 50 
F10 "AI11" I L 9500 3100 50 
F11 "AI10" I L 9500 3200 50 
F12 "AI8" I L 9500 3400 50 
F13 "AI9" I L 9500 3300 50 
F14 "PB1" I R 10600 4100 50 
F15 "PB0" I R 10600 4200 50 
F16 "PB2" I R 10600 4000 50 
F17 "PE7" I R 10600 3900 50 
F18 "PE9" I R 10600 3700 50 
F19 "PE8" I R 10600 3800 50 
F20 "PE10" I R 10600 3600 50 
F21 "PE11" I R 10600 3500 50 
F22 "PE13" I R 10600 3300 50 
F23 "PE12" I R 10600 3400 50 
F24 "PE14" I R 10600 3200 50 
F25 "PE15" I R 10600 3100 50 
$EndSheet
Text GLabel 3000 3250 1    50   Input ~ 0
PB1
Text GLabel 2900 3250 1    50   Input ~ 0
PB0
Text GLabel 3100 3250 1    50   Input ~ 0
PB2
Text GLabel 10650 4100 2    50   Input ~ 0
PB1
Text GLabel 10650 4200 2    50   Input ~ 0
PB0
Text GLabel 10650 4000 2    50   Input ~ 0
PB2
Text GLabel 3300 5050 3    50   Input ~ 0
PE7
Text GLabel 3400 5050 3    50   Input ~ 0
PE8
Text GLabel 3500 5050 3    50   Input ~ 0
PE9
Text GLabel 3600 5050 3    50   Input ~ 0
PE10
Text GLabel 3700 5050 3    50   Input ~ 0
PE11
Text GLabel 3800 5050 3    50   Input ~ 0
PE12
Text GLabel 3900 5050 3    50   Input ~ 0
PE13
Text GLabel 4000 5050 3    50   Input ~ 0
PE14
Text GLabel 4100 5050 3    50   Input ~ 0
PE15
Text GLabel 10650 3900 2    50   Input ~ 0
PE7
Text GLabel 10650 3800 2    50   Input ~ 0
PE8
Text GLabel 10650 3700 2    50   Input ~ 0
PE9
Text GLabel 10650 3600 2    50   Input ~ 0
PE10
Text GLabel 10650 3500 2    50   Input ~ 0
PE11
Text GLabel 10650 3400 2    50   Input ~ 0
PE12
Text GLabel 10650 3300 2    50   Input ~ 0
PE13
Text GLabel 10650 3200 2    50   Input ~ 0
PE14
Text GLabel 10650 3100 2    50   Input ~ 0
PE15
Wire Wire Line
	10650 3100 10600 3100
Wire Wire Line
	10600 3200 10650 3200
Wire Wire Line
	10650 3300 10600 3300
Wire Wire Line
	10600 3400 10650 3400
Wire Wire Line
	10650 3500 10600 3500
Wire Wire Line
	10600 3600 10650 3600
Wire Wire Line
	10650 3700 10600 3700
Wire Wire Line
	10600 3800 10650 3800
Wire Wire Line
	10650 3900 10600 3900
Wire Wire Line
	10600 4000 10650 4000
Wire Wire Line
	10650 4100 10600 4100
Wire Wire Line
	10600 4200 10650 4200
Wire Wire Line
	5150 6650 5200 6650
Wire Wire Line
	5200 6750 5150 6750
Wire Wire Line
	5150 6850 5200 6850
Wire Wire Line
	5200 6950 5150 6950
Wire Wire Line
	5150 7050 5200 7050
Wire Wire Line
	5200 7150 5150 7150
Wire Wire Line
	5150 7250 5200 7250
Wire Wire Line
	5200 7350 5150 7350
Wire Wire Line
	5150 7450 5200 7450
Wire Wire Line
	5200 7550 5150 7550
Wire Wire Line
	6250 6650 6300 6650
Wire Wire Line
	6250 6750 6300 6750
Wire Wire Line
	6250 6850 6300 6850
Wire Wire Line
	6250 6950 6300 6950
Wire Wire Line
	6250 7050 6300 7050
Wire Wire Line
	6250 7150 6300 7150
Wire Wire Line
	6250 7250 6300 7250
Wire Wire Line
	6250 7350 6300 7350
Wire Wire Line
	6250 7450 6300 7450
Wire Wire Line
	6250 7550 6300 7550
Text GLabel 6300 7550 2    50   Input ~ 0
PB15
Text GLabel 6300 7450 2    50   Input ~ 0
PB14
Text GLabel 6300 7350 2    50   Input ~ 0
PD8
Text GLabel 6300 7250 2    50   Input ~ 0
PD9
Text GLabel 6300 7150 2    50   Input ~ 0
PD10
Text GLabel 6300 7050 2    50   Input ~ 0
PD11
Text GLabel 6300 6950 2    50   Input ~ 0
PD12
Text GLabel 6300 6850 2    50   Input ~ 0
PD13
Text GLabel 6300 6750 2    50   Input ~ 0
PD14
Text GLabel 6300 6650 2    50   Input ~ 0
PD15
Text GLabel 4100 3250 1    50   Input ~ 0
PB15
Text GLabel 4000 3250 1    50   Input ~ 0
PB14
$Sheet
S 8800 5650 1050 750 
U 6061B541
F0 "Pulse" 50
F1 "Pulse.sch" 50
F2 "PC12" I R 9850 6350 50 
F3 "FI0" I L 8800 6150 50 
F4 "PB9" I R 9850 6050 50 
F5 "E1+" I L 8800 5950 50 
F6 "PC11" I R 9850 6250 50 
F7 "PC10" I R 9850 6150 50 
F8 "FI2" I L 8800 6350 50 
F9 "E0+" I L 8800 5750 50 
F10 "PB7" I R 9850 5850 50 
F11 "E1-" I L 8800 6050 50 
F12 "FI1" I L 8800 6250 50 
F13 "PB8" I R 9850 5950 50 
F14 "E0-" I L 8800 5850 50 
F15 "PB6" I R 9850 5750 50 
$EndSheet
Wire Wire Line
	8700 5650 8750 5650
Wire Wire Line
	8750 5650 8750 5550
Wire Wire Line
	8700 5750 8800 5750
Wire Wire Line
	8700 5850 8800 5850
Wire Wire Line
	8700 5950 8800 5950
Wire Wire Line
	8800 6050 8700 6050
Wire Wire Line
	8700 6150 8800 6150
Wire Wire Line
	8800 6250 8700 6250
Wire Wire Line
	8700 6350 8800 6350
Wire Wire Line
	8700 5550 8700 5500
Wire Wire Line
	8700 5500 9800 5500
Wire Wire Line
	9800 5500 9800 5450
$Comp
L power:GND #PWR0126
U 1 1 616C85F2
P 8900 5200
F 0 "#PWR0126" H 8900 4950 50  0001 C CNN
F 1 "GND" H 8905 5027 50  0000 C CNN
F 2 "" H 8900 5200 50  0001 C CNN
F 3 "" H 8900 5200 50  0001 C CNN
	1    8900 5200
	1    0    0    -1  
$EndComp
Wire Wire Line
	8700 5450 8700 5200
Wire Wire Line
	8700 5200 8900 5200
Text GLabel 10600 6250 2    50   Input ~ 0
PC11
Text GLabel 10600 6350 2    50   Input ~ 0
PC12
Text GLabel 10600 6150 2    50   Input ~ 0
PC10
Text GLabel 10600 6050 2    50   Input ~ 0
PB9
Text GLabel 10600 5950 2    50   Input ~ 0
PB8
Text GLabel 10600 5850 2    50   Input ~ 0
PB7
Text GLabel 10600 5750 2    50   Input ~ 0
PB6
Wire Wire Line
	9850 6350 10600 6350
Wire Wire Line
	9850 6250 10600 6250
Wire Wire Line
	9850 6150 10600 6150
Wire Wire Line
	9850 6050 10600 6050
Wire Wire Line
	9850 5950 10600 5950
Wire Wire Line
	9850 5850 10600 5850
Wire Wire Line
	9850 5750 10600 5750
Text GLabel 10600 5550 2    50   Input ~ 0
PD0
Text GLabel 10600 5450 2    50   Input ~ 0
PD1
Wire Wire Line
	10550 5450 10600 5450
Wire Wire Line
	10600 5550 10550 5550
Wire Wire Line
	9800 5450 9950 5450
Wire Wire Line
	8750 5550 9950 5550
Text GLabel 5400 3250 1    50   Input ~ 0
PC11
Text GLabel 5500 3250 1    50   Input ~ 0
PC12
Text GLabel 5300 3250 1    50   Input ~ 0
PC10
Text GLabel 3800 3250 1    50   Input ~ 0
PB9
Text GLabel 3700 3250 1    50   Input ~ 0
PB8
Text GLabel 3600 3250 1    50   Input ~ 0
PB7
Text GLabel 3500 3250 1    50   Input ~ 0
PB6
Text GLabel 4400 5050 3    50   Input ~ 0
PD1
Text GLabel 4300 5050 3    50   Input ~ 0
PD0
Text GLabel 5800 5050 3    50   Input ~ 0
PD15
Text GLabel 5700 5050 3    50   Input ~ 0
PD14
Text GLabel 5600 5050 3    50   Input ~ 0
PD13
Text GLabel 5500 5050 3    50   Input ~ 0
PD12
Text GLabel 5400 5050 3    50   Input ~ 0
PD11
Text GLabel 5300 5050 3    50   Input ~ 0
PD10
Text GLabel 5200 5050 3    50   Input ~ 0
PD9
Text GLabel 5100 5050 3    50   Input ~ 0
PD8
Wire Wire Line
	1400 5050 1500 5050
$Comp
L power:GND #PWR0112
U 1 1 61964C1D
P 1600 5050
F 0 "#PWR0112" H 1600 4800 50  0001 C CNN
F 1 "GND" H 1605 4877 50  0000 C CNN
F 2 "" H 1600 5050 50  0001 C CNN
F 3 "" H 1600 5050 50  0001 C CNN
	1    1600 5050
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR0164
U 1 1 61998A69
P 1350 5300
F 0 "#PWR0164" H 1350 5150 50  0001 C CNN
F 1 "+3.3V" H 1365 5473 50  0000 C CNN
F 2 "" H 1350 5300 50  0001 C CNN
F 3 "" H 1350 5300 50  0001 C CNN
	1    1350 5300
	1    0    0    -1  
$EndComp
Wire Wire Line
	1350 5300 1500 5300
$Comp
L power:GND #PWR0166
U 1 1 61A3BDF0
P 6100 4250
F 0 "#PWR0166" H 6100 4000 50  0001 C CNN
F 1 "GND" H 6105 4077 50  0000 C CNN
F 2 "" H 6100 4250 50  0001 C CNN
F 3 "" H 6100 4250 50  0001 C CNN
	1    6100 4250
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR0168
U 1 1 61ABE3F4
P 700 3350
F 0 "#PWR0168" H 700 3200 50  0001 C CNN
F 1 "+3.3V" H 715 3523 50  0000 C CNN
F 2 "" H 700 3350 50  0001 C CNN
F 3 "" H 700 3350 50  0001 C CNN
	1    700  3350
	1    0    0    -1  
$EndComp
$Comp
L Device:Crystal Y1
U 1 1 61B4A54D
P 2800 2400
F 0 "Y1" V 2754 2531 50  0000 L CNN
F 1 "HSE" V 2845 2531 50  0000 L CNN
F 2 "Crystal:Crystal_SMD_5032-2Pin_5.0x3.2mm_HandSoldering" H 2800 2400 50  0001 C CNN
F 3 "" H 2800 2400 50  0001 C CNN
F 4 "520-E80-12-30-JGN-TR" H 2800 2400 50  0001 C CNN "Mouser Eletronics"
	1    2800 2400
	0    1    1    0   
$EndComp
Text GLabel 3300 2150 2    50   Input ~ 0
PF0
Text GLabel 3300 2750 2    50   Input ~ 0
PF1
Text GLabel 1900 5050 3    50   Input ~ 0
PF1
Text GLabel 1800 5050 3    50   Input ~ 0
PF0
Wire Wire Line
	8150 2650 8400 2650
Connection ~ 8150 2650
Wire Wire Line
	8150 2150 8400 2150
Connection ~ 8150 2150
Text GLabel 8400 2150 2    50   Input ~ 0
PC14
Text GLabel 8400 2650 2    50   Input ~ 0
PC15
Text GLabel 5800 3250 1    50   Input ~ 0
PC15
Text GLabel 5700 3250 1    50   Input ~ 0
PC14
$Comp
L power:GND #PWR0170
U 1 1 61D43E11
P 1200 5050
F 0 "#PWR0170" H 1200 4800 50  0001 C CNN
F 1 "GND" H 1205 4877 50  0000 C CNN
F 2 "" H 1200 5050 50  0001 C CNN
F 3 "" H 1200 5050 50  0001 C CNN
	1    1200 5050
	1    0    0    -1  
$EndComp
Wire Wire Line
	2700 2150 2800 2150
Wire Wire Line
	2700 2750 2800 2750
Wire Wire Line
	2800 2250 2800 2150
Connection ~ 2800 2150
Wire Wire Line
	2800 2150 3300 2150
Connection ~ 2800 2750
Wire Wire Line
	2800 2750 3000 2750
Text GLabel 6500 5950 0    50   Input ~ 0
PA8
Text GLabel 6500 5850 0    50   Input ~ 0
PA9
Text GLabel 6500 5750 0    50   Input ~ 0
PA10
Text GLabel 2000 3250 1    50   Input ~ 0
PA8
Text GLabel 2100 3250 1    50   Input ~ 0
PA9
Text GLabel 2200 3250 1    50   Input ~ 0
PA10
$Comp
L Connector_Generic:Conn_01x08 SPI2
U 1 1 61E30E19
P 6700 5750
F 0 "SPI2" H 6780 5742 50  0000 L CNN
F 1 "Conn_01x08" H 6780 5651 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x08_P2.54mm_Vertical" H 6700 5750 50  0001 C CNN
F 3 "~" H 6700 5750 50  0001 C CNN
F 4 "~" H 6700 5750 50  0001 C CNN "LCSC"
F 5 "~" H 6700 5750 50  0001 C CNN "Mouser Eletronics"
	1    6700 5750
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x08 SPI1
U 1 1 61E8A5EB
P 6700 4900
F 0 "SPI1" H 6780 4892 50  0000 L CNN
F 1 "Conn_01x08" H 6780 4801 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x08_P2.54mm_Vertical" H 6700 4900 50  0001 C CNN
F 3 "~" H 6700 4900 50  0001 C CNN
F 4 "~" H 6700 4900 50  0001 C CNN "LCSC"
F 5 "~" H 6700 4900 50  0001 C CNN "Mouser Eletronics"
	1    6700 4900
	1    0    0    -1  
$EndComp
Wire Notes Line
	7550 4500 7550 6400
Wire Notes Line
	5950 4500 5950 6400
Wire Wire Line
	6100 5200 6100 5100
Wire Wire Line
	6100 5200 6500 5200
$Comp
L power:+3.3V #PWR0171
U 1 1 61EE2374
P 6100 5100
F 0 "#PWR0171" H 6100 4950 50  0001 C CNN
F 1 "+3.3V" H 6115 5273 50  0000 C CNN
F 2 "" H 6100 5100 50  0001 C CNN
F 3 "" H 6100 5100 50  0001 C CNN
	1    6100 5100
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0172
U 1 1 61F02C44
P 6050 6150
F 0 "#PWR0172" H 6050 5900 50  0001 C CNN
F 1 "GND" H 6055 5977 50  0000 C CNN
F 2 "" H 6050 6150 50  0001 C CNN
F 3 "" H 6050 6150 50  0001 C CNN
	1    6050 6150
	1    0    0    -1  
$EndComp
Wire Wire Line
	6050 6150 6500 6150
Text GLabel 6500 5650 0    50   Input ~ 0
PC6
Text GLabel 6500 5550 0    50   Input ~ 0
PF6
Text GLabel 6500 5450 0    50   Input ~ 0
PA15
Text GLabel 4900 3250 1    50   Input ~ 0
PC6
Text GLabel 2200 5050 3    50   Input ~ 0
PF6
Text GLabel 2700 3250 1    50   Input ~ 0
PA15
Text GLabel 6500 5100 0    50   Input ~ 0
PC7
Text GLabel 6500 5000 0    50   Input ~ 0
PC8
Text GLabel 6500 4900 0    50   Input ~ 0
PC9
Text GLabel 6500 4800 0    50   Input ~ 0
PD2
Text GLabel 6500 4700 0    50   Input ~ 0
PD3
Text GLabel 6500 4600 0    50   Input ~ 0
PD4
Text GLabel 5000 3250 1    50   Input ~ 0
PC7
Text GLabel 5100 3250 1    50   Input ~ 0
PC8
Text GLabel 5200 3250 1    50   Input ~ 0
PC9
Text GLabel 4500 5050 3    50   Input ~ 0
PD2
Text GLabel 4600 5050 3    50   Input ~ 0
PD3
Text GLabel 4700 5050 3    50   Input ~ 0
PD4
Text GLabel 2600 5050 3    50   Input ~ 0
PE0
Text GLabel 2700 5050 3    50   Input ~ 0
PE1
Wire Notes Line
	11100 1800 10100 1800
Text Notes 10850 2900 0    50   ~ 0
UART
Wire Notes Line
	10100 2950 11100 2950
Wire Notes Line
	11100 1800 11100 2950
Wire Notes Line
	10100 1800 10100 2950
$Comp
L Connector_Generic:Conn_01x02 J4
U 1 1 620A8DD7
P 10350 2450
F 0 "J4" H 10268 2125 50  0000 C CNN
F 1 "Conn_01x02" H 10268 2216 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 10350 2450 50  0001 C CNN
F 3 "" H 10350 2450 50  0001 C CNN
F 4 "~" H 10350 2450 50  0001 C CNN "LCSC"
F 5 "~" H 10350 2450 50  0001 C CNN "Mouser Eletronics"
	1    10350 2450
	-1   0    0    1   
$EndComp
Text GLabel 10550 2450 2    50   Input ~ 0
PE0
Text GLabel 10550 2350 2    50   Input ~ 0
PE1
Text Notes 10850 2500 2    50   ~ 0
TX
Text Notes 10850 2400 2    50   ~ 0
RX
Text GLabel 2300 3250 1    50   Input ~ 0
USB-
Text GLabel 2400 3250 1    50   Input ~ 0
USB+
Text GLabel 950  1300 0    50   Input ~ 0
PA13
Text GLabel 950  1200 0    50   Input ~ 0
PA14
Text GLabel 950  1100 0    50   Input ~ 0
PB3
Text GLabel 950  1000 0    50   Input ~ 0
NRST
Text GLabel 2500 3250 1    50   Input ~ 0
PA13
Text GLabel 2600 3250 1    50   Input ~ 0
PA14
Text GLabel 3200 3250 1    50   Input ~ 0
PB3
$Sheet
S 9800 4500 900  550 
U 6098637B
F0 "Led" 50
F1 "Led.sch" 50
F2 "PD5" I R 10700 4550 50 
F3 "PD6" I R 10700 4650 50 
F4 "PD7" I R 10700 4750 50 
F5 "PB4" I R 10700 4850 50 
F6 "PB5" I R 10700 4950 50 
$EndSheet
Text GLabel 1900 3250 1    50   Input ~ 0
PA7
Text GLabel 7050 3200 2    50   Input ~ 0
PA7
Text GLabel 4700 3250 1    50   Input ~ 0
PC4
Text GLabel 4800 3250 1    50   Input ~ 0
PC5
Text GLabel 7050 3300 2    50   Input ~ 0
PC4
Text GLabel 7050 3400 2    50   Input ~ 0
PC5
Text GLabel 2000 5050 3    50   Input ~ 0
PF2
Text GLabel 7050 3600 2    50   Input ~ 0
PF2
Text GLabel 2100 5050 3    50   Input ~ 0
PF4
Text GLabel 7050 3500 2    50   Input ~ 0
PF4
Text GLabel 3900 3250 1    50   Input ~ 0
PB10
Text GLabel 7050 3700 2    50   Input ~ 0
PB10
$Comp
L Connector_Generic:Conn_01x06 J5
U 1 1 60B003C6
P 6850 3500
F 0 "J5" H 6930 3492 50  0000 L CNN
F 1 "Chip Select" H 6930 3401 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x06_P2.54mm_Vertical" H 6850 3500 50  0001 C CNN
F 3 "" H 6850 3500 50  0001 C CNN
F 4 "~" H 6850 3500 50  0001 C CNN "LCSC"
F 5 "~" H 6850 3500 50  0001 C CNN "Mouser Eletronics"
	1    6850 3500
	-1   0    0    1   
$EndComp
Wire Notes Line
	6250 3050 6250 3800
Wire Notes Line
	6250 3800 7400 3800
Wire Notes Line
	7400 3800 7400 3050
Wire Notes Line
	7400 3050 6250 3050
Text Notes 6300 3750 0    50   ~ 0
SPI CS
Connection ~ 700  3750
Connection ~ 700  3850
Wire Wire Line
	700  3750 700  3350
Wire Wire Line
	700  3850 700  3750
Connection ~ 700  3950
Connection ~ 700  4050
Wire Wire Line
	700  3950 700  3850
Wire Wire Line
	700  4050 700  3950
Connection ~ 700  4150
Wire Wire Line
	700  4150 700  4050
Wire Wire Line
	700  4250 700  4150
Connection ~ 6100 4250
Connection ~ 6100 4050
Wire Wire Line
	6100 3950 6100 4050
Connection ~ 6100 4150
Wire Wire Line
	6100 4050 6100 4150
Wire Wire Line
	6100 4250 6100 4150
Connection ~ 1500 5050
Wire Wire Line
	2800 2550 2800 2750
Wire Wire Line
	2400 2400 2400 2750
$Comp
L MCU_ST_STM32F3:STM32F373VBTx U4
U 1 1 60D5FAFF
P 3400 4150
F 0 "U4" H 3400 1361 50  0000 C CNN
F 1 "STM32F373VBTx" H 3400 1270 50  0000 C CNN
F 2 "Package_QFP:LQFP-100_14x14mm_P0.5mm" H 2700 1650 50  0001 R CNN
F 3 "" H 3400 4150 50  0001 C CNN
F 4 "511-STM32F373VBT6" H 3400 4150 50  0001 C CNN "Mouser Eletronics"
	1    3400 4150
	0    -1   -1   0   
$EndComp
Text GLabel 4800 5050 3    50   Input ~ 0
PD5
Text GLabel 4900 5050 3    50   Input ~ 0
PD6
Text GLabel 5000 5050 3    50   Input ~ 0
PD7
Text GLabel 10750 4550 2    50   Input ~ 0
PD5
Text GLabel 10750 4650 2    50   Input ~ 0
PD6
Text GLabel 10750 4750 2    50   Input ~ 0
PD7
Text GLabel 3300 3250 1    50   Input ~ 0
PB4
Text GLabel 3400 3250 1    50   Input ~ 0
PB5
Text GLabel 10750 4850 2    50   Input ~ 0
PB4
Text GLabel 10750 4950 2    50   Input ~ 0
PB5
Wire Wire Line
	10750 4550 10700 4550
Wire Wire Line
	10700 4650 10750 4650
Wire Wire Line
	10750 4750 10700 4750
Wire Wire Line
	10700 4850 10750 4850
Wire Wire Line
	10750 4950 10700 4950
$Sheet
S 5200 6600 1050 1000
U 60B91B73
F0 "DSDADC" 50
F1 "DSDADC.sch" 50
F2 "PD9" I R 6250 7250 50 
F3 "PD14" I R 6250 6750 50 
F4 "PD10" I R 6250 7150 50 
F5 "PD12" I R 6250 6950 50 
F6 "PD15" I R 6250 6650 50 
F7 "PB15" I R 6250 7550 50 
F8 "PD11" I R 6250 7050 50 
F9 "PD13" I R 6250 6850 50 
F10 "PD8" I R 6250 7350 50 
F11 "PB14" I R 6250 7450 50 
F12 "DAI2P" I L 5200 7150 50 
F13 "DAI1P" I L 5200 7350 50 
F14 "DAI4P" I L 5200 6750 50 
F15 "DAI1M" I L 5200 7250 50 
F16 "DAI0M" I L 5200 7450 50 
F17 "DAI3P" I L 5200 6950 50 
F18 "DAI3M" I L 5200 6850 50 
F19 "DAI2M" I L 5200 7050 50 
F20 "DAI0P" I L 5200 7550 50 
F21 "DAI4M" I L 5200 6650 50 
$EndSheet
Text GLabel 3450 750  0    50   Input ~ 0
USB+
Wire Wire Line
	3450 750  3500 750 
Wire Wire Line
	3500 750  3500 700 
Text Notes 10000 6500 0    50   ~ 0
PC12 är en digital ingång nu!
$EndSCHEMATC
