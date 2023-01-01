/*
C-Tutorail in visual studio
function
void, int
*/

#include <stdio.h>


void function1();
void function2(int num1, int num2);
void function3(char string[]);
int function4(int num1, int num2);
_Bool function5(int value);
int function6(int n);


int main()
{
	//function1();

	//function2(10, 4);

	//function3("Hello, world!");

	//int result = function4(10, 4); 
	//printf("Result: %d", result);

	//int value = 2;
	//if (function5(value) == 1)
	//{
	//	printf("Even");
	//}
	//else if (function5(value) == 0)
	//{
	//	printf("Odd");
	//}

	int num = 5;
	printf("The factorial of %d is %d\n", num, function6(num));

	return 0;
}


// function1
// void
void function1()
{
	printf("function1");
}


// function2
// add
void function2(int num1, int num2)
{
	int result = num1 + num2;
	printf("Result is %d", result);
}

// function3
// print string
void function3(char string[])
{
	printf(string);
	printf("\n");
}

// function4
// int return
int function4(int num1, int num2)
{
	int result = num1 + num2;

	return result;
}


// function5
// odd or even
_Bool function5(int value)
{
	if (value % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


// function6
// Recursion factorial
int function6(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * function6(n - 1);
	}
}