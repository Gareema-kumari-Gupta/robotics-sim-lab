#define pir 7
#define force A0
#define piezo 3
#define redLED 5

void setup() {
  Serial.begin(9600);

  pinMode(pir, INPUT);
  pinMode(piezo, OUTPUT);
  pinMode(redLED, OUTPUT);

  digitalWrite(redLED, LOW);
  noTone(piezo);
  Serial.println("Security System Starting...");
  delay(2000);
  Serial.println("Security System ARMED!");
}

void loop() {

  int motion = digitalRead(pir);
  int pressure = analogRead(force);

  Serial.print("Motion: ");
  Serial.print(motion);

  Serial.print(" | Force: ");
  Serial.println(pressure);

  if (motion == HIGH || pressure > 500) {

    digitalWrite(redLED, HIGH);
    tone(piezo, 1000);

    Serial.println("!!! ALARM !!!");

  } 
  else {

    digitalWrite(redLED, LOW);
    noTone(piezo);

  }

  delay(2000);
}