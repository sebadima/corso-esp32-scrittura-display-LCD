#include <LiquidCrystal_I2C.h>
#include <Wire.h>

#define I2C_SDA 23
#define I2C_SCL 18

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() 
{
  Serial.begin(115200);
  Wire.begin(I2C_SDA, I2C_SCL, 10000); 
  lcd.init(); 
  lcd.clear();
  lcd.backlight();
  lcd.setCursor(0,0);  
  lcd.print("Inizio conteggio"); 
  delay(3000);  
 
  for (int ix=1; ix<=10; ix++) 
  {
    lcd.clear();
    Serial.println(ix);  
    lcd.print(ix); 
    delay(1000);  
  }

  lcd.clear();
  lcd.print("Fine conteggio"); 
}

void loop() 
{
}
