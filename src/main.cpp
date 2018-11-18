#include <Arduino.h>
#include "SetupWIFI.h"
#include "ifttt.h"
void setup(){
  Serial.begin(9600);
  pinMode(D2,INPUT);
  ConnectarALaWifi();
}
int i = 0;
int val = 0;
int valor = 0;
void loop(){
  Serial.print("Pas: ");
  Serial.print(i++);
  Serial.print(" --> Valor: ");
  val = valor;
  valor = digitalRead(D2);
  Serial.println(valor);
  if(val != valor)
    EnviarAIFTTT(valor);
  delay(500);
}