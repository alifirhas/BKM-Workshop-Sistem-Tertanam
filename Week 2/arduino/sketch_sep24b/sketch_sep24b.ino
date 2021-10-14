// Menayalakan LED dengan memberi perintah pada terminal
// Perkenalan kondisi if else

int pinLed=6;

void setup() {
// put your setup code here, to run once:
  pinMode(pinLed, OUTPUT);
  Serial.begin(9600);
  Serial.println("Masukkan 1 --> nyala atau 2 --> padam");
}

void loop() {
 // put your main code here, to run repeatedly:
  if(Serial.available()){
    int kondisi=Serial.parseInt();
    
    if(kondisi==1){
      digitalWrite(pinLed,HIGH);
      Serial.println("LED MENYALA"); 
    }
    
    if(kondisi==2){
      digitalWrite(pinLed,LOW);
      Serial.println("LED PADAM"); 
    }
  }
}
