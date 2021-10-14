// Mengirim data ke arduino dengan 3 button dan pesan yang berbeda

#include <LiquidCrystal.h>    // Menambahkan library
#define btn1 A0               // Definisi pin button 1
#define btn2 A1               // Definisi pin button 2
#define btn3 A2               // Definisi pin button 3
String msg1 = "KEDIP";        // Pesan 1
String msg2 = "HIDUP";        // Pesan 2
String msg3 = "MATI";         // Pesan 3
String data ;                 // Definisi variable data

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  Serial.begin(9600);
  // set up the LCD's number of columns and rows:
  // lcd.begin(16, 2);
  // Print a message to the LCD.
  // lcd.print("Alif Irhas");
  pinMode(btn1, INPUT_PULLUP);    // Set button sebagai input
  pinMode(btn2, INPUT_PULLUP);    // ...
  pinMode(btn3, INPUT_PULLUP);    // ...
  //lcd.init(16,2);               // ?, Mungkin code lama, tidak ada di dokumentasi
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  
  lcd.setCursor(0,0);         // Set cursor di alamat array(row->0, col->0)
  lcd.print("KIRIM");         // Menulis kirim di LCD
  lcd.setCursor(0,1);         // Set cursor di alamat array(row->0, col->1)
  
  // Serial.avaiable mengambil jumlah karakter yang bisa dibaca di virtual terminal
  // Jika terminal mendapatkan input, maka 
  // data input akan dicetak di virtual terminal dan juga lcd
  if (Serial.available()){
    data = Serial.read();       // Baca data yang ada di virtual terminal
    Serial.print(data);         // Print di virtual terminal
    lcd.print(data);            // Print di LCD
  }

  int n1= digitalRead(btn1);    // Membaca status button (HIGH/LOW)
  int n2= digitalRead(btn2);    // ...
  int n3= digitalRead(btn3);    // ...

  // Jalankan fungsi printLcd sesuai dengan tombol yang ditekan
  if (n1==0) printLcd(msg1);
  if (n2==0) printLcd(msg2);
  if (n3==0) printLcd(msg3);

  lcd.setCursor(0, 1);        // Menempatkan cursor pada alamat array(0,1)
}

// Print pesan di LCD 
void printLcd(String msg){
  lcd.clear();                // Hapus tulisan yang ada di LCD
  Serial.println(msg);         // Menampilkan pesan ke virtual terminal
  lcd.setCursor(0,1) ;        // Menempatkan cursor pada alamat array(0,1)
  lcd.print(msg);             // Menampilkan pesan di LCD
  delay(500);                 // Lama pesan akan ditampilkan sebelum
  lcd.clear();                // Pesan dihapus di LCD
}
