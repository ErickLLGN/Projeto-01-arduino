const byte LED = D1;

void setup(void) {  
  Serial.begin(115200);
}

void loop(void) { 
  pinMode(LED, OUTPUT);
  int sensorValue = analogRead(D2);

  if(sensorValue == 0){
    Serial.println("Lanterna no sensor");
    digitalWrite(LED, HIGH);
  }else {
    Serial.println("Sensor de boa");
    digitalWrite(LED, LOW);
  }
  delay(500);
}
