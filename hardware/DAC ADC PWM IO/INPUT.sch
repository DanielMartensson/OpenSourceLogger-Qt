EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 2 9
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	4300 1850 3800 1850
$Comp
L power:GND #PWR?
U 1 1 5FAF0ACD
P 3100 1850
AR Path="/5FAFDC1C/5FAF0ACD" Ref="#PWR?"  Part="1" 
AR Path="/5FB17A23/5FAF0ACD" Ref="#PWR027"  Part="1" 
F 0 "#PWR027" H 3100 1600 50  0001 C CNN
F 1 "GND" H 3105 1677 50  0000 C CNN
F 2 "" H 3100 1850 50  0001 C CNN
F 3 "" H 3100 1850 50  0001 C CNN
	1    3100 1850
	-1   0    0    -1  
$EndComp
$Comp
L Diode:BZX84Cxx D?
U 1 1 5FAF0AD3
P 3350 4600
AR Path="/5FAFDC1C/5FAF0AD3" Ref="D?"  Part="1" 
AR Path="/5FB17A23/5FAF0AD3" Ref="D12"  Part="1" 
F 0 "D12" H 3350 4825 50  0000 C CNN
F 1 "BZX84C3V6LT1G" H 3350 4734 50  0000 C CNN
F 2 "Diode_SMD:D_SOT-23_ANK" H 3425 4725 50  0001 L CNN
F 3 "" H 3230 4600 50  0001 C CNN
F 4 "C118564" H 3350 4600 50  0001 C CNN "LCSC"
	1    3350 4600
	-1   0    0    -1  
$EndComp
Wire Wire Line
	3100 1850 3250 1850
$Comp
L Device:R R?
U 1 1 604CB084
P 4450 5750
AR Path="/604CB084" Ref="R?"  Part="1" 
AR Path="/5FB17A23/604CB084" Ref="R12"  Part="1" 
F 0 "R12" H 4520 5796 50  0000 L CNN
F 1 "10k" H 4520 5705 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 4380 5750 50  0001 C CNN
F 3 "" H 4450 5750 50  0001 C CNN
F 4 "C25804" H 4450 5750 50  0001 C CNN "LCSC"
	1    4450 5750
	0    1    -1   0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 603E43A9
P 3100 3500
AR Path="/5FAFDC1C/603E43A9" Ref="#PWR?"  Part="1" 
AR Path="/5FB17A23/603E43A9" Ref="#PWR045"  Part="1" 
F 0 "#PWR045" H 3100 3250 50  0001 C CNN
F 1 "GND" H 3105 3327 50  0000 C CNN
F 2 "" H 3100 3500 50  0001 C CNN
F 3 "" H 3100 3500 50  0001 C CNN
	1    3100 3500
	-1   0    0    -1  
$EndComp
$Comp
L Diode:BZX84Cxx D?
U 1 1 603E43AF
P 3400 3500
AR Path="/5FAFDC1C/603E43AF" Ref="D?"  Part="1" 
AR Path="/5FB17A23/603E43AF" Ref="D11"  Part="1" 
F 0 "D11" H 3400 3725 50  0000 C CNN
F 1 "BZX84C3V6LT1G" H 3400 3634 50  0000 C CNN
F 2 "Diode_SMD:D_SOT-23_ANK" H 3475 3625 50  0001 L CNN
F 3 "" H 3280 3500 50  0001 C CNN
F 4 "C118564" H 3400 3500 50  0001 C CNN "LCSC"
	1    3400 3500
	-1   0    0    -1  
$EndComp
Wire Wire Line
	3100 3500 3250 3500
Wire Wire Line
	4300 5150 3800 5150
$Comp
L power:GND #PWR?
U 1 1 603E503D
P 3100 5150
AR Path="/5FAFDC1C/603E503D" Ref="#PWR?"  Part="1" 
AR Path="/5FB17A23/603E503D" Ref="#PWR072"  Part="1" 
F 0 "#PWR072" H 3100 4900 50  0001 C CNN
F 1 "GND" H 3105 4977 50  0000 C CNN
F 2 "" H 3100 5150 50  0001 C CNN
F 3 "" H 3100 5150 50  0001 C CNN
	1    3100 5150
	-1   0    0    -1  
$EndComp
$Comp
L Diode:BZX84Cxx D?
U 1 1 603E5043
P 3400 4050
AR Path="/5FAFDC1C/603E5043" Ref="D?"  Part="1" 
AR Path="/5FB17A23/603E5043" Ref="D13"  Part="1" 
F 0 "D13" H 3400 4275 50  0000 C CNN
F 1 "BZX84C3V6LT1G" H 3400 4184 50  0000 C CNN
F 2 "Diode_SMD:D_SOT-23_ANK" H 3475 4175 50  0001 L CNN
F 3 "" H 3280 4050 50  0001 C CNN
F 4 "C118564" H 3400 4050 50  0001 C CNN "LCSC"
	1    3400 4050
	-1   0    0    -1  
$EndComp
$Comp
L Device:R R?
U 1 1 603E504A
P 4450 4600
AR Path="/603E504A" Ref="R?"  Part="1" 
AR Path="/5FB17A23/603E504A" Ref="R46"  Part="1" 
F 0 "R46" H 4520 4646 50  0000 L CNN
F 1 "10k" H 4520 4555 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 4380 4600 50  0001 C CNN
F 3 "" H 4450 4600 50  0001 C CNN
F 4 "C25804" H 4450 4600 50  0001 C CNN "LCSC"
	1    4450 4600
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 603E543D
P 3100 2950
AR Path="/5FAFDC1C/603E543D" Ref="#PWR?"  Part="1" 
AR Path="/5FB17A23/603E543D" Ref="#PWR073"  Part="1" 
F 0 "#PWR073" H 3100 2700 50  0001 C CNN
F 1 "GND" H 3105 2777 50  0000 C CNN
F 2 "" H 3100 2950 50  0001 C CNN
F 3 "" H 3100 2950 50  0001 C CNN
	1    3100 2950
	-1   0    0    -1  
$EndComp
$Comp
L Diode:BZX84Cxx D?
U 1 1 603E5443
P 3400 2400
AR Path="/5FAFDC1C/603E5443" Ref="D?"  Part="1" 
AR Path="/5FB17A23/603E5443" Ref="D16"  Part="1" 
F 0 "D16" H 3400 2625 50  0000 C CNN
F 1 "BZX84C3V6LT1G" H 3400 2534 50  0000 C CNN
F 2 "Diode_SMD:D_SOT-23_ANK" H 3475 2525 50  0001 L CNN
F 3 "" H 3280 2400 50  0001 C CNN
F 4 "C118564" H 3400 2400 50  0001 C CNN "LCSC"
	1    3400 2400
	-1   0    0    -1  
$EndComp
$Comp
L Device:R R?
U 1 1 603E544A
P 4450 1850
AR Path="/603E544A" Ref="R?"  Part="1" 
AR Path="/5FB17A23/603E544A" Ref="R51"  Part="1" 
F 0 "R51" H 4520 1896 50  0000 L CNN
F 1 "10k" H 4520 1805 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 4380 1850 50  0001 C CNN
F 3 "" H 4450 1850 50  0001 C CNN
F 4 "C25804" H 4450 1850 50  0001 C CNN "LCSC"
	1    4450 1850
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4300 4050 3800 4050
$Comp
L power:GND #PWR?
U 1 1 603E5C06
P 3100 4050
AR Path="/5FAFDC1C/603E5C06" Ref="#PWR?"  Part="1" 
AR Path="/5FB17A23/603E5C06" Ref="#PWR078"  Part="1" 
F 0 "#PWR078" H 3100 3800 50  0001 C CNN
F 1 "GND" H 3105 3877 50  0000 C CNN
F 2 "" H 3100 4050 50  0001 C CNN
F 3 "" H 3100 4050 50  0001 C CNN
	1    3100 4050
	-1   0    0    -1  
$EndComp
$Comp
L Diode:BZX84Cxx D?
U 1 1 603E5C0C
P 3400 1850
AR Path="/5FAFDC1C/603E5C0C" Ref="D?"  Part="1" 
AR Path="/5FB17A23/603E5C0C" Ref="D17"  Part="1" 
F 0 "D17" H 3400 2075 50  0000 C CNN
F 1 "BZX84C3V6LT1G" H 3400 1984 50  0000 C CNN
F 2 "Diode_SMD:D_SOT-23_ANK" H 3475 1975 50  0001 L CNN
F 3 "" H 3280 1850 50  0001 C CNN
F 4 "C118564" H 3400 1850 50  0001 C CNN "LCSC"
	1    3400 1850
	-1   0    0    -1  
$EndComp
$Comp
L Device:R R?
U 1 1 603E5C13
P 4450 3500
AR Path="/603E5C13" Ref="R?"  Part="1" 
AR Path="/5FB17A23/603E5C13" Ref="R52"  Part="1" 
F 0 "R52" H 4520 3546 50  0000 L CNN
F 1 "10k" H 4520 3455 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 4380 3500 50  0001 C CNN
F 3 "" H 4450 3500 50  0001 C CNN
F 4 "C25804" H 4450 3500 50  0001 C CNN "LCSC"
	1    4450 3500
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4300 5750 3800 5750
$Comp
L power:GND #PWR?
U 1 1 603EEBBF
P 3100 5750
AR Path="/5FAFDC1C/603EEBBF" Ref="#PWR?"  Part="1" 
AR Path="/5FB17A23/603EEBBF" Ref="#PWR042"  Part="1" 
F 0 "#PWR042" H 3100 5500 50  0001 C CNN
F 1 "GND" H 3105 5577 50  0000 C CNN
F 2 "" H 3100 5750 50  0001 C CNN
F 3 "" H 3100 5750 50  0001 C CNN
	1    3100 5750
	-1   0    0    -1  
$EndComp
Wire Wire Line
	3100 5750 3250 5750
$Comp
L Device:R R?
U 1 1 603EEBCC
P 4450 2950
AR Path="/603EEBCC" Ref="R?"  Part="1" 
AR Path="/5FB17A23/603EEBCC" Ref="R2"  Part="1" 
F 0 "R2" H 4520 2996 50  0000 L CNN
F 1 "10k" H 4520 2905 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 4380 2950 50  0001 C CNN
F 3 "" H 4450 2950 50  0001 C CNN
F 4 "C25804" H 4450 2950 50  0001 C CNN "LCSC"
	1    4450 2950
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4300 2400 3800 2400
$Comp
L power:GND #PWR?
U 1 1 603EEBD4
P 3100 2400
AR Path="/5FAFDC1C/603EEBD4" Ref="#PWR?"  Part="1" 
AR Path="/5FB17A23/603EEBD4" Ref="#PWR043"  Part="1" 
F 0 "#PWR043" H 3100 2150 50  0001 C CNN
F 1 "GND" H 3105 2227 50  0000 C CNN
F 2 "" H 3100 2400 50  0001 C CNN
F 3 "" H 3100 2400 50  0001 C CNN
	1    3100 2400
	-1   0    0    -1  
$EndComp
$Comp
L Diode:BZX84Cxx D?
U 1 1 603EEBDA
P 3450 2950
AR Path="/5FAFDC1C/603EEBDA" Ref="D?"  Part="1" 
AR Path="/5FB17A23/603EEBDA" Ref="D7"  Part="1" 
F 0 "D7" H 3450 3175 50  0000 C CNN
F 1 "BZX84C3V6LT1G" H 3450 3084 50  0000 C CNN
F 2 "Diode_SMD:D_SOT-23_ANK" H 3525 3075 50  0001 L CNN
F 3 "" H 3330 2950 50  0001 C CNN
F 4 "C118564" H 3450 2950 50  0001 C CNN "LCSC"
	1    3450 2950
	-1   0    0    -1  
$EndComp
Wire Wire Line
	3100 2400 3250 2400
$Comp
L Device:R R?
U 1 1 603EEBE1
P 4450 5150
AR Path="/603EEBE1" Ref="R?"  Part="1" 
AR Path="/5FB17A23/603EEBE1" Ref="R11"  Part="1" 
F 0 "R11" H 4520 5196 50  0000 L CNN
F 1 "10k" H 4520 5105 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 4380 5150 50  0001 C CNN
F 3 "" H 4450 5150 50  0001 C CNN
F 4 "C25804" H 4450 5150 50  0001 C CNN "LCSC"
	1    4450 5150
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 603EEBE9
P 3100 4600
AR Path="/5FAFDC1C/603EEBE9" Ref="#PWR?"  Part="1" 
AR Path="/5FB17A23/603EEBE9" Ref="#PWR044"  Part="1" 
F 0 "#PWR044" H 3100 4350 50  0001 C CNN
F 1 "GND" H 3105 4427 50  0000 C CNN
F 2 "" H 3100 4600 50  0001 C CNN
F 3 "" H 3100 4600 50  0001 C CNN
	1    3100 4600
	-1   0    0    -1  
$EndComp
$Comp
L Diode:BZX84Cxx D?
U 1 1 603EEBEF
P 3400 5750
AR Path="/5FAFDC1C/603EEBEF" Ref="D?"  Part="1" 
AR Path="/5FB17A23/603EEBEF" Ref="D10"  Part="1" 
F 0 "D10" H 3400 5975 50  0000 C CNN
F 1 "BZX84C3V6LT1G" H 3400 5884 50  0000 C CNN
F 2 "Diode_SMD:D_SOT-23_ANK" H 3475 5875 50  0001 L CNN
F 3 "" H 3280 5750 50  0001 C CNN
F 4 "C118564" H 3400 5750 50  0001 C CNN "LCSC"
	1    3400 5750
	-1   0    0    -1  
$EndComp
Wire Wire Line
	3100 4600 3200 4600
$Comp
L Device:R R?
U 1 1 603EEBF6
P 4450 4050
AR Path="/603EEBF6" Ref="R?"  Part="1" 
AR Path="/5FB17A23/603EEBF6" Ref="R13"  Part="1" 
F 0 "R13" H 4520 4096 50  0000 L CNN
F 1 "10k" H 4520 4005 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 4380 4050 50  0001 C CNN
F 3 "" H 4450 4050 50  0001 C CNN
F 4 "C25804" H 4450 4050 50  0001 C CNN "LCSC"
	1    4450 4050
	0    -1   -1   0   
$EndComp
Wire Wire Line
	3800 5400 3800 5750
Connection ~ 3800 5750
Wire Wire Line
	3800 5750 3550 5750
Connection ~ 3800 2400
Wire Wire Line
	3800 2400 3550 2400
Connection ~ 3800 1850
Wire Wire Line
	3800 1850 3550 1850
Connection ~ 3800 5150
Wire Wire Line
	3800 5150 3550 5150
Connection ~ 3800 4050
Wire Wire Line
	3800 4050 3550 4050
Text HLabel 4600 4600 2    50   Input ~ 0
DI5
Text HLabel 4600 2400 2    50   Input ~ 0
DI1
Text HLabel 4600 5750 2    50   Input ~ 0
DI7
Text HLabel 4600 4050 2    50   Input ~ 0
DI4
Text HLabel 4600 2950 2    50   Input ~ 0
DI2
Text HLabel 4600 5150 2    50   Input ~ 0
DI6
Text HLabel 4600 3500 2    50   Input ~ 0
DI3
Text HLabel 4600 1850 2    50   Input ~ 0
DI0
$Comp
L Diode:BZX84Cxx D?
U 1 1 603EEBC5
P 3400 5150
AR Path="/5FAFDC1C/603EEBC5" Ref="D?"  Part="1" 
AR Path="/5FB17A23/603EEBC5" Ref="D6"  Part="1" 
F 0 "D6" H 3400 5375 50  0000 C CNN
F 1 "BZX84C3V6LT1G" H 3400 5284 50  0000 C CNN
F 2 "Diode_SMD:D_SOT-23_ANK" H 3475 5275 50  0001 L CNN
F 3 "" H 3280 5150 50  0001 C CNN
F 4 "C118564" H 3400 5150 50  0001 C CNN "LCSC"
	1    3400 5150
	-1   0    0    -1  
$EndComp
Wire Wire Line
	3550 3500 3800 3500
Wire Wire Line
	3800 3500 3800 3200
Connection ~ 3800 3500
Wire Wire Line
	3800 3500 4300 3500
Wire Wire Line
	3800 1550 3800 1850
Wire Wire Line
	3800 2100 3800 2400
Wire Wire Line
	3800 2650 3800 2950
Wire Wire Line
	3800 4850 3800 5150
Wire Wire Line
	3800 3750 3800 4050
Text Notes 3100 1000 0    50   ~ 0
Protection for the microcontroller.
Wire Notes Line
	3100 900  4450 900 
Wire Notes Line
	4450 900  4450 1050
Wire Notes Line
	4450 1050 3100 1050
Wire Notes Line
	3100 1050 3100 900 
$Comp
L Device:R R?
U 1 1 603E43B6
P 4450 2400
AR Path="/603E43B6" Ref="R?"  Part="1" 
AR Path="/5FB17A23/603E43B6" Ref="R45"  Part="1" 
F 0 "R45" H 4520 2446 50  0000 L CNN
F 1 "10k" H 4520 2355 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 4380 2400 50  0001 C CNN
F 3 "" H 4450 2400 50  0001 C CNN
F 4 "C25804" H 4450 2400 50  0001 C CNN "LCSC"
	1    4450 2400
	0    1    -1   0   
$EndComp
Text HLabel 3050 5400 0    50   Input ~ 0
PF10
Wire Wire Line
	3800 5400 3050 5400
Wire Wire Line
	3800 2100 3050 2100
Text HLabel 3050 2100 0    50   Input ~ 0
PE3
Text HLabel 3050 4300 0    50   Input ~ 0
PC13
Wire Wire Line
	3050 1550 3800 1550
Text HLabel 3050 1550 0    50   Input ~ 0
PE2
Wire Wire Line
	3800 3200 3050 3200
Text HLabel 3050 3200 0    50   Input ~ 0
PE5
Wire Wire Line
	3300 2950 3100 2950
Wire Wire Line
	3250 5150 3100 5150
Wire Wire Line
	3100 4050 3250 4050
Wire Wire Line
	3600 2950 3800 2950
Connection ~ 3800 2950
Wire Wire Line
	3800 2950 4300 2950
Wire Wire Line
	3800 2650 3050 2650
Text HLabel 3050 2650 0    50   Input ~ 0
PE4
Wire Wire Line
	3800 4850 3050 4850
Text HLabel 3050 4850 0    50   Input ~ 0
PF9
Wire Wire Line
	3800 3750 3050 3750
Text HLabel 3050 3750 0    50   Input ~ 0
PE6
Wire Wire Line
	3500 4600 3800 4600
Wire Wire Line
	3800 4300 3800 4600
Wire Wire Line
	3050 4300 3800 4300
Connection ~ 3800 4600
Wire Wire Line
	3800 4600 4300 4600
$EndSCHEMATC
