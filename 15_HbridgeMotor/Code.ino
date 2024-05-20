#define enablePin 6
#define dirControlPin2 5
#define dirControlPin1 4
#define turnOnReader 2
#define directionReader 3
#define speedReader A0

uint8_t direction = 0, turnedOn = 0, speed = 0;

void setup() {
  pinMode(enablePin, OUTPUT);
  pinMode(dirControlPin2, OUTPUT);
  pinMode(dirControlPin1, OUTPUT);
  pinMode(turnOnReader, INPUT);
  pinMode(directionReader, INPUT);
  pinMode(speedReader, INPUT);
}

void loop() {
  // Toggles the state of 'turnedOn' and writes the new state to 'enablePin', while setting the speed
  digitalWrite(dirControlPin2, !direction);  
  digitalWrite(dirControlPin1, direction);
  
  // Toggles the state of 'turnedOn', reads and maps the 'speed' value
  if (digitalRead(turnOnReader)) {
    delay(300); // avoids bouncing period
    if (turnedOn == 1) {
      analogWrite(enablePin, 0);
      turnedOn = 0;
    }
    else {
      turnedOn = 1;
      analogWrite(enablePin, speed = map(analogRead(speedReader), 0, 1023, 0, 255));
    }
  }

  // checks for a new speed value if the motor is enabled
  if (turnedOn)
    analogWrite(enablePin, speed = map(analogRead(speedReader), 0, 1023, 0, 255));

  // Toggles the state of 'direction' and writes the new state to the direction pins, so that they are always the opposite of each other
  if (digitalRead(directionReader) != 0) {
    direction = !direction;
    digitalWrite(dirControlPin2, !direction);  
    digitalWrite(dirControlPin1, direction);
    analogWrite(enablePin, 0);
    delay(1000);
    analogWrite(enablePin, speed);
  }
}
