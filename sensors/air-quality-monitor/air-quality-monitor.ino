#define green 11
#define red 8
#define gas A0

void setup(){
  Serial.begin(9600);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(gas, INPUT);
}

void loop(){
  int quality = analogRead(gas);
  Serial.print("Quality: ");
  Serial.println(quality);
  
  if(quality > 500){
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
    Serial.println("GOOD");
  }
  else{
    digitalWrite(green, LOW);
    digitalWrite(red, HIGH);
    Serial.println("BAD");
  }
  
  delay(2000);
}