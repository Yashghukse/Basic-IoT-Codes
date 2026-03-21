// This my third arduino program
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
  Serial.println("Led1 Turns On");
  delay(1000);


  digitalWrite(led2, HIGH);
  Serial.println("Led2 Turns On");
  delay(1000);

  digitalWrite(led3, HIGH);
  Serial.println("Led3 Turns  On");
  delay(1000);

  // ALL LED OFF
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);

  Serial.println("ALL LED OFF");
  delay(1000);
}


