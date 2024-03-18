int fir=D3;
int buzzer = D4;
void setup() {
  pinMode(D3,INPUT);
  pinMode(D4,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int i=digitalRead(fir);
  Serial.println(i);
delay(1000);
if(i==0)
{
  Serial.println("fire is detected");
  digitalWrite(buzzer,HIGH);
  Serial.println("ON");
delay(1000);
}
else
{
  Serial.println("fire is not detected");
  digitalWrite(buzzer,LOW);
  Serial.println("OFF");
delay(1000);
}
}
