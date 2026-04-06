// Global declaration
#define my_led1 2
#define my_led2 3
#define my_led3 4
void setup() {
 pinMode(my_led1, OUTPUT);
 pinMode(my_led2, OUTPUT);
 pinMode(my_led3, OUTPUT);
 Serial.begin(9600); 

}

void loop() {
  // LED ON
  digitalWrite(my_led1, HIGH);
  Serial.println("led turns on");
  delay(1000);

  digitalWrite(my_led2, HIGH);
  Serial.println("led turns on");
  delay(1000);

  digitalWrite(my_led3, HIGH);
  Serial.println("led turns on");
  delay(1000);



  // LED OFF
  digitalWrite(my_led1, LOW);
   Serial.println("led turns off");
  delay(1000);

  digitalWrite(my_led2, LOW);
   Serial.println("led turns off");
  delay(1000);

  digitalWrite(my_led3, LOW);
   Serial.println("led turns off");
  delay(1000);
  

}
