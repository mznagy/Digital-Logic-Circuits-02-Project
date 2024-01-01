 #define FLAME  2
 #define LDR  3
 #define BUZZER 5
 #define LED  6
 void setup() {
Serial.begin(9600);
 pinMode(BUZZER, OUTPUT); // put your setup code here, to run once:
 pinMode(LED, OUTPUT);
 pinMode(FLAME, INPUT);
 pinMode(LDR, INPUT);
 }

void loop() {
  // put your main code here, to run repeatedly:   
 if(digitalRead(FLAME) == LOW)
   {
    digitalWrite(BUZZER, HIGH);
   }
   else
   {
    digitalWrite(BUZZER, LOW);
   }
   if(digitalRead(LDR) == HIGH)
   {
    digitalWrite(LED, HIGH);
   }
   else
   {
    digitalWrite(LED, LOW);
   }
}
