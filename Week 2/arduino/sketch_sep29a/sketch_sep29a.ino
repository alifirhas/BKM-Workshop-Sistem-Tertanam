int pinLed[] = {9,7,6,8};
int jmlPin = 4;
int buzzer = 10;
int timer = 2000;
int buzzerTime = 5000;
int buzzerRep = (buzzerTime/timer)/2;

void setup() {
  // put your setup code here, to run once:
  for (int i=0; i<jmlPin; i++){
    pinMode(pinLed[i], OUTPUT);
  }
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int r=1; r<5; r++){

  }
  for (int i=i; i<=jmlPin; i++){
    digitalWrite(pinLed[i],HIGH);
    delay(timer);
    digitalWrite(pinLed[i],LOW);
    delay(100); 
  }

  for (int i=i; i<=jmlPin; i++){
    digitalWrite(pinLed[i],HIGH);
  }
  
  delay(timer);

  for (int i=i; i<=jmlPin; i++){
    digitalWrite(pinLed[i],LOW);
  }

  digitalWrite(buzzer, HIGH);

  delay(6000);
  
}
