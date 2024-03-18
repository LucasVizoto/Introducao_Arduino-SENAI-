#include <Servo.h>
Servo Teste;
Servo teste2;
int val1;
int val2;

void setup() {
Teste.attach(2);
teste2.attach(3);
}

void loop() {
 
  
val1=0;
Teste.write(val1);
val2=180;
teste2.write(val2);
delay(2000);

val1=45;
Teste.write(val1);
val2=135;
teste2.write(val2);
delay(2000);

val1=90;
Teste.write(val1);
val2=90;
teste2.write(val2);
delay(2000);

val1=135;
Teste.write(val1);
val2=45;
teste2.write(val2);
delay(2000);

val1=180;
Teste.write(val1);
val2=0;
teste2.write(val2);
delay(2000);

}
