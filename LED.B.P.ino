// global declaration
#define pot A0
#define led A1
void setup() {
pinMode(pot,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);

}

void loop() {
     int x = analogRead(pot);
Serial.print("Pot Reading = ");
Serial.println(x);
if (x>0)
 {
  digitalWrite(led,HIGH);
  Serial.println("led turns on");
}
else{
  digitalWrite(led,LOW);
  Serial.println("led turns off");
}
}
