#define ledV1 3
#define ledV2 5
#define ledA1 6
#define ledA2 9
#define ledVm1 10
#define ledVm2 11

int brilho = 0;

/* 
 _________________________________________________
 Colocar o led em um pino que possui um "~" do lado
O led vai acender e apagar devagar com essse código 
 --------------------------------------------------
*/


void setup() {
pinMode(ledV1,OUTPUT);
pinMode(ledV2,OUTPUT);
pinMode(ledA1,OUTPUT);
pinMode(ledA2,OUTPUT);
pinMode(ledVm1,OUTPUT);
pinMode(ledVm2,OUTPUT);
}

void loop() {
 for(brilho=0;brilho<=255;brilho+=5){
  analogWrite(ledV1,brilho);
  analogWrite(ledV2,brilho);
  analogWrite(ledA1,brilho);
  analogWrite(ledA2,brilho);
  analogWrite(ledVm1,brilho);
  analogWrite(ledVm2,brilho);
  delay(100);
  }
 for(brilho=255;brilho>=0;brilho-=5){
  analogWrite(ledV1,brilho);
  analogWrite(ledV2,brilho);
  analogWrite(ledA1,brilho);
  analogWrite(ledA2,brilho);
  analogWrite(ledVm1,brilho);
  analogWrite(ledVm2,brilho);
  delay(100);
  }
}
