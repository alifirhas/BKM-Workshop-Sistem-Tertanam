#include <Servo.h>

Servo servo1;
int pos = 0;

void setup() {
 // put your setup code here, to run once:
 servo1.attach(10);
}

void loop() {
 // put your main code here, to run repeatedly:
 for(pos = 0; pos <= 180; pos += 1){
   servo1.write(pos);
   delay(15);
 }
 
 for(pos = 180; pos >= 0; pos -= 1){
   servo1.write(pos);
   delay(15);
 }
}
