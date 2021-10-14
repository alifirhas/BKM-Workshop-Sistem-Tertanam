// Menghidupkan semua LED secara berurutan
// Semua LED menjadi kelap-kelip secara berurutan
// Pengenalan proses looping

int i;
int timer = 500;
int pinLed[]={6,7,8,9};
int jmlPin = 4;

void setup() {
  // put your setup code here, to run once:
  for (int i=0; i<jmlPin; i++){
    pinMode(pinLed[i], OUTPUT);
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<jmlPin; i++){
    digitalWrite(pinLed[i],HIGH);
    delay(timer);
    digitalWrite(pinLed[i],LOW);
    delay(timer);
  }
}
