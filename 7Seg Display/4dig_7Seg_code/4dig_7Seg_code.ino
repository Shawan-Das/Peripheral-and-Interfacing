int a=2, b=3, c=4, d=5, e=6, f=7, g=8;
int x, y=0;
int d1=10, d2=11, d3=12, d4=13;
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

void show(int x){
  if(x==0) zero();
  if(x==1) one();
  if(x==2) two();
  if(x==3) three();
  if(x==4) four();
  if(x==5) five();
  if(x==6) six();
  if(x==7) seven();
  if(x==8) eight();
  if(x==9) nine();
}


void setup() {
  // put your setup code here, to run once:

  for(int i=2; i<=13; i++) pinMode(i,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  //for(int i=2; i<=13;i++) digitalWrite(i,HIGH);

  for(int i=1000; i>=0; i--){
    show((i/1000)%10);
    high(d4);
    delay(200);
    low(d4);

    show((i/100)%10);
    high(d3);
    delay(200);
    low(d3);

    show((i/10)%10);
    high(d2);
    delay(200);
    low(d2);

    show(i%10);
    high(d1);
    delay(200);
    low(d1);
  }
  
}
