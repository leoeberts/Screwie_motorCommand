/*
  Screwie_motorCommand.h - Object that represent one command to operate one stepper motor.
  Released into the public domain.
*/

#ifndef Screwie_motorCommand_h
#define Screwie_motorCommand_h

#include "Arduino.h"

enum Direction {
  FORWARDS,
  BACKWARDS
};

enum StepType {
  HALF_STEP,
  FULL_STEP,
  DOUBLE_STEP
};

class Screwie_motorCommand
{
  public:
    Screwie_motorCommand(int numberOfSteps, int stepSpeed, StepType stepType, Direction movementDirection);
    int getNumberOfSteps();
    int getSpeed();
    StepType getStepType();
    Direction getDirection();
  private:
    int _numberOfSteps;
    int _stepSpeed;
    StepType _stepType;
    Direction _movementDirection;
};

#endif
