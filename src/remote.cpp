#include <remote.h>

void setup() {
  ums3.begin();

  initPeripherals();
  initRotary();
  delay(3000);
  
  Serial.println("Starting!");
  delay(1000);
  initSender();

}

void loop() {
  readJoysticks();
  readSwitches();
  readRotary();
  
  //sendData();
  printData();
  //delay(20);
}
