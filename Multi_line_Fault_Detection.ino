// Define LED Pins
const int led1 = 13;
const int led2 = 12;
const int led3 = 14;

void setup() {
  Serial.begin(115200);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  float v1 = analogRead(34) * (3.3 / 4095.0);
  float v2 = analogRead(35) * (3.3 / 4095.0);
  float v3 = analogRead(32) * (3.3 / 4095.0);

  // LINE 1 LOGIC
  if (v1 < 0.2) {
    digitalWrite(led1, HIGH); // LED ON
    Serial.println("!!! FAULT LINE 1 !!!");
  } else {
    digitalWrite(led1, LOW);  // LED OFF
  }

  // LINE 2 LOGIC
  if (v2 < 0.2) {
    digitalWrite(led2, HIGH);
    Serial.println("!!! FAULT LINE 2 !!!");
  } else {
    digitalWrite(led2, LOW);
  }

  // LINE 3 LOGIC (Threshold is 0.1 because normal is 0.46)
  if (v3 < 0.1) {
    digitalWrite(led3, HIGH);
    Serial.println("!!! FAULT LINE 3 !!!");
  } else {
    digitalWrite(led3, LOW);
  }

  delay(500);
}