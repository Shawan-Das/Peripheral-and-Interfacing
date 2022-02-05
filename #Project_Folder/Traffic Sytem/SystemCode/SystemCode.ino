int DR=5,  DY=6,  DG=7;
int UR=11, UY=12, UG=13;
int LR=8,  LY=9,  LG=10;
int RR=2,  RY=3,  RG=4;

void low(int pin){
  digitalWrite(pin,LOW);
}
void high(int pin){
  digitalWrite(pin,HIGH);
}
void DACT(int r, int y, int g){
  high(r);
  low(y);
  low(g);
}
void ACT(int r, int y, int g){
  low(r); low(y); high(g);
  delay(20000);
  low(g); high(y);
  delay(8000);
  DACT(r,y,g);
}
void setup() {
  // put your setup code here, to run once:
  for(int i=2; i<=13;i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  DACT(UR,UY,UG);
  DACT(LR,LY,LG);
  DACT(RR,RY,RG);
  ACT(DR,DY,DG);
  ACT(LR,LY,LG);
  ACT(UR,UY,UG);
  ACT(RR,RY,RG);
}
