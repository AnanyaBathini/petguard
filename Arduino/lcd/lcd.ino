#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//SDA-A4 and SCL-A5 pins
LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
  lcd.init();        // initialize the lcd
  lcd.backlight();  // Turn on the LCD screen backlight
}

void loop() {
  lcd.setCursor(3, 1);
  lcd.print("PETGUARD");
  delay(3000);
  lcd.clear();

  
}
