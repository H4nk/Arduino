int cahaya=0;
void setup() {
pinMode(A0, INPUT);
pinMode(2, OUTPUT);

}

void loop() {
cahaya = analogRead(A0);
if(cahaya > 500){
  digitalWrite(2, HIGH);
}
else
{
  digitalWrite(2,LOW);
}
delay(1000);
}
