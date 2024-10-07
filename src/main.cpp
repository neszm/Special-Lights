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
  while (Serial.available())
  {
    if (Serial.parseint() == 1)
    {
      Addition(int x, int y);
    }
    if (Serial.parseint() == 2)
    {
      Multiplication(int x, int y);
    }
  }
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