
#pragma config(Sensor, dgtl1,  rightEncoder,   sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  leftEncoder,    sensorQuadEncoder)
#pragma config(Motor,  port1,           rightMotor,    tmotorServoContinuousRotation, openLoop, reversed)
#pragma config(Motor,  port10,           leftMotor,     tmotorServoContinuousRotation, openLoop)


void Rturn(){
 	wait1Msec(500);							            //Robot waits for 2000 milliseconds before executing program

	SensorValue[rightEncoder] = 0;
  SensorValue[leftEncoder] = 0;	          //Set the encoder so that it starts counting at 0

  while(SensorValue(leftEncoder) < 126)   //While rightEncoder has counted less than 1800 counts
	{
		//Hri beygja
		motor[rightMotor] = 63;					      //Motor on port2 is run at full (127) power forward
		motor[leftMotor]  = -63;
 }
}

void Lturn(){
 	wait1Msec(500);

	SensorValue[rightEncoder] = 0;
  SensorValue[leftEncoder] = 0;

  while(SensorValue(rightEncoder) < 126)
	{
		//Vntri beygja
		motor[rightMotor] = -63;
		motor[leftMotor]  = 63;
 }
}

void Fwrd()
{
  wait1Msec(500);  // 2 Second Delay

  //Clear Encoders
  SensorValue[rightEncoder] = 0;
  SensorValue[leftEncoder] = 0;

  while(SensorValue[leftEncoder] < 175)  // While less than 5 rotations on the leftEncoder...
  {
    //...Move Forward
    motor[rightMotor] = 63;
    motor[leftMotor] = 63;
  }

}

task main()
{
Fwrd();
Rturn();

Fwrd();
Lturn();

Fwrd();
Lturn();

Fwrd();
Rturn();

Fwrd();
Rturn();

Fwrd();
Lturn();

Fwrd();
Rturn();

Fwrd();
Rturn();

Fwrd();
Lturn();

Fwrd();
Rturn();

Fwrd();
Rturn();

Fwrd();
Lturn();

Fwrd();
Lturn();

Fwrd();
Rturn();

Fwrd();
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
