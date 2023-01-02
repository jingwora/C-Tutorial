/*
C-Tutorial projects
Project: Unit Converter
Source: https://github.com/achen58/Basic-Unit-Converter
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main() {
    char category;

    int tempChoice;
    int currencyChoice;
    int massChoice;

    int userinputF; // User inputted Fahreinheit;
    int userinputC; // User inputted Celsius;

    int userinputOunce; // User inputted for Ounce;
    int userinputGram; // User inputted for Gram;

    int fahrenheitToCelcius; // variable that stores the converted F->C;
    int celciusToFahrenheit; // variable that stores the converted C->F;

    float ounceToPounds; // stores the converted Ounce->Pounds;
    float gramsToPounds; // stores the vonerted Grams->Pounds;

    printf("\n\n============================================== \n"); 
    printf("Welcome to Unit Converter! \n");
    printf("============================================== \n");
    printf("Here is a list of conversation to choose from: \n");
    printf("Temperature ( T )  | Mass( M ) \n");
    printf("Please enter the letter of converter mode.\n");
    scanf("%c", &category);

    if (category == 'T' || category == 't') {
        printf("\n---------------------------------------------- \n");
        printf("Temperature Converter Mode \n");
        printf("---------------------------------------------- \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter ( 1 ) for Fahrenheit to Celsius. \n");
        printf("Enter ( 2 ) for Celsius to Fahrenheit. \n");
        scanf("%d", &tempChoice);
        if (tempChoice == 1) {
            printf("\nPlease enter the Fahrenheit degree: \n");
            scanf("%d", &userinputF);
            fahrenheitToCelcius = ((userinputF - 32) * (5.0 / 9.0));
            printf("\n%d Fahrenheit is %d Celcius\n", userinputF, fahrenheitToCelcius);
        }
        else if (tempChoice == 2) {
            printf("\nPlease enter the Celcius degree: \n");
            scanf("%d", &userinputC);
            celciusToFahrenheit = ((9.0 / 5.0) * userinputC + 32);
            printf("\n%d Celcius is  %d Fahrenheit\n", userinputC, celciusToFahrenheit);
        }
        else
            printf("\nPlease enter the correct choice. \n");
    }

    else if (category == 'M' || category == 'm') {
        printf("\n---------------------------------------------- \n");
        printf("Mass Converter Mode \n");
        printf("---------------------------------------------- \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter ( 1 ) for ounces to pounds. \n");
        printf("Enter ( 2 ) for gram to pounds. \n");
        scanf("%d", &massChoice);
        if (massChoice == 1) {
            printf("\nPlease enter the ounce amount: \n");
            scanf("%d", &userinputOunce);
            ounceToPounds = userinputOunce * 0.0625;
            printf("\n%.2f Ounce is %.2f Pounds\n", userinputOunce, ounceToPounds);
        }
        else if (massChoice == 2) {
            printf("\nPlease enter the gram amount: \n");
            scanf("%d", &userinputGram);
            gramsToPounds = userinputGram * 0.00220462;
            printf("\n%.2f Grams is %.2f Pounds\n", userinputGram, gramsToPounds);
        }
        else
            printf("\nPlease enter the correct choice. \n");
    }
    return 0;
}
