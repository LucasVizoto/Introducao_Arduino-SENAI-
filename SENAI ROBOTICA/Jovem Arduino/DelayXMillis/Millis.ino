#define vm 2
#define vd 3
#define bot_lig 4
#define bot_desl 5
long tempo_anterior;

void setup() {
pinMode(vm,OUTPUT);
pinMode(vd,OUTPUT);
pinMode(bot_lig,INPUT_PULLUP);
pinMode(bot_desl,INPUT_PULLUP);
Serial.begin(9600);
}

void loop() {
if(millis() >=tempo_anterior+6000){
  tempo_anterior = millis();
  digitalWrite(vm,!digitalRead(vm));
  Serial.println (tempo_anterior);
  }
if(!digitalRead(bot_lig)){
  digitalWrite(vd,HIGH);
  }
  if(!digitalRead(bot_desl)){
  digitalWrite(vd,LOW);
  }
}
