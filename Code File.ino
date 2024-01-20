void setup() {
  // put your setup code here, to run once:
pinMode (12, OUTPUT);
pinMode (11, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite (12, LOW);
delayMicroseconds (2);

digitalWrite (12, HIGH);
delayMicroseconds (10);

digitalWrite (12, LOW);

int duration = pulseIn(11, HIGH);

int distance = (duration * 0.0343)/2;

Serial.print (distance);
Serial.println ("cm");
delay(100);

}
