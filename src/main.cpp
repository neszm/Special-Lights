#include <Arduino.h>

// put function declarations here:
int Multiplication(int, int);
int Addition(int, int);

void setup() 
{
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
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