const int StepX = 2;
const int DirX = 5;
const int StepY = 3;
const int DirY = 6;



void setup() {
  pinMode(StepX,OUTPUT);
  pinMode(DirX,OUTPUT);
  pinMode(StepY,OUTPUT);
  pinMode(DirY,OUTPUT);

}

void loop() {
 digitalWrite(DirX, HIGH); // set direction, HIGH for clockwise, LOW for anticlockwise
 digitalWrite(DirY, HIGH);
 
 for(int x = 0; x<1600; x++) {
   digitalWrite(DirX, HIGH); // loop for 200 steps
  digitalWrite(StepX,HIGH);
  delayMicroseconds(500);
  digitalWrite(StepX,LOW); 
  delayMicroseconds(500);
  digitalWrite(DirX, LOW);
 }
delay(1000); // delay for 1 second





}
