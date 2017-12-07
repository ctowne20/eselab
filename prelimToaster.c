#include <stdio.h>
#include <wiringPi.h>
#include <Python.h>

#define MAXLINESIZE 300

void embedPython(const char pFileName);

int main()
{
	char calendarEntry[MAXLINESIZE];
	const char pFileName[17] = {g,o,o,g,l,e,C,a,l,e,n,d,a,r,.,p,y};
	FILE *file;
	
	embedPython(pFileName);
	wiringPiSetup();
	
	file = fopen("/tmp/test.txt", "r");
	fscanf(file, "%s", calendarEntry);
	printf("%s\n", calendarEntry);
	fclose(file);
}


//resource: http://www.linuxjournal.com/article/8497
void embedPython(const char pFileName)
{
 	Py_Initialize();
 	PyRun_SimpleString(pFileName);
  	Py_Finalize();
}
