#define trigPin 7
#defiine echoPin 6
int valvepin = 3;
long distance, duration;
const int analogInPin = A0;

void setup() {
  Serial.begin(9600);
  pinMode(valvepin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop(){
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) * 0.0343;

  Serial.print("Distance = ");
  Serial.print(distance);
  Serial.println(" CM");
  delay(100);

  if (distance > 12)
  {
    digitalWrite(valvepin, HIGH);
  }
  else if (distance < 2)
  {
    digitalWrite(valvepin, LOW);
  }
}
