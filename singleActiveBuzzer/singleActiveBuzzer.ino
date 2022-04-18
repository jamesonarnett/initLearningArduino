int buzzerPin = 3;

void setup() {
  // put your setupp code here, to run once:
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buzzerPin, HIGH);
  delay(5);
  digitalWrite(buzzerPin, LOW);
  delay(995);
}
