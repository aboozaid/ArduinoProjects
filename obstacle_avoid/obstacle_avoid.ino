void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(A0); // sensor 1 Left
  int y = analogRead(A1); // sensor 2 Right
  int z = analogRead(A2); // sensor 3 Center
  Serial.println(x);
  Serial.println(y);
  Serial.println(z);
  delay(500);
  if (x > 50 && y < 150) {
    Reverse();
    Right();
  }
  else if (x > 50 && y > 130 && z > 200) {
    Reverse();
    if (x >= 25 && x < 50)
      Left();
    else
      Right();
  }
  else if (x < 50 && y < 150 && z > 200) {
    Reverse();
    if (x >= 25 && x < 45)
      Left();
    else
      Right();
  }
  else if (x < 50 && y > 130){
    Reverse();
    Left();
  }
  else {
    Forward();
  }
}
void Forward() {
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(200);
}
void Right() {
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(200);
}
void Left() {
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  delay(200);
}
void Reverse() {
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  delay(200);
}

