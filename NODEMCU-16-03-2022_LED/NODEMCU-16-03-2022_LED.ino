int led=D3;
void setup() {
  // put your setup code here, to run once:
pinMode(D3,OUTPUT);
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH);
delay(10);
digitalWrite(led,LOW);
delay(10);
}
