int val;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(A0);
  Serial.println(val);
  digitalWrite(13, HIGH);
  delay(val);
  digitalWrite(13, LOW);
  delay(val);
}
