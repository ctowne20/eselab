#include <stdio.h>
#include <string.h>
//#include <errno.h>
#include <stdlib.h>
#include <wiringPi.h>

#define LedPin 0
#define TiltPin 1

int main(void)
{
	if (wiringPiSetup() < 0)
	{
		printf("Unable to setup WiringPi");
		return 1;
	}
	
	pinMode(TiltPin, INPUT);
	pinMode(LedPin, OUTPUT);
	pullUpDnControl(TiltPin, PUD_UP);

	while(1)
	{
		if (digitalRead(TiltPin) == 0)
		{
			digitalWrite(LedPin, LOW); //light off when tilt switch not tilted
		}
		else 
			digitalWrite(LedPin, HIGH);
	}

	return 0;

}

//pieces of code extracted from SunFounder
