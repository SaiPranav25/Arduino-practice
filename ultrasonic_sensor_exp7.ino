int echo=4;
int trig=2;
int timemicro;
int dist;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(echo,INPUT);
pinMode(trig,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);

timemicro=pulseIn(echo,HIGH);
dist=timemicro /29 /2;
Serial.println(dist);
delay(1000);
}
