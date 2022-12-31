/*
C-Tutorail in visual studio
File

*/

#include <stdio.h>

void function1();
void function2();
int add(int num1, int num2);

int main()
{
	function1();
	function2();

	return 0;
}


// function1
// FILE, fopen_s, fprintf, fclose
void function1()
{
	FILE* ptr;

	// Open the file "output.txt" for writing
	errno_t result = fopen_s(&ptr, "output1.txt", "w");

	// Write a formatted string to the file
	fprintf(ptr, "Hello, %s!\n", "world");

	// Write a string to the file
	fputs("This is a test.\n", ptr);

	// Close the file
	fclose(ptr);

}


// function2
int add(int num1, int num2)
{
	return num1 + num2;
}

void function2()
{
	// Add value
	int value = add(10, 25);

	FILE* ptr;

	// Open the file "output.txt" for writing
	errno_t result = fopen_s(&ptr, "output2.txt", "w");

	// Write value to the file
	fprintf(ptr, " %d\n", value);

	// Close the file
	fclose(ptr);

}