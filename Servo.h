#include <Servo.h>

Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;

int trigPin = 9; // Ultrasonic sensor trigger pin
int echoPin = 10; // Ultrasonic sensor echo pin

void setup() {
  motor1.attach(2); // Motor pins
  motor2.attach(3);
  motor3.attach(4);
  motor4.attach(5);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1; // Convert distance to centimeters
  
  if (distance < 30) { // If obstacle detected within 30cm, turn left
    motor1.write(0);
    motor2.write(0);
    motor3.write(180);
    motor4.write(180);
    delay(500); // Turn for 500 milliseconds
  } else { // If no obstacle, move forward
    motor1.write(180);
    motor2.write(180);
    motor3.write(0);
    motor4.write(0);
    delay(500); // Move forward for 500 milliseconds
  }
}
