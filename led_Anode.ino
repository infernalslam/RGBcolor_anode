

void setup() {
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
}

void loop() {
  RGBcolor(1, 0, 0);
  delay(1000);
  RGBcolor(0, 1, 0);
  delay(1000);
  RGBcolor(0, 0, 1);
  delay(1000);
}

void RGBcolor(int red, int green, int blue) {
   digitalWrite(D0, !red);
   digitalWrite(D1, !green);
   digitalWrite(D2, !blue);
}
