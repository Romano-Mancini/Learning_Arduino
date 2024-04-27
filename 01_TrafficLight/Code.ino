void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT); 
  pinMode(2, OUTPUT); 
}

void loop() {
  int green_time = 5000;
  int yellow_time = 3000;
  int red_time = 8000;

  digitalWrite(0, HIGH);
  delay(green_time);
  digitalWrite(0, LOW);
  
  digitalWrite(1, HIGH);
  delay(yellow_time);
  digitalWrite(1, LOW);
  
  digitalWrite(2, HIGH);
  delay(red_time);
  digitalWrite(2, LOW);
}
