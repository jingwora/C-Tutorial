/*
C Tutorail in visual studio
Header files
header.h, #define, #ifdef, #ifndef, #if, #elif, #else
*/

#include <stdio.h>
#include "header.h"
#define LOOP_NUMBER 2 // global values - constant
#define DEBUG 1		  // define debug mode
#pragma message "Compiling " __FILE__ "..."

int main()
{

	printf("%d \n", function1());

	printf("%d \n", add(10, 10));

	for (int i = 0; i < LOOP_NUMBER; i++)
	{
		printf("%d \n", i);
	}

#ifdef DEBUG // check if in debug mode
	puts("DEBUG!");
#endif

#ifndef DEBUG // check if not in debug mode
	puts("NOT IN DEBUG!");
#endif

#if DEBUG
	printf("Debug mode is on\n");
#endif

#if !DEBUG
	printf("Debug mode is off\n");
#endif

#if DEBUG > 0
	printf("Debug level is high\n");

#elif DEBUG == 0
	printf("Debug level is low\n");

#else
	printf("Debug level is unknown\n");
#endif

	return 0;
}