int waterSensor = A0;

int lowLevel = 100;     // He value change karu shakto
int highLevel = 200;    // He value change karu shakto

void setup() {
  Serial.begin(9600);
  Serial.println("Water Level System Started");
}

void loop() {

  int sensorValue = analogRead(waterSensor);

  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);
  Serial.print("  |  Water Level: ");

  if(sensorValue < lowLevel) {
    Serial.println("LOW");
  }
  else if(sensorValue >= lowLevel && sensorValue < highLevel) {
    Serial.println("MEDIUM");
  }
  else {
    Serial.println("HIGH");
  }

  delay(1000);
}