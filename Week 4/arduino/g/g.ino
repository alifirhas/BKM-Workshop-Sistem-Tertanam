// Menerima data yang datang dari arduino lainnya / arduino 1

#include <LiquidCrystal.h>    // Menambahkan library
String data;                  // Definisi variable data

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  Serial.begin(9600);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("2");
  Serial.flush();             // Menghapus semua buffer yang datang dari serial data
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  
  data = "";
  while (Serial.available() > 0) {
    data+= (char) Serial.read();
    delay (5);
  }
  
  lcd.setCursor(0,0);
  lcd.print("2");
  lcd.setCursor(0,1);
  delay (50);

  // Jalankan jika data adalah kedip, hidup atau mati
  if (data == "KEDIP" || 
      data == "HIDUP" || 
      data == "MATI"){
    lcd.setCursor(0,1) ;        // Menempatkan cursor pada alamat array(0,1)
    lcd.print(data);            // Menampilkan pesan di LCD
    delay(1000);                // Lama pesan akan ditampilkan sebelum
    lcd.clear();                // Pesan dihapus di LCD
  }
}
