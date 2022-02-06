//for Ans 1
int NOT=6, AND=5, OR=4, XNOR=3, XOR=2;
byte a,b;
//for Ans 2
int x,y=0;
void add();

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(13,INPUT);
  pinMode(12,INPUT);
  
  for (int i=2; i<=6; i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
 add();
  a=digitalRead(13);
  b=digitalRead(12);

  //NOT
  digitalWrite(6,!(a));
  //AND
  digitalWrite(5,a&b);
  //OR
  digitalWrite(4,a|b);
  //XNOR
  digitalWrite(3,!(a^b));
  //XOR
  digitalWrite(2,a^b); 
}


void add(){
    if (Serial.available() > 0) {
    x = Serial.read();
    Serial.println(x-48,DEC);
    y+=int(x-48);
    Serial.print("Ans = ");
    Serial.println(y,DEC);
  }
}
