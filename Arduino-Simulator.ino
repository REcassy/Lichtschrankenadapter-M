#include <Wire.h> // I2C Library
uint8_t answer[4]={0x00,0x08, 0x00, 0x8F}; // This code is the sensor catalogue number

void I2C_RxHandler(int numBytes) {
  Wire.write(answer, sizeof(answer)); // Simply answer every request with out number
}
 
void setup() {
  Wire.setClock(250000); // 250 khZ frequency
  Wire.begin(0x50); // adress 0x50
  Wire.onRequest(I2C_RxHandler);
}

void loop() {
  // Toggling pin 7
  digitalWrite(7, HIGH);
  delay(750);
  digitalWrite(7, LOW);
  delay(750);
}
