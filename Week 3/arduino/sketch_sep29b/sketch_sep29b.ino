int pinSensor = A0;
int pinLed = 6;
int nilaiSensor = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode (pinLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  nilaiSensor = analogRead(pinSensor);
  
  Serial.println(nilaiSensor);
  
  digitalWrite(pinLed, HIGH);
  delay(nilaiSensor);
  
  digitalWrite(pinLed, LOW);
  delay(nilaiSensor);
}
