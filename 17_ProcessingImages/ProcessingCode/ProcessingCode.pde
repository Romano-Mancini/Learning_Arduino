import processing.serial.*;

Serial Port;
PImage logo;
int backColor = 0;

void setup() {
  size(920, 614);                  // set size of window
  colorMode(HSB, 255);             // changes program color mode
  logo = loadImage("/home/romano/Downloads/png-transparent-sample-stamp-Photoroom.png"); // loads logo
  Port = new Serial(this, Serial.list()[0], 9600);
}

void draw() {
  if (Port.available() > 0)
    backColor = Port.read();
  background(backColor, 255, 255);
  image(logo, 0, 0);
}
