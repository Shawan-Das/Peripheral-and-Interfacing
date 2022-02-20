byte a,b,c,s;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(13,INPUT); //Selector
  pinMode(12,INPUT); pinMode(11,INPUT); pinMode(10,INPUT); //input
  for(int i=2; i<=9; i++){
    pinMode(i,OUTPUT);
  }
}
//Ans of 2
void HalfSubtractor(){
  a=digitalRead(10);
  b=digitalRead(11);

  digitalWrite(4,a^b);
  digitalWrite(5,(!a)&b);
}

void FullSubtractor(){
  a=digitalRead(10);
  b=digitalRead(11);
  c=digitalRead(12);
  
  digitalWrite(4,a^b^c);
  digitalWrite(5,((b&c)|(!a)&(b|c)));
  //Ans of 3
  Serial.print("D: ");
  Serial.println(a^b^c);
  Serial.print("B: ");
  Serial.println((b&c)|(!a)&(b|c));
  Serial.end();
}
void loop() {
  // put your main code here, to run repeatedly:

  s=digitalRead(13);

  if(s==LOW)
    HalfSubtractor();
  
  else
    FullSubtractor();
  
}
