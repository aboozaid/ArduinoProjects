/*#include <SoftwareSerial.h>
SoftwareSerial hc05 (10,11);*/
char c;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 // hc05.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    //c = hc05.read();
      digitalWrite(12,LOW);
      digitalWrite(13, HIGH);
   
  
}
