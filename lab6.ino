void setup() {
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);

}

void loop() {
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  delay(500);

  digitalWrite(6,LOW);
  delay(500);

  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay(500);

  digitalWrite(5,LOW);
  delay(500);



 

}