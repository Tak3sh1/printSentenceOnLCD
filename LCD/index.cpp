#include LiquidCrystal.h
LiquidCrystal lcd(12, 11, 10, 9, 8, 7, 6);

int backLight = 13;

void setup()
{
  pinMode(backLight, OUTPUT);
  digitalWrite (backLight, HIGH);
  
  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(TAKESHI LINDO);
  
  lcd.setCursor(2,1);
  lcd.print(MUITO MESMO ));
  Serial.begin(9600);
}

void loop()
{
  delay(1000); 
  lcd.noDisplay();
  delay(500); 
  lcd.display();
}