#define tempVal A0
#define led 2
#define buzz 3
int temp;
//800 = 20°C
// maior q 29 acende o led, maior q 35 liga o buzzer

void setup() {
 pinMode(led,OUTPUT);
 pinMode(buzz,OUTPUT);
 Serial.begin(9600);
}

void loop() {
temp = analogRead(tempVal);
temp = map(temp,800,1100,20,50);
Serial.println(temp);
delay(700);
 if(temp > 29 && temp < 35){
  digitalWrite(led,1);
  delay(100);
  digitalWrite(led,0);
  delay(100);
  Serial.println ("***TEMPERATURA ELELVADA***");
  delay(500);
 }
 if(temp >= 35){
  digitalWrite(buzz,1);
  delay(50);
  digitalWrite(buzz,0);
  delay(50);
 }
 if(temp <= 29){
  digitalWrite(buzz,0);
  digitalWrite(led,0);
 }
}
