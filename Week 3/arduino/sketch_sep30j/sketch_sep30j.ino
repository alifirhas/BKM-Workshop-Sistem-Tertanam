int pinLed [] = {6,7,8,9};
int jmlPin = sizeof(pinLed);

void setup() {
  for(int i = 0; i<jmlPin; i++){
    pinMode (pinLed[i], OUTPUT);
  }
  pinMode (2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2),fungsiInt,FALLING);
}

void loop() {
  for(int i = 0; i<jmlPin; i++){
    digitalWrite(pinLed[i],HIGH);
    delay(1000);
  }
}

void fungsiInt(){
  digitalWrite(pinLed[2],LOW);
  delay(5000);
}
