/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep
*/

#include <Servo.h>
// create servo objects to control a servo
Servo myservo1, myservo2, myservo3, myservo4;


int pos = 0;    // variable to store the servo position

void setup() {
   myservo1.attach(9);  // attaches the servo on pin 9 to the servo object
   myservo2.attach(10);
   myservo3.attach(11);
   myservo4.attach(12);
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 90 degrees
    // in steps of 1 degree
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    myservo2.write(pos);
    myservo3.write(pos);
    myservo4.write(pos);
    delay(2);                       // waits 2 ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 90 degrees to 0 degrees
     myservo1.write(pos);              // tell servo to go to position in variable 'pos'
     myservo2.write(pos);
     myservo3.write(pos);
     myservo4.write(pos);
    delay(2);                       // waits 2 ms for the servo to reach the position
  }
  while (true) {
    myservo1.write(90);
    myservo2.write(90);
    myservo3.write(90);
    myservo4.write(90);
  } 
}