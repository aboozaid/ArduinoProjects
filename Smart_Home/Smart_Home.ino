#include <SoftwareSerial.h>
SoftwareSerial HC05(10, 11);
int x;
void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  Serial.begin(9600);
  HC05.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (HC05.available())
  {
    x = HC05.read();
    Serial.println(x);
  }
    if (x == 65) // ON
    {
      digitalWrite(6, HIGH);
    }
    else // OFF
    {
      digitalWrite(6, LOW);
    }
}
