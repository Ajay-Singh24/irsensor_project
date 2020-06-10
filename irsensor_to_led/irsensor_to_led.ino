void setup (){
  pinMode(D1,INPUT);
  Serial.begin(9600);
  pinMode(D2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int s = digitalRead(D1);
  Serial.println(s);
  if (s==0){
    digitalWrite(D2,HIGH);
  }
  else{
    digitalWrite(D2,LOW);
  }
  delay(1000);
}
