# Tubo

## Description

Tubo is a easy to use mini esp32 with built in battery charger and easy to use pins!

## Motivation

I am building this because an esp32 with a battery charger in a small form would be nice for projects like macropads, mp3 players, lights, etc. without the hussle of wiring all kind of charging modules and using 2 different cables, one to charge and one to program the board.

---

## Pictures

### 3D Model
![3D Model](images/3d_model.png)

### PCB
![PCB Layout](images/pcb.png)

---

## BOM

| Item | Designator | Component | Package | Qty | Link |
| :--- | :--- | :--- | :--- | :--- | :--- |
| 1 | U1 | ESP32-D0WD-V3 | QFN-48 | 1 | [LCSC C473041](https://www.lcsc.com/product-detail/Microcontroller-Units-MCUs-MPUs-SOCs_Espressif-Systems-ESP32-D0WD-V3_C473041.html) |
| 2 | U3 | W25Q32JVSSIQ | SOIC-8 | 1 | [LCSC C82320](https://www.lcsc.com/product-detail/NOR-FLASH_Winbond-Elec-W25Q32JVSSIQ_C82320.html) |
| 3 | U4 | TP4056 | SOP-8-PP | 1 | [LCSC C16581](https://www.lcsc.com/product-detail/Battery-Management-ICs_TOP-POWER-TP4056_C16581.html) |
| 4 | LDO1 | ME6211C33M5G | SOT-23-5 | 1 | [LCSC C82942](https://www.lcsc.com/product-detail/Linear-Voltage-Regulators-LDO_MICRONE-Nanjing-Micro-One-Elec-ME6211C33M5G_C82942.html) |
| 5 | X1 | 40MHz Crystal | SMD-3225-4P | 1 | [LCSC C32408](https://www.lcsc.com/product-detail/Crystals_YXC-X322540MOB4SI_C32408.html) |
| 6 | USB1 | USB-C 16-Pin | SMD | 1 | [LCSC C2765186](https://www.lcsc.com/product-detail/USB-Connectors_Korean-Hroparts-Elec-TYPE-C-31-M-12_C2765186.html) |
| 7 | ANT1 | 2.4GHz Antenna | 0805 | 1 | [LCSC C73087](https://www.lcsc.com/product-detail/Antennas_Walsin-Tech-Corp-RFANT3216120A5T_C73087.html) |
| 8 | S1, S2 | Tactile Button | SMD | 2 | [LCSC C318884](https://www.lcsc.com/product-detail/Tactile-Switches_XKB-Enterprise-TS-1187A-C-A-B_C318884.html) |
| 9 | D1, D2 | LEDs (Red, Green) | 0603 | 2 | [LCSC C2286](https://www.lcsc.com/product-detail/Light-Emitting-Diodes-LED_Everlight-Elec-19-217-R6C-AL1M2VY-3T_C2286.html) |
| 10 | H1, H2 | 1x8 Pin Header | 2.54mm | 2 | [LCSC C492404](https://www.lcsc.com/product-detail/Pin-Headers_BOOMELE-Boom-Precision-Elec-1-8P-2-54mm_C492404.html) |
| 11 | C1-C15 | Capacitors | 0603 | 15 | [LCSC C14663](https://www.lcsc.com/product-detail/Multilayer-Ceramic-Capacitors-MLCC-SMD-SMT_Samsung-Electro-Mechanics-CL10B104KB8NNNC_C14663.html) |
| 12 | R1-R8 | Resistors | 0603 | 8 | [LCSC C25804](https://www.lcsc.com/product-detail/Chip-Resistor-Surface-Mount_UNI-ROYAL-Uniroyal-Elec-0603WAF5101T5E_C25804.html) |
