// C++ code
//
int distance = 0;

int i = 0;

int between = 0;

int Light_Sensor = 0;

int pHOTOSENSOR = 0;

int lightsensor = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(A1, INPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  distance = 0.01723 * readUltrasonicDistance(A0, A0);
  Serial.println(distance);
  lightsensor = analogRead(A1);
  if (distance <= 83) {
    digitalWrite(12, HIGH);
  } else {
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(12, LOW);
  }
  if (distance <= 166) {
    digitalWrite(11, HIGH);
    analogWrite(11, map(lightsensor, 0, 1023, 0, 255));
    delay(100); // Wait for 100 millisecond(s)
  } else {
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(11, LOW);
  }
  if (distance <= 250) {
    digitalWrite(10, HIGH);
    analogWrite(10, map(lightsensor, 0, 1023, 0, 255));
    delay(100); // Wait for 100 millisecond(s)
  } else {
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(10, LOW);
  }
  if (distance <= 330) {
    digitalWrite(9, HIGH);
  } else {
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(9, LOW);
  }
}
