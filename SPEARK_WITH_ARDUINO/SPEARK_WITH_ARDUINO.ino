#define led 2
void setup() {
  // put your setup code here, to run once:
  pinMode(led , OUTPUT);
  Serial.begin(9600);
  digitalWrite(led, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.read() == 'o')
  {
    digitalWrite(led, HIGH);
    Serial.println(" Led is On ");
  }
  else if (Serial.read() == 'f')
  {
    digitalWrite(led, LOW);
    Serial.println(" Led is Off ");
  }
}
