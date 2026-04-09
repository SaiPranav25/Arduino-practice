int pot=A0;
int x;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pot,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  x=analogRead(pot);
  Serial.println(x);
  delay(1000);

}
