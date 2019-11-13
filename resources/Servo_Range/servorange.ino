/*
Thanks to eric.chanussot of the Opencat Forum
INSTRUCTIONS

 

- Set Serial Monitor to 115200 baud

- Set Serial Monitor to "Both NL & CR"

- Connect a servo to 'ServoPin' (default: pin 10)

- Press "Send" when the Servo starts moving (for both lower and upper limit)

- When the limits are reached, the servo will alternate between them

- Press reset to start over

*/

 

#include <Servo.h>

 

const byte ServoPin = 10;

//Minimal pulse width to try for lower limit (in ms)

const unsigned int StartLower = 500;

//maximal pulse width to try for upper limit (in ms)

const unsigned int StartUpper = 2500;

//Number to increment the pulse width during search (in ms)

const unsigned int StepSize = 11;

//time between increments (in ms)

const unsigned int StepInterval = 1000;

 

unsigned int lowerLimit;

unsigned int upperLimit;

Servo testServo;

 

void setup(){

  Serial.begin(115200);

 

  Serial.println("Servo pulse width finder sketch");

  Serial.println();

  Serial.println("Be sure to set Serial monitor to \"Both NL & CR\".");

  Serial.println("Press \"Send\" when the servo starts moving during the search.");

  Serial.println();

 

  //move servo already to lower end and attach it

  testServo.write(0);

  testServo.attach(ServoPin, StartLower, StartUpper);

 

  Serial.print("Searching for lower limit");

  lowerLimit = sweep(StartLower, StepSize, StepInterval);

  printResult("Lower", lowerLimit);

 

  Serial.print("Searching for upper limit");

  //minus the 'StepSize' to go the other way

  upperLimit = sweep(StartUpper, -StepSize, StepInterval);

  printResult("Upper", upperLimit);

 

  Serial.println("Press reset to test again.");

}

 

void loop(){

  testServo.writeMicroseconds(lowerLimit);

  delay(2000);

  testServo.writeMicroseconds(upperLimit);

  delay(2000);

}

 

unsigned int sweep(unsigned int start, int delta, unsigned int interval){

  testServo.writeMicroseconds(start);

  delay(interval);

  unsigned int value = start;

 

  //stop the search if we receive something on Serial

  while(!Serial.available()){

    //increase the value to the new position

    value += delta;

 

    //stop searching if we go beyond the start positions of the search (= Failed)

    if((value < StartLower) || (value > StartUpper)){

      Serial.println();

      return 0;

    }

 

    //otherwise move to new position

    testServo.writeMicroseconds(value);

    Serial.print(".");

    delay(interval);

  }

 

  clearSerialBuffer();

  Serial.println();

 

  //

  return value;

}

 

void printResult(char *text, unsigned int value){

  //value found

  if(value != 0){

    Serial.print(text);

    Serial.print(" limit: ");

    Serial.print(value);

    Serial.println("ms");

  }

  //value not found

  else{

    Serial.print(text);

    Serial.println(" limit not found!");

    Serial.println("Press reset to try again.");

 

    //and stop here

    while(true);

  }

}

 

void clearSerialBuffer(){

  //clear serial buffer (but do nothing with it)

  while(Serial.available()){

    Serial.read();

  }

}