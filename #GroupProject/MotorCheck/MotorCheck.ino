#include<Servo.h>
Servo servo1, servo2, servo3;
int pos=0;
void setup() {
  // put your setup code here, to run once:

  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
}

void loop() {
  // put your main code here, to run repeatedly:
servo1.write(0); servo2.write(0); servo3.write(0);
   int x=random(9,12);

   if(x==9){
      for(int i=0; i<=360; i++){
        servo1.write(i); delay(2);
      }
      for(int i=360; i>=0; i--){
        servo1.write(i); delay(2);
      }
   }

   if(x==10){
      for(int i=0; i<=360; i++){
        servo2.write(i); delay(2);
      }
      for(int i=360; i>=0; i--){
        servo2.write(i); delay(2);
      }
   }

   if(x==11){
      for(int i=0; i<=360; i++){
        servo3.write(i); delay(2);
      }
      for(int i=360; i>=0; i--){
        servo3.write(i); delay(2);
      }
   }

   servo1.write(0); servo2.write(0); servo3.write(0);

   delay(10000);
}
