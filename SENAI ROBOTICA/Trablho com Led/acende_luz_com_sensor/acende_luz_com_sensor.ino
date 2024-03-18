#define led1 2
#define led2 3
#define ldr A0
int ldrv;

void setup() {
pinMode (led1,OUTPUT);
pinMode(led2,OUTPUT);
Serial.begin (9600);
}

void loop() {
ldrv = analogRead(ldr);
Serial.println (ldrv);
delay(700);
 if(ldrv >= 1000){
 digitalWrite(led1,HIGH);
  }
 if(ldrv >= 850) {
  digitalWrite(led2,HIGH);
  }
 else{
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
 }
}
