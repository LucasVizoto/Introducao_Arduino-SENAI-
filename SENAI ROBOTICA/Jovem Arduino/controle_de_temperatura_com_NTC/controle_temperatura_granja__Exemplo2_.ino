#define tempVal A0
#define ledQ 2
#define ledF 4
#define buzz 3
int temp;
/*led verm = aquecedor
 * menor 22° liga Aquecedor
 * cehgar 25° desliga Aquecedor
 * menor 30° liga Resfriamento
 * menor 27° desliga Resfriamento
 * menor 35° Alarme*/
 
void setup() {
 pinMode(ledQ,OUTPUT);
 pinMode(ledF,OUTPUT);
 pinMode(buzz,OUTPUT);
 Serial.begin(9600);
}

void loop() {
temp = analogRead(tempVal);
temp = map(temp,800,1100,20,50);
Serial.println(temp);
delay(700);
 if(temp <= 22){
  digitalWrite(ledQ,1); //liga aquecedor
 }
 if(temp >= 25){
  digitalWrite(ledQ,0); //desliga aquecedor
 }
 if(temp >= 30){
  digitalWrite(ledF,1); //liga resfriamento
 }
 else{
  digitalWrite(ledF,0);
 }
 if(temp >= 27 && temp < 30){
  digitalWrite(ledF,0); //desliga resfriamento
 }
 if(temp>= 35){
  digitalWrite(buzz,1); //liga alarme
 }
 else{
  digitalWrite(buzz,0);
 }
}
