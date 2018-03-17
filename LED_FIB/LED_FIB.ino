int d,m;
void setup() {
  // put your setup code here, to run once:
  for (int i=0; i<8; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your mai code here, to run repeatedly:
  for (int x=0; x<8; x++)
  {
    digitalWrite(x, HIGH);
    digitalWrite(x+1, HIGH);
    delay(500);
  }
}
