int g=3;
int sw=5;
int sw1 = 6;
int s=0;
int s1=0;
int r=13;
int y = 2;

void setup() {
  // put your setup code here, to run once:
 pinMode(g,OUTPUT);
 pinMode(y,OUTPUT);
 pinMode(r,OUTPUT);
 pinMode(sw,INPUT);
 pinMode(sw1,INPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int s=digitalRead(sw);
  if(s==1)
  {
   digitalWrite(g,HIGH);
   Serial.print("ok");
  }
  else
  {
   digitalWrite(g,LOW);
   Serial.print("o");
  }

  if(s1==1)
  {
   digitalWrite(r,HIGH);
   Serial.print("okk");
  }
  else
  {
   digitalWrite(r,LOW);
   Serial.print("O");
  }
  if((s==1) && (s1==1))
  {
   digitalWrite(y,HIGH);
   digitalWrite(r,HIGH);
   digitalWrite(g,HIGH);
   Serial.print("bulb 3");
  }
  else
  {
   digitalWrite(y,LOW);
   digitalWrite(r,LOW);
   digitalWrite(g,LOW);
   Serial.print("no glow");
  }
}
