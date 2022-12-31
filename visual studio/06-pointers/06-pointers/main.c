/*
C-Tutorail in visual studio
Pointer

*/

#include <stdio.h>

void function1();
void function2();
void function3();
void function4(int value1, int value2);
void function5(int value1, int value2, int(*opp)(int, int));
int add(int num1, int num2);
int sub(int num1, int num2);

int main()
{
	function1();
	function2();
	function3();

	void(*functionPtr)(int, int);
	functionPtr = &function4;
	(*functionPtr)(100, 200);

	function5(10, 20, &add);
	function5(10, 20, &sub);

	return 0;
}


// function1
// address
void function1()
{ 
	int var; 
	printf("The address is: %p\n", &var); 
}


// function2
// address
void function2()
{
	int var = 10;   //Regular variable
	printf("Var's value is now: %d\n", var);

	int* pointer = NULL;   //Pointer
	pointer = &var;        //Storing of var memory location
	printf("pointer location: %p\n", pointer);


	*pointer = 20;  //Pointer is now effecivly 'var'
	printf("Var's value is now: %d\n", var);
	printf("Var's location is now: %p\n", &pointer);
}


// function3
// Pointer Arithmetic
void function3()
{
	int arrayInt[] = { 10, 20, 30 }; 
	size_t arrayInt_Size = 3;         //Will point to the first array index
	int* ptr = &arrayInt;

	for (int i = 0; i < arrayInt_Size; i++) 
	{
		//Remember, *ptr gets the value in the memory location 
		printf("Value of arrayInt[%d] = %d  location = %p\n" , i, *ptr, &arrayInt[i]);
		ptr++;
	}
}


// function4
// Function pointers
void function4(int value1, int value2)
{
	int result = value1 + value2; 
	printf("Result : %d", result);
}


// function5
// calculator
void function5(int value1, int value2, int(*opp)(int, int))
{
	int result = (*opp)(value1, value2); 
	printf("The result from the operation: %d\n", result); 
}
//Adds two values 
int add(int num1, int num2)
{
	return num1 + num2;
}
//Subtracts two values 
int sub(int num1, int num2)
{
	return num1 - num2;
}