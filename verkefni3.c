#pragma config(Sensor, in1,    leftLineFollower, sensorLineFollower)
#pragma config(Sensor, in2,    centerLineFollower, sensorLineFollower)
#pragma config(Sensor, in3,    rightLineFollower, sensorLineFollower)
#pragma config(Sensor, in4,    LightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  rightEncoder,   sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  leftEncoder,    sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  compassSensor,  sensorVirtualCompass)
#pragma config(Sensor, dgtl6,  touchSensor,    sensorTouch)
#pragma config(Sensor, dgtl8,  sonarSensor,    sensorSONAR_cm)
#pragma config(Motor,  port2,           rightMotor,    tmotorServoContinuousRotation, openLoop, reversed)
#pragma config(Motor,  port3,           leftMotor,     tmotorServoContinuousRotation, openLoop)

int threshold = 40;   //throskuldur = 40

task main()
{
  // loobadi medan ljosid er kveikt i herberginu:
  while(SensorValue[LightSensor]>400)
  {
    // farid a hradanum 75:
    motor[rightMotor] = 75;
    motor[leftMotor]  = 75;

    // ef ad hluturinn naer en throskudurinn segir
    if(SensorValue(sonarSensor) < threshold && SensorValue(sonarSensor) != -1)
    {
      // stop og snudu til vinstri:
      motor[rightMotor] = 75;
      motor[leftMotor]  = -75;
      wait1Msec(700);

      // snudu thangad allt er hreynt fyrir framan thig:
      while(SensorValue(sonarSensor) < (2*threshold ))
      {
        // snudu til haegri:
        motor[rightMotor] = -75;
        motor[leftMotor]  = 75;
      }
    }
  }
}
