
#pragma config(Sensor, dgt5,  rightEncoder,   sensorQuadEncoder)
#pragma config(Sensor, dgt6,  leftEncoder,    sensorQuadEncoder)
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
	while(true)
		{
			if(vexRT[Btn6U] == 1)
		{
				Fwrd()
		}
			if(vexRT[Btn6D] == 1)
		}
				Bwrd()
		}
			if(vexRT[Btn8R] == 1)
		{
				Rturn()
		}
			if(vexRT[Btn8L] == 1)
		{
				Lturn()
		}
			if(vexRT[Btn7U] == 1)
		{
				armup()
		}
			if(vexRT[Btn7D] == 1)
		(
				armdown()
		)
			if(vexRT[Btn5U] == 1)
		(
				clownup()
		)
			if(vex[Btn5D]
		{
				clowndown()
		}
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
