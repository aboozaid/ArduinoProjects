void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.read() == '1')
  {
    analogWrite(3, 55);
    Serial.println (" 1 Volt ");
  }
  else if (Serial.read() == '3')
  {
    analogWrite(3, 165);
    Serial.println (" 3 Volt ");
  }
  else if (Serial.read() == '5')
  {
    analogWrite(3, 255);
    Serial.println (" 5 Volt ");
  }
  else if (Serial.read() == '6')
  {
    digitalWrite(3, LOW);
  }
}
