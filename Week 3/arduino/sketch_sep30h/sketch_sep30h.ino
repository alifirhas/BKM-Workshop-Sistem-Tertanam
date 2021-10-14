int pinLed [] = {6,7,8,9};
int jmlPin = sizeof(pinLed);

void setup() {
  for(int i = 0; i<jmlPin; i++){
    pinMode (pinLed[i], OUTPUT);
  }
  pinMode (2, INPUT_PULLUP);
}

void loop() {
  for(int i = 0; i<jmlPin; i++){
    digitalWrite(pinLed[i],HIGH);
    delay(1000);
  }
  
  if (digitalRead(2) == LOW){
    digitalWrite(pinLed[2],LOW);
    delay(10000);
  }
}
