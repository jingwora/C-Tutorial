/*
C-Tutorail in visual studio
Variables
printf, scanf_s
*/

#include <stdio.h>

// function1
// printf
int function1()
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


// function2
// puts
int function2()
{
	char string[] = "String2";
	int value = (char)10;

	puts("String1");
	puts(string);

	return 0;
}


// function3
// scanf_s
int function3()
{
	int num;
	printf("Enter a number");
	scanf_s("%d", &num);
	printf("You entered: %d\n", num);

	return 0;
}

// function4
// sizeof
int function4()
{
	int myInt;
	float myFloat;
	double myDouble;
	char myChar;

	printf("%lu\n", sizeof(myInt));
	printf("%lu\n", sizeof(myFloat));
	printf("%lu\n", sizeof(myDouble));
	printf("%lu\n", sizeof(myChar));
}

int main()
{
	//function1();
	function2();
	//function3();

	return 0;
}