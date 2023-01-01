/*
C-Tutorail in visual studio
Condition1
[if, else if, else]
*/

#include <stdio.h>

int condition1();
int condition2();
int condition3();
int condition4();

int main()
{
	condition1();
	//condition2();
	//condition3();
	//condition4();	

	return 0;
}


int value = 5;

// condition1
// if() {}
int condition1()
{
	if (value == 5)
	{
		printf("1:yes");
	}

	return 0;
}


// condition2
// f() {} else {}
int condition2()
{
	if (value == 5)
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
// if() {} else if() {}
int condition3()
{
	if (value == 5)
	{
		printf("3:yes");
	}
	else if (value != 5)
	{
		printf("3:no");
	}

	return 0;
}


// condition4
// if else boolean
int condition4()
{
	_Bool false = 0;
	_Bool true = 1;
	if (false)
	{
		printf("4:false");
	}
	else if (true)
	{
		printf("4:true");
	}

	return 0;
}