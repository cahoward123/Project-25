// Project 25 – Using Interrupts

#define LED 13
#include <LiquidCrystal.h> 
LiquidCrystal lcd(8,9,4,5,6,7);
void setup()
{
  lcd.begin(16, 2);
  pinMode(13, OUTPUT);
  attachInterrupt(0, displayHappy, RISING);
  attachInterrupt(1, displaySad, RISING);  
}
//This got changed to display ":)"
void displayHappy()
{
  lcd.clear();
  lcd.print( ":)" );
}
// This got changed to display ":("
void displaySad()
{
  lcd.clear();
  lcd.print( ":(");
}

void loop()
{
  
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
}
