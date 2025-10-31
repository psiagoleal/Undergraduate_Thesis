EESchema Schematic File Version 4
LIBS:TCC-cache
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
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
L MCU_Module:Arduino_Nano_v3.x ArduinoNano1
U 1 1 5D713491
P 4450 2950
F 0 "ArduinoNano1" V 4450 2950 50  0000 C CNN
F 1 "Arduino_Nano_v3.x" H 4450 1770 50  0001 C CNN
F 2 "Module:Arduino_Nano" H 4600 2000 50  0001 L CNN
F 3 "http://www.mouser.com/pdfdocs/Gravitech_Arduino_Nano3_0.pdf" H 4450 1950 50  0001 C CNN
	1    4450 2950
	1    0    0    -1  
$EndComp
$Comp
L Amplifier_Operational:LM358 OpAmp1
U 1 1 5D715CE3
P 8000 2100
F 0 "OpAmp1" H 8150 2250 50  0000 C CNN
F 1 "LM358" H 7950 2100 50  0000 C CNN
F 2 "Package_DIP:DIP-8_W7.62mm_LongPads" H 8000 2100 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/lm2904-n.pdf" H 8000 2100 50  0001 C CNN
	1    8000 2100
	1    0    0    -1  
$EndComp
$Comp
L Amplifier_Operational:LM358 OpAmp1
U 2 1 5D717FD8
P 8000 2750
F 0 "OpAmp1" H 8150 2850 50  0000 C CNN
F 1 "LM358" H 7950 2750 50  0000 C CNN
F 2 "Package_DIP:DIP-8_W7.62mm_LongPads" H 8000 2750 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/lm2904-n.pdf" H 8000 2750 50  0001 C CNN
	2    8000 2750
	1    0    0    -1  
$EndComp
$Comp
L Device:R R1
U 1 1 5D71A648
P 2350 5800
F 0 "R1" V 2143 5800 50  0000 C CNN
F 1 "1M" V 2234 5800 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0309_L9.0mm_D3.2mm_P12.70mm_Horizontal" V 2280 5800 50  0001 C CNN
F 3 "~" H 2350 5800 50  0001 C CNN
	1    2350 5800
	0    1    1    0   
$EndComp
$Comp
L Device:C C2
U 1 1 5D71B768
P 6050 4100
F 0 "C2" H 6165 4146 50  0000 L CNN
F 1 "100pF" H 6165 4055 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D4.7mm_W2.5mm_P5.00mm" H 6088 3950 50  0001 C CNN
F 3 "~" H 6050 4100 50  0001 C CNN
	1    6050 4100
	1    0    0    -1  
$EndComp
$Comp
L Transistor_FET:IRF9540N Q1
U 1 1 5D71DAC8
P 2750 5600
F 0 "Q1" V 3093 5600 50  0000 C CNN
F 1 "IRF9Z24" V 3002 5600 50  0000 C CNN
F 2 "Package_TO_SOT_THT:TO-220-3_Vertical" H 2950 5525 50  0001 L CIN
F 3 "http://www.irf.com/product-info/datasheets/data/irf9540n.pdf" H 2750 5600 50  0001 L CNN
	1    2750 5600
	0    1    -1   0   
$EndComp
$Comp
L TCC-rescue:0022232041-dk_Rectangular-Connectors-Headers-Male-Pins LCDI2C1
U 1 1 5D7227B6
P 4750 5750
F 0 "LCDI2C1" V 4617 5758 50  0000 C CNN
F 1 "0022232041" H 5128 5713 50  0001 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Vertical" H 4950 5950 60  0001 L CNN
F 3 "https://www.molex.com/pdm_docs/sd/022232041_sd.pdf" H 4950 6050 60  0001 L CNN
F 4 "WM4202-ND" H 4950 6150 60  0001 L CNN "Digi-Key_PN"
F 5 "0022232041" H 4950 6250 60  0001 L CNN "MPN"
F 6 "Connectors, Interconnects" H 4950 6350 60  0001 L CNN "Category"
F 7 "Rectangular Connectors - Headers, Male Pins" H 4950 6450 60  0001 L CNN "Family"
F 8 "https://www.molex.com/pdm_docs/sd/022232041_sd.pdf" H 4950 6550 60  0001 L CNN "DK_Datasheet_Link"
F 9 "/product-detail/en/molex/0022232041/WM4202-ND/26671" H 4950 6650 60  0001 L CNN "DK_Detail_Page"
F 10 "CONN HEADER VERT 4POS 2.54MM" H 4950 6750 60  0001 L CNN "Description"
F 11 "Molex" H 4950 6850 60  0001 L CNN "Manufacturer"
F 12 "Active" H 4950 6950 60  0001 L CNN "Status"
	1    4750 5750
	0    1    1    0   
$EndComp
$Comp
L Device:D D1
U 1 1 5D729B1F
P 2250 5500
F 0 "D1" H 2250 5284 50  0000 C CNN
F 1 "SB360" H 2250 5375 50  0000 C CNN
F 2 "Diode_THT:D_DO-15_P10.16mm_Horizontal" H 2250 5500 50  0001 C CNN
F 3 "~" H 2250 5500 50  0001 C CNN
	1    2250 5500
	-1   0    0    1   
$EndComp
$Comp
L Connector:Screw_Terminal_01x06 Periféricos1
U 1 1 5D72ABA4
P 1750 4800
F 0 "Periféricos1" H 1668 5217 50  0000 C CNN
F 1 "Screw_Terminal_01x06" H 1668 5126 50  0000 C CNN
F 2 "TerminalBlock_Phoenix:TerminalBlock_Phoenix_PT-1,5-6-3.5-H_1x06_P3.50mm_Horizontal" H 1750 4800 50  0001 C CNN
F 3 "~" H 1750 4800 50  0001 C CNN
	1    1750 4800
	-1   0    0    -1  
$EndComp
$Comp
L Connector:Screw_Terminal_01x02 Power1
U 1 1 5D72BD66
P 1800 5500
F 0 "Power1" H 1718 5625 50  0000 C CNN
F 1 "Screw_Terminal_01x02" H 1718 5626 50  0001 C CNN
F 2 "TerminalBlock_Phoenix:TerminalBlock_Phoenix_PT-1,5-2-3.5-H_1x02_P3.50mm_Horizontal" H 1800 5500 50  0001 C CNN
F 3 "~" H 1800 5500 50  0001 C CNN
	1    1800 5500
	-1   0    0    -1  
$EndComp
$Comp
L TCC-rescue:0022232041-dk_Rectangular-Connectors-Headers-Male-Pins MiniUSB1
U 1 1 5D72F47F
P 2200 1950
F 0 "MiniUSB1" V 2345 1822 50  0000 R CNN
F 1 "0022232041" H 2578 1913 50  0001 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Vertical" H 2400 2150 60  0001 L CNN
F 3 "https://www.molex.com/pdm_docs/sd/022232041_sd.pdf" H 2400 2250 60  0001 L CNN
F 4 "WM4202-ND" H 2400 2350 60  0001 L CNN "Digi-Key_PN"
F 5 "0022232041" H 2400 2450 60  0001 L CNN "MPN"
F 6 "Connectors, Interconnects" H 2400 2550 60  0001 L CNN "Category"
F 7 "Rectangular Connectors - Headers, Male Pins" H 2400 2650 60  0001 L CNN "Family"
F 8 "https://www.molex.com/pdm_docs/sd/022232041_sd.pdf" H 2400 2750 60  0001 L CNN "DK_Datasheet_Link"
F 9 "/product-detail/en/molex/0022232041/WM4202-ND/26671" H 2400 2850 60  0001 L CNN "DK_Detail_Page"
F 10 "CONN HEADER VERT 4POS 2.54MM" H 2400 2950 60  0001 L CNN "Description"
F 11 "Molex" H 2400 3050 60  0001 L CNN "Manufacturer"
F 12 "Active" H 2400 3150 60  0001 L CNN "Status"
	1    2200 1950
	0    -1   -1   0   
$EndComp
$Comp
L TCC-rescue:0022232041-dk_Rectangular-Connectors-Headers-Male-Pins VR+5V1
U 1 1 5D7303AE
P 3600 5800
F 0 "VR+5V1" H 3978 5808 50  0000 L CNN
F 1 "0022232041" H 3978 5763 50  0001 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Vertical" H 3800 6000 60  0001 L CNN
F 3 "https://www.molex.com/pdm_docs/sd/022232041_sd.pdf" H 3800 6100 60  0001 L CNN
F 4 "WM4202-ND" H 3800 6200 60  0001 L CNN "Digi-Key_PN"
F 5 "0022232041" H 3800 6300 60  0001 L CNN "MPN"
F 6 "Connectors, Interconnects" H 3800 6400 60  0001 L CNN "Category"
F 7 "Rectangular Connectors - Headers, Male Pins" H 3800 6500 60  0001 L CNN "Family"
F 8 "https://www.molex.com/pdm_docs/sd/022232041_sd.pdf" H 3800 6600 60  0001 L CNN "DK_Datasheet_Link"
F 9 "/product-detail/en/molex/0022232041/WM4202-ND/26671" H 3800 6700 60  0001 L CNN "DK_Detail_Page"
F 10 "CONN HEADER VERT 4POS 2.54MM" H 3800 6800 60  0001 L CNN "Description"
F 11 "Molex" H 3800 6900 60  0001 L CNN "Manufacturer"
F 12 "Active" H 3800 7000 60  0001 L CNN "Status"
	1    3600 5800
	1    0    0    -1  
$EndComp
$Comp
L Device:D D2
U 1 1 5D7310EB
P 10600 4800
F 0 "D2" V 10646 4721 50  0000 R CNN
F 1 "SB140" V 10555 4721 50  0000 R CNN
F 2 "Diode_THT:D_DO-15_P10.16mm_Horizontal" H 10600 4800 50  0001 C CNN
F 3 "~" H 10600 4800 50  0001 C CNN
	1    10600 4800
	0    -1   -1   0   
$EndComp
$Comp
L Switch:SW_Push Baixo1
U 1 1 5D731684
P 9350 5500
F 0 "Baixo1" H 9350 5693 50  0000 C CNN
F 1 "SW_Push" H 9350 5694 50  0001 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H4.3mm" H 9350 5700 50  0001 C CNN
F 3 "~" H 9350 5700 50  0001 C CNN
	1    9350 5500
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push Esquerda1
U 1 1 5D73228A
P 8700 5300
F 0 "Esquerda1" H 8700 5493 50  0000 C CNN
F 1 "SW_Push" H 8700 5494 50  0001 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H4.3mm" H 8700 5500 50  0001 C CNN
F 3 "~" H 8700 5500 50  0001 C CNN
	1    8700 5300
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push Direita1
U 1 1 5D733F48
P 9950 5300
F 0 "Direita1" H 9950 5493 50  0000 C CNN
F 1 "SW_Push" H 9950 5494 50  0001 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H4.3mm" H 9950 5500 50  0001 C CNN
F 3 "~" H 9950 5500 50  0001 C CNN
	1    9950 5300
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push Selecionar1
U 1 1 5D73478A
P 7800 5300
F 0 "Selecionar1" H 7800 5493 50  0000 C CNN
F 1 "SW_Push" H 7800 5494 50  0001 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H4.3mm" H 7800 5500 50  0001 C CNN
F 3 "~" H 7800 5500 50  0001 C CNN
	1    7800 5300
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push Cancelar1
U 1 1 5D735C48
P 6900 5300
F 0 "Cancelar1" H 6900 5493 50  0000 C CNN
F 1 "SW_Push" H 6900 5494 50  0001 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H4.3mm" H 6900 5500 50  0001 C CNN
F 3 "~" H 6900 5500 50  0001 C CNN
	1    6900 5300
	1    0    0    -1  
$EndComp
$Comp
L Device:C C3
U 1 1 5D736AEA
P 6450 4100
F 0 "C3" H 6565 4146 50  0000 L CNN
F 1 "100pF" H 6565 4055 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D4.7mm_W2.5mm_P5.00mm" H 6488 3950 50  0001 C CNN
F 3 "~" H 6450 4100 50  0001 C CNN
	1    6450 4100
	1    0    0    -1  
$EndComp
$Comp
L Device:C C4
U 1 1 5D7372F6
P 7950 1500
F 0 "C4" V 8202 1500 50  0000 C CNN
F 1 "100pF" V 8111 1500 50  0000 C CNN
F 2 "Capacitor_THT:C_Disc_D4.7mm_W2.5mm_P5.00mm" H 7988 1350 50  0001 C CNN
F 3 "~" H 7950 1500 50  0001 C CNN
	1    7950 1500
	0    -1   -1   0   
$EndComp
$Comp
L Device:C C5
U 1 1 5D7384B3
P 10150 5550
F 0 "C5" V 9898 5550 50  0000 C CNN
F 1 "100pF" V 9989 5550 50  0000 C CNN
F 2 "Capacitor_THT:C_Disc_D4.7mm_W2.5mm_P5.00mm" H 10188 5400 50  0001 C CNN
F 3 "~" H 10150 5550 50  0001 C CNN
	1    10150 5550
	0    1    1    0   
$EndComp
$Comp
L Device:R R10
U 1 1 5D747FF1
P 7950 2400
F 0 "R10" V 7743 2400 50  0000 C CNN
F 1 "R" V 7834 2400 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0309_L9.0mm_D3.2mm_P12.70mm_Horizontal" V 7880 2400 50  0001 C CNN
F 3 "~" H 7950 2400 50  0001 C CNN
	1    7950 2400
	0    1    1    0   
$EndComp
$Comp
L Device:R R8
U 1 1 5D748D3A
P 7350 2400
F 0 "R8" V 7143 2400 50  0000 C CNN
F 1 "R" V 7234 2400 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0309_L9.0mm_D3.2mm_P12.70mm_Horizontal" V 7280 2400 50  0001 C CNN
F 3 "~" H 7350 2400 50  0001 C CNN
	1    7350 2400
	0    1    1    0   
$EndComp
$Comp
L Device:R R11
U 1 1 5D749842
P 7950 3050
F 0 "R11" V 7743 3050 50  0000 C CNN
F 1 "R" V 7834 3050 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0309_L9.0mm_D3.2mm_P12.70mm_Horizontal" V 7880 3050 50  0001 C CNN
F 3 "~" H 7950 3050 50  0001 C CNN
	1    7950 3050
	0    1    1    0   
$EndComp
$Comp
L Device:R R9
U 1 1 5D749D1A
P 7350 2850
F 0 "R9" V 7143 2850 50  0000 C CNN
F 1 "R" V 7234 2850 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0309_L9.0mm_D3.2mm_P12.70mm_Horizontal" V 7235 2850 50  0001 C CNN
F 3 "~" H 7350 2850 50  0001 C CNN
	1    7350 2850
	0    1    1    0   
$EndComp
$Comp
L Device:R R2
U 1 1 5D74A020
P 10300 4800
F 0 "R2" H 10370 4846 50  0000 L CNN
F 1 "3k9" H 10370 4755 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0309_L9.0mm_D3.2mm_P12.70mm_Horizontal" V 10230 4800 50  0001 C CNN
F 3 "~" H 10300 4800 50  0001 C CNN
	1    10300 4800
	1    0    0    -1  
$EndComp
$Comp
L Device:R R3
U 1 1 5D74A9FC
P 9350 5950
F 0 "R3" V 9550 5900 50  0000 L CNN
F 1 "220" V 9450 5900 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0309_L9.0mm_D3.2mm_P12.70mm_Horizontal" V 9280 5950 50  0001 C CNN
F 3 "~" H 9350 5950 50  0001 C CNN
	1    9350 5950
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R4
U 1 1 5D74AC62
P 8800 5950
F 0 "R4" V 8593 5950 50  0000 C CNN
F 1 "220" V 8684 5950 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0309_L9.0mm_D3.2mm_P12.70mm_Horizontal" V 8730 5950 50  0001 C CNN
F 3 "~" H 8800 5950 50  0001 C CNN
	1    8800 5950
	0    1    1    0   
$EndComp
$Comp
L Device:R R5
U 1 1 5D74B080
P 8250 5950
F 0 "R5" V 8043 5950 50  0000 C CNN
F 1 "220" V 8134 5950 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0309_L9.0mm_D3.2mm_P12.70mm_Horizontal" V 8180 5950 50  0001 C CNN
F 3 "~" H 8250 5950 50  0001 C CNN
	1    8250 5950
	0    1    1    0   
$EndComp
$Comp
L Device:R R6
U 1 1 5D74B488
P 7700 5950
F 0 "R6" V 7493 5950 50  0000 C CNN
F 1 "220" V 7584 5950 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0309_L9.0mm_D3.2mm_P12.70mm_Horizontal" V 7630 5950 50  0001 C CNN
F 3 "~" H 7700 5950 50  0001 C CNN
	1    7700 5950
	0    1    1    0   
$EndComp
$Comp
L Device:R R7
U 1 1 5D74B8B3
P 6700 5600
F 0 "R7" H 6630 5554 50  0000 R CNN
F 1 "220" H 6630 5645 50  0000 R CNN
F 2 "Resistor_THT:R_Axial_DIN0309_L9.0mm_D3.2mm_P12.70mm_Horizontal" V 6630 5600 50  0001 C CNN
F 3 "~" H 6700 5600 50  0001 C CNN
	1    6700 5600
	-1   0    0    1   
$EndComp
Wire Wire Line
	2400 5500 2550 5500
Wire Wire Line
	2000 5600 2050 5600
Wire Wire Line
	2050 5600 2050 5800
Wire Wire Line
	2050 5800 2200 5800
Wire Wire Line
	2500 5800 2750 5800
Wire Wire Line
	3050 5800 2750 5800
Connection ~ 2750 5800
Wire Wire Line
	3050 5500 2950 5500
Text GLabel 3050 5500 2    50   Input ~ 0
+VIN
$Comp
L Device:CP C1
U 1 1 5D71C3B6
P 3050 5650
F 0 "C1" H 3168 5696 50  0000 L CNN
F 1 "100uF" H 3168 5605 50  0000 L CNN
F 2 "Capacitor_THT:CP_Radial_D5.0mm_P2.50mm" H 3088 5500 50  0001 C CNN
F 3 "~" H 3050 5650 50  0001 C CNN
	1    3050 5650
	1    0    0    -1  
$EndComp
Wire Wire Line
	2000 4600 1950 4600
Wire Wire Line
	1950 4700 2000 4700
Wire Wire Line
	1950 4800 2000 4800
Wire Wire Line
	1950 4900 2000 4900
Wire Wire Line
	1950 5000 2000 5000
Wire Wire Line
	1950 5100 2000 5100
Text GLabel 2000 4600 2    50   Input ~ 0
MD8
Text GLabel 2000 4700 2    50   Input ~ 0
MD9
Text GLabel 2000 4800 2    50   Input ~ 0
MD10
Text GLabel 2000 4900 2    50   Input ~ 0
MD11
Text GLabel 2000 5000 2    50   Input ~ 0
SA
Text GLabel 2000 5100 2    50   Input ~ 0
SB
Text GLabel 2450 3750 0    50   Input ~ 0
30
Text GLabel 2450 3650 0    50   Input ~ 0
29
Text GLabel 2450 3550 0    50   Input ~ 0
28
Text GLabel 2450 3450 0    50   Input ~ 0
27
Text GLabel 2450 3350 0    50   Input ~ 0
26
Text GLabel 2450 3250 0    50   Input ~ 0
25
Text GLabel 2450 3150 0    50   Input ~ 0
24
Text GLabel 2450 3050 0    50   Input ~ 0
23
Text GLabel 2450 2950 0    50   Input ~ 0
22
Text GLabel 2450 2850 0    50   Input ~ 0
21
Text GLabel 2450 2750 0    50   Input ~ 0
20
Text GLabel 2450 2650 0    50   Input ~ 0
19
Text GLabel 2450 2550 0    50   Input ~ 0
18
Text GLabel 2450 2450 0    50   Input ~ 0
17
Text GLabel 2450 2350 0    50   Input ~ 0
16
Text GLabel 2850 2950 2    50   Input ~ 0
15
Text GLabel 2850 2850 2    50   Input ~ 0
14
Text GLabel 2850 2750 2    50   Input ~ 0
13
Text GLabel 2850 2650 2    50   Input ~ 0
12
Text GLabel 2850 2550 2    50   Input ~ 0
11
Text GLabel 2850 2450 2    50   Input ~ 0
10
Text GLabel 2850 2350 2    50   Input ~ 0
9
Text GLabel 2850 3050 2    50   Input ~ 0
1
Text GLabel 2850 3150 2    50   Input ~ 0
2
Text GLabel 2850 3250 2    50   Input ~ 0
3
Text GLabel 2850 3350 2    50   Input ~ 0
4
Text GLabel 2850 3450 2    50   Input ~ 0
5
Text GLabel 2850 3550 2    50   Input ~ 0
6
Text GLabel 2850 3650 2    50   Input ~ 0
7
Text GLabel 2850 3750 2    50   Input ~ 0
8
Text GLabel 3950 2450 0    50   Input ~ 0
1
Text GLabel 3950 2350 0    50   Input ~ 0
2
Text GLabel 3950 2550 0    50   Input ~ 0
5
Text GLabel 3950 2650 0    50   Input ~ 0
6
Text GLabel 3950 2750 0    50   Input ~ 0
7
Text GLabel 3950 2850 0    50   Input ~ 0
8
Text GLabel 3950 2950 0    50   Input ~ 0
9
Text GLabel 3950 3050 0    50   Input ~ 0
10
Text GLabel 3950 3150 0    50   Input ~ 0
11
Text GLabel 3950 3250 0    50   Input ~ 0
12
Text GLabel 3950 3350 0    50   Input ~ 0
13
Text GLabel 3950 3450 0    50   Input ~ 0
14
Text GLabel 3950 3550 0    50   Input ~ 0
15
Text GLabel 3950 3650 0    50   Input ~ 0
16
Text GLabel 4350 1950 1    50   Input ~ 0
30
Text GLabel 4550 1950 1    50   Input ~ 0
17
Text GLabel 4650 1950 1    50   Input ~ 0
27
Text GLabel 4950 2350 2    50   Input ~ 0
28
Text GLabel 4950 2450 2    50   Input ~ 0
3
Text GLabel 4950 2750 2    50   Input ~ 0
18
Text GLabel 4950 2950 2    50   Input ~ 0
19
Text GLabel 4950 3050 2    50   Input ~ 0
20
Text GLabel 4950 3150 2    50   Input ~ 0
21
Text GLabel 4950 3250 2    50   Input ~ 0
22
Text GLabel 4950 3350 2    50   Input ~ 0
23
Text GLabel 4950 3450 2    50   Input ~ 0
24
Text GLabel 4950 3550 2    50   Input ~ 0
25
Text GLabel 4950 3650 2    50   Input ~ 0
26
Text GLabel 4450 3950 3    50   Input ~ 0
4
Text GLabel 4550 3950 3    50   Input ~ 0
29
Wire Wire Line
	10300 4650 10600 4650
Wire Wire Line
	10300 4950 10600 4950
Wire Wire Line
	10300 5550 10300 5300
Wire Wire Line
	10300 5300 10150 5300
Wire Wire Line
	10300 5300 10300 4950
Connection ~ 10300 5300
Connection ~ 10300 4950
Wire Wire Line
	9550 5050 9550 5300
Wire Wire Line
	9750 5300 9550 5300
Connection ~ 9550 5300
Wire Wire Line
	9550 5300 9550 5500
Wire Wire Line
	10000 5550 9850 5550
Wire Wire Line
	9550 5550 9550 5500
Connection ~ 9550 5500
$Comp
L power:GND #PWR0101
U 1 1 5D7A96BA
P 9850 5550
F 0 "#PWR0101" H 9850 5300 50  0001 C CNN
F 1 "GND" H 9855 5377 50  0000 C CNN
F 2 "" H 9850 5550 50  0001 C CNN
F 3 "" H 9850 5550 50  0001 C CNN
	1    9850 5550
	1    0    0    -1  
$EndComp
Connection ~ 9850 5550
Wire Wire Line
	9850 5550 9550 5550
Wire Wire Line
	7100 5300 7100 5550
Wire Wire Line
	7100 5550 8000 5550
Connection ~ 9550 5550
Wire Wire Line
	8000 5300 8000 5550
Connection ~ 8000 5550
Wire Wire Line
	8000 5550 8900 5550
Wire Wire Line
	8900 5300 8900 5550
Connection ~ 8900 5550
Wire Wire Line
	8900 5550 9550 5550
$Comp
L Switch:SW_Push Cima1
U 1 1 5D71FB06
P 9350 5050
F 0 "Cima1" H 9350 5243 50  0000 C CNN
F 1 "SW_Push" H 9350 5244 50  0001 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H4.3mm" H 9350 5250 50  0001 C CNN
F 3 "~" H 9350 5250 50  0001 C CNN
	1    9350 5050
	1    0    0    -1  
$EndComp
Wire Wire Line
	9150 5500 9150 5950
Wire Wire Line
	9150 5950 9200 5950
Wire Wire Line
	9150 5050 9050 5050
Wire Wire Line
	9050 5050 9050 5700
Wire Wire Line
	9050 5700 8550 5700
Wire Wire Line
	8550 5700 8550 5950
Wire Wire Line
	8550 5950 8650 5950
Wire Wire Line
	8500 5300 8500 5650
Wire Wire Line
	8500 5650 8000 5650
Wire Wire Line
	8000 5650 8000 5950
Wire Wire Line
	8000 5950 8100 5950
Wire Wire Line
	7600 5300 7600 5650
Wire Wire Line
	7600 5650 7450 5650
Wire Wire Line
	7450 5650 7450 5950
Wire Wire Line
	7450 5950 7550 5950
Wire Wire Line
	6700 5300 6700 5450
Wire Wire Line
	6700 5750 6700 5950
Wire Wire Line
	6700 5950 7450 5950
Connection ~ 7450 5950
Wire Wire Line
	7850 5950 8000 5950
Connection ~ 8000 5950
Wire Wire Line
	8400 5950 8550 5950
Connection ~ 8550 5950
Wire Wire Line
	8950 5950 9150 5950
Connection ~ 9150 5950
Wire Wire Line
	9500 5950 10300 5950
Wire Wire Line
	10300 5950 10300 5550
Connection ~ 10300 5550
Text GLabel 10300 5950 2    50   Input ~ 0
KB
$Comp
L Connector:USB_B USB1
U 1 1 5D7C6EB8
P 1550 1850
F 0 "USB1" H 1607 2317 50  0000 C CNN
F 1 "USB_B" H 1607 2226 50  0000 C CNN
F 2 "Connector_USB:USB_B_OST_USB-B1HSxx_Horizontal" H 1700 1800 50  0001 C CNN
F 3 " ~" H 1700 1800 50  0001 C CNN
	1    1550 1850
	1    0    0    -1  
$EndComp
Wire Wire Line
	1450 2250 1550 2250
Wire Wire Line
	1850 1650 2100 1650
Wire Wire Line
	1850 1850 1850 1750
Wire Wire Line
	1850 1750 2100 1750
Wire Wire Line
	1850 1950 1950 1950
Wire Wire Line
	1950 1950 1950 1850
Wire Wire Line
	1950 1850 2100 1850
Wire Wire Line
	2100 1950 2050 1950
Wire Wire Line
	2050 1950 2050 2250
Wire Wire Line
	2050 2250 1900 2250
Connection ~ 1550 2250
Text GLabel 5250 5900 2    50   Input ~ 0
+5V
Text GLabel 4850 5950 2    50   Input ~ 0
SDA
Text GLabel 4850 6050 2    50   Input ~ 0
SCL
$Comp
L power:GND #PWR0102
U 1 1 5D7D6B44
P 5250 5600
F 0 "#PWR0102" H 5250 5350 50  0001 C CNN
F 1 "GND" V 5255 5472 50  0000 R CNN
F 2 "" H 5250 5600 50  0001 C CNN
F 3 "" H 5250 5600 50  0001 C CNN
	1    5250 5600
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR0103
U 1 1 5D7D76B4
P 2050 5800
F 0 "#PWR0103" H 2050 5550 50  0001 C CNN
F 1 "GND" H 2055 5627 50  0000 C CNN
F 2 "" H 2050 5800 50  0001 C CNN
F 3 "" H 2050 5800 50  0001 C CNN
	1    2050 5800
	1    0    0    -1  
$EndComp
Connection ~ 2050 5800
Text GLabel 3600 5450 0    50   Input ~ 0
+VOUT
$Comp
L power:GND #PWR0104
U 1 1 5D7D825F
P 3700 5700
F 0 "#PWR0104" H 3700 5450 50  0001 C CNN
F 1 "GND" H 3705 5527 50  0000 C CNN
F 2 "" H 3700 5700 50  0001 C CNN
F 3 "" H 3700 5700 50  0001 C CNN
	1    3700 5700
	-1   0    0    1   
$EndComp
Text GLabel 3800 5450 2    50   Input ~ 0
+VIN
Wire Wire Line
	2000 5500 2050 5500
$Comp
L power:VCC #PWR0105
U 1 1 5D7DDD26
P 2050 5500
F 0 "#PWR0105" H 2050 5350 50  0001 C CNN
F 1 "VCC" H 2067 5673 50  0000 C CNN
F 2 "" H 2050 5500 50  0001 C CNN
F 3 "" H 2050 5500 50  0001 C CNN
	1    2050 5500
	1    0    0    -1  
$EndComp
Connection ~ 2050 5500
Wire Wire Line
	2050 5500 2100 5500
Wire Wire Line
	8300 2100 8300 2400
Wire Wire Line
	7700 2200 7650 2200
Wire Wire Line
	7650 2200 7650 2400
Wire Wire Line
	7650 2850 7700 2850
Wire Wire Line
	7700 2000 7250 2000
Wire Wire Line
	7700 2650 7250 2650
Text GLabel 7250 2000 0    50   Input ~ 0
SA
Text GLabel 7250 2650 0    50   Input ~ 0
SB
Wire Wire Line
	8100 2400 8300 2400
Connection ~ 8300 2400
Wire Wire Line
	8300 2400 8300 2750
Wire Wire Line
	7800 2400 7650 2400
Connection ~ 7650 2400
Wire Wire Line
	7650 2400 7650 2850
Wire Wire Line
	7500 2400 7650 2400
Wire Wire Line
	8100 3050 8300 3050
Wire Wire Line
	8300 3050 8300 2750
Connection ~ 8300 2750
Wire Wire Line
	7800 3050 7650 3050
Wire Wire Line
	7650 3050 7650 2850
Connection ~ 7650 2850
Wire Wire Line
	7500 2850 7650 2850
Wire Wire Line
	7200 2850 6900 2850
Wire Wire Line
	6900 2850 6900 2400
Wire Wire Line
	6900 2400 7200 2400
$Comp
L power:GND #PWR0106
U 1 1 5D805DCA
P 6900 2400
F 0 "#PWR0106" H 6900 2150 50  0001 C CNN
F 1 "GND" V 6905 2272 50  0000 R CNN
F 2 "" H 6900 2400 50  0001 C CNN
F 3 "" H 6900 2400 50  0001 C CNN
	1    6900 2400
	0    1    1    0   
$EndComp
Connection ~ 6900 2400
Text GLabel 2450 3850 0    50   Input ~ 0
+VOUT
$Comp
L power:GND #PWR0107
U 1 1 5D813B7E
P 2850 3850
F 0 "#PWR0107" H 2850 3600 50  0001 C CNN
F 1 "GND" V 2855 3722 50  0000 R CNN
F 2 "" H 2850 3850 50  0001 C CNN
F 3 "" H 2850 3850 50  0001 C CNN
	1    2850 3850
	0    -1   1    0   
$EndComp
Text GLabel 10450 4650 1    50   Input ~ 0
+5V
$Comp
L power:GND #PWR0108
U 1 1 5D81CA21
P 1900 2250
F 0 "#PWR0108" H 1900 2000 50  0001 C CNN
F 1 "GND" H 1905 2077 50  0000 C CNN
F 2 "" H 1900 2250 50  0001 C CNN
F 3 "" H 1900 2250 50  0001 C CNN
	1    1900 2250
	1    0    0    -1  
$EndComp
Connection ~ 1900 2250
Wire Wire Line
	1900 2250 1550 2250
$Comp
L power:+5V #PWR0109
U 1 1 5D81E19B
P 3600 5100
F 0 "#PWR0109" H 3600 4950 50  0001 C CNN
F 1 "+5V" H 3615 5273 50  0000 C CNN
F 2 "" H 3600 5100 50  0001 C CNN
F 3 "" H 3600 5100 50  0001 C CNN
	1    3600 5100
	1    0    0    -1  
$EndComp
Text GLabel 3800 4200 0    50   Input ~ 0
4
Text GLabel 3800 4300 0    50   Input ~ 0
29
Text GLabel 3800 4500 0    50   Input ~ 0
27
Wire Wire Line
	3800 4200 3850 4200
Wire Wire Line
	3850 4200 3850 4250
Wire Wire Line
	3850 4300 3800 4300
$Comp
L power:GND #PWR0110
U 1 1 5D82319E
P 3850 4250
F 0 "#PWR0110" H 3850 4000 50  0001 C CNN
F 1 "GND" V 3855 4122 50  0000 R CNN
F 2 "" H 3850 4250 50  0001 C CNN
F 3 "" H 3850 4250 50  0001 C CNN
	1    3850 4250
	0    -1   -1   0   
$EndComp
Connection ~ 3850 4250
Wire Wire Line
	3850 4250 3850 4300
$Comp
L power:+5V #PWR0111
U 1 1 5D8239EC
P 3850 4550
F 0 "#PWR0111" H 3850 4400 50  0001 C CNN
F 1 "+5V" V 3865 4678 50  0000 L CNN
F 2 "" H 3850 4550 50  0001 C CNN
F 3 "" H 3850 4550 50  0001 C CNN
	1    3850 4550
	0    1    1    0   
$EndComp
Text GLabel 3800 4600 0    50   Input ~ 0
+5V
Wire Wire Line
	3850 4500 3850 4550
Wire Wire Line
	3850 4600 3800 4600
Connection ~ 3850 4550
Wire Wire Line
	3850 4550 3850 4600
$Comp
L power:VCC #PWR0112
U 1 1 5D81A2D5
P 6050 3950
F 0 "#PWR0112" H 6050 3800 50  0001 C CNN
F 1 "VCC" H 6067 4123 50  0000 C CNN
F 2 "" H 6050 3950 50  0001 C CNN
F 3 "" H 6050 3950 50  0001 C CNN
	1    6050 3950
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0113
U 1 1 5D819A05
P 6050 4250
F 0 "#PWR0113" H 6050 4000 50  0001 C CNN
F 1 "GND" H 6055 4077 50  0000 C CNN
F 2 "" H 6050 4250 50  0001 C CNN
F 3 "" H 6050 4250 50  0001 C CNN
	1    6050 4250
	1    0    0    -1  
$EndComp
Text GLabel 6450 4250 3    50   Input ~ 0
29
Text GLabel 6450 3950 1    50   Input ~ 0
30
$Comp
L Amplifier_Operational:LM358 U1
U 3 1 5D82B9FB
P 7900 1650
F 0 "U1" V 7900 1700 50  0000 L CNN
F 1 "LM358" V 7900 1400 50  0000 L CNN
F 2 "Package_DIP:DIP-8_W7.62mm_LongPads" H 7900 1650 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/lm2904-n.pdf" H 7900 1650 50  0001 C CNN
	3    7900 1650
	0    -1   -1   0   
$EndComp
Text GLabel 7600 1750 0    50   Input ~ 0
+VIN
$Comp
L power:GND #PWR0114
U 1 1 5D82EB76
P 8200 1750
F 0 "#PWR0114" H 8200 1500 50  0001 C CNN
F 1 "GND" V 8205 1622 50  0000 R CNN
F 2 "" H 8200 1750 50  0001 C CNN
F 3 "" H 8200 1750 50  0001 C CNN
	1    8200 1750
	0    -1   -1   0   
$EndComp
Wire Wire Line
	8100 1500 8200 1500
Wire Wire Line
	8200 1500 8200 1750
Connection ~ 8200 1750
Wire Wire Line
	7800 1500 7600 1500
$Comp
L Device:C C6
U 1 1 5D895629
P 5250 5750
F 0 "C6" H 5365 5796 50  0000 L CNN
F 1 "100pF" H 5365 5705 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D4.7mm_W2.5mm_P5.00mm" H 5288 5600 50  0001 C CNN
F 3 "~" H 5250 5750 50  0001 C CNN
	1    5250 5750
	1    0    0    -1  
$EndComp
Wire Wire Line
	4850 5750 4950 5750
Wire Wire Line
	4950 5750 4950 5600
Wire Wire Line
	4950 5600 5250 5600
Connection ~ 5250 5600
Wire Wire Line
	4850 5850 5200 5850
Wire Wire Line
	5200 5850 5200 5900
Wire Wire Line
	5200 5900 5250 5900
Text GLabel 1900 3500 2    50   Input ~ 0
MD11
Text GLabel 1900 3600 2    50   Input ~ 0
MD10
Text GLabel 1900 3700 2    50   Input ~ 0
MD9
Text GLabel 1900 3800 2    50   Input ~ 0
MD8
Text GLabel 1650 3600 0    50   Input ~ 0
9
Text GLabel 1650 3700 0    50   Input ~ 0
10
Text GLabel 1650 3800 0    50   Input ~ 0
11
Text GLabel 1650 3500 0    50   Input ~ 0
8
Wire Wire Line
	1650 3800 1900 3800
Wire Wire Line
	1900 3700 1650 3700
Wire Wire Line
	1650 3600 1900 3600
Wire Wire Line
	1900 3500 1650 3500
Text GLabel 8300 2550 2    50   Input ~ 0
S
Text GLabel 1900 2950 2    50   Input ~ 0
KB
Text GLabel 1900 3100 2    50   Input ~ 0
S
Text GLabel 1900 3250 2    50   Input ~ 0
SDA
Text GLabel 1900 3350 2    50   Input ~ 0
SCL
Text GLabel 1650 2950 0    50   Input ~ 0
19
Text GLabel 1650 3100 0    50   Input ~ 0
20
Text GLabel 1650 3250 0    50   Input ~ 0
23
Text GLabel 1650 3350 0    50   Input ~ 0
24
Wire Wire Line
	1650 3350 1900 3350
Wire Wire Line
	1650 3250 1900 3250
Wire Wire Line
	1650 3100 1900 3100
Wire Wire Line
	1650 2950 1900 2950
$Comp
L TCC-rescue:22-23-2021-dk_Rectangular-Connectors-Headers-Male-Pins J2
U 1 1 5D72AC65
P 3500 5100
F 0 "J2" H 3412 5062 50  0000 R CNN
F 1 "22-23-2021" H 3412 5153 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 3700 5300 60  0001 L CNN
F 3 "https://media.digikey.com/pdf/Data%20Sheets/Molex%20PDFs/A-6373-N_Series_Dwg_2010-12-03.pdf" H 3700 5400 60  0001 L CNN
F 4 "WM4200-ND" H 3700 5500 60  0001 L CNN "Digi-Key_PN"
F 5 "22-23-2021" H 3700 5600 60  0001 L CNN "MPN"
F 6 "Connectors, Interconnects" H 3700 5700 60  0001 L CNN "Category"
F 7 "Rectangular Connectors - Headers, Male Pins" H 3700 5800 60  0001 L CNN "Family"
F 8 "https://media.digikey.com/pdf/Data%20Sheets/Molex%20PDFs/A-6373-N_Series_Dwg_2010-12-03.pdf" H 3700 5900 60  0001 L CNN "DK_Datasheet_Link"
F 9 "/product-detail/en/molex/22-23-2021/WM4200-ND/26667" H 3700 6000 60  0001 L CNN "DK_Detail_Page"
F 10 "CONN HEADER VERT 2POS 2.54MM" H 3700 6100 60  0001 L CNN "Description"
F 11 "Molex" H 3700 6200 60  0001 L CNN "Manufacturer"
F 12 "Active" H 3700 6300 60  0001 L CNN "Status"
	1    3500 5100
	0    1    1    0   
$EndComp
$Comp
L TCC-rescue:Female_Header_16x02_2.54 PinsOut1
U 1 1 5D789C96
P 2650 3100
F 0 "PinsOut1" H 2650 4075 50  0000 C CNN
F 1 "Female_Header_16x02_2.54" H 2650 3984 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_2x16_P2.54mm_Vertical" H 2650 2200 50  0001 C CNN
F 3 "" H 2650 2200 50  0001 C CNN
	1    2650 3100
	1    0    0    -1  
$EndComp
Text GLabel 2900 4700 0    50   Input ~ 0
+VIN
Text GLabel 2900 4800 0    50   Input ~ 0
30
Wire Wire Line
	3800 5700 3800 5450
Text GLabel 3600 5100 2    50   Input ~ 0
+5V
Wire Wire Line
	3600 5200 3600 5700
Wire Wire Line
	3800 4500 3850 4500
$Comp
L TCC-rescue:22-23-2021-dk_Rectangular-Connectors-Headers-Male-Pins J4
U 1 1 5D7BF7C3
P 3000 4800
F 0 "J4" H 2912 4762 50  0000 R CNN
F 1 "22-23-2021" H 2912 4853 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 3200 5000 60  0001 L CNN
F 3 "https://media.digikey.com/pdf/Data%20Sheets/Molex%20PDFs/A-6373-N_Series_Dwg_2010-12-03.pdf" H 3200 5100 60  0001 L CNN
F 4 "WM4200-ND" H 3200 5200 60  0001 L CNN "Digi-Key_PN"
F 5 "22-23-2021" H 3200 5300 60  0001 L CNN "MPN"
F 6 "Connectors, Interconnects" H 3200 5400 60  0001 L CNN "Category"
F 7 "Rectangular Connectors - Headers, Male Pins" H 3200 5500 60  0001 L CNN "Family"
F 8 "https://media.digikey.com/pdf/Data%20Sheets/Molex%20PDFs/A-6373-N_Series_Dwg_2010-12-03.pdf" H 3200 5600 60  0001 L CNN "DK_Datasheet_Link"
F 9 "/product-detail/en/molex/22-23-2021/WM4200-ND/26667" H 3200 5700 60  0001 L CNN "DK_Detail_Page"
F 10 "CONN HEADER VERT 2POS 2.54MM" H 3200 5800 60  0001 L CNN "Description"
F 11 "Molex" H 3200 5900 60  0001 L CNN "Manufacturer"
F 12 "Active" H 3200 6000 60  0001 L CNN "Status"
	1    3000 4800
	0    -1   -1   0   
$EndComp
Wire Wire Line
	7600 1500 7600 1750
$EndSCHEMATC
