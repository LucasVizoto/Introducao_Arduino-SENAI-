char letra;
void setup() {
Serial.begin(9600);
Serial.println ("Insira a letra N para aparecer o nome ou S para o sobrenome");
}
void loop() {
if (Serial.available ()) {
  letra = Serial.read();
  if (letra == 'N' || letra == 'n') {
  Serial.println ("Lucas");
  }
  else if (letra == 'S' || letra == 's' ) {
  Serial.println ("Vizoto");
  }
  else{
  Serial.println ("Caracter inválido!!");
  }
 }
}
 
