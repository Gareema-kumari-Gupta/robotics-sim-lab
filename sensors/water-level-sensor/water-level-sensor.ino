#define blue 6
#define green 10
#define ss A0

void setup(){
  Serial.begin(9600);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(ss,INPUT);
}

void loop(){
  int soil = analogRead(ss);
  Serial.print("soil:");
  Serial.println(soil);
  
  if(soil<300){
    digitalWrite(blue,HIGH);
    digitalWrite(green,LOW);
  }else{
    digitalWrite(blue,LOW);
    digitalWrite(green,HIGH);
  }
  
  delay(2000);
}
  