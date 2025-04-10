#include <Arduino.h>
#include <UMS3.h>

UMS3 ums3;
int val = 0;
// put function declarations here:

void setup() {
  ums3.begin();
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //myFunction();
  
  digitalWrite(12, val);
  
  if (val > 255) {
    val = 0;
  } else {
    val ++;
  }
  delay(100);
}

// put function definitions here:
void myFunction() {
  
}