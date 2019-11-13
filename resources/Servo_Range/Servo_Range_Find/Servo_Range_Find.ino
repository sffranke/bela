/*
 * Simple Arduino sketch to find the full pulsewidth range of a servo
 *
 * INSTRUCTIONS
 *
 * Watch the serial port, and press a key each time the servo starts/stops moving regularly.
 * 
 * If you're using the Arduino IDE "Serial Monitor", you'll need to type something into the 
 * text field and then press "Send"
 *
 * When you're done, the sketch will output the low and high pulse widths, a sample attach() line, and then
 * start sweeping from top to bottom so you can check it works and/or measure the total angle.
 *
 * Ignore any massive jumping movements when searching, servos often seem to move to a random angle when
 * you send a really out-of-range signal to them.
 *
 *
 * This sketch is released under the GNU General Public License v2, (C) 2009 Angus Gratton 
 */

#include <Servo.h>
#include <stdio.h>

char buffer[128]; // This wastes a bunch of RAM, but we don't need it for this sketch
#define printfLn(format, args... ) \
  snprintf(buffer, sizeof(buffer), format, ## args); \
  Serial.println(buffer);


/*
 * Set this to the pin your servo is hooked to (9 or 10.)
 */
const int servopin = 10;

Servo myservo;

void setup() 
{ 
  Serial.begin(9600);
  
  Serial.println("Searching for low pulse width");
  int low = search(100, 64, true);
  
  Serial.println("Got low pulse width...");
  delay(500);
  
  Serial.println("Searching for high pulse width");
  int high = search(low, 128, false);

  Serial.println();
  Serial.println();
  printfLn("Got low pulse width of %d", low);
  printfLn("Got high pulse width of %d", high);
  Serial.println();
  printfLn("Example code: myservo.attach(%d, %d, %d);", servopin, low, high);
  
  Serial.println();
  Serial.println("Done (sweeping.)");
  
  myservo.attach(servopin, low, high);
} 

int search(int value, int delta, boolean starts)
{
top:
   printfLn("Press any key when the servo %s moving", starts ? "starts" : "stops");
   delay(1000);
   value = sweep(value, delta);
   if(abs(delta) <= 1)
     return value;  
   delta /= -2;
   starts = !starts;
   
   delay(1000);  
   goto top; 
}

int sweep(int value, int delta)
{
   while(!Serial.available())
   {
     myservo.attach(servopin, value, value);
     myservo.write(0);
     Serial.println(value);
     delay(300);
     myservo.detach();
     value = value + delta;  
   }
   while(Serial.available())
     Serial.read();
  return value;
} 

void loop() 
{ 
   // Just loop through the range we found
   while(true)
   {
     myservo.write(0);
     delay(4000);
     myservo.write(180);
     delay(4000);
   }
} 

