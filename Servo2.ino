#include <Servo.h>

Servo myservo2;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 90;    // variable to store the servo position

void setup() {
  myservo2.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo2.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);
  
}

void loop() {
                           // waits 15 ms for the servo to reach the position
}
