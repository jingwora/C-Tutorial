/*
C-Tutorail in visual studio
Array
sizeof
*/

#include <stdio.h>


// function1
// array  arrayLength
void function1()
{
	int myArray[] = {1, 2, 3, 4, 5 };

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
	int myArray[][2] = { {1, 2}, {3, 4} };

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
void function3(size_t length, int myArray[])
{
	for (int i = 0; i < length; i++)
	{
		printf(" %d\n", myArray[i]);
	}
	printf("Length: %lu\n", length);
}


int main()
{
	//function1();
	//function2();

	int ages[] = { 10, 20, 30, 40 };
	size_t ageLength = sizeof(ages) / sizeof(ages[0]);
	function3(ageLength, ages);

	return 0;
}