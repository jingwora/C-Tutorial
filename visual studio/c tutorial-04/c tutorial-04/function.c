/*
C-Tutorail in visual studio
function
void
*/

#include <stdio.h>


// function1
// void
void function1()
{
	printf("function1");

	return 0;
}


// function2
// add
void function2(int num1, int num2)
{
	int result = num1 + num2;
	printf("Result is %d", result);
}



int main()
{
	function2(10, 4);
	
	return 0;
}