int val;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(A0);
  Serial.println(val);
  if (val<1034)
  {
    digitalWrite(11,HIGH);
  }
  else
  {
    digitalWrite(11,LOW);
  }
  delay(100);
}
