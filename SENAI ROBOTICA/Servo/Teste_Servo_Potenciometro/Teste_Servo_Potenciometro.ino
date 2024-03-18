#include <Servo.h>
#define pinoPot1 A0
Servo teste;
int val1;

void setup() {
  Serial.begin(9600);
  teste.attach(4);
}

void loop() {
  val1 = analogRead(pinoPot1);
  val1 = map(val1, 0, 1023, 0, 180);
  Serial.println(val1);
  teste.write(val1);
  delay(15);
}
