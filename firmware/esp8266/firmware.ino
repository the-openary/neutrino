/*
  ESP8266 firmware for the Neutrino 3D Printer.
*/

#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>

// Set these to your desired credentials.

#define APSSID "YOUR_SSID_HERE"
#define APPSK "YOUR_PASSWORD_HERE"


const char *ssid = APSSID;
const char *password = APPSK;

void setup() {
  delay(1000);
  Serial.begin(115200);
  Serial.println();
  Serial.print("Configuring access point...");
  WiFi.softAP(ssid, password);
}

void loop() {
  Serial.printf("Stations connected to soft-AP = %d\n", WiFi.softAPgetStationNum());
  delay(500);
}
