#include <WiFi.h>

const char *ssid = "ESP32-Hotspot";
const char *password = "password123";

void setup() {
  Serial.begin(115200);
  
  WiFi.softAP(ssid, password);

  Serial.println("Hotspot configurado com sucesso!");
}

void loop() {
  // Coloque aqui qualquer lógica adicional que você queira executar
}
