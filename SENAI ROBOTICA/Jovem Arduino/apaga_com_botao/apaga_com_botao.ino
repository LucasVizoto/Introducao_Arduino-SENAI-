#define sensor1 2
#define sensor2 3
#define verd 4
#define verm 5
int vagas;
int qntdvagas;
void setup() {
  pinMode (sensor1,INPUT_PULLUP);
  pinMode (sensor2,INPUT_PULLUP);
  pinMode (verd,OUTPUT);
  pinMode (verm,OUTPUT);
  pinMode (13,OUTPUT);
  digitalWrite (13,LOW);
  Serial.begin (9600);
}

void loop() {
 if(!digitalRead (sensor1)){
  digitalWrite (verd,HIGH);
  digitalWrite (verm,HIGH);
 }
if (!digitalRead (sensor2)){
   digitalWrite (verd,LOW);
  digitalWrite (verm,LOW);
 }
}
