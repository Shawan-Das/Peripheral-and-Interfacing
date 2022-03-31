#include<LiquidCrystal.h>
LiquidCrystal lcd(11,10,9,8,7,6,5,4,3,2);
long id=20;

byte smiley[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.println("Hello UAP");
  lcd.setCursor(0,1);
  lcd.println("Shawan Das ");
  lcd.print(id);
  }

void loop() {
  // put your main code here, to run repeatedly:

  delay(2000);    lcd.clear();


  for(int i=0; i<15; i++){
    lcd.home(); delay(150);
  }
  lcd.clear();
  lcd.setCursor(0,1); // print position col/row
  lcd.print("Life Perahin");
  
  
   delay(2000);
   lcd.noCursor();
   delay(2000);
   lcd.blink();
   delay(500); lcd.noBlink();

lcd.clear();

   lcd.print("Take a break");
   delay(600); lcd.noDisplay();
      delay(2000); lcd.clear();
    lcd.display();  
   lcd.print("Wellcome Back"); 
delay(2000); lcd.clear();

   lcd.print("A quick brown fox jumps over the lazy dogs");


   for(int i=0; i<60; i++){
    lcd.scrollDisplayLeft();
    delay(200);
   }
delay(1000);
    for(int i=0; i<60; i++){
    lcd.scrollDisplayRight();
    delay(200);
   }

   lcd.autoscroll();
   
   for(int i=0; i<60; i++){
    lcd.rightToLeft();
    delay(200);
   }
delay(1000);
   for(int i=0; i<60; i++){
    lcd.leftToRight();
    delay(200);
   }
   lcd.clear();

for(int i=0; i<60; i++){
    lcd.print(i);
    delay(200);
   }
lcd.autoscroll();

lcd.clear();

     lcd.createChar(0, smiley);
  lcd.begin(16, 2);  
  lcd.write(byte(0));
}
