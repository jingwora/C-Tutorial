/*
C-Tutorail in visual studio
Variables
printf, scanf_s
*/

#include <stdio.h>

// variable1
// printf
int variable1()
{
	int integer = 10;
	float float_value = 1.1;
	double double_value = 1.2;
	char character = 'A';
	char string[] = "Hello, world!";

	printf("An integer: %d\n", integer);
	printf("A float value: %f\n", float_value);
	printf("A double value: %lf\n", double_value);
	printf("A character: %c\n", character);
	printf("A string: %s\n", string);

	return 0;
}



// variable2
// scanf_s
int variable2()
{
	int num;
	printf("Enter a number");
	scanf_s("%d", &num);
	printf("You entered: %d\n", num);

	return 0;
}


int main()
{
	variable1();
	//variable2();	

    return 0;
}