//int buzzerPin = 3;
//
//void setup() {
//  // put your setup code here, to run once:
//  pinMode(buzzerPin, OUTPUT);
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//
//for(int i=0; i<250; i++) {
//
//  digitalWrite(buzzerPin, HIGH);
//  delay(1);
//  digitalWrite(buzzerPin, LOW);
//  delay(1);
//  
//}
//
//for(int i=0; i<125; i++) {
//
//  digitalWrite(buzzerPin, HIGH);
//  delay(2);
//  digitalWrite(buzzerPin, LOW);
//  delay(2);
//  
//}
//}

#include "pitches.h"
 
int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};
int duration = 500;

int melodyBackwards[] = {
  NOTE_C6, NOTE_B5, NOTE_A5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_C5
};
 
void setup() {
 
}
 
void loop() {  
  for (int thisNote = 0; thisNote < 8; thisNote++) {
    tone(8, melody[thisNote], duration);
    delay(500);
  }

    for (int thisNote = 0; thisNote < 8; thisNote++) {
    tone(8, melodyBackwards[thisNote], duration);
    delay(500);
  }
   
  // restart after two seconds 
  delay(2000);
}
