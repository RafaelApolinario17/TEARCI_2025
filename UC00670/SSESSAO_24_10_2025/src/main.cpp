#include <Arduino.h>

int botao_foi_pressionado = 0;
int botao = 0;

unsigned long t4 = 0;
unsigned long tempo_anterior_4 = 0;

unsigned long t5 = 0;
unsigned long tempo_anterior_5 = 0;
int comeca_a_descontar = 0;

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
    Serial.println("botao precionado - ");
    Serial.println(botao_foi_pressionado);

    //ponto de inicio de contagem
    tempo_anterior_4 = millis();
  }
 else
 {
   Serial.println("botao não precionado - ");
   Serial.println(botao_foi_pressionado);
 }

 //se o botao foi pressionado
 if (botao_foi_pressionado)
 {
  //começar a contagem
  t4 = millis();
  if (t4 - tempo_anterior_4 > 2000)
  {
    digitalWrite(LED_BUILTIN, HIGH);

  //cancelar botao precionado
  botao_foi_pressionado = 0;
 
  //começar a contagem de desligar
  tempo_anterior_5 = millis();

  //dizer que contagem do desligar tem de acontecer
  comeca_a_descontar = 1;

  }

 }

//se começa a descontagem
if (comeca_a_descontar)
{
  //começar a contagem para desconectar
  if (t5 = tempo_anterior_5 > 2000)
  {
  //desliga
  digitalWrite(LED_BUILTIN, LOW);

  //cancelar começa a desconectar
  comeca_a_descontar = 0;
  }
}
}