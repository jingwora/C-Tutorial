/* 
C-Tutorail in visual studio
Condition2
[if, else if, else], [switch, case, default, break]
*/

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

	return 0;
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

	return 0;
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

	return 0;
}


// condition4
// switch
int condition4()
{
	char character = 'Y';
	switch (character) 
	{
	case 'N': 
		printf("4:no");
		break;
	case 'Y': 
		printf("4:yes");
		break;
	default: 
		printf("4:not know"); 
		break;
	}

	return 0;
}


int main()
{
	condition1();
	//condition2();
	//condition3();
	//condition4();
	
    return 0;
}