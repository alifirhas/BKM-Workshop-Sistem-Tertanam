#include <Servo.h>

Servo servo1;
int potensio = A0;
int nilaiSensor;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(10);
  pinMode(potensio, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  nilaiSensor = analogRead(potensio);
  nilaiSensor = map(nilaiSensor, 0, 1023, 0, 180);
  servo1.write(nilaiSensor);
  delay(500);
}
