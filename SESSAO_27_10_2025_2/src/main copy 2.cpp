// #include <Arduino.h>

// int opcao = 0;

// void setup() {
//   Serial.begin(9600);
//   //configurar o periferico do botao 1
//   pinMode(2, INPUT);
//   //configurar o periferico do botao 2
//   pinMode(4, INPUT);
// }

// void loop() {

// //testar se o botao 1 está a ser pressionado
// if (digitalRead(2) == LOW)
// {
//   opcao = 0;
// }

// //testar se o botao 2 está a ser pressionado
// if (digitalRead(4) == LOW)
// {
//   opcao = 1;
// }

// //testar se os 2 botaos estao a ser pressionados 
// if (digitalRead(2) == LOW && digitalRead(4) == LOW) 
// {
//   opcao = 2;
// }
  
// switch (opcao)
// {
// case 0:
//   //executar uma ação
//   Serial.println("Case 0");
//   break;
// case 1:
//   //executar uma ação
//   Serial.println("Case 1");
//   break;

// default:
//   Serial.println("Default");
//   //executar ação
//   break;
// }
// }