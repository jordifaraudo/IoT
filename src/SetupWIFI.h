#include <ESP8266WiFi.h>

#define WIFI_XARXA "JAZZTEL_k3sn"
#define WIFI_CONTRASENYA "whgsucyq3bqh"

void ConnectarALaWifi() {
    WiFi.mode(WIFI_STA);
    WiFi.setOutputPower(12.0);
    WiFi.begin(WIFI_XARXA, WIFI_CONTRASENYA);
    Serial.print("Esperant per conexio WIFI.");
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("\nS\'ha connectat a la WIFI " WIFI_XARXA " correctament.");
}