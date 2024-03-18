int tempo = 100;
void setup() {
  Serial.begin (9600);

}

void loop() {
  Serial.print ("Tempo :");
  Serial.println (tempo);
  tempo ++;
  delay (50);
}
