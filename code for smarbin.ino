
#include <Servo.h>

#define trigPin 9
#define echoPin 10

Servo myServo;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  myServo.attach(6);
  myServo.write(0); // Lid closed
  Serial.begin(9600);
}

void loop() {
  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read distance
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  // If hand detected within 20 cm
  if (distance <= 20 && distance > 0) {
    myServo.write(90);  // Open lid
    delay(2000);        // Keep open
  } else {
    myServo.write(0);   // Close lid
  }

  delay(300);
}
