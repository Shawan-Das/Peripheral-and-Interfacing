int r=7;
int g=8;
int b=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(r,HIGH);
  delay(1000);
  digitalWrite(r,LOW);
  digitalWrite(g,HIGH);
  delay(1000);
  digitalWrite(g,LOW);
  digitalWrite(b,HIGH);
  delay(1000);
  digitalWrite(b,LOW);
  digitalWrite(r,HIGH);
  digitalWrite(g,HIGH);
  delay(1000);
  digitalWrite(g,LOW);
  digitalWrite(b,HIGH);
  delay(1000);
  digitalWrite(r,LOW);
  digitalWrite(g,HIGH);
  delay(1000);
  digitalWrite(r,HIGH);
  delay(1000);
  digitalWrite(r,LOW);
  digitalWrite(g,LOW);
  digitalWrite(b,LOW);

}
