#include <stdio.h>


int value = 5;

// condition1
// if() {}
int condition1()
{
	if (value == 5)
	{
		printf("1:yes");
	}
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
}



int main()
{
	condition4();
}