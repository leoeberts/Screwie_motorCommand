/*
  Screwie_motorCommand.h - Object that represent one command to operate one stepper motor.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Screwie_motorCommand.h"

Screwie_motorCommand::Screwie_motorCommand(int numberOfSteps, int stepSpeed, StepType stepType, Direction movementDirection) {
  _numberOfSteps = numberOfSteps;
  _stepSpeed = stepSpeed;
  _stepType = stepType;
  _movementDirection = movementDirection;
}

int Screwie_motorCommand::getNumberOfSteps() {
  return _numberOfSteps;
}

int Screwie_motorCommand::getSpeed() {
  return _stepSpeed;
}

StepType Screwie_motorCommand::getStepType() {
  return _stepType;
}

Direction Screwie_motorCommand::getDirection() {
  return _movementDirection;
}

