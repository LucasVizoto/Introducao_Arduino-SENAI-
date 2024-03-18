int tempo = 100;
void setup() {
  Serial.begin (9600);

}

void loop() {
  Serial.println ("--------------");
  Serial.print ("Tempo: ");
  Serial.println (tempo);
    if (tempo >= 500 && !(tempo%2)){
  Serial.println ("***JOVEM*** ");
  }
  Serial.println ("--------------");
  tempo ++;
  delay (50);
}
