#define LDR A0
void setup() {
  Serial.begin(115200);
  delay(100);
  pinMode(D1,OUTPUT);
}

void loop() {
  int light = analogRead(A0);
  if(light>100)
  {
    digitalWrite(D1,HIGH);
  }
  else
  {
    digitalWrite(D1,LOW);
  }
  Serial.println(light);
  delay(150);
}
