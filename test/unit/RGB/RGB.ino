int RGBPin[] = {9, 10, 11};

void setup() {
  pinMode(RGBPin[0], OUTPUT);
  pinMode(RGBPin[1], OUTPUT);
  pinMode(RGBPin[2], OUTPUT);
}

void SetRGB(int r, int g, int b) {
  analogWrite(RGBPin[0], r);
  analogWrite(RGBPin[1], g);
  analogWrite(RGBPin[2], b);
}

void loop() {
  SetRGB(255, 0, 255);
  delay(1000);
  SetRGB(0, 255, 255);
  delay(1000);
  SetRGB(255, 0, 0);
  delay(1000);
}
