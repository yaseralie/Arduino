//using library DHT sensor Library by Adafruit Version 1.4.3

#include <DHT.h>
#define DHTPIN 2  //GPIO2 atau D4
// Uncomment the type of sensor in use:
//#define DHTTYPE    DHT11     // DHT 11
#define DHTTYPE    DHT11     // DHT 22 (AM2302)
//#define DHTTYPE    DHT21     // DHT 21 (AM2301)
DHT dht(DHTPIN, DHTTYPE);

// current temperature & humidity, updated in loop()
float t = 0.0;
float h = 0.0;

void setup() {
  Serial.begin(9600);
  delay(500);

  Serial.println("Temperature & Humidity DHT11 Sensor");
  dht.begin();
  delay(1000);

}

void loop() {
  t = dht.readTemperature();
  h = dht.readHumidity();
  Serial.print(h);
  Serial.print(",");
  Serial.print(t);
  Serial.println();
  delay(2000);

}
