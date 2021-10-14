//2. Pushbutton 2 ditekan lampu bergeser dari kanan ke kiri dengan pergeseran lampu menggunakan perubahan nilai PWM
int pinLed[] = {6,7,8,9};
int jmlPin = 4;
int timer = 500;
int button = 2;
int bacaButton, lastButton, kondisi = 0;

void setup() {
  for (int i=0; i<jmlPin; i++){
    pinMode(pinLed[i], OUTPUT);
  }
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
    for (int i=0; i<jmlPin; i++){
      for (int dutyCycle = 0 ; dutyCycle <= 255; dutyCycle += 5){
        analogWrite(pinLed[i], dutyCycle);
        delay(100);
      }
      
      for (int dutyCycle = 255 ; dutyCycle >= 0; dutyCycle -= 5){
        analogWrite(pinLed[i], dutyCycle);
        delay(100);
      }

      delay(timer);
    }
  }
  else
    for (int i=0; i<jmlPin; i++){
      digitalWrite(pinLed[i], LOW);
    }
  
}
