/*
C-Tutorail in visual studio
Iteration
for, while, do while, break, continue
*/

#include <stdio.h>


// iteration1
// for loop
int iteration1()
{
	int i;

	for (int i = 1; i <= 10; i++)
	{
		printf("For looped! %d\n", i);
	}

	return 0;
}


// iteration2
// while loop
int iteration2()
{
	int i = 1;

	while (i <= 10)
	{
		printf("While loop! %d\n", i);
		i++;
	}

	return 0;
}


// iteration3
// Do-While
int iteration3()
{
	int i = 1;

	do
	{
		printf("Do while loop %d\n", i);
		i++;
	} while (i <= 10);

	return 0;
}


// iteration4
// Do-While
int iteration4()
{
	_Bool correct = 0;
	do
	{
		printf("Please enter the letter 'z': ");

		char answer = 'z';

		scanf_s(" %c", &answer);

		if (answer != 'z')
		{
			correct = 0;
			printf("Incorrect!\n");
		}
		else
		{
			correct = 1;
			printf("Correct!\n");
		}
	} while (!correct);

	return 0;
}


// iteration5
// for if break
int iteration5()
{
	for (int i = 0; i < 5; i++)
	{
		if (i == 3)
		{
			break;
		}
		printf("5:Loop value: %d \n", i);
	}

	return 0;
}


// iteration6
// for if continue
int iteration6()
{
	for (int i = 0; i < 5; i++)
	{
		if (i != 3)
		{
			continue;
		}
		printf("6:Loop value: %d \n", i);
	}

	return 0;
}


// iteration7
// nested loop
int iteration7()
{
	int i, j;

	// Outer loop
	for (i = 1; i <= 3; i++)
	{
		// Inner loop
		for (j = 1; j <= 3; j++)
		{
			printf("i = %d, j = %d\n", i, j);
		}
	}

	return 0;
}


// iteration8
// nested loop
int iteration8()
{
	int h, w;

	for (int h = 0; h < 5; h++)
	{
		for (int w = 0; w < 5; w++)
		{
			printf("X ");
		}
		printf("\n");
	}

	return 0;
}


int main()
{
	iteration1();
	//iteration2();
	//iteration3();
	//iteration4();
	//iteration5();
	//iteration6();
	//iteration7();
	//iteration8();

	return 0;
}