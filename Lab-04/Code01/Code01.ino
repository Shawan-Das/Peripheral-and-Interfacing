int led1=9, led2=10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  // baud rate, bps
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i=0; i<=255; i+=5){
    analogWrite(led1,i);
    analogWrite(led2,255-i);
    delay(500);
  }
delay(1000);
  for(int i=255; i>=0; i-=5){
    analogWrite(led1,i);
    analogWrite(led2,255-i);
    delay(500);
  }
delay(1000);
}
