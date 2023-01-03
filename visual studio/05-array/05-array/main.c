/*
C Tutorail in visual studio
Array
sizeof
*/

#include <stdio.h>

void function1();
void function2();
void function3(size_t length, int myArray[]);
void function4();

int main()
{
	// function1();
	// function2();

	// int ages[] = { 10, 20, 30, 40 };
	// size_t ageLength = sizeof(ages) / sizeof(ages[0]);
	// function3(ageLength, ages);

	function4();

	return 0;
}

// function1
// array  arrayLength
void function1()
{
	int myArray[] = {1, 2, 3, 4, 5};

	for (int x = 0; x < 4; x++)
	{
		printf(" %d \n", myArray[x]);
	}

	int arrayLength = sizeof(myArray) / sizeof(myArray[0]);

	printf("arrayLength : %lu ", arrayLength);
}

// function2
// 2D-dimensional arrays

void function2()
{
	int myArray[][2] = {{1, 2}, {3, 4}};

	int element1 = myArray[0][0];
	int element2 = myArray[0][1];
	int element3 = myArray[1][0];
	int element4 = myArray[1][1];

	printf("element1: %d \n", element1);
	printf("element2: %d \n", element2);
	printf("element3: %d \n", element3);
	printf("element4: %d \n", element4);
}

// function3
// box
void function3(size_t length, int myArray[])
{
	for (int i = 0; i < length; i++)
	{
		printf(" %d\n", myArray[i]);
	}
	printf("Length: %lu\n", length);
}

// function4
// matrix
void function4()
{
	int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\n", matrix[i][j]);
		}
	}
}