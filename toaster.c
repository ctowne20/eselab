#include <stdio.h>
#include <wiringPi.h>
#include <Python.h>

#define SettingPin 0

int main()
{	
	//Code to embed Python found at
	//https://docs.python.org/2/extending/embedding.html
	Py_SetProgramName(argv[0]);
	Py_Initialize();
	PyRun_SimpleFile(); //Insert file name in parentheses
	Py_Finalize();

	return 0;
}
