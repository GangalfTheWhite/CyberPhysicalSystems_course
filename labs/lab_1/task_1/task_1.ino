#define LED_PIN 20    // D6
#define INPUT_PIN 6  // A6

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);

  digitalWrite(LED_PIN, LOW);
  delay(500);
  Serial.println(analogRead(INPUT_PIN));
}
