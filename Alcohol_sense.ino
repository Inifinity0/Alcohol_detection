
void setup() {
  pinMode(8,INPUT);
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
  // put your setup code here, to run once:

}

void loop() {
  int a=digitalRead(8);
  if(a==0)
  {
    digitalWrite(13,HIGH);
  }
  else {
    digitalWrite(13,LOW);
  }
  // put your main code here, to run repeatedly:

}
