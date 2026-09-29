#define ldr A0
#define yellow 3
#define green 2


void setup(){

Serial.begin(9600);
pinMode(ldr, INPUT);
pinMode(yellow, OUTPUT);
pinMode(green,OUTPUT);
}

void loop(){

int value = analogRead(ldr);
Serial.print("Light: ");
Serial.println(value);
  
 if(value<550){
   digitalWrite(yellow,HIGH);
   digitalWrite(green,LOW);
  }else{
   digitalWrite(yellow,LOW);
   digitalWrite(green,HIGH);
 }
  
}




