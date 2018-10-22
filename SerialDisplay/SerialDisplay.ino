
// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // initialize the serial communications:
  Serial.begin(9600);


  
}

void loop() {
   /*lcd.setCursor(0,0);
   lcd.write("Awoo");
   lcd.setCursor(0,1);
   lcd.write("OwO");
   lcd.setCursor(8,0);
   lcd.write("Woof");
   lcd.setCursor(8,1);
   lcd.write("Waff");*/
   
  if (Serial.available()) {
    delay(100);
    lcd.clear();
    while (Serial.available() > 0) {
    lcd.write(Serial.read());
    }
  }
}
