int ldr = A0;
void setup() {
  pinMode(A0,INPUT);
  Serial.begin(115200);
}
void loop() {
  int i = analogRead(ldr);
  Serial.println(i);
delay(1000);
if(i>=500)
{
  Serial.println("day time");
delay(1000);
}
else
{
  Serial.println("night time");
delay(1000);
}
}
