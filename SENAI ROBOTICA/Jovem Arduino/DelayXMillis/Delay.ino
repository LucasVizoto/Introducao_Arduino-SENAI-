#define vm 2
#define vd 3
#define bot_lig 4
#define bot_desl 5

void setup() {
pinMode(vm,OUTPUT);
pinMode(vd,OUTPUT);
pinMode(bot_lig,INPUT_PULLUP);
pinMode(bot_desl,INPUT_PULLUP);
Serial.begin(9600);
}

void loop() {
digitalWrite(vm,1);
delay(6000);
digitalWrite(vm,0);
delay(6000);
 if(!digitalRead(bot_lig)){
  digitalWrite(vd,1);
 }
 if(!digitalRead(bot_desl)){
  digitalWrite(vd,0);
 }
}
