//Master

#include <Wire.h>

void setup() {
  Serial.begin(115200);
  Wire.begin();

}

void loop() {
  delay(1000);
  Wire.requestFrom(0x08,5);
  while (Wire.available()){
    char c = Wire.read();
    Serial.print(c);
  }
  Serial.println();
  delay(1000);
  Wire.requestFrom(0x09,6);
  while (Wire.available()){
    char c = Wire.read();
    Serial.print(c);
  }
  Wire.requestFrom(0x09,6);
  while (Wire.available()){
    char c = Wire.read();
    Serial.print(c);
  }
  Serial.println();
  
}
