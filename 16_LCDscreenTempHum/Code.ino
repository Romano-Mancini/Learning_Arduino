#define D7 3
#define D6 4
#define D5 5
#define D4 6
#define D3 7
#define D2 8
#define D1 9
#define D0 10
#define E 11
#define RS 12
#define TEMP 13

#include <LiquidCrystal.h>
#include <DHT.h>
#include <DHT_U.h>

DHT DH(TEMP, DHT11);
LiquidCrystal lcd(RS, E, D0, D1, D2, D3, D4, D5, D6, D7);
float temp, hum;
String st;

void setup() {
  lcd.begin(32, 2);
  DH.begin();
}

void loop() {
  temp = DH.readTemperature();
  hum = DH.readHumidity();
  lcd.clear();

  st = String("Temp:  | Hum:");
  lcd.print(st);

  lcd.setCursor(0,1);
  st = String(temp, 1) + " C | ";
  lcd.print(st);

  st = String(hum, 1) + " %";
  lcd.print(st);

  delay(1000);
}
