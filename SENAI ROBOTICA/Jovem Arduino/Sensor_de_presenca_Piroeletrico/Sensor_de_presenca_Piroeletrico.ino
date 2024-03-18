#define led1 2
#define led2 4
#define led3 5
#define pir 3

void setup() {
pinMode(pir,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
}

void loop() {
 if(digitalRead (pir)){
  digitalWrite (led1,1);
  delay(2000);
  digitalWrite (led2,1);
  delay(2000);
  digitalWrite (led3,1);
  delay(2000);
 }
 else{
  digitalWrite (led1,0);
  digitalWrite (led2,0);
  digitalWrite (led3,0);
 }
}
