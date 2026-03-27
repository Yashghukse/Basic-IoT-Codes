// Global declaration
#define pot A0
#define led1 A1
#define led2 A2
#define led3 A3

void setup() {
  pinMode(pot, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
       int x = analogRead(pot);
       Serial.print("pot readings=");
       Serial.println(x);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);

if(x == 0){
   
}
else if (x<=100){ 
  digitalWrite(led1, HIGH);
}
else if(x>=100 && x<=200){
  digitalWrite(led2, HIGH);
}
else if(x>=200 && x<=300){
  digitalWrite(led3, HIGH);
}
}
