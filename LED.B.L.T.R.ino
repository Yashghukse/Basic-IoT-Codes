#define led1  2
#define led2  3
#define led3  4
#define led4  5

#define leftButton  8
#define rightButton  9

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

  pinMode(leftButton, INPUT);
  pinMode(rightButton, INPUT);
}

void loop()
{
         bool x = digitalRead(leftButton);
  
  if (x==1){
    // Left to Right
    digitalWrite(led1, HIGH);
    Serial.println("LED Turns On");
    delay(1000);

    digitalWrite(led2, HIGH);
    Serial.println("LED Turns ON");
    delay(1000);

    digitalWrite(led3, HIGH);
    Serial.println("LED Turns On");
    delay(1000);
    
    digitalWrite(led4, HIGH);
    Serial.println("LED Turns On");
    delay(1000);
    
  }
  else{
   digitalWrite(led1, LOW);
   Serial.println("LED Turns Off");
   

   digitalWrite(led2, LOW);
   Serial.println("LED Turns Off");
   

   digitalWrite(led3, LOW);
   Serial.println("LED Turns Off");
  

   digitalWrite(led4, LOW); 
   Serial.println("LED Turns Off");
   

  }
       bool y = digitalRead(rightButton);
  
  
  if (y==1)
  {
    // Right to Left
    digitalWrite(led4, HIGH);
    Serial.println("LED Turns On");
    delay(1000);

    digitalWrite(led3, HIGH);
    Serial.println("LED Turns On");
    delay(1000);

    digitalWrite(led2, HIGH);
    Serial.println("LED Turns On");
    delay(1000);

    digitalWrite(led1, HIGH);
    Serial.println("LED Turns On");
    delay(1000);
  }
  else{
    digitalWrite(led4, LOW);
    Serial.println("LED Turns Off");
    

    digitalWrite(led3, LOW);
    Serial.println("LED Turns Off");
    

    digitalWrite(led2, LOW);
    Serial.println("LED Turns Off");
    

    digitalWrite(led1, LOW);
    Serial.println("LED Turns Off");
    

  }
}
