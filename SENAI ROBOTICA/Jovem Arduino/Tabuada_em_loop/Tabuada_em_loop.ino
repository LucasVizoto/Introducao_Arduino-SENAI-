int mult = 0;
int tab = 2;
int resul = 0;
void setup(){
pinMode(13,OUTPUT);
digitalWrite(13,LOW);
Serial.begin (9600);
Serial.print ("--TABUADA DO NÚMERO ");
Serial.print (tab);
Serial.println ("--");
  Serial.print (tab);
  Serial.print (" x ");
  Serial.print (mult);
  Serial.print (" = ");
  Serial.println (resul);
delay (500);

}

void loop(){
mult += 1; 
resul =  tab * mult;
Serial.print(tab);
Serial.print (" x ");
Serial.print(mult);
if (mult >= 10){
mult = 0;
tab += 1;
}
delay(500);
Serial.print (" = ");
Serial.println (resul);
if (tab >= 11) {
  tab = 1;
}
if (mult <= 0) {
  Serial.print ("--TABUADA DO NÚMERO ");
  Serial.print (tab);
  Serial.println ("--");
}

}
