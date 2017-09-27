#include <stdio.h>
#include <wiringPi.h>
#define LedPin 0
#define ButtonPin 1
int main(void)
{
	if(wiringPiSetup() < 0)
	{ 
		printf("wiringPi setup failed");
		return 1; 
	}

	pinMode(LedPin, OUTPUT); 
	pinMode(ButtonPin, INPUT);
	pullUpDnControl(ButtonPin, PUD_UP); 

	while(1)
	{
		digitalWrite(LedPin, HIGH);
		if(digitalRead(ButtonPin) == 0)
		{
			digitalWrite(LedPin, LOW); //led on
			printf("Button is pressed);
		}
	
	}
	return 0;
}
// pieces of code from SunFounder
