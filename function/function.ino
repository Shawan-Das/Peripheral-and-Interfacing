float avg(int x, int y, int z){
  return (x+y+z)/3;
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //opens the serial Port
}

void loop() {
  // put your main code here, to run repeatedly:

  int x=5, y=7, z=9;
  
  Serial.println(avg(x,y,z),4);
}
