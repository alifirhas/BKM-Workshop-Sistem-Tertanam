int pinLDR = A2;
int pinLED = 6;
int nilaiSensor;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinLDR, INPUT);
  pinMode(pinLED, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  nilaiSensor = analogRead(pinLDR);
  Serial.print(nilaiSensor);
  delay(100);
  
  if (nilaiSensor >= 700){
    digitalWrite(pinLED, HIGH);
    Serial.println(" tidak mendapat cahaya");
  } else{
    digitalWrite(pinLED, LOW);
    Serial.println(" mendapat cahaya");
  }
  
}
