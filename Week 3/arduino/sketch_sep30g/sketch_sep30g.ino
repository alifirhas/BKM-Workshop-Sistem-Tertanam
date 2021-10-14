#define echoPin 11
#define trigPin 12

long durasi;
int jarak;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delay(100);
  
  digitalWrite(trigPin, HIGH);
  delay(100);
  
  digitalWrite(trigPin, LOW);
  durasi = pulseIn(echoPin, HIGH);
  jarak = durasi * 0.034 / 2;
  
  Serial.print("Jarak : ");
  Serial.print(jarak);
  Serial.println(" Cm");

}
