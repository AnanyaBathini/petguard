#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//SDA-A4 and SCL-A5 pins
LiquidCrystal_I2C lcd1(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
  lcd1.init();        // initialize the lcd
  lcd1.backlight();  // Turn on the LCD screen backlight
}

void loop() {
  while (true){
  lcd1.setCursor(1, 0);
  lcd1.print("~~~Emergency~~~");
  
  
  delay(1000);
  lcd1.clear();
  lcd1.print(" call 9XXXXXXXX");
 
 
  delay(5000);
  }
}
