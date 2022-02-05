void SEC_LSB();
void SEC_MSB();
void MIN_LSB();
void low(int port){
  digitalWrite(port,LOW);
}
void high(int port){
  digitalWrite(port,HIGH);
}

void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  for(int i=2; i<=13;i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i=2; i<=13; i++) low(i);
  delay(1000);
  high(13);
  delay(800);
  low(13);
  MIN_LSB();
  delay(5000);
}

//---MIN LSB---
void MIN_LSB(){
    high(12); low(11); low(10);  high(9); SEC_MSB();
                                 low(9);  SEC_MSB();
    low(12); high(11); high(10); high(9); SEC_MSB();
                                 low(9);  SEC_MSB();
                       low(10); high(9);  SEC_MSB();
                                 low(9);  SEC_MSB();
             low(11); high(10); high(9);  SEC_MSB();
                                 low(9);  SEC_MSB();
                       low(10); high(9);  SEC_MSB();
                                 low(9);  SEC_MSB();
  
}

//---SEC MSB---
void SEC_MSB(){
   high(8);  low(7); high(6);  SEC_LSB();
                     low(6);   SEC_LSB();
    low(8); high(7); high(6);  SEC_LSB();
                     low(6);   SEC_LSB();
             low(7); high(6);  SEC_LSB();
                     low(6);   SEC_LSB();
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
