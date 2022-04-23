//adafruit DHT library
#include "DHT.h"

// DHT11 module / Sensor wire to pin2
#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // serial monitor
  Serial.begin(9600);
  Serial.println("Humidity and Temperature");

  //start
  dht.begin();
  
}

void loop() {
  //wait 2 sec
  delay(2000);

  //read humidity
  float h = dht.readHumidity();

  //read temp in c
  float t = dht.readTemperature();

  //send data to serial monitor
  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print("% Temperature: ");
  Serial.print(t);
  Serial.print("C");
  
}
