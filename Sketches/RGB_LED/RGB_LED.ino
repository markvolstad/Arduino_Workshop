//For use with common-cathode LED

int redPin = 11;
int greenPin = 10;
int bluePin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  setColor(100, 0, 0);  // red
  delay(1000);
  setColor(0, 100, 0);  // green
  delay(1000);
  setColor(0, 0, 100);  // blue
  delay(1000);
  setColor(100, 100, 0);  // yellow
  delay(1000);  
  setColor(100, 0, 100);  // cyan
  delay(1000);
  setColor(0, 100, 100);  // magenta
  delay(1000);
}

void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}


