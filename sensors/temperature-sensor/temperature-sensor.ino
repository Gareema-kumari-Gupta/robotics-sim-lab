#define green 4
#define blue 10
#define red 11
#define temp A5

void setup(){
  Serial.begin(9600);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(temp,INPUT);
}

void loop(){
  int t = analogRead(temp);
  Serial.print("Temp: ");
  Serial.println(t);
  
  if(t<150){
    digitalWrite(green,LOW);
    digitalWrite(red,LOW);
    digitalWrite(blue,HIGH);
  }else if(t>178){
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
    digitalWrite(blue,LOW);
  }else{
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    digitalWrite(blue,LOW);
  }
  delay(2000);
}