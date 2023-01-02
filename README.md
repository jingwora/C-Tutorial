# C-Tutorial

C programming language summary with sample codes.

## Overview

- C is a general-purposee, middle-level programming language created by Dennis Ritchie at the Bell Laboratories in 1972.
- C is strongly associated with UNIX, as it was developed to write the UNIX operating system.

## Why C?

- C is amoung the most popular programming languages.
  TIOBE Index for December 2022

- 1. Python | 2. C | 3. C++ | 4. Java | 5. C#

- It has largely been superseded in that domain by higher-level languages, such as C++, Objective-C, C#, and Java.

- C is very fast, compared to other programming languages, like Java and Python

- C language is platform independent.

## C Versions

- K&R C : Original (1978)
- ANSI C or C89: American National Standards Institute (ANSI)
- ISO C90 or C90: International Organization for Standardization
- C95, C99, C11: ANSI standard for the C programming language
- C17: The most recent standard. C18 standard provided only clarifications to C11 and introduced no new language features.
- C2x: Next standard

## C vs. C++

- C++ was developed as an extension of C, and both languages have almost the same syntax.
- The main difference between C and C++ is that C++ support classes and objects, while C does not.

## IDE

Popular IDE's include Code::Blocks, Eclipse, Visual Studio, and CodeLite.

### Visual Studio

Installation

- Donwnload and install Visual Studio

Create new project

- Create a new project > Empty Project > Next

- Input project name and choose path > Create

- Right click on the .c file and click “Properties”. Then expand the C/C++ menu, go to “Advanced”, loop for the “Compile As” section and select from the drop down menu “Compile as C Code (/TC)”

Run

- Build > Build solution
- Debug > Start without debugging

### Code::Blocks

Installation

- http://www.codeblocks.org/downloads/binaries
- codeblocks-20.03mingw-setup.exe

Create new project

- File > New > Project > Console application
- Choose C
- Input project name
- Finished

Run

- Build and Run botton

### Running C online

- https://www.codechef.com/ide

### VSCODE

Installation

Complier Setting

- Setup Mingw
- Install & Setup MSYS2
- Setup MSYS2 MINGW64
- Setup path
- Setup cmd

VSCODE Setting

- Install VSCODE
- Install C/C++ Extension
- Install Code Runner Extension
- File > Preference > Setting > Extension > Run code configuration > Check Run In Terminal
- Terminal > Configure Default Build Task

## Building Blocks

### Comments

- // Single-line Comments
- /\* \*/ Multi-line Comments
- ; semi colon is used to signify the end of a line.

## Variables and Types

- Each variable must have a defined type
- Global variable: variable definition outside the main function (can be accessed anywhere)

### Variable Name

- Letters, digits and underscores
- Begin with a letter or an underscore (\_)
- Case sensitive
- Cannot contain special characters (!”£$%^&@\*) etc.
- Cannot be a single digit
- Cannot be reserved words (such as int)
- It’s good practise to make meaningful name

| Data Type   | Size (bytes) | Description          |
| ----------- | ------------ | -------------------- |
| char        | 1            | Integer or character |
| short       | 2            | Integer              |
| int         | 2 or 4       | Integer              |
| long        | 4 or 8       | Integer              |
| long long   | 8            | Integer              |
| float       | 4            | 6 decimal digits     |
| double      | 8            | 15 decimal digits    |
| long double | 8 or 16      | digits               |

### Int

- Signed and Unsigned: By default is signed which contains both positive and negative values.

integer range for signed

| Data Type        | range            |
| ---------------- | ---------------- |
| signed char      | -128 to +127     |
| signed short     | -32768 to +32767 |
| signed int       | -2^31 to +2^31-1 |
| signed long      | -2^31 to +2^31-1 |
| signed long long | -2^63 to +2^63-1 |

integer range for unsigned

| Data Type          | range       |
| ------------------ | ----------- |
| unsigned char      | 0 to 255    |
| unsigned short     | 0 to 65535  |
| unsigned int       | 0 to 2^32-1 |
| unsigned long      | 0 to 2^32-1 |
| unsigned long long | 0 to 2^64-1 |

### Char

- ASCII characters

### String

- Array of characters
- char myString[] = "Hi";
- char myString[] = {'H', 'i', '\0'}; // \0: "null terminating character"
- printf("%s", myString); // "Hi"

Escape characters

| Functions | Description      |
| --------- | ---------------- |
| \n        | New Line         |
| \t        | Horizontal tab   |
| \v        | Vertical tab     |
| \b        | Backspace        |
| \\\\      | Backspace        |
| \         | Escape character |
| \'        | Single quote     |
| \"        | Double quote     |
| \b        | Backspace        |
| \?        | Question mark    |
| \f        | Form feed        |
| \a        | Alert sound      |
| \r        | Carriage return  |
| \0        | Null             |

String functions

| Functions  | Description            | Example                                         |
| ---------- | ---------------------- | ----------------------------------------------- |
| sizeof()   | memory size            | s = sizeof(s1);                                 |
| strlen()   | string length          | s = strlen(s1);                                 |
| strcpy()   | copy string            | strcpy(s2, s1);                                 |
| strcpy_c() | copy string            | errno_t s = strcpy_s(str2, sizeof(str2), str1); |
| strcat()   | concatenate string     | strcat(s1, s2);                                 |
| strcat_s() | concatenate string     | errno_t s = strcat_s(str1, sizeof(str1), str2); |
| strcmp()   | compare string 0=equal | s = strcmp(str1, str2);                         |

- In C you cannot get the length directly
- sizeof will always return the memory size (in bytes), and not the actual string length

### Bool

- Booleans: true (1) or false (0)

### Void

- Void: no value / not type

### Variables

| Functions | Description            | Example                                   |
| --------- | ---------------------- | ----------------------------------------- |
| int       | main                   | int main(void){return 0;}                 |
| int       | integer variable       | int x = 3;                                |
| float     | decimal variable       | float x = 3.0f;                           |
| double    | decimal readonly       | double x = 3.0f;                          |
| char      | string variable        | char s[] = "string";                      |
| size_t    | unsigned integer value | size_t length = sizeof(s) / sizeof(s[0]); |
| \_Bool    | variable readonly      | \_Bool falseIsDetected = 0;               |
| bool      | boolean variable (C99) | bool x = true;                            |
| const     | readonly variable      | const float PI = 3.14f;                   |

### Print functions

| Functions | Description          | Example                                  |
| --------- | -------------------- | ---------------------------------------- |
| printf()  | print value          | printf("Hello, world!");                 |
| printf()  | print integer        | printf("Integer: %d\n", integer);        |
| puts()    | print string         | puts("Hello, world!");                   |
| scanf_s() | input single word    | int num; scanf_s(" %d", &num);           |
| fgets()   | input multiple words | char s[100]; fgets(s, sizeof(s), stdin); |

- Declare Multiple Variables
- int x = 1, y = 2, z = 3;
- Manual conversion: int to float float sum = (float) 5 / 2;

### Type casting

- To convert from one type to another

Implicit type conversion :

- float resultFloat = Integer + Float;
- int resultInt = Float + Character; // ASCII value of 'A' is 65

Explicit type conversion using a cast

- int resultInt2 = (int)Float + Character;

Use a function to convert the type

- double resultDouble = atof("3.14");

Format Specifier

- %d or %i : char, short, or int
- %f : float or double
- %c : character
- %s : string
- %lf : long double
- %ld : long int
- %lld : long long int
- %u : unsigned char, short or int
- %lu : long unsigned int
- %llu : long long unsigned int
- %p : pointer address
- %.2f : 2 digits

### Arithmetic operations

| Symbol | Description | Example          |
| ------ | ----------- | ---------------- |
| +      | plus        | int x = 1 + 2;   |
| -      | minus       | int x = 1 - 2;   |
| /      | devide      | float x = 1 / 2; |
| \*     | multiply    | int x = 1 \* 2;  |
| %      | modulus     | float x = 1 % 2; |

### Assignment Operators

| Symbol | Description | Example |
| ------ | ----------- | ------- |
| +=     | x = x + 3   | x += 3  |
| -=     | x = x - 3   | x -= 3  |
| /=     | x = x / 3   | x /= 3  |
| %=     | x = x % 3   | x %= 3  |
| &=     | x = x & 3   | x &= 3  |
| \|=    | x = x \| 3  | x \|= 3 |
| ^=     | x = x ^ 3   | x ^= 3  |
| >>=    | x = x >> 3  | x >>= 3 |
| <<=    | x = x << 3  | x <<= 3 |

### Increment and Decrement Operators

| Symbol | Description    | Example |
| ------ | -------------- | ------- |
| ++     | increment by 1 | i++     |
| --     | decrement by 1 | i--     |

- i++ assign -> increment
- ++i increment -> assign

### Comparison Operators

| Functions | Description              | Example     |
| --------- | ------------------------ | ----------- |
| >         | greater than             | if (x > 5)  |
| >=        | greater than or equal to | if (x >= 5) |
| <         | less than                | if (x < 5)  |
| <=        | less than or equal to    | if (x <= 5) |
| ==        | equal                    | if (x == 5) |
| !=        | not equal                | if (x != 5) |

### Logical Operators

| Functions          | Description      | Example                                              |
| ------------------ | ---------------- | ---------------------------------------------------- |
| !                  | not              | !x                                                   |
| &&                 | and              | if (x == 5 && y == 5)                                |
| \|\|               | or               | if (x == 5 \|\| y == 5)                              |
| if() {}            | if               | if (x > 5) {y=1;}                                    |
| if() {} else {}    | if else          | if (x > 5) {y=1;} else {y=0;}                        |
| if() {} else if {} | if else if       | if (x > 5) {y=1;} else if (v <= 5) {y=0;}            |
| switch() {case}    | switch-case      | switch (x) {case 1: y=1; break; default:y=2; break;} |
| (?:)               | Ternary Operator | x = (x < 0.5) ? 0 : 1;                               |
| break              | stop loop        | break;                                               |
| continue           | skip iteration   | continue;                                            |

Boolean contex

```
int done = 0;
if(!done) {} // if(done == 0)
if(done) {}  // if(done != 0)
```

### Iteration

| Functions     | Description   | Example                                              |
| ------------- | ------------- | ---------------------------------------------------- |
| for() {}      | for loop      | int i = 1; for(i = 0; i < 10; i++) {printf("Loop");} |
| while() {}    | while loop    | int i = 1; while (i < 10) {printf("Loop"); i++;}     |
| do {} while() | do while loop | int i = 1; do {printf("Loop"); i++;} while (i < 10); |

Loop 2 variables

```
int x, y;
for (x = 0, y = 0; x < 10; x++, y--) {
 printf("%d", x+y);
}
```

### Functions

- A function is a block of code which only runs when it is called.
- A method has two elements, parameters:(passed values) and the return type (returned values).
- Void is used when you are not required to return.
- Void main() cannot use exit() method so it is good practice to use int main() over the void main().
- There are two types of parameter passing, by reference and by value.
- Reference: any changes to parameter effects that passed variable. (Need pointers)
- Value: any changes to parameter do not effect that passed variable.

| Functions | Description             | Example                                    |
| --------- | ----------------------- | ------------------------------------------ |
| void() {} | function without return | void function(int value) {printf(value); } |
| int() {}  | function with return    | int function(int value) return value\*2; } |

Good practice of function

```
// Function declaration
int myFunction(int, int);

// The main method
int main() {
  int result = myFunction(5, 3); // call the function
  printf("Result is = %d", result);
  return 0;
}

// Function definition
int myFunction(int x, int y) {
  return x + y;
}
```

### Arrays

- First index has an identifying value of 0
- Declaration int myArray[3]; // 3 elements
- To change value in array. myArray[0] = 1;
- To access : printf("%d", myArray[0]); // 1
- int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} }; //2 rows 3 columns
- Array Size : int length = sizeof(myArray) / sizeof(int); /_ 2 _/

| Functions          | Description | Example                                               |
| ------------------ | ----------- | ----------------------------------------------------- |
| int myArray[][2]   | 2d array    | int myArray[][2] = {{1, 2}, {3, 4}};                  |
| int myArray[][][2] | 3d array    | int myArray[][][2] = {{{1,1},{1,1}}, {{1,1}, {1,1}}}; |

### Pointer

- The memory address of a variable (pointee)
- Pointers can reduce the code and improve the performance.
- Passing by reference
- The function pointer can be passed as a parameter
- & : (Reference Operator) is used to return the memory location.
- %x : a memory location is inhexadecimal
- %p : a pointer
- \* : to create a pointer variable (int* p; int *p; )
- To creates a pointer variable: int\* ptr = &var;
- To print pointer: printf("The address is: %p\n", &var);
- To print dereference: printf("%d\n", \*ptr);
- Pointer to pointer : int\*\* r = &p;
- Null Pointer : int\* p = NULL; int\* p = 0;
- function(int value1, int value2, int(\*opp)(int, int))

### Storage Classifications

1. Automatic variables

- Automatically created and destroyed when a function is called
- auto int value; Is the same as int value;

2. Static variables

- static is used when you want to keep the variable throughout program session.
- static int count = 0;

3. Register variables

- stored in register memory is much much quicker to access
- only space for a few variables.
- register int value;

4. External variables

- global scope variable
- You would include another file as reference by placing this at the top of your file: #include "FileName.c"
- extern int x;

### create external variable

extern.c

```
int x = 42;
```

extern.h

```
extern int x;
```

main.c

```
#include "extern.h"
printf("x = %d\n", x);
```

--

- To add a directory to the include path ?
- gcc -I/usr/local/include main.c -o main
- gcc -I/D/Repos/C-Tutorial/visual studio/01-condition1/01-condition1 01-condition1.c -o main

### Structures

- Custom storing of data
- Allows storing of several types, even other structures.

```
// Create structure
struct Student {
	char name[30]; // String
	char class;    // Character
	int age;       // Integer
};

// Student 1
struct Student s1;                 // Access structure
strcpy(s1.name, "Kento Yamazaki"); // Assign values to members
s1.class = 'A';
s1.age = 20;

// Student 2
struct Student s2 = { "Takuya Kimura", 'B', 18 };

// Print
printf("Name: %s\n", s1.name);   // Access members of a structure

```

### TypeDef

- To customize the name of build in and user defined variables and structures.

```
typedef struct {
	char brand[15];
	char model[15];
	int year;
} Car;

```

### Enumeration

- A group of constants (unchangeable values)
- By default, the first item has the value 0, the second has the value 1, etc.
- Print result is 0, 1,..
- Use enums when you have values that you know aren't going to change, like month days, days, colors, deck of cards, etc.

```
enum Level {
  LOW,
  MEDIUM,
  HIGH
};

enum Level myVar;  // Access the enum

enum Level myVar = MEDIUM; // Assigned value

```

### Unions

- To store different data types in the same memory location
- This size of the unions is as large as the largest variable (smaller than structure)
- Drawback: changing one value affects every other variable,

```
// Define the union
union Data {
	int i;
	float f;
	char str[20];
};

union Data data;  // Access the union
data.i = 10;      // Assign values to members

printf("Integer: %d\n", data.i); // Access members of a union

```

### Variable argument lists

- Function that can accept a variable number of arguments
- va_list : create variable argument list
- va_start : start
- va_end : end and cleans up the memory

### Math function

- #include <math.h>

| Functions | Description                 |
| --------- | --------------------------- |
| abs(x)    | absolute value of x         |
| acos(x)   | arccosine of x              |
| asin(x)   | arcsine of x                |
| atan(x)   | arctangent of x             |
| cbrt(x)   | cube root of x              |
| cos(x)    | cosine of x                 |
| exp(x)    | e power x                   |
| sin(x)    | sine of x (x is in radians) |
| tan(x)    | tangent of x                |
| pow(x)    | x to the power of y         |
| ceil(x)   | rounds upward               |
| floor(x)  | rounds downward             |
| sqrt(x)   | square root of x            |

## File

- fopen_s : open a file : ptr = fopen(char* filename, char* mode)
- fclose : close file : fclose(ptr);
- fprintf() : write with formatting
- fputs() : write (just print out, faster)

| Functions | Description            | Example                                            |
| --------- | ---------------------- | -------------------------------------------------- |
| FILE      | create file            | FILE\* ptr;                                        |
| fopen_s   | open file              | errno_t result = fopen_s(&ptr, "output.txt", "w"); |
| fprintf   | write file with format | fprintf(ptr, "Hello, %s!\n", "world");             |
| fputs     | write file             | fputs("This is a test.\n", ptr);                   |
| fclose    | close file             | fclose(ptr);                                       |

fopen_s() mode

| Mode | Description                    |
| ---- | ------------------------------ |
| r    | read file                      |
| w    | create/write file              |
| a    | create/append file             |
| r+   | read and write file            |
| w+   | read and write, truncates file |
| a+   | read and write, append file    |

### Header files

- A header file is a list of function, variable and macro definitions that can be
  included and used in different files.
- .h filename extensions
- To make modules that can be reused between projects.
- #include"“header.h"

header.h

```
int x = 10;

int Function() {
return x;
}
```

main.c

```
#include <stdio.h>
#include "header.h"

int main() {
printf("%d", Function());
}
```

### Pre-Processor Directives

- Set global values (constant) : #define LOOP_NUMBER 2 (No semicolon!)
- #undef is normally used to overwrite #define
- #ifdef and #if #ifdef and #ifndef : most common use for checking if -DDEBUG mode

| Directive | Description                               |
| --------- | ----------------------------------------- |
| #define   | Define a macro                            |
| #undef    | Remove #define                            |
| #ifdef    | Returns true if this macro is defined     |
| #ifndef   | Returns true if this macro is not defined |
| #if       | Tests if a compile time condition is true |
| #else     | The alternative for #if                   |
| #elif     | #else and #if in one statement            |
| #endif    | Ends pre-processor conditional            |

### Error Handling

- errno is a global variable that holds the last returned error code.
- error return is normally NULL or -1.

| Function   | Description                                         |
| ---------- | --------------------------------------------------- |
| perror()   | Displays the string you pass and attaches errno.    |
| strerror() | Returns the pointer of the errno value (for saving) |
| stderr     | Output an error to the console.                     |

```
void function1()
{
	FILE* file;
	int errnum;

	//Looks for file
	file = fopen("NoFile.txt", "rb");

	//If the file returned an error
	if (file == NULL) {
	    //Grabs error code
		errnum = errno;
		//Prints error code
		fprintf(stderr, "1: Value of errno:% d\n", errno);  // 2

		//Returns string provided + : and Error code message
		perror("1: Error printed by perror");   // No such file or directory

		//Grabs the error text
		char* errorMsg[] = {
			strerror()
		};

		printf("1: Error msg test print: %s\n", *errorMsg); } // Error msg test print: Unknown error

	else {
		fclose(file);
	}
}
```

### Memory management

- #include <stdlib.h>

| Function                                  | Description                                   |
| ----------------------------------------- | --------------------------------------------- |
| void \*calloc(int num, int size);         | allocates an array and the size               |
| void free(void \*address);                | releases memory                               |
| void \*malloc(int num);                   | calloc but leaves the locations uninitialized |
| void \*malloc(int num);                   | calloc but leaves the locations uninitialized |
| void *realloc(void *address, int newsize) | re-allocates memory to specified in newsize   |

## Library

- \#include

| Library     | Description                                  |
| ----------- | -------------------------------------------- |
| <stdio.h>   | Input and output functions, such as printf() |
| <stdbool.h> | To use boolean variable, such as bool        |
| <string.h>  | To use string functions, such as strlen      |
| <stdarg.h>  | To use variable argument list                |
| <math.h>    | To use match functions, such as sqrt,pow     |
| <error.h>   | To use error handling functions              |
| <stdlib.h>  | To use memory management functions           |

- #define \_CRT_SECURE_NO_DEPRECATE // to use deprecated functions

### References:

- Modern C Quick Syntax Reference A Pocket Guide to the Language, APIs, and Library (Mikael Olsson), 2019

- Ultimate Step-By-Step Guide To Learning C Programming Fast (Robert Anderson), 2017

- https://www.w3schools.com/
