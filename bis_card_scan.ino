/*
  Keyboard Message test

  For the Arduino Leonardo and Micro.

  Sends a text string when a button is pressed.

  The circuit:
   pushbutton attached from pin 4 to +5V
   10-kilohm resistor attached from pin 4 to ground

  created 24 Oct 2011
  modified 27 Mar 2012
  by Tom Igoe
  modified 11 Nov 2013
  by Scott Fitzgerald

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/KeyboardMessage
*/

#include "Keyboard.h"
void setup() {
  // make the pushButton pin an input:
  pinMode(2, INPUT_PULLUP);
  // initialize control over the keyboard:
  Keyboard.begin();
  Serial.begin(9600);
}

void loop() {
  // read the pushbutton:
  int sensorVal = digitalRead(2);


  if (sensorVal == LOW) {
//Serial.println("hi");
    // type out a message
   
    Keyboard.write(KEY_TAB);
    delay(50);
    Keyboard.write(KEY_TAB);
    delay(50);
    Keyboard.write(KEY_RETURN);
    delay(3000);
    Keyboard.write(KEY_TAB);
    delay(50);
    Keyboard.write(KEY_TAB);
    delay(50);
    Keyboard.write(KEY_TAB);
    delay(50);
    Keyboard.write(KEY_RETURN);
    delay(7000);
    Keyboard.write(KEY_TAB);
    delay(50);
    Keyboard.write(KEY_RETURN);

    delay(1000);
  }
}


