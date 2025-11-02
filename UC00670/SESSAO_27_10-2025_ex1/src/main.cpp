#include <Arduino.h>

int botao_foi_pressionado = 0;
int botao = 0;

unsigned long t = 0;
unsigned long tempo_anterior = 0;

unsigned long t2 = 0;
unsigned long tempo_anterior2 = 0;

void setup() {
  Serial.begin(9600);

  pinMode(2,INPUT);

  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

// leitura de botao
botao = digitalRead(2);

  // se botão foi pressionado
  if(botao)
  {
    //botão foi pressionado
    botao_foi_pressionado = 1;
    Serial.println("botao não precionado - ");
    Serial.println(botao_foi_pressionado);

    //ponto de inicio de contagem
    tempo_anterior = millis();
  }
 else
 {
   Serial.println("botao precionado - ");
   Serial.println(botao_foi_pressionado);
 }

 //se o botao foi pressionado
 if (botao_foi_pressionado)
 {
  //começar a contagem
  t = millis();
  if (t - tempo_anterior > 5000)
  {
    tempo_anterior = millis();
    digitalWrite(LED_BUILTIN, HIGH);
  }
 }

 t2 = millis();
  
  if(t2 - tempo_anterior2 > 5000)

  {
    // Liga o LED depois de terem passado 2 segundos -> 2000 milissegundos
    // digitalWrite(LED_BUILTIN, HIGH);

    Serial.print("t2 - ");
    Serial.println(t2);

    Serial.print("tempo:anterior2 - ");
    Serial.println(tempo_anterior2);
    tempo_anterior2 = millis();
  }
}
