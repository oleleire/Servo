#include <Servo.h>

const int servoPin = 9; 
const int t = 1000;


Servo servo 

void setup(){
Serial.begin(9600);
servo.attach(servoPin);
}


void loop(){
    servo.write(0);
    delay(t);
    servo.write(90);
    delay(t);
    servo write(180);
    delay(t);
}


