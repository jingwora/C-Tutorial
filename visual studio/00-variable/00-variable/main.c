/*
C-Tutorail in visual studio
Variables
printf, scanf_s, sizeof, strlen, strcpy_c, strcat_s, strcmp
(int), 
*/

#include <stdio.h>


int function1();
int function2();
int function3();
int function4();
int function5();
int function6();
int function7();
int function8();
int function9();
int function10();

int main()
{
	//function1();
	//function2();
	//function3();
	//function4();
	//function5();
	//function6();
	//function7();
	//function8();
	//function9();
	function10();

	return 0;
}


// function1
// printf
int function1()
{
	int integer = 10;
	float float_value = 1.1;
	double double_value = 1.2;
	char character = 'A';
	char string[] = "Hello, world!";

	printf("An integer: %d\n", integer);
	printf("A float value: %f\n", float_value);
	printf("A double value: %lf\n", double_value);
	printf("A character: %c\n", character);
	printf("A string: %s\n", string);

	return 0;
}


// function2
// puts
int function2()
{
	char string[] = "String2";
	int value = (char)10;

	puts("String1");
	puts(string);

	return 0;
}


// function3
// scanf_s
int function3()
{
	int num;
	printf("Enter a number");
	scanf_s("%d", &num);
	printf("You entered: %d\n", num);

	return 0;
}


// function4
// fgets
int function4() {
	char sentence[100];

	printf("Enter a line of text: ");

	// Read a line of input from the console
	fgets(sentence, sizeof(sentence), stdin);

	printf("You entered: %s", sentence);

	return 0;
}


// function5
// sizeof
int function5()
{
	int myInt;
	float myFloat;
	double myDouble;
	char myChar;

	printf("%lu\n", sizeof(myInt));
	printf("%lu\n", sizeof(myFloat));
	printf("%lu\n", sizeof(myDouble));
	printf("%lu\n", sizeof(myChar));

	return 0;
}


// function6
// strlen
#include <string.h>

int function6()
{
	char alphabet1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alphabet2[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("strlen: %d \n", strlen(alphabet1));   // 26
	printf("sizeof: %d \n", sizeof(alphabet1));   // 27
	printf("strlen: %d \n", strlen(alphabet2));   // 26
	printf("sizeof: %d \n", sizeof(alphabet2));   // 50

	return 0;
}


// function7
// strcpy_c
#include <string.h>
int function7()
{
	char str1[20] = "Hello World!";
	char str2[20];

	// Copy str1 to str2 using strcpy_s
	errno_t result = strcpy_s(str2, sizeof(str2), str1);

	if (result != 0) {
		// Handle the error
		printf("Error copying string: %d\n", result);
		return 1;
	}

	printf("str2: %s\n", str2);

	return 0;
}


// function8
// strcat_s
#include <string.h>
int function8()
{
	char str1[100] = "Hello, ";
	char str2[100] = "world!";

	// Concatenate str2 to str1 using strcat_s
	errno_t result = strcat_s(str1, sizeof(str1), str2);

	if (result != 0) {
		// Handle the error
		printf("Error concatenating strings: %d\n", result);
		return 1;
	}

	printf("str1: %s\n", str1);
	return 0;
}


// function9
// strcmp
int function9()
{
	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "Hi";

	// Compare str1 and str2, and print the result
	printf("%d\n", strcmp(str1, str2));  // Returns 0 (the strings are equal)

	// Compare str1 and str3, and print the result
	printf("%d\n", strcmp(str1, str3));  // Returns -1 (the strings are not equal)

	return 0;
}

// function10
// change type

int function10(void) {
	int Integer = 42;
	float Float = 3.14;
	char Character = 'A';

	// Implicit type conversion
	float resultFloat = Integer + Float;  // resultFloat = 45.14
	int resultInt1 = Float + Character;   // resultInt1 = 100 (ASCII value of 'A' is 65)

	// Explicit type conversion using a cast
	int resultInt2 = (int)Float + Character;  // resultInt2 = 68 (3 + 65)

	// Use a function to convert the type
	double resultDouble = atof("3.14");  // resultDouble = 3.14

	printf("10: a = %d, b = %f, c = %c, d = %f, e = %d, f = %d, g = %lf\n",
		Integer, Float, Character, resultFloat, resultInt1, resultInt2, resultDouble);

	return 0;
}

