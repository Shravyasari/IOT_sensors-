int buzzer=3;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzer,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(buzzer,HIGH);
Serial.print("ON");
delay(100);
digitalWrite(buzzer,LOW);
Serial.print("OFF");
delay(100);

}
