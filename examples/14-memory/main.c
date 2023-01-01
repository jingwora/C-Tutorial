/*
C-Tutorail in visual studio
Memory Management
malloc, calloc, free
*/

#define _CRT_SECURE_NO_DEPRECATE // to use deprecated functions

#include <stdio.h> 
#include <stdlib.h>
#include <errno.h>

#define WORD_SIZE 20

int function1();
char* function2();
int function3();

int main()
{
	function1();

	//Gets returned variables 
	char* word = function2();

	//Prints 
	printf("2: The word is: %s\n", word);

	//Delets memory 
	free(word);

	function3();

	return 0;
}

int function1()
{
	char* word; //Allocates memory 
	word = malloc(WORD_SIZE * sizeof(char));
	//or 
	word = calloc(WORD_SIZE, sizeof(char));

	//Copies values over
	strcpy(word, "Hello nice to meet you!");

	//Printing 
	printf("1: The string is: \"%s\" \n", word); //Deletes memory free(word); }
}

char* function2()
{
	//Will be deleted 
	char temp[50];

	//User input 
	printf("2: Please enter your firstname: ");
	scanf(" % s", temp);
	puts(""); //strlen() finds lenght of a string 
	int len = strlen(temp);

	//Dynamic allocation of memory 
	char* perfectSizeWord;

	//Allocates memory!
	perfectSizeWord = calloc(len, sizeof(char));

	for (int i = 0; i < len; i++) {
		perfectSizeWord[i] = temp[i];
	}

	//Size comparason 
	printf("2: Size of temp var: %d\n", sizeof(temp));
	printf("2: Size of new perfect var : % d\n", sizeof(perfectSizeWord));

	return perfectSizeWord;
}


// function3
// to handle the error for allocating memory with malloc or calloc.
int function3()
{
	char* word;

	//Allocates memory
	word = malloc(20 * sizeof(char));

	//ERROR SIMULATE
	word = NULL;
	if (word == NULL)
	{
		fprintf(stderr, "3: Error: Unable to allocate the memory!");
	}

	//Deletes memory
	free(word);

	return 0;
}
