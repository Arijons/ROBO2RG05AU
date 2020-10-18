
#pragma config(Sensor, dgtl1,  rightEncoder,   sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  leftEncoder,    sensorQuadEncoder)
#pragma config(Motor,  port1,           rightMotor,    tmotorServoContinuousRotation, openLoop, reversed)
#pragma config(Motor,  port10,           leftMotor,     tmotorServoContinuousRotation, openLoop)

void Fwrd(int t)
{

  //Clear Encoders
  SensorValue[rightEncoder] = 0;
  SensorValue[leftEncoder] = 0;

  while(SensorValue[leftEncoder] < 300*t)
  {
    motor[rightMotor] = 126;
    motor[leftMotor] = 126;
  }
}


void Bwrd()
{

  while(SensorValue[leftEncoder] > 0)
  {
    //...Move
    motor[rightMotor] = -80;
    motor[leftMotor] = -80;
  }
}
task main
{
Fwrd(1);
Bwrd();
Fwrd(2);
Bwrd();
Fwrd(3);
Bwrd();
Fwrd(4);
Bwrd();
Fwrd(5);
Bwrd();
}
