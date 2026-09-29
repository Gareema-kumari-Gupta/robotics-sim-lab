#define water 6
#define good 10
#define ss A0
#define l A2
#define sun 2
#define hot 9
#define t A5
#define ice 4

void setup(){
  Serial.begin(9600);
  pinMode(water,OUTPUT);
  pinMode(good,OUTPUT);
  pinMode(ss,INPUT);
  pinMode(l,INPUT);
  pinMode(sun,OUTPUT);
  pinMode(t,INPUT);
  pinMode(ice,OUTPUT);
}

void loop(){
  int soil = analogRead(ss);
  int light = analogRead(l);
  int temp = analogRead(t);
  
  Serial.print("Light:");
  Serial.print(light);
  Serial.print(" | Soil:");
  Serial.print(soil);
  Serial.print(" | Temp: ");
  Serial.println(temp);
  
  // soil
  if(soil<300||soil>500){
    digitalWrite(water,HIGH);
  }else{
    digitalWrite(water,LOW);
  }
  
  // light
  if(light<550){
   digitalWrite(sun,HIGH);
  }else{
   digitalWrite(sun,LOW);
  }
  
  //Temp
  if(temp<140){
    digitalWrite(hot,LOW);
    digitalWrite(ice,HIGH);
  }else if(temp>200){
    digitalWrite(hot,HIGH);
    digitalWrite(ice,LOW);
  }
  
  // green
  if(temp>150&&temp<170&&light>550&&soil>300&&soil<500){
    digitalWrite(good,HIGH);
  }else{
    digitalWrite(good,LOW);
  }
  
  delay(2000);
}
  