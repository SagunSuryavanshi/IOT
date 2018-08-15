const int trigPin = 12;
const int echoPin =13;

void setup() {
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin,INPUT);

}

void loop() {
digitalWrite(trigPin,HIGH);
long distance,duration;
// Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
digitalWrite(trigPin,LOW);

delayMicroseconds(10);
digitalWrite(trigPin,LOW);

duration = pulseIn(echoPin,HIGH);
//29.1 is the air density
distance = (duration/2) / 29.1;


Serial.print(distance);
Serial.println(" cm");

}


