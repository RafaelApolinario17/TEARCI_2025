#include <Arduino.h>

int s = 0;

void setup() {
  Serial.begin(9600);
  pinMode(4,INPUT);
  pinMode(2,OUTPUT);
}


void loop() {

  s = digitalRead(4);
  Serial.print("s = ");
  Serial.println(s);
  if (s)
  {
    Serial.println("botao nao precionado");
    digitalWrite(2,HIGH);
  }
  else
  {
    Serial.println("botao precionado");
    digitalWrite(2,LOW);
  }
  delay(1000);
}

