
void setup() {
  pinMode(8,INPUT);  //connect alcohol sensor here
  pinMode(13,OUTPUT); // connect led or buzzer
  digitalWrite(13,LOW);
  
}

void loop() {
  int a=digitalRead(8);  // read alcohol sensor value
  if(a==0)
  {
    digitalWrite(13,HIGH);
  }
  else {
    digitalWrite(13,LOW);
  }
 
}
