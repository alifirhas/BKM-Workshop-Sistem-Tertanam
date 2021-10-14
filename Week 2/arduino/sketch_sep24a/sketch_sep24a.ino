int pinLed=6;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinLed,HIGH);
  Serial.println("LED MENYALA");
  delay(500);
  digitalWrite(pinLed,LOW);
  Serial.println("LED PADAM");
  delay(500);
}
