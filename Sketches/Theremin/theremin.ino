int photocellPin = 0;
int speakerPin = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int reading = analogRead(photocellPin);
  int pitch = reading * 3;
  //Serial.println(pitch);  
  tone(speakerPin, pitch);
  delay(10);   
}





