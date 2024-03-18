#define led1 2
#define led2 3
#define led3 4
#define echo1 9
#define trig1 8
#define echo2 10
#define trig2 11
#define echo3 7
#define trig3 6
unsigned long tempo1;
double dist1;
unsigned long tempo2;
double dist2;
unsigned long tempo3;
double dist3;

void setup() {
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(trig1,OUTPUT);
pinMode(echo1,INPUT);
pinMode(trig2,OUTPUT);
pinMode(echo2,INPUT);
pinMode(trig3,OUTPUT);
pinMode(echo3,INPUT);
Serial.begin(9600);
digitalWrite(trig1,LOW);
digitalWrite(trig2,LOW);
digitalWrite(trig3,LOW);
}

void loop() {
  
/* ____________________________
      ***PRIMEIRO SENSOR****  
  _____________________________*/
digitalWrite(trig1,HIGH);
delayMicroseconds(10);
digitalWrite(trig1,LOW);
tempo1 = pulseIn(echo1,HIGH);
dist1 = tempo1/58;
 if(dist1<=7){
  digitalWrite(led1,HIGH);
 }
 else{
  digitalWrite(led1,LOW);
 }
 
/* ____________________________
      ***SEGUNDO SENSOR****  
  _____________________________*/
digitalWrite(trig2,HIGH);
delayMicroseconds(10);
digitalWrite(trig2,LOW);
tempo2 = pulseIn(echo2,HIGH);
dist2 = tempo2/58;
 if(dist2 <= 7) {
  digitalWrite(led2,HIGH);
 }
 else{
  digitalWrite(led2,LOW);
 }
 
/* ____________________________
      ***TERCEIRO SENSOR****  
  _____________________________*/
digitalWrite(trig3,HIGH);
delayMicroseconds(10);
digitalWrite(trig3,LOW);
tempo3 = pulseIn(echo3,HIGH);
dist3 = tempo3/58;
 if(dist3 <= 7) {
  digitalWrite(led3,HIGH);
 }
 else{
  digitalWrite(led3,LOW);
 }
Serial.print("**SENSOR 1 : ");
Serial.print(dist1);
Serial.print("**,  ");
Serial.print("**SENSOR 2 : ");
Serial.print(dist2);
Serial.print("**,  ");
Serial.print("**SENSOR 3 : ");
Serial.print(dist3);
Serial.println("**");
delay(500);
}
