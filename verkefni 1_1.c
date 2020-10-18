
#pragma config(Motor,  port1,           rightMotor,    tmotorServoContinuousRotation, openLoop, reversed)
#pragma config(Motor,  port10,           leftMotor,     tmotorServoContinuousRotation, openLoop)

task main()
{
	wait1Msec(2000);

	motor[rightMotor] = 63;
	motor[leftMotor]  = 63;
	wait1Msec(2000);

	motor[rightMotor] = -63;
	motor[leftMotor]  = -63;
	wait1Msec(2000);

	motor[rightMotor] = 63;
	motor[leftMotor]  = 63;
	wait1Msec(4000);

	motor[rightMotor] = -63;
	motor[leftMotor] = -63;
	wait1Msec(4000);

	motor[rightMotor] = 63;
	motor[leftMotor] = 63;
	wait1Msec(6000);

	motor[rightMotor] = -63;
	motor[leftMotor] = -63;
	wait1Msec(6000);

	motor[rightMotor] = 63;
	motor[leftMotor] = 63;
	wait1Msec(8000);

	motor[rightMotor] = -63;
	motor[leftMotor] = -63;
	wait1Msec(8000);
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
