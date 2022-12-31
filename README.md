# C-Tutorial

Collection of learning meterials

## Overview

- C is a general-purposee, middle-level programming language created by Dennis Ritchie at the Bell Laboratories in 1972.
- C is strongly associated with UNIX, as it was developed to write the UNIX operating system.

## Why C?

- C is amoung the most popular programming languages.
  TIOBE Index for December 2022

1. Python
2. C
3. C++
4. Java
5. C#

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

- String: a array of characters
- \n : special character for a newline
- \t : special character for a tab
- \\\\ : backslash
- \\" : double quote

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
| printf()  | print value            | printf("Hello, world!");                        |
| printf()  | print integer          | printf("Integer: %d\n", integer);               |
| puts()    | print string           | puts("Hello, world!");                          |
| scanf_s() | input                  | int num; scanf_s(" %d", &num);                  |
| sizeof()  | memory size            | sizeof(myInt)                                   |

- Declare Multiple Variables
- int x = 1, y = 2, z = 3;
- Manual conversion: int to float float sum = (float) 5 / 2;
- In C you cannot get the length directly

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

### Arrays

- First index has an identifying value of 0
- To access index[0]

| Functions          | Description | Example                                               |
| ------------------ | ----------- | ----------------------------------------------------- |
| int myArray[][2]   | 2d array    | int myArray[][2] = {{1, 2}, {3, 4}};                  |
| int myArray[][][2] | 3d array    | int myArray[][][2] = {{{1,1},{1,1}}, {{1,1}, {1,1}}}; |

### pointer

- The memory address of a variable
- Passing by reference
- The function pointer can be passed as a parameter
- & : (Reference Operator) is used to return the memory location.
- %x : a memory location is inhexadecimal
- %p : a pointer
- \* : to create a pointer variable
- printf("The address is: %p\n", &var);
- function(int value1, int value2, int(\*opp)(int, int))

## Library

| library               | Description                                  |
| --------------------- | -------------------------------------------- |
| \#include <stdio.h>   | Input and output functions, such as printf() |
| \#include <stdbool.h> | To use boolean variable, such as bool        |
