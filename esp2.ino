#include <WiFi.h>

const char *ssid = "ESP32-Hotspot";
const char *password = "password123";

void setup() {
  Serial.begin(115200);
  
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Tentando se conectar ao ponto de acesso...");
  }

  Serial.println("Conectado com sucesso ao ponto de acesso!");
}

void loop() {
  // Coloque aqui qualquer lógica adicional que você queira executar
}
