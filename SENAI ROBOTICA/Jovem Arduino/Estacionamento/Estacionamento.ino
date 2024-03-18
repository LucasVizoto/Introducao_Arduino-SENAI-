#define sensor1 2
#define sensor2 3
#define verd 4
#define verm 5
int vagas;
int qntdvagas;
void setup() {
  qntdvagas = 5;
  pinMode (sensor1,INPUT_PULLUP);
  pinMode (sensor2,INPUT_PULLUP);
  pinMode (verd,OUTPUT);
  pinMode (verm,OUTPUT);
  pinMode (13,OUTPUT);
  digitalWrite (13,LOW);
  Serial.begin (9600);
}

void loop() {

 if (!digitalRead(sensor1)) {
  if(vagas<5) {
  vagas++;
  qntdvagas--;
  delay(400);
  }
 }
 if(vagas>0) {
  if(!digitalRead (sensor2)){
  vagas--;
  qntdvagas ++;
  delay(400);
  }
 }
 if(vagas<5){
  digitalWrite(verm,LOW);
  digitalWrite(verd,HIGH);
  Serial.println("****ESTACIONAMENTO****");
  Serial.println("    ABERTO    ");
  delay(1500);
 }
 else {
  Serial.println("****ESTACIONAMENTO****");
  Serial.println("    FECHADO    ");
  delay(1500);
  digitalWrite (verm,HIGH);
  digitalWrite (verd,LOW);
 }
 Serial.println ("---Vagas Restantes---");
 Serial.println (qntdvagas);
 delay (1500);
}
