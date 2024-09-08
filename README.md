# Lichtschranke-M
Open sensor for use with any standard light barrier on a Mobile Cassy

## Testing
For testing I included an Arduino simulator code. For this you need to connect the I<sup>2</sup>C pins of your Arduino (e.g. on a Uno Pins the upper right ones) to the I<sup>2</sup>C pins of the Cassy Mini-DIN interface (SDA: 1 and SCK: 5) as well as pin 7 of the Arduino (change this, if this is no digital out on your Arduino) to pin 2.

## Programming your ATTiny25
The included ino file is intended for use with the Arduino IDE and any Arduino as an ISP Programmer. You need to:
* load the ISP sketch from the examples onto your arduino
* connect the Arduino to the ATTiny according to these instructions: https://wolles-elektronikkiste.de/en/programming-attiny-with-arduino-code (ATtiny85 features the same pin layout)
* install ATTinyCore according to the link above
* when using other ATTiny chips check the datasheet or the ATtinyCore repo: https://github.com/SpenceKonde/ATTinyCore/blob/v2.0.0-devThis-is-the-head-submit-PRs-against-this/avr/extras/ATtiny_x5.md
* upload the sketch as described

There are of course countless other ways to program your ATtiny.

## Schematic and PCB
The schematic and PCB files were created with KiCAD. Be aware that earlier photos on my blog show a switched J4/J5 label (GND and 5V) as well as an incorrectly poloarized C2.

## BOM
You need the following (given in brackets are Reichelt ordering numbers for reference):


| Part Label  | Description | Form factor | Reichelt number |
| ------------- | ------------- | ------------- | ------------- |
| U1  |  ATiny25 | DIP-8 | ATTINY 25-20 PU |
| U2 | USBLC6 in a | SOT-23-6 |  USBLC6-2SC6 |
| C1, C3 | 50V 100nF ceramic cap | 1206 |  WAL 1206B104K500 |
| C2 | 50V 10µF electrolytic cap | RM2,5 |  SU-A 10U 50|
| R1, R2 | 0,25W 5K1 resistor | 0207 |  1/4W 5,1K |
| J1 | Mini-Din 6 connector | N/A | EB-DIOS M06 |
| J2-J5 | 4mm ID, 5mm OD brass tube | N/A | N/A |
| ------------- | ------------- | ------------- | ------------- |

## Gerber and drill files
The gerber and drill files were exported from KiCAD and are ready to be sent to any PCB manufacturer of your choice. The PCB design features no vias. Any standard double sided process will suffice.

## 3D-printed case
A 3D printable case is currently in development.
