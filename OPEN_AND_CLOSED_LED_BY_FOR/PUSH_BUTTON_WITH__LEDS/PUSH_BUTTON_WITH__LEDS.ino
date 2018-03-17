int val1,val2,val3;
void setup() {
  // put your setup code here, to run once:
  for (int i=0; i<3; i++)
  {
    pinMode(i, OUTPUT);
  }
  for (int x=8; x<11; x++)
  {
    pinMode(x, INPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
    val1 = digitalRead(8);
    if (val1 == HIGH)
    {
      digitalWrite(2, HIGH);
      delay(1000);
      digitalWrite(2, LOW);
      delay(1000);
    }
    else
    {
      digitalWrite(2, LOW);
    }
     val2 = digitalRead(9);
    if (val2 == HIGH)
    {
      digitalWrite(1, HIGH);
      delay(1000);
      digitalWrite(1, LOW);
      delay(1000);
    }
    else
    {
      digitalWrite(1, LOW);
    }
     val3 = digitalRead(10);
    if (val3 == HIGH)
    {
      digitalWrite(0, HIGH);
      delay(1000);
      digitalWrite(0, LOW);
      delay(1000);
    }
    else
    {
      digitalWrite(0, LOW);
    }
} 
