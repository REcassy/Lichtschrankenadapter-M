#include <Wire.h>
uint8_t answer[4]={0x00,0x08, 0x00, 0x8F}; // Dieser Code ist die Katalognummer in Hexadezimalformat

void I2C_RxHandler(int numBytes)
{
  Wire.write(answer, sizeof(answer)); // Auf jede Frage mit unserer Nummer reagieren
}
 
void setup() {
  pinMode(7, OUTPUT);
  Wire.setClock(250000); // 250 khZ Frequnz
  Wire.begin(0x50); // Auf Adresse 50h reagieren
  Wire.onRequest(I2C_RxHandler);
}
 
void loop() {
  // Optional zur Simulierung einer Lichtschranke
  digitalWrite(7, HIGH);
  delay(750);
  digitalWrite(7, LOW);
  delay(750);
}
