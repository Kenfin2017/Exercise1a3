/************************************************************************/
/*    
Name:		 Sketch.cpp
Author:		 Minh Nguyen, Ajit Bahadur Thapa
Description: Blinking traffic lights    
*/
/************************************************************************/

#include <Arduino.h>

#define LEDGREEN 8
#define LEDYELLOW 9
#define LEDRED 10

void setup(){
    pinMode(LEDGREEN, OUTPUT);
    pinMode(LEDYELLOW, OUTPUT);
    pinMode(LEDRED, OUTPUT);
}

void loop(){
    //first sequence: red - delay 2 sec
    digitalWrite(LEDRED, HIGH);
    digitalWrite(LEDYELLOW, LOW);
    digitalWrite(LEDGREEN, LOW);
    delay(2000);

    //second sequence: red&yellow - delay 0.5 sec
    digitalWrite(LEDRED, HIGH);
    digitalWrite(LEDYELLOW, HIGH);
    digitalWrite(LEDGREEN, LOW);
    delay(500);

    //third sequence: green - delay 2 sec
    digitalWrite(LEDRED, LOW);
    digitalWrite(LEDYELLOW, LOW);
    digitalWrite(LEDGREEN, HIGH);
    delay(2000);

    //fourth sequence: yellow - delay 0.5 sec
    digitalWrite(LEDRED, LOW);
    digitalWrite(LEDYELLOW, HIGH);
    digitalWrite(LEDGREEN, LOW);
    delay(500);
}