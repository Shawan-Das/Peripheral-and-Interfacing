void ActivOneByOne();     //Line -
void TimeCount(int port); //Line -
void Blink_LED();         //Line -
void low(int port){
  digitalWrite(port,LOW);
}
void high(int port){
  digitalWrite(port,HIGH);
}

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
    low(port);

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
      high(i);
      delay(200);
    }
}

//----Time Count---
void TimeCount(int port){
  for(int i=1; i<=15; i++){
    low(port);
    delay(800);
    high(port);
    delay(800);
    low(port);
    delay(800);
    high(port);
    delay(800);
  }
}

//---Blink LED---
void Blink_LED(){
      delay(300);
  for(int i=0; i<15; i++){
    
    for(int j=2; j<=10; j+=2) high(j);
    delay(500);
    for(int j=2; j<=10; j+=2) low(j);

    for(int j=3; j<=11; j+=2) high(j);
    delay(500);
    for(int j=3; j<=11; j+=2) low(j);
  }
}
