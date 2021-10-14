#include <Servo.h>
#include <MQ2.h>

#define echoPin 11
#define trigPin 12
#define smokePin 7

Servo servo1;
MQ2 mq2(smokePin);

int pinLed[] = {9,8};
int buzzer = 5;
int btn1 = 2;
int btn2 = 3;
long durasi, jarak, smoke;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(smokePin, INPUT);

  pinMode(buzzer, OUTPUT);
  pinMode(pinLed[0], OUTPUT);
  pinMode(pinLed[1], OUTPUT);
  
  pinMode (btn1, INPUT_PULLUP);
  pinMode (btn2, INPUT_PULLUP);

  servo1.attach(10);
  servo1.write(0);
  mq2.begin();
  
  attachInterrupt(digitalPinToInterrupt(btn1),closeLid,FALLING);
  attachInterrupt(digitalPinToInterrupt(btn2),openLid,FALLING);
  
}

void closeLid(){
  if(servo1.read() > 0){

    digitalWrite(buzzer, HIGH);
    digitalWrite(pinLed[1], HIGH);
    delay(500);
    
    digitalWrite(buzzer, LOW);
    digitalWrite(pinLed[1], LOW);
    delay(500);
    
    servo1.write(0);
    delay(2000);
  }
}

void openLid(){
  if(servo1.read() <= 0){

    digitalWrite(pinLed[0], HIGH);
    delay(500);
    
    digitalWrite(pinLed[0], LOW);
    delay(500);
    
    servo1.write(90);
    delay(2000);
  }
}

void smokeDetect(){
  if(digitalRead(smokePin) == HIGH){
    Serial.println("ROKOK!");
  }
  
  delay(10);
  
  while(digitalRead(smokePin) == HIGH){
    digitalWrite(pinLed[0], HIGH);
    digitalWrite(pinLed[1], HIGH);
    digitalWrite(buzzer, HIGH);
    delay(100);
  }
  
  digitalWrite(pinLed[0], LOW);
  digitalWrite(pinLed[1], LOW);
  digitalWrite(buzzer, LOW);
//  Serial.println("Tidak ada rokok terbakar");
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(trigPin, LOW);
  delay(150);
  digitalWrite(trigPin, HIGH);
  delay(150);
  digitalWrite(trigPin, LOW);
  
  durasi = pulseIn(echoPin, HIGH);
  jarak = durasi * 0.034 / 2;

//  Serial.print("Jarak : ");
//  Serial.print(jarak);
//  Serial.println(" Cm");

  if(jarak < 30){
    openLid();
  }else{
    closeLid();

    smokeDetect();
  }
}
