void SEC_LSB();
void SEC_MSB();
void low(int port){
  digitalWrite(port,LOW);
}
void high(int port){
  digitalWrite(port,HIGH);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,OUTPUT);  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT); pinMode(11,OUTPUT);
  pinMode(12,OUTPUT); pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  SEC_LSB();

}

//---SEC MSB---
SEC_MSB(){
  
}

//---SEC LSB---
void SEC_LSB(){
  high(5); low(4); low(3);  high(2); delay(800);
                            low(2);  delay(800);
  low(5); high(4); high(3); high(2); delay(800);
                            low(2);  delay(800);
                   low(3); high(2);  delay(800);
                           low(2);   delay(800);
          low(4); high(3); high(2);  delay(800);
                           low(2);   delay(800);
                  low(3); high(2);   delay(800);
                          low(2);    delay(800);
}
