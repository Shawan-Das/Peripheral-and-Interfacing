#include<Wire.h>
#include<LiquidCrystal_I2C.h>
#include<Servo.h>
#include<Servo.h>
#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 3 //attach pin D3 Arduino to pin Trig of HC-SR04
Servo motor1;
// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement
byte trigger ;
Servo myServo1, myServo2;
LiquidCrystal_I2C lcd(0x27, 16, 2);

void servo(){
  for(int i=0; i<=180; i++){
    myServo1.write(i);
    myServo2.write(i);
  }
}

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  pinMode(8, INPUT_PULLUP); // Sets the 8th as an INPUT
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
  lcd.init();
  lcd.backlight();

  motor1.attach(31);
}


void loop() {
  // Clears the trigPin condition
  trigger = digitalRead(8);
  //Serial.println(trigger);
//
//  for(int i=10; i<=1000; i+=10){
//      tone(7,i,50); delay(500);
//    }
//    
  lcd.clear();
  lcd.print("Shoot The TARGET");
delay(500); lcd.clear();
 for (int i=0; i<=180; i+=10) motor1.write(i), delay(30); 
    if(trigger == 0)
  {
    lcd.clear();
    tone(7,50,100);
    
    digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor

  lcd.print(distance);
   //servo(); 

     if(distance>=80  && distance<= 150){
      
      tone(7,5000,100);
      delay(100);
      tone(7,5000,200);
        lcd.clear();
        lcd.print("Hit"); delay(999);
        lcd.setCursor(0,1); lcd.print(distance); delay(999); 
     }
     else{
      tone(7,1500,100);
      lcd.clear();
      lcd.print("MISS"); delay(600);
      lcd.setCursor(0,1); lcd.print(distance); delay(999); 
     }
  
  }
  //trigger = 3;
  delay(100);
}
