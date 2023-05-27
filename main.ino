#include <Servo.h>

Servo elbowServo; // object for elbow servo
Servo wristServo; // object for wrist servo
Servo palmServo;  // object for palm servo

int elbowPos = 90;
int wristPos = 90;
int palmPos = 0; // variable to store the servo position

void setup()
{
    // Attach servo objects to their respective pins
    elbowServo.attach(9);
    wristServo.attach(10);
    palmServo.attach(11);
}

void loop()
{
    // Code for grabbing the object
    for (elbowPos = 90; elbowPos >= 0; elbowPos -= 1)
    {
        elbowServo.write(elbowPos);
        delay(50);
    }

    for (wristPos = 90; wristPos >= 0; wristPos -= 1)
    {
        wristServo.write(wristPos);
        delay(20);
    }

    for (palmPos = 0; palmPos <= 180; palmPos += 1)
    {
        palmServo.write(palmPos);
        delay(20);
    }

    // Code for slowly returning to starting positions
    for (elbowPos = 0; elbowPos <= 90; elbowPos += 1)
    {
        elbowServo.write(elbowPos);
        delay(50);
    }

    for (wristPos = 0; wristPos <= 90; wristPos += 1)
    {
        wristServo.write(wristPos);
        delay(20);
    }

    for (palmPos = 180; palmPos >= 0; palmPos -= 1)
    {
        palmServo.write(palmPos);
        delay(20);
    }
}
