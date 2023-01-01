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

- Install Visual Studio IDE
- Right click on the .c file and click “Properties”. Then expand the C/C++ menu, go to “Advanced”, loop for the “Compile As” section and select from the drop down menu “Compile as C Code (/TC)”

### Code::Blocks

- http://www.codeblocks.org/downloads/binaries
- codeblocks-20.03mingw-setup.exe

### Running C online

- https://www.codechef.com/ide

### Setup for VSCODE

Code Setting

- Setup Mingw
- Install & Setup MSYS2
- Setup MSYS2 MINGW64
- Setup path
- Setup cmd

VSCODE Setting

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
- Cannot contain special characters (!”£$%^&\*) etc.
- Cannot be a single digit
- Reserved words (such as int) cannot be used as names
- It’s good practise to make meaningful name

| Data Type | Size (bytes) | Description       |
| --------- | ------------ | ----------------- |
| integer   | 2 or 4       | real numbers      |
| float     | 4            | 6 decimal digits  |
| double    | 8            | 15 decimal digits |
| character | 1            | real numbers      |

### String

Escape characters

- String: a array of characters
- \n : New Line
- \t : Tab
- \0 : Null
- \\\\ : backslash
- \\" : double quote
- \ : Escape character

--

- char greetings[] = "Hello World!";
- char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
- \0: "null terminating character"

### Booleans

- Booleans: true (1) or false (0)

### Void

- Void: no value / not type

### Variables

| Functions | Description            | Example                                         |
| --------- | ---------------------- | ----------------------------------------------- |
| int       | main                   | int main(void){return 0;}                       |
| int       | integer variable       | int integerValue = 3;                           |
| float     | decimal variable       | float decimalValue = 3.0f;                      |
| double    | decimal readonly       | double decimalValue = 3.0f;                     |
| char      | string variable        | char word[] = "string";                         |
| size_t    | unsigned integer value | size_t length = sizeof(ages) / sizeof(ages[0]); |
| \_Bool    | variable readonly      | \_Bool falseIsDetected = 0;                     |
| bool      | boolean variable (C99) | bool boolValue = true;                          |
| const     | readonly variable      | const float PI = 3.14f;                         |

Print functions

| Functions | Description          | Example                                                       |
| --------- | -------------------- | ------------------------------------------------------------- |
| printf()  | print value          | printf("Hello, world!");                                      |
| printf()  | print integer        | printf("Integer: %d\n", integer);                             |
| puts()    | print string         | puts("Hello, world!");                                        |
| scanf_s() | input single word    | int num; scanf_s(" %d", &num);                                |
| fgets()   | input multiple words | char sentence[100]; fgets(sentence, sizeof(sentence), stdin); |

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

String functions

| Functions  | Description            | Example                                              |
| ---------- | ---------------------- | ---------------------------------------------------- |
| sizeof()   | memory size            | sizeof(alphabet)                                     |
| strlen()   | string length          | strlen(alphabet)                                     |
| strcpy_c() | copy string            | errno_t result = strcpy_s(str2, sizeof(str2), str1); |
| strcat_s() | concatenate string     | errno_t result = strcat_s(str1, sizeof(str1), str2); |
| strcmp()   | compare string 0=equal | strcmp(str1, str2)                                   |

- In C you cannot get the length directly
- sizeof will always return the memory size (in bytes), and not the actual string length

Format Specifier

- %d or %i : integer
- %f : float
- %lf : double
- %c : character
- %s : string
- %lu : long unsigned int

### Arithmetic operations

| Symbol | Description    | Example               |
| ------ | -------------- | --------------------- |
| +      | plus           | int result = 1 + 2;   |
| -      | minus          | int result = 1 - 2;   |
| /      | devide         | float result = 1 / 2; |
| \*     | multiply       | int result = 1 \* 2;  |
| %      | modulus        | float result = 1 % 2; |
| ++     | increment by 1 | i++                   |
| --     | decrement by 1 | i--                   |
| +=     | x = x + 3      | x += 3                |
| -=     | x = x - 3      | x -= 3                |
| /=     | x = x / 3      | x /= 3                |
| %=     | x = x % 3      | x %= 3                |
| &=     | x = x & 3      | x &= 3                |
| \|=    | x = x \| 3     | x \|= 3               |
| ^=     | x = x ^ 3      | x ^= 3                |
| >>=    | x = x >> 3     | x >>= 3               |
| <<=    | x = x << 3     | x <<= 3               |

- i++ assign -> increment
- ++i increment -> assign

### Conditionals

| Functions          | Description              | Example                                                      |
| ------------------ | ------------------------ | ------------------------------------------------------------ |
| >                  | greater than             | if (value > 5)                                               |
| >=                 | greater than or equal to | if (value >= 5)                                              |
| <                  | less than                | if (value < 5)                                               |
| <=                 | less than or equal to    | if (value <= 5)                                              |
| ==                 | equal                    | if (value == 5)                                              |
| !=                 | not equal                | if (value != 5)                                              |
| !                  | not                      | !value                                                       |
| &&                 | and                      | if (value1 == 5 && value2 == 5)                              |
| \|\|               | or                       | if (value1 == 5 \|\| value2 == 5)                            |
| if() {}            | if condition             | if (value > 5) {printf("yes");}                              |
| if() {} else {}    | if else condition        | if (value > 5) {printf("yes");} else {printf("no");}         |
| if() {} else if {} | if else if condition     | if (v > 5) {printf("yes");} else if (v <= 5) {printf("no");} |
| switch()           | switch-case              | if (v > 5) {printf("yes");} else if (v <= 5) {printf("no");} |
| break              | stop loop                | break;                                                       |
| continue           | continue loop            | continue;                                                    |

### Iteration

| Functions     | Description   | Example                                                     |
| ------------- | ------------- | ----------------------------------------------------------- |
| for() {}      | for loop      | int i = 1; for(int i = 0; i < 10; i++) {printf(“Looped!”);} |
| while() {}    | while loop    | int i = 1; while (i <= 10) {printf("Looped!"); i++;}        |
| do {} while() | do while loop | int i = 1; do {printf("Looped!"); i++;} while (i <= 10)     |

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
- To access index[0]
- To change value in array. myArray[0] = 1;
- int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} }; //2 rows 3 columns

| Functions          | Description | Example                                               |
| ------------------ | ----------- | ----------------------------------------------------- |
| int myArray[][2]   | 2d array    | int myArray[][2] = {{1, 2}, {3, 4}};                  |
| int myArray[][][2] | 3d array    | int myArray[][][2] = {{{1,1},{1,1}}, {{1,1}, {1,1}}}; |

### Pointer

- The memory address of a variable
- Pointers can reduce the code and improve the performance.
- Passing by reference
- The function pointer can be passed as a parameter
- & : (Reference Operator) is used to return the memory location.
- %x : a memory location is inhexadecimal
- %p : a pointer
- \* : to create a pointer variable
- To creates a pointer variable: int\* ptr = &var;
- To print pointer: printf("The address is: %p\n", &var);
- To print dereference: printf("%d\n", \*ptr);
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
