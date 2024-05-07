#define pinTiltBallSwitch A0
#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define interval 2000

unsigned long currentTime;
int currentLed;

void setup() {
  pinMode(pinTiltBallSwitch, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

void loop() {
  currentTime = millis();
  currentLed = led1;
  while (analogRead(pinTiltBallSwitch) != 0) {
    if (millis() >= currentTime + interval && currentLed <= led5) {
      currentTime = millis();
      digitalWrite(currentLed, HIGH);
      currentLed++;
    }
  }

  for (currentLed; currentLed >= led1; currentLed--)
    digitalWrite(currentLed, LOW);
}
