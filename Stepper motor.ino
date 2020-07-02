#include <Stepper.h>
int spr =200;
Stepper motor(spr,9,8,10,11);
void setup()
{
  motor.setSpeed(240);
}

void loop()
{
}