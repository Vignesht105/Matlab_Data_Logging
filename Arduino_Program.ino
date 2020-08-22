#include "DHT.h"
#define DHTPIN 4     
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  //Serial.println(F("DHTxx test!"));
  dht.begin();
}

void loop() {
float temp = dht.readTemperature();   //read temperature data
float humi = dht.readHumidity();   //read temperature data
  //Serial.print("Temp:");
  Serial.print(temp);
  //Serial.print(", Humidity:");
  Serial.print(humi);
  delay(2000);

}
