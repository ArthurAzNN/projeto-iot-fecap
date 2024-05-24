#define BLYNK_TEMPLATE_ID "TMPL2vUAEj3lV"
#define BLYNK_TEMPLATE_NAME "PROJETO IOT 2"
#define BLYNK_AUTH_TOKEN "AtaUyZKIaxcssO9xS-hswrr_HaRO-AHM"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

BlynkTimer timer; 
#define BLYNK_PRINT Serial
int voltagem;
  

const char* ssid = "bruno wagner"; // Your WiFi network SSID
const char* pass = "12345678"; // Your WiFi network password
 
unsigned long lastMillis = millis();
  
void setup()
{
  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  }
 
void loop()
{
  Blynk.run(); //Chama a função Blynk.run()
  timer.run();
  voltagem = analogRead(A0);
  Blynk.virtualWrite(V1,voltagem);
  Serial.println(voltagem);
}
