EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 7
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
L ESP32_DevKit_V1_DOIT:ESP32_DevKit_V1_DOIT U2
U 1 1 60EC6DB0
P 3900 3950
F 0 "U2" H 3900 5531 50  0000 C CNN
F 1 "ESP32_DevKit_V1_DOIT" H 3900 5440 50  0000 C CNN
F 2 "footprints:esp32_devkit_v1_doit" H 3450 5300 50  0001 C CNN
F 3 "https://aliexpress.com/item/32864722159.html" H 3450 5300 50  0001 C CNN
	1    3900 3950
	1    0    0    1   
$EndComp
$Sheet
S 7600 1550 1200 700 
U 60EEA7DB
F0 "channel1" 50
F1 "channel.sch" 50
F2 "ChannelPWM" I L 7600 1900 50 
F3 "ChannelDrain" I R 8800 1900 50 
$EndSheet
$Sheet
S 7600 2450 1200 700 
U 60EEA9BD
F0 "channel2" 50
F1 "channel.sch" 50
F2 "ChannelPWM" I L 7600 2800 50 
F3 "ChannelDrain" I R 8800 2800 50 
$EndSheet
$Sheet
S 7600 3350 1200 700 
U 60EEAC65
F0 "channel3" 50
F1 "channel.sch" 50
F2 "ChannelPWM" I L 7600 3700 50 
F3 "ChannelDrain" I R 8800 3700 50 
$EndSheet
$Sheet
S 7600 4300 1200 700 
U 60EED22A
F0 "channel4" 50
F1 "channel.sch" 50
F2 "ChannelPWM" I L 7600 4650 50 
F3 "ChannelDrain" I R 8800 4650 50 
$EndSheet
$Sheet
S 7600 5200 1200 700 
U 60EED22E
F0 "channel5" 50
F1 "channel.sch" 50
F2 "ChannelPWM" I L 7600 5550 50 
F3 "ChannelDrain" I R 8800 5550 50 
$EndSheet
$Comp
L Connector:Screw_Terminal_01x04 J1
U 1 1 60EF22B2
P 1750 1200
F 0 "J1" V 1668 912 50  0000 R CNN
F 1 "Screw_Terminal_01x04" V 1623 912 50  0001 R CNN
F 2 "TerminalBlock:TerminalBlock_Altech_AK300-4_P5.00mm" H 1750 1200 50  0001 C CNN
F 3 "~" H 1750 1200 50  0001 C CNN
	1    1750 1200
	0    -1   -1   0   
$EndComp
$Comp
L Connector:Screw_Terminal_01x04 J2
U 1 1 60EF5F1B
P 10050 1200
F 0 "J2" V 9968 912 50  0000 R CNN
F 1 "Screw_Terminal_01x04" V 9923 912 50  0001 R CNN
F 2 "TerminalBlock:TerminalBlock_Altech_AK300-4_P5.00mm" H 10050 1200 50  0001 C CNN
F 3 "~" H 10050 1200 50  0001 C CNN
	1    10050 1200
	1    0    0    -1  
$EndComp
$Comp
L Connector:Screw_Terminal_01x04 J3
U 1 1 60EF6BEC
P 10050 3100
F 0 "J3" V 9968 2812 50  0000 R CNN
F 1 "Screw_Terminal_01x04" V 9923 2812 50  0001 R CNN
F 2 "TerminalBlock:TerminalBlock_Altech_AK300-4_P5.00mm" H 10050 3100 50  0001 C CNN
F 3 "~" H 10050 3100 50  0001 C CNN
	1    10050 3100
	1    0    0    -1  
$EndComp
$Comp
L Connector:Screw_Terminal_01x04 J4
U 1 1 60EF862F
P 10100 5000
F 0 "J4" V 10018 4712 50  0000 R CNN
F 1 "Screw_Terminal_01x04" V 9973 4712 50  0001 R CNN
F 2 "TerminalBlock:TerminalBlock_Altech_AK300-4_P5.00mm" H 10100 5000 50  0001 C CNN
F 3 "~" H 10100 5000 50  0001 C CNN
	1    10100 5000
	1    0    0    -1  
$EndComp
Wire Wire Line
	9250 1900 8800 1900
Wire Wire Line
	9250 2800 8800 2800
Wire Wire Line
	9500 4650 8800 4650
Wire Wire Line
	9400 5550 8800 5550
Wire Wire Line
	4500 3550 5300 3550
Wire Wire Line
	5300 3550 5300 1000
Wire Wire Line
	5300 1000 7600 1000
Wire Wire Line
	4500 3650 5500 3650
Wire Wire Line
	5500 3650 5500 1900
Wire Wire Line
	5500 1900 7600 1900
Wire Wire Line
	4500 3750 6050 3750
Wire Wire Line
	6050 3750 6050 2800
Wire Wire Line
	6050 2800 7600 2800
Wire Wire Line
	4500 3850 6300 3850
Wire Wire Line
	6300 3850 6300 3700
Wire Wire Line
	6300 3700 7600 3700
Wire Wire Line
	4500 4650 7600 4650
Wire Wire Line
	4500 4750 6900 4750
Wire Wire Line
	6900 4750 6900 5550
Wire Wire Line
	6900 5550 7600 5550
Wire Wire Line
	1850 1400 1950 1400
Wire Wire Line
	1950 1400 2200 1400
Wire Wire Line
	3800 1400 3800 2550
Connection ~ 1950 1400
Wire Wire Line
	3900 2550 3800 2550
Connection ~ 3800 2550
$Comp
L power:GND #PWR02
U 1 1 60F143CC
P 1950 1400
F 0 "#PWR02" H 1950 1150 50  0001 C CNN
F 1 "GND" H 1955 1227 50  0000 C CNN
F 2 "" H 1950 1400 50  0001 C CNN
F 3 "" H 1950 1400 50  0001 C CNN
	1    1950 1400
	1    0    0    -1  
$EndComp
Wire Wire Line
	1750 1400 1650 1400
$Comp
L power:VCC #PWR03
U 1 1 60F19196
P 9700 5750
F 0 "#PWR03" H 9700 5600 50  0001 C CNN
F 1 "VCC" H 9715 5923 50  0000 C CNN
F 2 "" H 9700 5750 50  0001 C CNN
F 3 "" H 9700 5750 50  0001 C CNN
	1    9700 5750
	-1   0    0    1   
$EndComp
Wire Wire Line
	1650 1400 1350 1400
Wire Wire Line
	1350 1400 1350 2750
Connection ~ 1650 1400
$Comp
L power:VCC #PWR01
U 1 1 60F1CDD1
P 1650 1400
F 0 "#PWR01" H 1650 1250 50  0001 C CNN
F 1 "VCC" H 1665 1573 50  0000 C CNN
F 2 "" H 1650 1400 50  0001 C CNN
F 3 "" H 1650 1400 50  0001 C CNN
	1    1650 1400
	-1   0    0    1   
$EndComp
$Comp
L yaaj_dcdc_stepdown_lm2596:YAAJ_DCDC_StepDown_LM2596 U1
U 1 1 60F217B9
P 1450 3150
F 0 "U1" V 1450 3378 50  0000 L CNN
F 1 "YAAJ_DCDC_StepDown_LM2596" V 1495 3378 50  0001 L CNN
F 2 "lm2596:YAAJ_DCDC_StepDown_LM2596" H 1400 3150 50  0001 C CNN
F 3 "" H 1400 3150 50  0001 C CNN
	1    1450 3150
	0    -1   1    0   
$EndComp
Wire Wire Line
	1350 3550 1350 5750
Wire Wire Line
	1350 5750 3800 5750
Wire Wire Line
	3800 5750 3800 5350
Wire Wire Line
	1750 3250 1750 3050
Wire Wire Line
	1750 3050 2200 3050
Wire Wire Line
	2200 3050 2200 1400
Connection ~ 1750 3050
Connection ~ 2200 1400
Wire Wire Line
	2200 1400 3800 1400
NoConn ~ 4500 2850
NoConn ~ 4500 2950
NoConn ~ 4500 3050
NoConn ~ 4500 3150
NoConn ~ 4500 3250
NoConn ~ 4500 3350
NoConn ~ 4500 3450
NoConn ~ 4500 3950
NoConn ~ 4500 4050
NoConn ~ 4500 4150
NoConn ~ 4500 4250
NoConn ~ 4500 4350
NoConn ~ 4500 4450
NoConn ~ 4500 4550
NoConn ~ 4500 4850
NoConn ~ 4500 4950
NoConn ~ 4500 5050
NoConn ~ 3300 4850
NoConn ~ 3300 4950
NoConn ~ 3300 5150
NoConn ~ 3900 5350
$Sheet
S 7600 650  1200 700 
U 60ED9BE1
F0 "channel0" 50
F1 "channel.sch" 50
F2 "ChannelPWM" I L 7600 1000 50 
F3 "ChannelDrain" I R 8800 1000 50 
$EndSheet
Wire Wire Line
	8800 1000 8950 1000
Wire Wire Line
	8950 1000 8950 1200
Wire Wire Line
	8950 1200 9850 1200
Wire Wire Line
	9250 1900 9250 1400
Wire Wire Line
	9250 1400 9850 1400
Wire Wire Line
	9250 2800 9250 3100
Wire Wire Line
	9250 3100 9850 3100
Wire Wire Line
	9250 3700 9250 3300
Wire Wire Line
	9250 3300 9850 3300
Wire Wire Line
	8800 3700 9250 3700
Wire Wire Line
	9500 4650 9500 5000
Wire Wire Line
	9500 5000 9900 5000
Wire Wire Line
	9400 5550 9400 5200
Wire Wire Line
	9400 5200 9900 5200
Wire Wire Line
	9700 5750 9700 5100
Wire Wire Line
	9700 5100 9900 5100
Wire Wire Line
	9700 5100 9700 4900
Wire Wire Line
	9700 4900 9900 4900
Connection ~ 9700 5100
Wire Wire Line
	9700 4900 9700 3200
Wire Wire Line
	9700 3200 9850 3200
Connection ~ 9700 4900
Wire Wire Line
	9700 3200 9700 3000
Wire Wire Line
	9700 3000 9850 3000
Connection ~ 9700 3200
Wire Wire Line
	9700 3000 9700 1300
Wire Wire Line
	9700 1300 9850 1300
Connection ~ 9700 3000
Wire Wire Line
	9700 1300 9700 1100
Wire Wire Line
	9700 1100 9850 1100
Connection ~ 9700 1300
$EndSCHEMATC
