// Menghidupkan lampu LED dengan intensitas cahaya yang berbeda
// Intensitas output cahaya tidak berubah karena menggunakan digitalWrite
// Nilai 255-0 otomatis di konversi ke 0V-5V

int pinLed=6;

void setup(){ 
  // put your setup code here, to run once:
  pinMode(pinLed, OUTPUT);
  Serial.begin(9600);
  
}
void loop(){ 
  // put your main code here, to run repeatedly:
  digitalWrite(pinLed, 255);
  delay(1000);
  digitalWrite(pinLed, 128);
  delay(1000);
  digitalWrite(pinLed, 0);
  delay(1000);
}
