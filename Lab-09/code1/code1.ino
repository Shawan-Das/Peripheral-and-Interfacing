int a=2, b=3, c=4, d=5, e=6, f=7, g=8;
byte x; int z=0;
void low(int pin){
  digitalWrite(pin,LOW);
}
void high(int pin){
  digitalWrite(pin,HIGH);
}
void zero(){
  for(int i=2; i<8; i++) high(i);
  low(g);
}
void one(){
  high(b); high(c);
  low(a); low(d); low(e); low(f); low(g);
  
}
void two(){
  for(int i=2; i<=8; i++) high(i);
  low(c); low(f); 
  
}
void three(){
  for(int i=2; i<=8; i++) high(i);
  low(e); low(f);
  
}
void four(){
  for(int i=2; i<=8; i++) high(i);
  low(a); low(d); low(e);
  
}
void five(){
  for(int i=2; i<=8; i++) high(i);
  low(b); low(e);
  
}
void six(){
  for(int i=2; i<=8; i++) high(i);
  low(b);
  
}

void setup() {
  // put your setup code here, to run once:
  for(int i=2; i<=9;i++){
    pinMode(i,OUTPUT);
  }
  for(int i=11; i<=13; i++) pinMode(i, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  x=digitalRead(13);
 if(x == LOW){
  int z=random(1,7);
  
   if(z==1) one();
  else if(z==2) two();
  else if(z==3) three();
  else if(z==4) four();
  else if(z==5) five();
  else if(z==6) six();
 }
 //else zero();
}
