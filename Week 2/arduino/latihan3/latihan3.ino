//Pushbutton 3 ditekan untuk menampilkan menu pilihan pada serial monitor, dan menjalankan seusai 
//pilihan yang dimasukkan pada serial monitor. 
//Menu :
//1. Menyalakan 4 LED kelap-kelip 
//2. Buzzer seperti suara sirine (ON-OFF-ON-OFF) selama 5 detik
//3. Lampu berjalan dari kiri ke kanan dengan setiap perindahan nayala LED diberi tanda bunyi buzzer
//4. Menggunakan PWM untuk memadamkan 4 LED (kondisi awal meyala lalu pelan-pelan padam sesuai nilai PWM)

int pinLed[] = {6,7,8,9};
int jmlPin = 4;
int buzzer = 10;
int timer = 500;
int buzzerTime = 5000;
int buzzerRep = (buzzerTime/timer)/2;

void setup() {
  // put your setup code here, to run once:
  for (int i=0; i<jmlPin; i++){
    pinMode(pinLed[i], OUTPUT);
  }
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  Serial.println("Menu yang tersedia");
  Serial.println("1. Menyalakan 4 LED kelap-kelip");
  Serial.println("2. Buzzer seperti suara sirine (ON-OFF-ON-OFF) selama 5 detik");
  Serial.println("3. Lampu berjalan dari kiri ke kanan dengan setiap perindahan nayala LED diberi tanda bunyi buzzer");
  Serial.println("4. Menggunakan PWM untuk memadamkan 4 LED (kondisi awal meyala lalu pelan-pelan padam sesuai nilai PWM)");
  Serial.print("Plih 1/2/3/4: ");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
   
    int kondisi=Serial.parseInt();

    switch(kondisi){
      case 1:
        Serial.println("Satu");
        nomorSatu();
        break;
      case 2:
        Serial.println("Dua");
        nomorDua();
        break;
      case 3:
        Serial.println("Tiga");
        nomorTiga();
        break;
      case 4:
        Serial.println("Empat");
        nomorEmpat();
        break;
      default:
        Serial.println(kondisi + " tidak ada di pilihan");
    }
  }
}

int nomorSatu(){
 
  for(int i = 0; i < jmlPin; i++){
    digitalWrite(pinLed[i], HIGH);
  }
  
  delay(500);
  
  for(int i = 0; i < jmlPin; i++){
    digitalWrite(pinLed[i], LOW);
  }
  
  delay(500);
  
}

int nomorEmpat(){
  for (int dutyCycle = 255 ; dutyCycle >= 0; dutyCycle -= 5){
    for(int i = 0; i<jmlPin; i++){
      analogWrite(pinLed[i], dutyCycle);
    }
    delay(10);
  } 
}

int nomorDua(){
  for(int j = 1; j<=buzzerRep; j++){
    digitalWrite(buzzer, HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
    delay(500);
  }
  return;
}

int nomorTiga(){
  for(int r=1; r<5; r++){
    for (int i=jmlPin-1; i>=0; i--){
      digitalWrite(pinLed[i],HIGH);
      digitalWrite(buzzer, HIGH);
      delay(timer);
      digitalWrite(buzzer, LOW);
      digitalWrite(pinLed[i],LOW);
      delay(timer); 
    }
  }
}
