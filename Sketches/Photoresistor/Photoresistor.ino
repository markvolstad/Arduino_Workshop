int photocellPin = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int reading = analogRead(photocellPin);
  Serial.println(reading);  
  delay(100);
}



