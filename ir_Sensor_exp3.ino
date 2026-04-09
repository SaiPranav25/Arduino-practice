int ir=4;
int x;
int ledpin=2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ir,INPUT);
pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
x=digitalRead(ir);
Serial.println(x);
// delay(500);
if(x==0){
digitalWrite(ledpin,HIGH);
}
else{
  digitalWrite(ledpin,LOW);
}
}
