int Jovem = 0;
int mult = 0;
int tab = 2;

void setup(){
pinMode(13,OUTPUT);
digitalWrite(13,LOW);
 Serial.begin (9600);
 Serial.print (tab);
Serial.print (" x ");
Serial.print (mult);
Serial.print (" = ");
Serial.println (Jovem);
delay (500);

}

void loop() {
  Serial.print (tab);
  Serial.print(" x ");
  mult += 1;
Serial.print(mult);
delay (500);
 if (mult >= 10 ) {
  mult = -1;
}
Serial.print (" = ");
Jovem += 2;
Serial.println(Jovem);
delay (500);
 if (Jovem >= 20 ) {
  Jovem = -2;
 }

}
