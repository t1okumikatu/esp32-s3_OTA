#define ESP32_RTOS
#include "src/OTA.h"
#define LED 21
void setup() {
  Serial.begin(115200);
  Serial.println("Booting");
  setupOTA("kick_Sketch", "Buffalo-G-7900", "46uppwbxjnnnr");
  // Your setup code
  pinMode(LED,OUTPUT);
}

void loop() {
  // Your code here
  digitalWrite(LED,HIGH);
  delay(100);
  digitalWrite(LED,LOW);
  delay(100);
}