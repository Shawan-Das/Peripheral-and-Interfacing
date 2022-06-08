// Sonic Shooter, a shooting game with soner
// Tested on April, 2022

#include<Wire.h>
#include<LiquidCrystal_I2C.h>
#include<Servo.h>

#define echoPin 2 
#define trigPin 3 
Servo myServo1, myServo2;

long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement
byte trigger ;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void servo();
int sonic();
void hit(int distance);
void miss(int distance);

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  pinMode(8, INPUT_PULLUP); // Sets the 8th as an INPUT
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
  lcd.init();
  lcd.backlight();
  myServo1.attach(12);

}


void loop() {
  trigger = digitalRead(8);
 
  lcd.clear();
  lcd.print("Shoot The TARGET");
  
  if(trigger == 0)
  {
    lcd.clear();
    tone(7,50,100);
    delay(100);   
    
    distance = sonic(); 

    if(distance>=90  && distance<= 150)
      hit(distance);
    else
      miss(distance);   
  
  }

  delay(100);
}

void servo(){
  for(int i=0; i<=180; i++){
    myServo1.write(i);
    myServo2.write(i);
    delay(5);
  }
  for(int i=180; i>0; i--){
    myServo1.write(i);
    myServo2.write(i);
    delay(5);
  }
}

int sonic()
{
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
  
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);// Sets the trigPin HIGH (ACTIVE) for 10 microseconds
    digitalWrite(trigPin, LOW);
     
    duration = pulseIn(echoPin, HIGH);// Reads the echoPin, returns the sound wave travel time in microseconds

    return duration * 0.034 / 2;// Speed of sound wave divided by 2 (go and back)// Calculating the distance
}

void hit(int distance)
{
  
      tone(7,5000,100);
      servo();
      delay(100);
      tone(7,5000,200);
      lcd.clear();
      lcd.print("Hit"); delay(999);
      lcd.setCursor(0,1); lcd.print(distance); delay(999); 
      
}

void miss(int distance)
{
  tone(7,200,100);
  lcd.clear();
  lcd.print("MISS"); delay(600);
  lcd.setCursor(0,1); lcd.print(distance); delay(999);
}
