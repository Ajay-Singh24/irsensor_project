void setup() {
  // put your setup code here, to run once:
  pinMode(D1,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int s= digitalRead(D1);
  Serial.println(s);
  delay(1000);
}
