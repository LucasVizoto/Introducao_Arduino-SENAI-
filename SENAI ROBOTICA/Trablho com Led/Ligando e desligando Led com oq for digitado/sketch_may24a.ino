const int led_amar = 5;
const int led_verd = 11;
const int led_verm = 8;
char luz;
void setup() {
pinMode (led_amar,OUTPUT);
pinMode (led_verd,OUTPUT);
pinMode (led_verm,OUTPUT);
pinMode (13,OUTPUT);
digitalWrite (13,LOW);
Serial.begin (9600);
}

void loop() {
if(Serial.available ()) {
 luz = Serial.read ();
   if ( luz == 'Y' ) {
    digitalWrite(led_amar,HIGH);
  }
   else if ( luz == 'y') {
    digitalWrite (led_amar,LOW);
  }
   else if (luz == 'G') {
    digitalWrite (led_verd,HIGH);
  }
   else if (luz == 'g') {
    digitalWrite (led_verd,LOW);
  }
   else if (luz == 'R') {
    digitalWrite (led_verm, HIGH);
  }
   else if (luz == 'r') {
    digitalWrite (led_verm, LOW);  
  }
   else {
    Serial.println ("Insira um dos seguintes caracteres: G, R ou Y");
    delay (5000); 
   }
 }
}
