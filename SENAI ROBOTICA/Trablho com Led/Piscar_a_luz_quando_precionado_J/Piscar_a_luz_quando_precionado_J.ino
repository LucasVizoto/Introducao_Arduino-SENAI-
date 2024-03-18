char letra;
void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
if (Serial.available ()){
  letra = Serial.read ();
 if(letra == 'P'|| letra == 'p') {
    digitalWrite (13,HIGH);
  delay (500);
    digitalWrite (13,LOW);
  delay (120);
      digitalWrite (13,HIGH);
  delay (500);
    digitalWrite (13,LOW);
  delay (120);
 }
 else if (letra == 'L' || letra == 'l'){
  
}
else {
  digitalWrite (13,LOW);
}
}
