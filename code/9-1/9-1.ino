int led = 4;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0 , INPUT);
  pinMode(led , OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ir;
  ir = digitalRead(A0);
  if(ir == 0){
    Serial.print("object detected : ");
    Serial.println(ir);
    digitalWrite(led , HIGH);
  }
  else {
    Serial.print("not detected : ");
    Serial.println(ir);
    digitalWrite(led , LOW);
  }
  delay(30);
}
