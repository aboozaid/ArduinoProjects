#define PN1 13
#define PN2 12
#define PN3 11
#define PN4 10
int sensor1,sensor2;
void setup() {
  // put your setup code here, to run once:
  pinMode(PN1, OUTPUT);
  pinMode(PN2, OUTPUT);
  pinMode(PN3, OUTPUT);
  pinMode(PN4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(A0));
  Serial.println(analogRead(A1));
  delay(2000);
  
  sensor1 = analogRead(A0);
  sensor2 = analogRead(A1);
  if (sensor1 < 800 || sensor2 < 800)
  {
    digitalWrite(PN1, HIGH);
    delay(200);
    digitalWrite(PN2, HIGH);
    delay(200);
    digitalWrite(PN3, HIGH);
    delay(200);
    digitalWrite(PN4, HIGH);
    
  }
  else
    {
    digitalWrite(PN4, LOW);
    delay(200);
    digitalWrite(PN3, LOW);
    delay(200);
    digitalWrite(PN2, LOW);
    delay(200);
    digitalWrite(PN1, LOW);
    }
  
   
}

