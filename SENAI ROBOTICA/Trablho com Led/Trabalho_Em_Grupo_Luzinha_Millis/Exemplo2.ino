#define vm 2
#define vd 3
#define am 4
long tempo;

void setup() {
pinMode(vm,OUTPUT);
pinMode(vd,OUTPUT);
pinMode(am,OUTPUT);
}

void loop() {
 if(millis() == tempo+2000){
  digitalWrite(vd,HIGH);
  }
  
 if(millis() == tempo+4000) {
  digitalWrite(am,HIGH); 
  digitalWrite(vd,LOW);
 }

 if(millis()== tempo+6000) {
  digitalWrite(vm, HIGH);
  digitalWrite(am,LOW);
 }
 
 if(millis()== tempo+8000){
  digitalWrite(vm,LOW);
  tempo = millis();
 }
 
}
