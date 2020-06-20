int analogPin = 1;
int led = 8;
int val = 0;
int data = 0;
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  val = analogRead(analogPin);
  if (val > 271) {
    digitalWrite(led, LOW);
    Serial.println("Enough water level");
  } else {
    digitalWrite(led, HIGH);
    Serial.println("Plese fill water");
  }
  data = val;
  Serial.println(data);
  delay(1000);
}
