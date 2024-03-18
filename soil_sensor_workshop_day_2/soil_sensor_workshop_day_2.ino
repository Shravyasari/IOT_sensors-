int WET = 3;
int DRY = 2;
int Sensor = A0;
int value = 0;
void setup() {
  Serial.begin(112500);
  pinMode(WET,OUTPUT);
  pinMode(DRY,OUTPUT);
  delay(2000);
}

void loop() {
  Serial.print("MOISTURE LEVEL:");
  value = analogRead(Sensor);
  value = value/10;
  Serial.println(value);
  if(value<50)
  {
    digitalWrite(WET,HIGH);
    Serial.println("Soil is wet");
    delay(1000);
  }
  else
  {
    digitalWrite(DRY,HIGH);
    Serial.println("Soil is dry");
    delay(1000);
  }
  delay(1000);
  digitalWrite(WET,LOW);
  digitalWrite(DRY,LOW);
}
