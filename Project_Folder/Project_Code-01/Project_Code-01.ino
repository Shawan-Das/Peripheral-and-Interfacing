void ActivOneByOne();     //Line -
void TimeCount(int port); //Line -
void Blink_LED();         //Line -

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("You Have only 10-min to finish your task"); Serial.println();
  ActivOneByOne();
  Serial.println("Your Time Starts NOW"); Serial.println();
  for (int port=11; port>=2; port--){
    TimeCount(port);
    digitalWrite(port,LOW);

    if(port==10 || port==7 || port==3 || port==2){
      Serial.print("Only "); Serial.print(port-2); Serial.println("min left");
      Serial.println();
    }
  }

  Serial.println("Time UP");
  Blink_LED();
  Serial.end();
}


//----Active All---
void ActivOneByOne(){
    for(int i=2; i<=11; i++){
      digitalWrite(i,HIGH);
      delay(200);
    }
}

//----Time Count---
void TimeCount(int port){
  for(int i=1; i<=15; i++){
    digitalWrite(port,LOW);
    delay(800);
    digitalWrite(port,HIGH);
    delay(800);
    digitalWrite(port,LOW);
    delay(800);
    digitalWrite(port,HIGH);
    delay(800);
  }
}

//---Blink LED---
void Blink_LED(){
      delay(300);
  for(int i=0; i<5; i++){
    
    digitalWrite(10,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(2,HIGH);
    delay(500);
    digitalWrite(10,LOW);
    digitalWrite(8,LOW);
    digitalWrite(6,LOW);
    digitalWrite(4,LOW);
    digitalWrite(2,LOW);
    
    digitalWrite(11,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(3,HIGH);
    delay(500);
    digitalWrite(11,LOW);
    digitalWrite(9,LOW);
    digitalWrite(7,LOW);
    digitalWrite(5,LOW);
    digitalWrite(3,LOW);
  }
}
