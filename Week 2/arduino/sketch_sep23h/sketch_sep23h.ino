// Menghidupkan dan meredupkan lampu LED secara perlahan
// Perubahan intensitas cahaya pada LED tidak dapat terlihat karena
// Beban pada CPU terlalu tinggi untuk melakukan simulasi
// Nilai pada analogWrite (255-0) akan otomatis di konversi ke 0V-5V

int ledPin = 6;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Cycle one");
  for (int dutyCycle = 0 ; dutyCycle <= 255; dutyCycle += 5){
   analogWrite(ledPin, dutyCycle);
   delay(300);
  }
  
  delay(2000);
  
  Serial.println("Cycle two");
  for (int dutyCycle = 255 ; dutyCycle >= 0; dutyCycle -= 5){
    analogWrite(ledPin, dutyCycle);
    delay(300);
  }
}
