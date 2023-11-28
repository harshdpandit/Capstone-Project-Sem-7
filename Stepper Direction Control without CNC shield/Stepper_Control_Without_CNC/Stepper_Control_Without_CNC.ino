int left_switch =7;
int dir_pin= 2;
int step_pin=4;
void setup() {
  // put your setup code here, to run once:
  pinMode(left_switch,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  int left_state = digitalRead(left_switch);
  while (left_state == 1)
  {
    digitalWrite(dir_pin, HIGH);
    digitalWrite(step_pin,HIGH);
    delayMicroseconds(1000);
  }
  
}
