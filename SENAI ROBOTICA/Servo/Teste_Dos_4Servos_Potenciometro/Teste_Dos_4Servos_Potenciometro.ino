#include <Servo.h>
#define Pot1 A0
#define Pot2 A1
#define Pot3 A2
#define Pot4 A3
Servo base;
Servo exten;
Servo elev;
Servo garra;
int val1;
int val2;
int val3;
int val4;

void setup() {
Serial.begin(9600);
base.attach(4);
exten.attach(5);
elev.attach(6);
garra.attach(7);
}

void loop() {
 //***BASE***
val1 = analogRead(Pot1);
val1 = map(val1,0,1023,0,180);
Serial.print("***VALOR DO GRAU _BASE_ ***");
Serial.print(val1);
Serial.println(" ");
base.write(val1);

//***EXTENSOR***
val2 = analogRead(Pot2);
val2 = map(val2,0,1023,61,140);
Serial.print("***VALOR DO GRAU _EXTENSOR_ ***");
Serial.println(val2);
exten.write(val2);

//***ELEVADOR***
val3 = analogRead(Pot3);
val3 = map(val3,0,1023,64,155);
Serial.print("***VALOR DO GRAU _ELEVADOR_ ***");
Serial.println(val3);
Serial.println(" ");
elev.write(val3);

//***GARRA***
val4 = analogRead(Pot4);
val4 = map(val4,0,1023,10,46);
Serial.print("***VALOR DO GRAU _GARRA_ ***");
Serial.println(val4);
Serial.println(" ");
garra.write(val4);
}
