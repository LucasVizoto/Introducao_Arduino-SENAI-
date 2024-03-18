#include <Servo.h>

#define bot1 1
#define bot2 2
#define bot3 3
#define bot4 4
#define bot5 5
#define bot6 6
#define bot7 7
#define bot8 8
#define bot9 9

Servo base;
Servo ext;
Servo eleva;
Servo garra;

int valBase;
int valExt;
int valEleva;
int valGarra;
int ordem;

void setup() {
  pinMode(bot1, INPUT_PULLUP);
  pinMode(bot2, INPUT_PULLUP);
  pinMode(bot3, INPUT_PULLUP);
  pinMode(bot4, INPUT_PULLUP);
  pinMode(bot5, INPUT_PULLUP);
  pinMode(bot6, INPUT_PULLUP);
  pinMode(bot7, INPUT_PULLUP);
  pinMode(bot8, INPUT_PULLUP);
  pinMode(bot9, INPUT_PULLUP);

  base.attach(10);
  ext.attach(11);
  eleva.attach(12);
  garra.attach(13);

  Serial.begin(9600);
  ordem = 0;


}

void loop() {
  valBase = map(valBase, 0, 1023, 5, 175);
  valExt = map(valExt, 0, 1023, 70, 140);
  valEleva = map(valEleva, 0, 1023, 100, 180);
  valGarra = map(valGarra, 0, 1023, 34, 84);
  valBase = 30;
  valExt = 70;
  valEleva = 106;
  valGarra = 40;
  base.write(valBase);
  ext.write(valExt);
  eleva.write(valEleva);
  garra.write(valGarra);
  if (!digitalRead(bot1)) {
    RotinaPosicao1();
  }
  else if (!digitalRead(bot2)) {
    RotinaPosicao2();
  }
  else if (!digitalRead(bot3)) {
    RotinaPosicao3();
  }
  else if (!digitalRead(bot4)) {
    RotinaPosicao4();
  }
  else if (!digitalRead(bot5)) {
    RotinaPosicao5();
  }
  else if (!digitalRead(bot6)) {
    RotinaPosicao6();
  }
  else if (!digitalRead(bot7)) {
    RotinaPosicao7();
  }
  else if (!digitalRead(bot8)) {
    RotinaPosicao8();
  }
  else if (!digitalRead(bot9)) {
    RotinaPosicao9();
  }
}

void RotinaPosicao1() {
  valBase = map(valBase, 0, 1023, 5, 175);
  valExt = map(valExt, 0, 1023, 70, 140);
  valEleva = map(valEleva, 0, 1023, 100, 180);
  valGarra = map(valGarra, 0, 1023, 34, 84);

  // MOVIMENTO DA BASE PARA SAIR DO NEUTRO E PEGAR PECA
  valBase = 20;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valBase = 5;
  base.write(valBase);
  Serial.println("fim movimento base");

  // MOVIMENTO DO EXTENSOR PARA PEGAR PECA
  valEleva = 80;
  eleva.write(valEleva);
  delay(1000);
  valExt = 125;
  ext.write(valExt);
  Serial.println("chegou");
  delay(1000);
  valGarra = 80;
  garra.write(valGarra);
  delay(1000);

  // MOVIMENTO DO ELEVADOR PARA PEGAR PECA
  valEleva = 180;
  eleva.write(valEleva);
  Serial.println("chegou");
  delay(1000);

  // levar
  valBase = 140;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valExt = 140;
  ext.write(valExt);
  Serial.println("chegou");
  delay(1000);
  valGarra = 40;
  garra.write(valGarra);
  delay(1000);
  valExt = 90;
  ext.write(valExt);
  Serial.println("chegou");
  valEleva = 130;
  eleva.write(valEleva);
  delay(1000);

  //volta para espera
  loop();

}

void RotinaPosicao2() {
  valBase = map(valBase, 0, 1023, 5, 175);
  valExt = map(valExt, 0, 1023, 70, 140);
  valEleva = map(valEleva, 0, 1023, 100, 180);
  valGarra = map(valGarra, 0, 1023, 34, 84);

  // MOVIMENTO DA BASE PARA SAIR DO NEUTRO E PEGAR PECA
  valBase = 20;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valBase = 5;
  base.write(valBase);
  Serial.println("fim movimento base");

  // MOVIMENTO DO EXTENSOR PARA PEGAR PECA
  valEleva = 80;
  eleva.write(valEleva);
  delay(1000);
  valExt = 125;
  ext.write(valExt);
  Serial.println("chegou");
  delay(1000);
  valGarra = 80;
  garra.write(valGarra);
  delay(1000);

  // MOVIMENTO DO ELEVADOR PARA PEGAR PECA
  valEleva = 180;
  eleva.write(valEleva);
  Serial.println("chegou");
  delay(1000);

  // levar
  valBase = 126;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valExt = 125;
  ext.write(valExt);
  Serial.println("chegou");
  delay(1000);
  valGarra = 40;
  garra.write(valGarra);
  delay(1000);
  valExt = 90;
  ext.write(valExt);
  Serial.println("chegou");
  valEleva = 130;
  eleva.write(valEleva);
  delay(1000);

//voltar para espera
  loop();

}


void RotinaPosicao3() {
  valBase = map(valBase, 0, 1023, 5, 175);
  valExt = map(valExt, 0, 1023, 70, 140);
  valEleva = map(valEleva, 0, 1023, 100, 180);
  valGarra = map(valGarra, 0, 1023, 34, 84);

  // MOVIMENTO DA BASE PARA SAIR DO NEUTRO E PEGAR PECA
  valBase = 20;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valBase = 5;
  base.write(valBase);
  Serial.println("fim movimento base");

  // MOVIMENTO DO EXTENSOR PARA PEGAR PECA
  valEleva = 80;
  eleva.write(valEleva);
  delay(1000);
  valExt = 125;
  ext.write(valExt);
  Serial.println("chegou");
  delay(1000);
  valGarra = 80;
  garra.write(valGarra);
  delay(1000);

  // MOVIMENTO DO ELEVADOR PARA PEGAR PECA
  valEleva = 180;
  eleva.write(valEleva);
  Serial.println("chegou");
  delay(1000);

  // levar
  valBase = 110;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valExt = 136;
  ext.write(valExt);
  Serial.println("chegou");
  delay(1000);
  valGarra = 40;
  garra.write(valGarra);
  delay(1000);
  valExt = 90;
  ext.write(valExt);
  Serial.println("chegou");
  valEleva = 130;
  eleva.write(valEleva);
  delay(1000);

//voltar para espera
  loop();

}

void RotinaPosicao4() {
  valBase = map(valBase, 0, 1023, 5, 175);
  valExt = map(valExt, 0, 1023, 70, 140);
  valEleva = map(valEleva, 0, 1023, 100, 180);
  valGarra = map(valGarra, 0, 1023, 34, 84);

  // MOVIMENTO DA BASE PARA SAIR DO NEUTRO E PEGAR PECA
  valBase = 20;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valBase = 5;
  base.write(valBase);
  Serial.println("fim movimento base");

  // MOVIMENTO DO EXTENSOR PARA PEGAR PECA
  valEleva = 80;
  eleva.write(valEleva);
  delay(1000);
  valExt = 125;
  ext.write(valExt);
  Serial.println("chegou");
  delay(1000);
  valGarra = 80;
  garra.write(valGarra);
  delay(1000);

  // MOVIMENTO DO ELEVADOR PARA PEGAR PECA
  valEleva = 180;
  eleva.write(valEleva);
  Serial.println("chegou");
  delay(1000);

  // levar
  valBase = 118;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valBase = 152;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valExt = 100;
  ext.write(valExt);
  Serial.println("chegou");
  delay(1000);
  valEleva = 156;
  eleva.write(valEleva);
  delay(1000);
  valGarra = 40;
  garra.write(valGarra);
  delay(1000);
  valExt = 90;
  ext.write(valExt);
  Serial.println("chegou");
  valEleva = 130;
  eleva.write(valEleva);
  delay(1000);

//voltar para espera
  loop();

}

void RotinaPosicao5() {
  valBase = map(valBase, 0, 1023, 5, 175);
  valExt = map(valExt, 0, 1023, 70, 140);
  valEleva = map(valEleva, 0, 1023, 100, 180);
  valGarra = map(valGarra, 0, 1023, 34, 84);

  // MOVIMENTO DA BASE PARA SAIR DO NEUTRO E PEGAR PECA
  valBase = 20;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valBase = 5;
  base.write(valBase);
  Serial.println("fim movimento base");

  // MOVIMENTO DO EXTENSOR PARA PEGAR PECA
  valEleva = 80;
  eleva.write(valEleva);
  delay(1000);
  valExt = 125;
  ext.write(valExt);
  Serial.println("chegou");
  delay(1000);
  valGarra = 80;
  garra.write(valGarra);
  delay(1000);

  // MOVIMENTO DO ELEVADOR PARA PEGAR PECA
  valEleva = 180;
  eleva.write(valEleva);
  Serial.println("chegou");
  delay(1000);

  // levar
  valBase = 100;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valBase = 131;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valExt = 90;
  ext.write(valExt);
  Serial.println("chegou");
  delay(1000);
  valEleva = 140;
  eleva.write(valEleva);
  delay(1000);
  valGarra = 40;
  garra.write(valGarra);
  delay(1000);
  valExt = 90;
  ext.write(valExt);
  Serial.println("chegou");
  valEleva = 130;
  eleva.write(valEleva);
  delay(1000);

//voltar para espera
  loop();

}

void RotinaPosicao6() {
  valBase = map(valBase, 0, 1023, 5, 175);
  valExt = map(valExt, 0, 1023, 70, 140);
  valEleva = map(valEleva, 0, 1023, 100, 180);
  valGarra = map(valGarra, 0, 1023, 34, 84);

  // MOVIMENTO DA BASE PARA SAIR DO NEUTRO E PEGAR PECA
  valBase = 20;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valBase = 5;
  base.write(valBase);
  Serial.println("fim movimento base");

  // MOVIMENTO DO EXTENSOR PARA PEGAR PECA
  valEleva = 80;
  eleva.write(valEleva);
  delay(1000);
  valExt = 125;
  ext.write(valExt);
  Serial.println("chegou");
  delay(1000);
  valGarra = 80;
  garra.write(valGarra);
  delay(1000);

  // MOVIMENTO DO ELEVADOR PARA PEGAR PECA
  valEleva = 180;
  eleva.write(valEleva);
  Serial.println("chegou");
  delay(1000);

  // levar
  valBase = 100;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valBase = 105;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valExt = 93;
  ext.write(valExt);
  Serial.println("chegou");
  delay(1000);
  valEleva = 140;
  eleva.write(valEleva);
  delay(1000);
  valGarra = 40;
  garra.write(valGarra);
  delay(1000);
  valExt = 90;
  ext.write(valExt);
  Serial.println("chegou");
  valEleva = 130;
  eleva.write(valEleva);
  delay(1000);

//voltar para espera
  loop();

}
void RotinaPosicao7() {
  valBase = map(valBase, 0, 1023, 5, 175);
  valExt = map(valExt, 0, 1023, 70, 140);
  valEleva = map(valEleva, 0, 1023, 100, 180);
  valGarra = map(valGarra, 0, 1023, 34, 84);
  ordem++;
  Serial.println(ordem);
  delay(500);

  // MOVIMENTO DA BASE PARA SAIR DO NEUTRO E PEGAR PECA
  valBase = 20;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valBase = 5;
  base.write(valBase);
  Serial.println("fim movimento base");

  // MOVIMENTO DO EXTENSOR PARA PEGAR PECA
  valEleva = 80;
  eleva.write(valEleva);
  delay(1000);
  valExt = 125;
  ext.write(valExt);
  Serial.println("chegou");
  delay(1000);
  valGarra = 80;
  garra.write(valGarra);
  delay(1000);

  // MOVIMENTO DO ELEVADOR PARA PEGAR PECA
  valEleva = 180;
  eleva.write(valEleva);
  Serial.println("chegou");
  delay(1000);

  // levar
  valBase = 100;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valBase = 164;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valExt = 82;
  ext.write(valExt);
  Serial.println("chegou");
  delay(1000);
  valEleva = 110;
  eleva.write(valEleva);
  delay(1000);
  valGarra = 40;
  garra.write(valGarra);
  delay(1000);
  valExt = 90;
  ext.write(valExt);
  Serial.println("chegou");
  valEleva = 130;
  eleva.write(valEleva);
  delay(1000);

//voltar para espera
  loop();

}

void RotinaPosicao8() {
  valBase = map(valBase, 0, 1023, 5, 175);
  valExt = map(valExt, 0, 1023, 70, 140);
  valEleva = map(valEleva, 0, 1023, 100, 180);
  valGarra = map(valGarra, 0, 1023, 34, 84);

  // MOVIMENTO DA BASE PARA SAIR DO NEUTRO E PEGAR PECA
  valBase = 20;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valBase = 5;
  base.write(valBase);
  Serial.println("fim movimento base");

  // MOVIMENTO DO EXTENSOR PARA PEGAR PECA
  valEleva = 80;
  eleva.write(valEleva);
  delay(1000);
  valExt = 125;
  ext.write(valExt);
  Serial.println("chegou");
  delay(1000);
  valGarra = 80;
  garra.write(valGarra);
  delay(1000);

  // MOVIMENTO DO ELEVADOR PARA PEGAR PECA
  valEleva = 180;
  eleva.write(valEleva);
  Serial.println("chegou");
  delay(1000);

  // levar
  valBase = 100;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valBase = 137;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valExt = 72;
  ext.write(valExt);
  Serial.println("chegou");
  delay(1000);
  valEleva = 90;
  eleva.write(valEleva);
  delay(1000);
  valGarra = 40;
  garra.write(valGarra);
  delay(1000);
  valEleva = 160;
  eleva.write(valEleva);
  delay(1000);

//voltar para espera
  loop();

}

void RotinaPosicao9() {
  valBase = map(valBase, 0, 1023, 5, 175);
  valExt = map(valExt, 0, 1023, 70, 140);
  valEleva = map(valEleva, 0, 1023, 100, 180);
  valGarra = map(valGarra, 0, 1023, 34, 84);

  // MOVIMENTO DA BASE PARA SAIR DO NEUTRO E PEGAR PECA
  valBase = 20;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valBase = 5;
  base.write(valBase);
  Serial.println("fim movimento base");

  // MOVIMENTO DO EXTENSOR PARA PEGAR PECA
  valEleva = 80;
  eleva.write(valEleva);
  delay(1000);
  valExt = 125;
  ext.write(valExt);
  Serial.println("chegou");
  delay(1000);
  valGarra = 80;
  garra.write(valGarra);
  delay(1000);

  // MOVIMENTO DO ELEVADOR PARA PEGAR PECA
  valEleva = 180;
  eleva.write(valEleva);
  Serial.println("chegou");
  delay(1000);

  // levar
  valBase = 70;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valBase = 95;
  base.write(valBase);
  Serial.println("chegou");
  delay(1000);
  valExt = 72;
  ext.write(valExt);
  Serial.println("chegou");
  delay(1000);
  valEleva = 90;
  eleva.write(valEleva);
  delay(1000);
  valGarra = 40;
  garra.write(valGarra);
  delay(1000);
  valEleva = 150;
  eleva.write(valEleva);
  delay(1000);

//voltar para espera
  loop();

}
