// Membuat LED berkalap-kelip
// Tujuan pembuatan pengenalan variable

int pinLed=6;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinLed,HIGH);
  delay(100);
  digitalWrite(pinLed,LOW);
  delay(100);
}
