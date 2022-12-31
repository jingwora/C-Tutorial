/*
C-Tutorail in visual studio
Match function
sqrt, ceil, floor, pow, cos, abs
*/

#include <stdio.h>
#include <math.h>

void function1();

int main()
{
	function1();

	return 0;
}


void function1() 
{
	printf("sqrt(2) = %f \n", sqrt(2));      // 1.414214
	printf("ceil(1.4) = %f\n", ceil(1.4));   // 2.000000
	printf("floor(1.4) = %f\n", floor(1.4)); // 1.000000
	printf("pow(4, 2) = %f \n", pow(4, 2));  // 16.000000
	printf("cos(2) = %f \n", cos(2));        // -0.416147
	printf("abs(-10) = %d \n", abs(-10));    // 10

}
