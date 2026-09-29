#define y 10
#define r 13
#define g 9

void setup(){
  pinMode(r,OUTPUT);
  pinMode(y,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop(){
  digitalWrite(r,HIGH);
  digitalWrite(y, LOW);
  digitalWrite(g, LOW);
  delay(10000);
  
  digitalWrite(r,LOW);
  digitalWrite(y,HIGH);
  digitalWrite(g,LOW);
  delay(5000);
  
  digitalWrite(r,LOW);
  digitalWrite(y,LOW);
  digitalWrite(g,HIGH);
  delay(15000);
  
}