int gas=A0;
int buzzer = D4;
void setup() {
  pinMode(D3,INPUT);
  pinMode(D4,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int d=analogRead(gas);
  Serial.println(d);
delay(1000);
if(d>=100)
{
  Serial.println("gas  is detected");
  digitalWrite(buzzer,HIGH);
  Serial.println("ON");
delay(1000);
}
else
{
  Serial.println("gas is not detected");
  digitalWrite(buzzer,LOW);
  Serial.println("OFF");
delay(1000);
}
}
