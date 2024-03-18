
int r=13;
int g=5;
void setup() {
  // put your setup code here, to run once:
 pinMode(r,OUTPUT);
 pinMode(g,OUTPUT);
 Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(r,HIGH);
delay(6000);
digitalWrite(r,LOW);
delay(1000);
digitalWrite(g,HIGH);
delay(6000);
digitalWrite(g,LOW);
delay(1000);
}
