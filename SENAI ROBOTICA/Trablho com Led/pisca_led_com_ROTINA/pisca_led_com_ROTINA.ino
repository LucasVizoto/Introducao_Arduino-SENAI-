#define liga1 2
#define liga2 3
#define liga3 4
#define desl 5
#define led 6

void setup() {
pinMode (liga1, INPUT_PULLUP);
pinMode (liga2, INPUT_PULLUP);
pinMode (liga3, INPUT_PULLUP);
pinMode (desl, INPUT_PULLUP);
pinMode (led, OUTPUT);

}

void loop() {
 if (!digitalRead(liga1)){
   logica1();
 }
 else if (!digitalRead(liga2)) {
   logica2();
 }
 else if (!digitalRead (liga3)) {
   logica3();
 }
 else if (!digitalRead (desl)) {
   logica4();
 }
}

void logica1() {
digitalWrite (led, HIGH);
delay(200);
digitalWrite (led,LOW);
delay(200);
  if(!digitalRead(desl)) {
  logica4();
 }
  else {
  logica1();
 }
}

void logica2() {
digitalWrite (led,HIGH);
delay(50);
digitalWrite (led,LOW);
delay(50);
  if(!digitalRead(desl)) {
  logica4();
 }
  else {
  logica2();
 }
}

void logica3() {
digitalWrite(led,HIGH);
delay(1500);
digitalWrite(led,LOW);
delay(1500);
  if(!digitalRead(desl)) {
  logica4();
 }
  else {
  logica3();
 }
}

void logica4() {
digitalWrite(led,LOW);
}
