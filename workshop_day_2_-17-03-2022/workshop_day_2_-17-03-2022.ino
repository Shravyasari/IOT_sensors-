const int gas=A0;
int input_val=0;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  input_val=analogRead(gas);
  Serial.print("gas value is:");
  Serial.println(input_val);
  delay(1000);


}
