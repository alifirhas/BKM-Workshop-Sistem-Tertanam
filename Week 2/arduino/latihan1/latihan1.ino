// Pushbutton 1 ditekan makan lampu berjalan dari kiri ke kanan diakhiri dengan suara buzzer
int pinLed[] = {6,7,8,9};
int jmlPin = 4;
int timer = 500;
int button = 2;
int buzzer = 10;
int bacaButton, lastButton, kondisi = 0;

void setup() {
  for (int i=0; i<jmlPin; i++){
    pinMode(pinLed[i], OUTPUT);
  }
  pinMode (buzzer, OUTPUT);
  pinMode (button, INPUT);
  
}

void loop() {
  bacaButton = digitalRead (button);
  
  if ((bacaButton == HIGH) && (lastButton == LOW)) {
    kondisi = 1 - kondisi;
    delay(10);
  }
  
  lastButton = bacaButton;
  
  if (kondisi == 1) {
    for (int i=jmlPin; i>=0; i--){
      digitalWrite(pinLed[i],HIGH);
      delay(timer);
      digitalWrite(pinLed[i],LOW);
      delay(timer); 
    }
    
    digitalWrite(buzzer, HIGH);
    delay(timer);
    digitalWrite(buzzer, LOW);
    delay(timer);
  }
  else
    for (int i=0; i<jmlPin; i++){
      digitalWrite(pinLed[i], LOW);
    }
    digitalWrite(buzzer, LOW);
  
}
