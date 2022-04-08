#include<Servo.h>
Servo servo1, servo2;
#define echoPin 7
#define trigerPin 4

long duration;
int distance;

void setup() {
  // put your setup code here, to run once:

  servo1.attach(13); servo2.attach(12);
  pinMode(trigerPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trigerPin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigerPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigerPin,LOW);

  duration = pulseIn(echoPin,HIGH);

  distance = duration * 0.034 / 2;

  if(distance <=30){
    servo1.write(0); servo1.write(100); delay(2000); servo1.write(0);
  }
  else{
    servo2.write(0); servo2.write(100); delay(2000); servo2.write(0);
  }

  Serial.print(distance); Serial.println(" cm");

  delay(5000);
}
