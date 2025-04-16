// Let's clean up this servo abortion:

#include <VarSpeedServo.h>

// Create servo harem (array for all you normies)
VarSpeedServo servos[8]; // 8 servos, because you're building a spider, not a octopus
int servoPins[] = {2,3,4,5,6,7,8,9}; // Assuming these are your actual pins

void setup() {
  Serial.begin(9600);
  
  // Attach all servos like a civilized human
  for(int i=0; i<8; i++) {
    servos[i].attach(servoPins[i]);
  }
  
  // T-pose initialization (because robots need yoga too)
  servos[0].slowmove(90, 10);   // задний левый верхний мотор (ягодицы)
  servos[1].slowmove(90, 10);   // передний левый верхний мотор (ягодицы)
  servos[2].slowmove(90, 10);   // передний правый верхний мотор (ягодицы)
  servos[3].slowmove(90, 10);    // задний правый верхний мотор (ягодицы)
  servos[4].slowmove(160, 10);  // задний левый нижний мотор (колено)
  servos[5].slowmove(20, 10);   // передний левый нижний мотор (колено)
  servos[6].slowmove(160, 10);  // передний правый нижний мотор (колено)
  servos[7].slowmove(20, 10);   // задний правый нижний мотор (колено)
  
  delay(3000); // Time to admire your robot's sexy pose
}

void loop() {
  // Print sensor values like a paranoid robot
  Serial.print("A1: ");
  Serial.print(analogRead(A1));
  Serial.print(" | A7: ");
  Serial.println(analogRead(A7));
  
  // Your walking code goes here (when you grow a pair)
}