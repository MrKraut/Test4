#pragma config(Sensor, S4,     button,         sensorEV3_Touch)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(SensorValue(button) == 0)
	{
		motor[motorB] = 50;
	}




}
