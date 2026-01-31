#define red 7
#define yellow 4
#define green 2
void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

}

void loop() {
  digitalWrite(red, HIGH);
  delay(600);
  digitalWrite(red, LOW);
  delay(600);
  digitalWrite(yellow, HIGH);
  delay(600);
  digitalWrite(yellow, LOW);
  delay(600);
  digitalWrite(green, HIGH);
  delay(600);
  digitalWrite(green, LOW);
  delay(600);

}
