#include <Servo.h>

const int servoPin = 9; 
const int t = 6000;
int pos = 0; 
const int potPin1 = A5;
//const int potPin2 = A1;

int potValue = 0;
int grader = 0; 
int lastGrader = 0; 

Servo servo; 

void setup() {
Serial.begin(115200);
pinMode(potPin1, INPUT);
servo.attach(servoPin);
}


void loop() {


   potValue = analogRead(potPin1);
    grader = map (potValue, 0, 1023, 0, 180);
    servo.write(grader);
/*
    Serial.print("sensor = ");

    Serial.print(potValue);

    Serial.print("\t output = ");

    Serial.println(grader);
if (lastGrader > grader){
servo.write(lastGrader -1);
lastGrader = lastGrader -1;

    
}

else if (lastGrader<grader){
    servo.write(lastGrader +1);
lastGrader = lastGrader +1;
    
}
*/
}




/*for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo.write(pos);              // tell servo to go to position in variable 'pos'
                          // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    servo.write(pos);              // tell servo to go to position in variable 'pos'
                           // waits 15ms for the servo to reach the position
*/