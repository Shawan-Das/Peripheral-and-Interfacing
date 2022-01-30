void ansA();
void ansB();
void ansC();
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  //ans of A
  ansA();
  Serial.println();
  Serial.println();
  
//Ans of B
  ansB();
  Serial.println();
  Serial.println();

//Ans of C
  ansC();

  Serial.println("---------End--------");
  Serial.end();
}

//-------Functions-----------

//Ans A
void ansA(){
  int x=5;
  char c='S';
  char str[]="Shawan Das";
  double pi=3.14167;
  float z=3.14;
  Serial.println("Ans of A:");
  Serial.print("Inteeger: ");
  Serial.println(x);
  Serial.print("Character: ");
  Serial.println(c);
  Serial.print("String: ");
  Serial.println(str);
  Serial.print("Double: pi= ");
  Serial.println(pi);
  Serial.print("Float: ");
  Serial.println(z);
}

//Ans B
void ansB(){
    Serial.println("Ans of B: ");
  Serial.println("15 in diffrent number system");
  int var=15;
  Serial.print("DEC : ");
  Serial.print(var,DEC);
  Serial.print("   ");
  Serial.print("BIN : ");
  Serial.print(var,BIN);
  Serial.print("   ");
  Serial.print("OCT : ");
  Serial.print(var,OCT);
  Serial.print("   ");
  Serial.print("HEX : ");
  Serial.print(var,HEX);
  Serial.print("   ");
}

//Ans C
void ansC(){
    Serial.println("Ans of C: ");

  for(int i=0; i<10; i++){
    Serial.print(i);
    Serial.print(" = ");
    Serial.println(i,BIN);
    delay(300);
  }
}
