#define bot1 2
#define bot2 3
#define bot3 4
#define desl 5
#define led_amar1 6
#define led_verm1 7
#define led_verd1 8
#define led_amar2 9
#define led_verm2 10
#define led_verd2 11

void setup() {
pinMode(bot1, INPUT_PULLUP);
pinMode(bot2, INPUT_PULLUP);
pinMode(bot3, INPUT_PULLUP);
pinMode(desl, INPUT_PULLUP);
pinMode(led_amar1, OUTPUT);
pinMode(led_amar2, OUTPUT);
pinMode(led_verm1, OUTPUT);
pinMode(led_verm2, OUTPUT);
pinMode(led_verd1, OUTPUT);
pinMode(led_verd2, OUTPUT);
}

void loop() {
if(!digitalRead(bot1)){
  logica1();
  }
else if(!digitalRead(bot2)){
  logica2();
}
else if(!digitalRead(bot3)) {
  logica3();
}
else if(!digitalRead(desl)){
  logica4();
  }
}

void logica1(){
  digitalWrite(led_amar1, HIGH);
  digitalWrite(led_amar2, HIGH);   
  digitalWrite(led_verm1, HIGH);
  digitalWrite(led_verm2, HIGH);
  digitalWrite(led_verd1, HIGH);
  digitalWrite(led_verd2, HIGH);
  delay(200); 
  digitalWrite(led_amar1, LOW);
  digitalWrite(led_amar2, LOW);   
  digitalWrite(led_verm1, LOW);
  digitalWrite(led_verm2, LOW);
  digitalWrite(led_verd1, LOW);
  digitalWrite(led_verd2, LOW);
  delay(200);
if (!digitalRead(desl)){
  logica4();
 }
  else {logica1();
 }
}

void logica2(){
digitalWrite(led_amar1,HIGH);
delay(200);
digitalWrite(led_amar1, LOW);
delay(200);
digitalWrite(led_amar2,HIGH);
delay(200);
digitalWrite(led_amar2, LOW);
delay(200);
digitalWrite(led_verm1, HIGH);
delay(200);
digitalWrite(led_verm1, LOW);
delay(200);
digitalWrite(led_verm2, HIGH);
delay(200);
digitalWrite(led_verm2, LOW);
delay(200);
digitalWrite(led_verd1,HIGH);
delay(200);
digitalWrite(led_verd1, LOW);
delay(200);
digitalWrite(led_verd2,HIGH);
delay(200);
digitalWrite(led_verd2, LOW);
delay(200);
if (!digitalRead(desl)){
  logica4();
 }
  else {logica2();
 }
}
void logica3 (){
digitalWrite(led_amar1,HIGH);
delay(200);
digitalWrite(led_amar1, LOW);
delay(200);
digitalWrite(led_verm1,HIGH);
delay(200);
digitalWrite(led_verm1, LOW);
delay(200);
digitalWrite(led_verd1, HIGH);
delay(200);
digitalWrite(led_verd1, LOW);
delay(200);
digitalWrite(led_amar2, HIGH);
delay(200);
digitalWrite(led_amar2, LOW);
delay(200);
digitalWrite(led_verm2,HIGH);
delay(200);
digitalWrite(led_verm2, LOW);
delay(200);
digitalWrite(led_verd2,HIGH);
delay(200);
digitalWrite(led_verd2, LOW);
delay(200);
if (!digitalRead(desl)){
  logica4();
 }
  else {logica3();
 }
}
void logica4(){
digitalWrite(led_amar1, LOW);
digitalWrite(led_amar2, LOW);   
digitalWrite(led_verm1, LOW);
digitalWrite(led_verm2, LOW);
digitalWrite(led_verd1, LOW);
digitalWrite(led_verd2, LOW);
}
