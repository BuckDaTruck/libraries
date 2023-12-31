/* Sweep
  
  
  This example runs servo from 0 to 180 degree and reverse i.e from 180 to 0 degree.
  To control servo 1(S1) use SERVO1_ATTACH.
  To control servo 2(S2) use SERVO2_ATTACH.

  This code is in public domain.

  Explore more on : https://thestempedia.com/tutorials/servo/

*/

#include <evive.h>
Servo servo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int degree = 0;    // variable to store the servo position

void setup() {
  servo.attach(SERVO1_ATTACH);  // attaches the servo on pin S1 to the servo object
}

void loop() {
  for (degree = 0; degree <= 180; degree += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo.write(degree);              // tell servo to go to degree in variable 'degree'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (degree = 180; degree >= 0; degree -= 1) { // goes from 180 degrees to 0 degrees
    servo.write(degree);              // tell servo to go to degree in variable 'degree'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}

