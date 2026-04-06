// Global declaration
#define my_led 2

void setup() {
 pinMode(my_led, OUTPUT);
 Serial.begin(9600); 

}

void loop() {
  // LED ON
  digitalWrite(my_led, HIGH);
  Serial.println("led turns on");
  delay(1000);

  // LED OFF
  digitalWrite(my_led, LOW);
  Serial.println("led turns off");
  delay(1000);

}