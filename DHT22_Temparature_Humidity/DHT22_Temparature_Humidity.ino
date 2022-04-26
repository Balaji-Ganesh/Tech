#include <DHT.h>

DHT dht(8, DHT22);  // Connect the DATA pin to digitalPin 8
float humidity;
float temperature;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  humidity = dht.readHumidity();
  temperature = dht.readTemperature();

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%\nTemparature: ");
  Serial.print(temperature);
  Serial.println(" Celsius");
  delay(2000);// wait for 2seconds..
}
