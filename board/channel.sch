EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 2 7
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
L Transistor_FET:IRLZ44N Q1
U 1 1 60ED9D6C
P 5500 3000
AR Path="/60ED9BE1/60ED9D6C" Ref="Q1"  Part="1" 
AR Path="/60EEA7DB/60ED9D6C" Ref="Q2"  Part="1" 
AR Path="/60EEA9BD/60ED9D6C" Ref="Q3"  Part="1" 
AR Path="/60EEAC65/60ED9D6C" Ref="Q4"  Part="1" 
AR Path="/60EED22A/60ED9D6C" Ref="Q5"  Part="1" 
AR Path="/60EED22E/60ED9D6C" Ref="Q6"  Part="1" 
F 0 "Q1" H 5704 3046 50  0000 L CNN
F 1 "IRLZ44N" H 5704 2955 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-220-3_Vertical" H 5750 2925 50  0001 L CIN
F 3 "http://www.irf.com/product-info/datasheets/data/irlz44n.pdf" H 5500 3000 50  0001 L CNN
	1    5500 3000
	1    0    0    -1  
$EndComp
$Comp
L Device:R R1
U 1 1 60EDD840
P 4900 3000
AR Path="/60ED9BE1/60EDD840" Ref="R1"  Part="1" 
AR Path="/60EEA7DB/60EDD840" Ref="R3"  Part="1" 
AR Path="/60EEA9BD/60EDD840" Ref="R5"  Part="1" 
AR Path="/60EEAC65/60EDD840" Ref="R7"  Part="1" 
AR Path="/60EED22A/60EDD840" Ref="R9"  Part="1" 
AR Path="/60EED22E/60EDD840" Ref="R11"  Part="1" 
F 0 "R1" V 4693 3000 50  0000 C CNN
F 1 "1K" V 4784 3000 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 4830 3000 50  0001 C CNN
F 3 "~" H 4900 3000 50  0001 C CNN
	1    4900 3000
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR04
U 1 1 60EDE527
P 5600 3400
AR Path="/60ED9BE1/60EDE527" Ref="#PWR04"  Part="1" 
AR Path="/60EEA7DB/60EDE527" Ref="#PWR05"  Part="1" 
AR Path="/60EEA9BD/60EDE527" Ref="#PWR06"  Part="1" 
AR Path="/60EEAC65/60EDE527" Ref="#PWR07"  Part="1" 
AR Path="/60EED22A/60EDE527" Ref="#PWR08"  Part="1" 
AR Path="/60EED22E/60EDE527" Ref="#PWR09"  Part="1" 
F 0 "#PWR04" H 5600 3150 50  0001 C CNN
F 1 "GND" H 5605 3227 50  0000 C CNN
F 2 "" H 5600 3400 50  0001 C CNN
F 3 "" H 5600 3400 50  0001 C CNN
	1    5600 3400
	1    0    0    -1  
$EndComp
$Comp
L Device:R R2
U 1 1 60EDF543
P 5300 3300
AR Path="/60ED9BE1/60EDF543" Ref="R2"  Part="1" 
AR Path="/60EEA7DB/60EDF543" Ref="R4"  Part="1" 
AR Path="/60EEA9BD/60EDF543" Ref="R6"  Part="1" 
AR Path="/60EEAC65/60EDF543" Ref="R8"  Part="1" 
AR Path="/60EED22A/60EDF543" Ref="R10"  Part="1" 
AR Path="/60EED22E/60EDF543" Ref="R12"  Part="1" 
F 0 "R2" V 5093 3300 50  0000 C CNN
F 1 "10K" V 5184 3300 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 5230 3300 50  0001 C CNN
F 3 "~" H 5300 3300 50  0001 C CNN
	1    5300 3300
	0    1    1    0   
$EndComp
$Comp
L Device:Polyfuse F1
U 1 1 60EE1FC2
P 6000 2700
AR Path="/60ED9BE1/60EE1FC2" Ref="F1"  Part="1" 
AR Path="/60EEA7DB/60EE1FC2" Ref="F2"  Part="1" 
AR Path="/60EEA9BD/60EE1FC2" Ref="F3"  Part="1" 
AR Path="/60EEAC65/60EE1FC2" Ref="F4"  Part="1" 
AR Path="/60EED22A/60EE1FC2" Ref="F5"  Part="1" 
AR Path="/60EED22E/60EE1FC2" Ref="F6"  Part="1" 
F 0 "F1" V 5775 2700 50  0000 C CNN
F 1 "Polyfuse" V 5866 2700 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P15.24mm_Horizontal" H 6050 2500 50  0001 L CNN
F 3 "~" H 6000 2700 50  0001 C CNN
	1    6000 2700
	0    1    1    0   
$EndComp
Wire Wire Line
	5050 3000 5150 3000
Wire Wire Line
	5150 3300 5150 3000
Connection ~ 5150 3000
Wire Wire Line
	5150 3000 5300 3000
Wire Wire Line
	5450 3300 5600 3300
Wire Wire Line
	5600 3300 5600 3400
Wire Wire Line
	5600 3200 5600 3300
Connection ~ 5600 3300
Wire Wire Line
	5600 2800 5600 2700
Wire Wire Line
	5600 2700 5850 2700
Wire Wire Line
	6150 2700 6450 2700
Wire Wire Line
	4600 3000 4750 3000
Text HLabel 4600 3000 0    50   Input ~ 0
ChannelPWM
Text HLabel 6450 2700 2    50   Input ~ 0
ChannelDrain
$EndSCHEMATC
