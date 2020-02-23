#include <AccelStepper.h>

// Connections:
// Stepper 1
// IN1 to pin 8
// IN2 to pin 9
// IN3 to pin 10
// IN4 to pin 11
// Stepper 2
// IN1 to pin 3
// IN2 to pin 4
// IN3 to pin 5
// IN4 to pin 6

// Define the AccelStepper interface type; 4 wire motor in half step mode:
#define MotorInterfaceType 8

// Initialize with pin sequence IN1-IN3-IN2-IN4 for using the AccelStepper library with 28BYJ-48 stepper motor:

AccelStepper stepper = AccelStepper(MotorInterfaceType, 8, 10, 9, 11);
//AccelStepper stepper2 = AccelStepper(MotorInterfaceType, 3, 5, 4, 6); //kebalikan
AccelStepper stepper2 = AccelStepper(MotorInterfaceType, 6, 4, 5, 3);

void setup() {
 // Set the maximum steps per second:
 stepper.setMaxSpeed(1000);
 stepper2.setMaxSpeed(1000);
}

void loop() {
 // Set the speed of the motor in steps per second:
 stepper.setSpeed(1000);
 stepper2.setSpeed(1000);
 // Step the motor with constant speed as set by setSpeed():
 stepper.runSpeed();
 stepper2.runSpeed();
}
