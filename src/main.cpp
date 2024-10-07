#include <Arduino.h>

// put function declarations here:
int Multiplication(int, int);
int Addition(int, int);

void setup() 
{
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
Serial.println("Do you want addition (1) or multiplication (2)? Input the number (1 or 2):");
while (Serial.available() == 0) {
}
int n = Serial.parseInt();

Serial.println("Number 1:");
while (Serial.available() == 0) {
}
int x = Serial.parseInt();

Serial.println("Number 2:");
while (Serial.available() == 0) {
}
int y = Serial.parseInt();

}

void loop() 
{
  // put your main code here, to run repeatedly:
  digitalwrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

// put function definitions here:
int Multiplication(int x, int y) {
  return x * y;
}
int Addition(int x, int y) {
  return x + y;
 }