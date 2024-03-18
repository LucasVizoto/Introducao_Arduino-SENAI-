#define led1 2
#define led2 3
#define buzz 4
#define echo 9
#define trig 8
unsigned long tempo;
double dist;

void setup() {
pinMode(led1,OUTPUT);
pinMode(buzz,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
Serial.begin(9600);
digitalWrite(trig,0);
}

void loop() {
digitalWrite(trig,1);
delayMicroseconds(10);
digitalWrite(trig,0);
tempo = pulseIn(echo,1);
dist = tempo/58;
Serial.println(dist);
delay(500);
 if(dist<=5){
  digitalWrite(led2,1);
 }
 else{
  digitalWrite(led2,0);
 }
 if(dist >5 && dist<=300) {
  digitalWrite(led1,1);
  delay(50);
  digitalWrite(led1,0);
  delay(50);
 }
 else{
  digitalWrite(led1,0);
 }
}
