#define lightSensor A5
const int led = 13;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int lightLevel = analogRead(lightSensor);
  Serial.println(lightLevel);
  delay(1000);

  if (lightLevel > 110)
  {
    digitalWrite(led, HIGH);
  }
  else 
  {
    digitalWrite(led, LOW);
  }
  
}
