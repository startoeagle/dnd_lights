const int DELAY = 1;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  Serial.println("Hello, world");
}

void loop() {
  pinMode(13, HIGH);
  delay(DELAY);
  // pinMode(13, LOW);
  delay(DELAY);
}
