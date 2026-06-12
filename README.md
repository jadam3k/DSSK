# DSSK

## About The Project.
This project is just a USB -> UART -> USB converter using ESP32E. Thats simple project you get the same signals everywhere but this is cool and stupid :)


## SCREENS

<img width="947" height="621" alt="Zrzut ekranu 2026-06-12 084100" src="https://github.com/user-attachments/assets/61ed7557-b759-49bb-8b8d-e9cef8798ae7" />
<img width="858" height="722" alt="Zrzut ekranu 2026-06-12 084052" src="https://github.com/user-attachments/assets/50b1c8d9-998d-4333-909b-8aa5cf28b67a" />
<img width="984" height="775" alt="Zrzut ekranu 2026-06-12 084046" src="https://github.com/user-attachments/assets/adc6a939-8201-4cd5-89f4-c4fcee7bde62" />



## BOM

| References         | Value           | Footprint                     | Quantity |
|-------------------|-----------------|-------------------------------|---------:|
| C3, C4, C6, C7, C8 | 0.1uF          | C_0805_2012Metric             |        5 |
| C1, C2, C5         | 10uF           | C_0805_2012Metric             |        3 |
| R1, R2             | 10k            | R_0805_2012Metric             |        2 |
| U1, U3             | CH340C         | SOIC-16_3.9x9.9mm_P1.27mm     |        2 |
| U2                 | AMS1117-3.3    | SOT-223-3_TabPin2             |        1 |
| U4                 | ESP32-WROOM-32E| WIFI-SMD_ESP32-WROOM-32E      |        1 |
| SW1                | BOOT           | SW_PUSH_6mm                   |        1 |
| SW2                | RESET          | SW_PUSH_6mm                   |        1 |
| J1, J2             | USB_B_Micro    | USB_Micro-B_Molex-105017-0001 |        2 |
