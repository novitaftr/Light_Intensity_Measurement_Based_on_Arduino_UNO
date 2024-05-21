//-----------------------------
//Nama : Novita Fitriani
//NRM  : 3225150200
//-----------------------------

#include <LiquidCrystal.h>

//inisiasi PIN
LiquidCrystal lcd(12, 11, 7, 6, 5, 4);
const int LED = 7;
const int LDR1 = 0; 
const int LDR2 = 1;
const int LDR3 = 2;
const int LDR4 = 3;
int rate1 = 0;
int rate2 = 0;
int rate3 = 0;
int rate4 = 0; 

void setup() {
  lcd.begin(16, 2);
  // set up the LCD's number of columns and rows:
  Serial.begin(9600);
  lcd.print(" SISTEM PARKIR OTOMATIS"); // mencetak string-kontrol suhu
  lcd.setCursor(0,1); // mengatur cursor posisi pencetakan
  lcd.print("BERBASIS ARDUINO UNO"); // mencetak string-dengan arduino
  delay(2000); // waktu jeda 2 detik
  lcd.clear(); // membersihkan LCD
}

void loop() {
  // put your main code here, to run repeatedly:
  LDR = analogRead(Analog);
  nilai=(18.116*LDR)-29.608;
  Serial.println (nilai);
  lcd.setCursor(0,0);
  lcd.print("Besar Intensitas");
  lcd.setCursor(0,1);
  lcd.print(nilai);
  /ZS/SSS/S/
  lcd.print(" lux ");
  
  delay (500) ;
}
