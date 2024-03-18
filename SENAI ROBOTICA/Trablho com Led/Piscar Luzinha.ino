const int apaga = 120;

void setup(){
  pinMode (13,OUTPUT);
  // Em pinMode definimos o pino que será usado no código, no caso o 13, e OUTPUT, para definir o que será "feito", output significa saída, enquanto imput entrada

}

void loop()
{
  digitalWrite (13,HIGH);
  delay (400);
  digitalWrite (13,LOW);
  delay (apaga);
  // Em "digitalWrite", define-se a tensão adicionada,onde LOW são 0V (desliga) e HIGH são 5V(liga). Não só isso mas em delay é determinado um tempo, em milisegundos, em que o sistema ficara "parado" (1000 são 1seg)
  digitalWrite (13,HIGH);
  delay (400);
  digitalWrite (13,LOW);
  delay (apaga);
  digitalWrite (13,HIGH);
  delay (1000);
  digitalWrite (13,LOW);
  delay (apaga);

}
