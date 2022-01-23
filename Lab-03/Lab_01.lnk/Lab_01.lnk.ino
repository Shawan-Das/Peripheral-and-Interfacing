void setup(){
  pinMode(9, OUTPUT) ; //(pin number, MOde [input/output])
  pinMode(10, OUTPUT) ;
  pinMode(11, OUTPUT) ;
  pinMode(12, OUTPUT) ;
  pinMode(13, OUTPUT) ; 
}

void loop(){
  digitalWrite(9, HIGH); //(pin number, Status[High=5V,1 / Low=oV,0])
  delay(500);

  digitalWrite(10, HIGH); //(pin number, Status[High=5V,1 / Low=oV,0])
  delay(500);

  digitalWrite(11, HIGH); //(pin number, Status[High=5V,1 / Low=oV,0])
  delay(500);

  digitalWrite(12, HIGH); //(pin number, Status[High=5V,1 / Low=oV,0])
  delay(500);

  digitalWrite(13, HIGH); //(pin number, Status[High=5V,1 / Low=oV,0])
  delay(1500);
  
  digitalWrite(13,LOW);
  delay(500);
  digitalWrite(12,LOW);
  delay(500);
  digitalWrite(11,LOW);
  delay(500);
  digitalWrite(10,LOW);
  delay(500);
  digitalWrite(9,LOW);
  delay(1500);

  
}
