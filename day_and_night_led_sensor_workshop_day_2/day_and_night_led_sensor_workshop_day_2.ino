int ldr = A0;
int led = D1;
void setup() {
  pinMode(A0,INPUT);
  pinMode(D1,OUTPUT);
  Serial.begin(115200);
}
void loop() {
  int i = analogRead(ldr);
  Serial.println(i);
delay(1000);
if(i>=500)
{
  Serial.println("day time");
  digitalWrite(D1,LOW);
delay(1000);
}
else
{
  Serial.println("night time");
  digitalWrite(D1,HIGH);
delay(1000);
}
}
