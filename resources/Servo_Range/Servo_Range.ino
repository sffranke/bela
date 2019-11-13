#include <Servo.h>
Servo servo;

void setup() {
  // initialize serial:
  Serial.begin(9600); //set serial monitor baud rate to match
  servo.write(90);
  servo.attach(9);
  prntIt();
}

 

void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) {
    // look for the next valid integer in the incoming serial stream:
    int pos = Serial.parseInt();
    pos = constrain(pos, 0, 2400);
    servo.write(pos);
    prntIt();
  }
}

void prntIt()
{
  Serial.print("  degrees = ");
  Serial.print(servo.read());
  Serial.print("\t");
  Serial.print("microseconds =  ");
  Serial.println(servo.readMicroseconds());
} 
