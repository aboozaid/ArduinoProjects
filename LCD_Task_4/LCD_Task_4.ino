#include <LiquidCrystal.h>
int x,i ;
LiquidCrystal lcd(4,5,6,7,8,9);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  x = analogRead(A0);
  i=x/205;
  lcd.setCursor(1, 0);
  lcd.print(x);
  lcd.setCursor(1, 1);
  lcd.print(i);
  lcd.setCursor(4,1);
  lcd.print ("volts");
  delay(1000);
  if (x > 1000 || x <= 0)
  {
    lcd.clear();
  }
  
  }
