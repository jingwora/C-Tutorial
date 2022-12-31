/*
C-Tutorail in visual studio
Condition1
storage class
*/

#include <stdio.h>

void function1();
void function2();


int main()
{
	//function1(); function1(); function1();
	function2();

	return 0;
}


void function1() 
{
	//This will run once 
	static int count = 0; 
	count++; 
	printf("The count is now: %d\n", count); 
}


// function2
// external variable

#include "extern.h"
void function2()
{
	// Declare the external variable
	printf("x = %d\n", x);

}




