// Memadamkan dan menghidupkan LCD 1
// Mengakses LCD

#include <LiquidCrystal.h>  // Menambahkan library 

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  // arduino tidak bisa langsung mendekteksi jenis/spesifikasi komponen
  // yang digunakan/terhubung pada arduino
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("lcd 1 ok");
}

void loop() {
  // Turn off the display:
  lcd.noDisplay();
  delay(500);
  // Turn on the display:
  lcd.display();
  delay(500);
}
