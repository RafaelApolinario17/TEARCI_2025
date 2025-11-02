#include <Arduino.h>

int opcao = 0;

void setup() {
  Serial.begin(9600);
  //configurar o periferico do botao 1
  pinMode(2, INPUT);
  //configurar o periferico do botao 2
  pinMode(4, INPUT);
}

void loop() {
if (digitalRead(2) == HIGH && digitalRead(4) == HIGH)
{
  opcao = 0;
}


//testar se o botao 1 está a ser pressionado
if (digitalRead(2) == LOW)
{
  opcao = 1;
}

//testar se o botao 2 está a ser pressionado
if (digitalRead(4) == LOW)
{
  opcao = 2;
}

//testar se os 2 botaos estao a ser pressionados 
if (digitalRead(2) == LOW && digitalRead(4) == LOW) 
{
  opcao = 3;
}
  
// Botao 0       Botao 1       CASA     Significado
// 0             0             0        FAZER_NADA
// 0             1             1        Botao 1 pressionado
// 1             0             2        Botao 0 e Botao 1 pressionado
// 1             1             3        ERRO

switch (opcao)
{
case 0:
  //executar uma ação
  Serial.println("FAZER NADA");
  break;
case 1:
  //executar uma ação
  Serial.println("Botao 1 pressionado");
  break;

case 3:
  //executar uma ação
  Serial.println("Botao 0 e Botao 1 pressionado");
  break;

default:
  Serial.println("ERRO");
  //executar ação
  break;
}
}