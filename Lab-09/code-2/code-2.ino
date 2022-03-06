int a=2, b=3, c=4, d=5, e=6, f=7, g=8;
int x, y=0;

void low(int pin){
  digitalWrite(pin,LOW);
}
void high(int pin){
  digitalWrite(pin,HIGH);
}
void zero(){
  for(int i=2; i<=8; i++) digitalWrite(i,HIGH);
  digitalWrite(g,LOW); 
  delay(800);
}
void one(){
  high(b); high(c);
  low(a); low(d); low(e); low(f); low(g);
  delay(800);
}
void two(){
  for(int i=2; i<=8; i++) high(i);
  low(c); low(f); 
  delay(800);
}
void three(){
  for(int i=2; i<=8; i++) high(i);
  low(e); low(f);
  delay(800);
}
void four(){
  for(int i=2; i<=8; i++) high(i);
  low(a); low(d); low(e);
  delay(800);
}
void five(){
  for(int i=2; i<=8; i++) high(i);
  low(b); low(e);
  delay(800);
}
void six(){
  for(int i=2; i<=8; i++) high(i);
  low(b);
  delay(800);
}
void seven(){
  high(a); high(b); high(c);
  low(d); low(e); low(f); low(g);
  delay(800);
}
void eight(){
  for(int i=2; i<=8; i++) high(i);
  delay(800);
}
void nine(){
  for(int i=2; i<=8; i++) high(i);
  low(e);
  delay(800);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  for(int i=2; i<=9;i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available()>0){
    x=Serial.read();
    y= x-48;
      Serial.println(y);
    if(y==0) zero();
    else if(y==1) one();
    else if(y==2) two();
    else if(y==3) three();
    else if(y==4) four();
    else if(y==5) five();
    else if(y==6) six();
    else if(y==7) seven();
    else if(y==8) eight();
    else if(y==9) nine();
  }
}
