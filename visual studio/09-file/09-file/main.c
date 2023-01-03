/*
C Tutorail in visual studio
File
FILE, fopen, fopen_s, fprintf, fclose,
*/

#define _CRT_SECURE_NO_DEPRECATE // to use deprecated functions
#include <stdio.h>

void function1();
void function2();
void function3();
void function4();
int add(int num1, int num2);

int main()
{
	function1();
	function2();
	function3();
	function4();

	return 0;
}

// function1
// FILE, fopen_s, fprintf, fclose
void function1()
{
	FILE *ptr;

	// Open the file "output.txt" for writing
	errno_t result = fopen_s(&ptr, "output1.txt", "w");

	// Write a formatted string to the file
	fprintf(ptr, "Hello, %s!\n", "world");

	// Write a string to the file
	fputs("This is a test.\n", ptr);

	// Close the file
	fclose(ptr);

	// Print file
	printf("save output1.txt\n");
}

// function2
// fopen_s write to file
int add(int num1, int num2)
{
	return num1 + num2;
}

void function2()
{
	// Add value
	int value = add(10, 25);

	FILE *ptr;

	// Open the file "output.txt" for writing
	errno_t result = fopen_s(&ptr, "output2.txt", "w");

	// Write value to the file
	fprintf(ptr, " %d\n", value);

	// Close the file
	fclose(ptr);

	// Print file
	printf("save output2.txt\n");
}

// function3
// fopen read, add text, write
void function3()
{
	// Open a file for reading and writing
	FILE *file = fopen("output1.txt", "r+");

	// Check if the file was opened successfully
	if (file == NULL)
	{
		// Handle error
		perror("Error opening file");
		return 1;
	}

	// Move the file pointer to the end of the file
	fseek(file, 0, SEEK_END);

	// Add some text to the end of the file
	fputs("Added Hello, world!", file);

	// Close the file
	fclose(file);

	// Print file
	printf("save output1.txt\n");

	return 0;
}

// function4
//
void function4()
{
	// Open a file for reading
	FILE *infile = fopen("output1.txt", "r");

	// Check if the input file was opened successfully
	if (infile == NULL)
	{
		// Handle error
		perror("Error opening input file");
		return 1;
	}

	// Open a file for writing
	FILE *outfile = fopen("output3.txt", "w");

	// Check if the output file was opened successfully
	if (outfile == NULL)
	{
		// Handle error
		perror("Error opening output file");
		return 1;
	}

	// Read the contents of the input file, one character at a time
	int c;
	while ((c = fgetc(infile)) != EOF)
	{
		// Write the character to the output file
		fputc(c, outfile);
	}

	// Add some text to the end of the output file
	fputs("Add function 4", outfile);

	// Close the files
	fclose(infile);
	fclose(outfile);

	// Print file
	printf("save output3.txt\n");

	return 0;
}
