// Menampilkan pesan di LCD
// Ketika tombol 2 ditekan

#include <LiquidCrystal.h>  // Menambahkan library 
#define btn2 A1             // Definisi pin button
String b = "HIDUP";         // Pesan yang akan di kirim
String data;                // Definisi variable data

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  Serial.begin(9600);           // Aktifkan virtual terminal
  pinMode(btn2, INPUT_PULLUP);  // set button sebagai input
}

void loop() {
  
  // LCD terdiri dari array
  // setcursor menempatkan cursor pada alamat array(0,0)
  lcd.setCursor(0,0);
  lcd.print("KIRIM");           // Menuliskan "KIRIM" di lcd
  lcd.setCursor(0,1);           // Menempatkan cursor pada alamat array(0,1)

  // Serial.avaiable mengambil jumlah karakter yang bisa dibaca di virtual terminal
  // Jika terminal mendapatkan input, maka 
  // data input akan dicetak di virtual terminal dan juga lcd
  if (Serial.available()){
    data = Serial.read();       // Baca data yang ada di virtual terminal
    Serial.print(data);         // Print di virtual terminal
    lcd.print(data);            // Print di LCD
  }
  
  int n2= digitalRead(btn2);    // Membaca status button (HIGH/LOW)
  // HIGH = 1 -> Button dilepas
  // LOW  = 0 -> Button ditekan
  
  // Jalankan jika button ditekan
  if (n2==0) {
    lcd.clear();          // Membersihkan tulisan yang ada di LCD
    Serial.print(b);      // Menampilkan pesan ke virtual terminnal
    lcd.setCursor(0,1);   // Menempatkan cursor pada alamat array(0,1) 
    lcd.print(b);         // Menampilkan pesan di LCD
    delay(500);           // Lama pesan akan ditampilkan sebelum
    lcd.clear();          // Pesan dihapus di LCD
  }
  
  lcd.setCursor(0, 1);    // Menempatkan cursor pada alamat array(0,1)
}
