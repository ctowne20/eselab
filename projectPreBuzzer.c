#include <stdio.h>
#include <wiringPi.h>

#define BEEP 0

int main(void)
{
	if (wiringPiSetup() < 0)
	{
		printf("wiringPi setup failed");
		return 1;
	}

	pinMode(BEEP, OUTPUT);

	while(1)
	{
		digitalWrite(BEEP, LOW);//beep on
		delay(100);
		digitalWrite(BEEP, HIGH);//beep off
		delay(100);
	}

	return 0;
}
