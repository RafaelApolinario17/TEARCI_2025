#include <Arduino.h>

int s = 0;

void setup() {

  Serial.begin(9600);
  pinMode(4,INPUT);
  pinMode(2,OUTPUT);
}

void loop() {

  s = digitalRead(4);
  Serial.print("s - ");
  Serial.println(s);

  if (s)
  {
    Serial.println("dentro do if");
    digitalWrite(4,HIGH);
  }
  else
  {
    Serial.println("dentro do else");
    digitalWrite(4,LOW);
  }
  Serial.println("morto");
  delay(1000);
}
