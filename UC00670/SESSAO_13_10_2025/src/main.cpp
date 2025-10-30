#include <Arduino.h>

int s = 0;

void setup() {

  Serial.begin(9600);
  pinMode(4,INPUT);
}

void loop() {

  s = digitalRead(4);
  Serial.print("s - ");
  Serial.println(s);

  if (s)
  {
    Serial.println("botao nao pressionado");
  }
  else
  {
    Serial.println("botao pressionado");
  
  }
  Serial.println("vivo");
  delay(1000);
}
