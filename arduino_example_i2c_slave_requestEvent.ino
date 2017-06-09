//Slave 1

#include <Wire.h>

#define myAdress 0x08

void setup() {
  Serial.begin(115200);
  Wire.begin(myAdress);
  Wire.onReceive(receiveEvent);
  Wire.onRequest(requestEvent);
}

void requestEvent(){
  Wire.write("H");
  Wire.write("E");
  Wire.write("L");
  Wire.write("L");
  Wire.write("O");
}

void receiveEvent(int howMany) {
  if (Wire.available()) {
    char received = Wire.read();
    Serial.print(received);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
