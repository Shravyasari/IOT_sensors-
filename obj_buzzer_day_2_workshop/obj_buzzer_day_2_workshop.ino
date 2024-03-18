int buzzer=D3;
int ir1=D4;
int count=0;
int n;
void setup() {
pinMode(D4,INPUT);
pinMode(buzzer,OUTPUT);
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
    for(n=1;n<=10;n++)
    if(count==10*n)
    {
      digitalWrite(buzzer,HIGH);
      Serial.print("ON");
      delay(1000);
      digitalWrite(buzzer,LOW);
      Serial.print("OFF");
      delay(1000);
    }
delay(1000);
  }
   else
  {
    Serial.println("object not detected:");
    delay(1000); 
  }
  

}
