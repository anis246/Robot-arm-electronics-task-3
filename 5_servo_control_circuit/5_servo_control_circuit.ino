#include <Servo.h>

Servo base;
Servo waist;
Servo arm1;
Servo arm2;
Servo gripper;

int p1;
int p2;
int p3;
int p4;
int p5;


void setup() {
  base.attach(5);  
  waist.attach(6); 
  arm1.attach(9);  
  arm2.attach(10);  
  gripper.attach(11);  
  
}

void loop() {
  
  p1 = map(analogRead(A1), 0, 1023, 0, 180);
  base.write(p1);
  delay(10);
  
  p2 = map(analogRead(A2), 0, 1023, 0, 180);
  waist.write(p2);
  delay(10);
  
  p3 = map(analogRead(A3), 0, 1023, 0, 180);
  arm1.write(p3);
  delay(10);
  
  p4 = map(analogRead(A4), 0, 1023, 0, 180);
  arm2.write(p4);
  delay(10);
  
  p5 = map(analogRead(A5), 0, 1023, 0, 180);
  gripper.write(p5);
  delay(10);
                       
}