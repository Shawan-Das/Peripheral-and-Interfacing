int id=10; // global variable

void setup() {
}

int function(int x){
  return x+1;
}

void loop() {
  // put your main code here, to run repeatedly:

  int dhaka;
  dhaka = id;//local variable
  int ans;
  ans=function(dhaka);
  Serial.println(ans);
  delay(5000);
}
