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

- // oneline comment
- /\* \*/ multiline comment
- ; semi colon is used to signify the end of a line.

## Variables and Types

- Each variable must have a defined type
- It’s good practise to make meaningful name
- Cannot be a single digit
- Cannot contain special characters (!”£$%^&\*) etc.
- Global variable: variable definition outside the main function (can be accessed anywhere)

### Integer

- Integer: real numbers

### String

- String: a array of characters
- "\n" is a special character that stands for a newline.

### Booleans

- Booleans: true (1) or false (0)

### Float/Double

- Float/Double: decimal values
- Floating point precision: Floats allows for a higher level of accuracy of a value

### Void

- Void: no value / not type

### Functions

| Functions | Description        | Example                                      |
| --------- | ------------------ | -------------------------------------------- |
| int       | main               | int main(void){return 0;}                    |
| int       | integer variable   | int integerValue = 3;                        |
| float     | decimal variable   | float decimalValue = 3.0f;                   |
| double    | decimal readonly   | double decimalValue = 3.0f;                  |
| char      | string variable    | char word[] = "string";                      |
| \_Bool    | variable readonly  | \_Bool falseIsDetected = 0;                  |
| const     | readonly variable  | const float pi = 3.14f;                      |
| printf()  | print value        | printf("Hello, world!");                     |
| printf()  | print integer      | printf("Integer: %d\n", integer);            |
| printf()  | print float value  | printf("Float value: %f\n", float_value);    |
| printf()  | print double value | printf("Double value: %lf\n", double_value); |
| printf()  | print character    | printf("Character: %c\n", character);        |
| printf()  | print string       | printf("String: %s\n", string);              |
| scanf_s() | input              | int num; scanf_s(" %d", &num);               |

### Arithmetic operations

| Symbol | Description | Example               |
| ------ | ----------- | --------------------- |
| +      | plus        | int result = 1 + 2;   |
| -      | minus       | int result = 1 - 2;   |
| /      | devide      | float result = 1 / 2; |
| \*     | multiply    | int result = 1 \* 2;  |
| %      | modulus     | float result = 1 % 2; |

### Conditionals

| Functions          | Description              | Example                                                      |
| ------------------ | ------------------------ | ------------------------------------------------------------ |
| >                  | greater than             | if (value > 5)                                               |
| >=                 | greater than or equal to | if (value >= 5)                                              |
| <                  | less than                | if (value < 5)                                               |
| <=                 | less than or equal to    | if (value <= 5)                                              |
| ==                 | equal                    | if (value == 5)                                              |
| !=                 | not equal                | if (value != 5)                                              |
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

| Functions | Description             | Example                                  |
| --------- | ----------------------- | ---------------------------------------- |
| void() {} | function without return | void function() {printf("F"); }          |
| int() {}  | function with return    | int function() {printf("F"); return 0; } |
