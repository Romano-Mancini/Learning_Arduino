#include <DHT.h>
#include <DHT_U.h>

DHT DH(2, DHT11);

void setup() {
  Serial.begin(9600);
  DH.begin();
}

void loop() {
  float temp, hum;
  
  temp = DH.readTemperature();
  hum = DH.readHumidity();
  Serial.print("\nTemperature: ");
  Serial.print(temp);
  Serial.println(" °C");
  Serial.print("Humidity: ");
  Serial.print(hum);
  Serial.println("%\n________");
  delay(700);
}
