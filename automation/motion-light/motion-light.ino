#define ldr    A0   
#define pir     2  
#define led     3   

void setup() {
  Serial.begin(9600);
  
  pinMode(ldr, INPUT);
  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  int lightValue = analogRead(ldr);     
  int motion = digitalRead(pir);          
  
  Serial.print("Light: ");
  Serial.print(lightValue);
  Serial.print(" | Motion: ");
  Serial.println(motion);
  
  if (lightValue < 300 && motion == HIGH) {
    digitalWrite(led, HIGH);
    Serial.println(">>> LIGHT ON");
  } 
  else {
    digitalWrite(led, LOW);
    Serial.println(">>> LIGHT OFF");
  }
  
  delay(200);
}