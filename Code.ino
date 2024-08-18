void setup() {
  pinMode(3, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  int deger = analogRead(A0);
  deger = map(deger,0,1023,0,255);
  analogWrite(3, deger);
}
