#include <stdio.h> 

// condition1
// more or less
int condition1()
{
	int value1 = 10;
	int value2 = 10;

	if (value1 == value2)
	{
		printf("1:Values are equal!");
	}
	else if (value1 > value2)
	{
		printf("1:Value 1 is bigger!");
	}
	else {
		printf("1:Value 2 is bigger!");
	}
}


// condition2
// and
int condition2()
{
	int value1 = 10;
	int value2 = 10;

	if (value1 == 10 && value2 > 1)
	{
		printf("2:yes");
	}
	else
	{
		printf("2:no");
	}
}


// condition3
// or
int condition3()
{
	int value = 10;

	if (value == 10 || value < 5)
	{
		printf("3:yes");
	}
	else
	{
		printf("3:no");
	}
}

int main()
{
	condition3();
}