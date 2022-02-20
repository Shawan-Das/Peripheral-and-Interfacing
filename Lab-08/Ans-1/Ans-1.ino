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

//Ans of 1
void HalfAdder(){
  a=digitalRead(10);
  b=digitalRead(11);

  digitalWrite(4,a^b);
  digitalWrite(5,a&b);
}
void FullAdder(){
  a=digitalRead(10);
  b=digitalRead(11);
  c=digitalRead(12);
  
  digitalWrite(4,a^b^c);
  digitalWrite(5,(a&b)|(b&c)|(c&a));
}

void loop() {
  // put your main code here, to run repeatedly:

  s=digitalRead(13);

  if(s==LOW){
    HalfAdder();
  }
  else{
    FullAdder();
  }
}
