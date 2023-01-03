/*
C Tutorail in visual studio
Error Handling
fopen, errno, perror, strerror
fopen_s
*/

#define _CRT_SECURE_NO_DEPRECATE // to use deprecated functions
#include <stdio.h>
#include <errno.h>

extern int errno;

void function1();
void function2();
int function3(int x, int y);

int main()
{
	function1();
	function2();

	printf("3: %d \n", function3(0, 2));
	printf("3: %d \n", function3(2, 0));

	return 0;
}

// function1
// fopen, errno, perror, strerror
void function1()
{
	FILE *file;
	int errnum;

	// Looks for file
	file = fopen("NoFile.txt", "rb");

	// If the file returned an error
	if (file == NULL)
	{
		// Grabs error code
		errnum = errno;
		// Prints error code
		fprintf(stderr, "1: Value of errno:% d\n", errno); // 2

		// Returns string provided + : and Error code message
		perror("1: Error printed by perror"); // No such file or directory

		// Grabs the error text
		char *errorMsg[] = {
			strerror()};

		printf("1: Error msg test print: %s\n", *errorMsg);
	} // Error msg test print: Unknown error

	else
	{
		fclose(file);
	}
}

// function2
// fopen_s, errno, perror, strerror
void function2()
{
	// Open a file for reading
	FILE *file;
	errno_t err = fopen_s(&file, "NoFile.txt", "r");

	// Check if the file was opened successfully
	if (err != 0)
	{

		// Print an error message
		fprintf(stderr, "2: Error opening file: %d\n", err); // Error opening file: 2

		perror("2: Error printed by perror"); // No such file or directory

		// Grabs the error text
		char *errorMsg[] = {
			strerror()};

		printf("2: Error msg test print: %s\n", *errorMsg); // Error msg test print: Unknown error

		return 1;
	}

	// Close the file
	fclose(file);
}

// function3
// devide zero error

extern int errno;

int function3(int x, int y)
{
	if (y == 0)
	{
		// Prints error
		fprintf(stderr, "3: Diving by zero error..!"); // Returns error code
		return -1;
	}
	else
	{
		// If valid returns even
		return x / y;
	}
}
