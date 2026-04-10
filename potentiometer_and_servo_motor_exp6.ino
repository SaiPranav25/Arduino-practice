#include<Servo.h>
int pot=A0;
int x;
int value;
Servo s;
void setup() {
  // put your setup code here, to run once:
s.attach(2);
pinMode(pot,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
x=analogRead(pot);
value=map(x,0,1023,0,180);
s.write(value);
}
