#include <ESP32Servo.h>

Servo myservo;

void setup() {
  myservo.attach(23);
  myservo.write(0);
  Serial.begin(9600);
}

void loop() {

  myservo.write(-180);
  Serial.println("90");
  delay(2000);
  myservo.write(180);
  Serial.println("0");
  delay(2000);

}