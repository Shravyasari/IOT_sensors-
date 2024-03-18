
int ir1=D4;
int count=0;
void setup() {
pinMode(D4,INPUT);
Serial.begin(115200);
  // put your setup code here, to run once:
  }

void loop() {
  int ir=digitalRead(ir1);
  
delay(1000);
if(ir==0)
  {
    Serial.println("object is detected:");
    count++;
    Serial.println(count);
delay(1000);
  }
else
  {
  Serial.println("object not detected:");
delay(1000); 
  }
  

}
