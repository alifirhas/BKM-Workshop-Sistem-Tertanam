int sensorPin = A1;
int nilaiSensor = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int nilaiSensor = analogRead(sensorPin);
  Serial.print(nilaiSensor);
  delay (100);

  float vout = nilaiSensor * (5000 / 1024.0);
  float temperatur = vout / 10;
 
  Serial.print (" = ");
  Serial.print (temperatur);
  Serial.println (" Celcius");
  delay(1000);

}
