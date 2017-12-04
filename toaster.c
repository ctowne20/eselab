#include <stdio.h>
#include <wiringPi.h>
#include <Python.h>

#define SettingPin 8
#define Toast1 9
#define Toast2 7
#define Toast3 0
#define Toast4 2
#define Toast5 3
#define Toast6 12
#define Toast7 13
#define ToastFrozen 14
#define ToastBagel 15
#define ToastCancel 16
//are those necessary???

int main()
{	
	string calendarEntry;

	//Code to embed Python found at
	//https://docs.python.org/2/extending/embedding.html
	Py_SetProgramName(argv[0]);
	Py_Initialize();
	PyRun_SimpleFile(); //Insert file name in parentheses
	Py_Finalize();
	
	//if statements depending on type of breakfast food in the Calendar entry
	//options:
	//Toast- level 2 toast
	//poptart = level 1 toast
	//bagel = level 3 toast OR bagel feature
	//frozen something = frozen feature
	
	wiringPiSetup();
	if (calendarEntry == "poptart")
		pinMode(PINNUMBER, OUTPUT);
	else if (calednarEntry == "toast")
		pinMode(pinnumber, OUTPUT);
	else if (calendarEntry == "bagel")
		pinMode(pinnumber, OUTPUT);
	else if (calendarEntry == "frozen bread")
		pinMode(pinNumber, OUTPUT);
	else if (calendarEntry == "toaster")
		pinMode(Pinnumber, OUTPUT);
	else if (calendarEntry == "breakfast") //Assume POPTART
		pinMode(Pinnumber, OUTPUT);
	else if (calendarEntry == "lunch") //Assume TOAST
		pinMode(PinNumber, OUTPUT);
	else if (calendarEntry == "dinner")
		pinMode(Pinnumber, OUTPUT); //Assume FROZEN BREAD


	return 0;
}
