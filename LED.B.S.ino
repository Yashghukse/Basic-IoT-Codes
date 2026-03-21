// This my second arduino program
// Global declaration
#define led1 7
#define led2 4
#define led3 2

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // ALL LED ON
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);

  Serial.println("ALL LED ON");
  delay(1000);

  // ALL LED OFF
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);

  Serial.println("ALL LED OFF");
  delay(1000);
}
