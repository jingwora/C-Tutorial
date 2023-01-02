/*
C-Tutorial projects
Project: Calculator
Source: https://github.com/BradStevenson/Simple-C-Calculator
*/


#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char* argv[])
{
	// create variable
	float valueOne;
	float valueTwo;
	char operator;
	float answer;

	// ask for input
	printf("\n\n=========================\n");
	printf("CALCULATOR\n");
	printf("=========================\n");
	printf("Please enter calculation \n(example: 1+1 enter) \n[operator: + - * / ^] \n:");
	scanf("%f %c %f,", &valueOne, &operator, &valueTwo);

	// caluculation
	switch (operator)
	{
	case '/': answer = valueOne / valueTwo;
		break;
	case '*': answer = valueOne * valueTwo;
		break;
	case '+': answer = valueOne + valueTwo;
		break;
	case '-': answer = valueOne - valueTwo;
		break;
	case '^': answer = pow(valueOne, valueTwo);
		break;
	case ' ': answer = sqrt(valueTwo);
		break;
	default: goto fail;
	}

	// print output
	printf("\n%.9g%c%.9g = %.6g\n\n", valueOne, operator, valueTwo, answer);

	goto exit;

fail:
	printf("Fail.\n");

exit:

	return 0;
}