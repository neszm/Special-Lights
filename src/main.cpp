#include <Arduino.h>

// put function declarations here:
int Multiplication(int, int);
int Addition(int, int);

int x, y, n;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
Serial.println("Do you want addition (1) or multiplication (2)? Input the number (1 or 2):");
while (Serial.available() == 0) {
}
n = Serial.parseInt();

Serial.println("Number 1:");
while (Serial.available() == 0) {
}
x = Serial.parseInt();

Serial.println("Number 2:");
while (Serial.available() == 0) {
}
y = Serial.parseInt();

if (Serial.parseInt() == 1) {
  Addition(x, y);
}

else if (Serial.parseInt() == 2) {
  Multiplication(x, y);
}

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