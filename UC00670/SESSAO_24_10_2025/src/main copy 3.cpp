// #include <Arduino.h>

// unsigned long t = 0;
// unsigned long tempo_anterior = 0;

// unsigned long t2 = 0;
// unsigned long tempo_anterior2 = 0;


// void setup() {
//   Serial.begin(9600);

//   pinMode(LED_BUILTIN, OUTPUT);
// }

// void loop() {
//   // se já passou 2 segundos
//   t = millis();
  
//   if(t - tempo_anterior > 2000)

//    {
//     // Liga o LED depois de terem passado 10 segundos -> 10000 milissegundos
//     // digitalWrite(LED_BUILTIN, HIGH);

//     Serial.print("t - ");
//     Serial.println(t);

//     Serial.print("tempo:anterior - ");
//     Serial.println(tempo_anterior);
//     tempo_anterior = millis();
//   }
  
//   t2 = millis();
  
//   if(t2 - tempo_anterior2 > 1000)

//   {
//     // Liga o LED depois de terem passado 10 segundos -> 10000 milissegundos
//     // digitalWrite(LED_BUILTIN, HIGH);

//     Serial.print("t2 - ");
//     Serial.println(t2);

//     Serial.print("tempo:anterior2 - ");
//     Serial.println(tempo_anterior2);
//     tempo_anterior2 = millis();
//   }
  
// }

