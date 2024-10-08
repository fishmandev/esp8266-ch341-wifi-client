#include <Arduino.h>
#include <ESP8266WiFi.h>

const char* ssid = ""; //Enter SSID
const char* password = ""; //Enter Password

void setup() {
  Serial.begin(115200);
  // Connect to WiFi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) 
  {
     delay(1000);
     Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connection Successful");
  Serial.print("The IP Address of ESP8266 Module is: ");
  Serial.print(WiFi.localIP());// Print the IP address
}

void loop() {
  // put your main code here, to run repeatedly:
}
