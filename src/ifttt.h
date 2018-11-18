#include <ESP8266HTTPClient.h>

void EnviarAIFTTT(int valor) {
    String CANAL[2] = {"SonoffOff","Sonoff"};
    HTTPClient http;
    http.begin("http://maker.ifttt.com/trigger/"+CANAL[valor]+"/with/key/cRfTo1ztYTry2ZRT34OGD-KReqFL2dVpH_yTTtBehGF"); // URL a generar
    int resposta = http.GET();
    http.end();
    Serial.print("S'ha enviat el canvi de valors al nuvol d'IFTTT. Resposta IFTTT: ");
    Serial.println(resposta);
}