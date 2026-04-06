int r=7;
int x;
int ledpin=2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(r, INPUT);
pinMode(ledpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
x=digitalRead(r);
Serial.println(x);
// delay(500);
if(x>=1){
  digitalWrite(ledpin, HIGH);
}
else{
  digitalWrite(ledpin, LOW);
}
// delay(500);
}
