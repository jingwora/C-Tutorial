/*
C Tutorail in visual studio
Variable argument lists
va_list, va_start, va_end, va_arg
*/

#include <stdio.h>
#include <stdarg.h>

void function1(char *format, ...);
int function2(int n, ...);

int main()
{
    // function1("dfs", 10, 3.14, "Hello");

    printf("Max: %d\n", function2(6, -2, 3, 4, 5, 66, 10));

    return 0;
}

// function1
// va_list
void function1(char *format, ...)
{
    va_list args;
    va_start(args, format);

    // Print each argument in the list
    while (*format != '\0')
    {
        if (*format == 'd')
        {
            int i = va_arg(args, int);
            printf("%d ", i);
        }
        else if (*format == 'f')
        {
            double f = va_arg(args, double);
            printf("%f ", f);
        }
        else if (*format == 's')
        {
            char *s = va_arg(args, char *);
            printf("%s ", s);
        }
        ++format;
    }

    va_end(args);
    printf("\n");
}

// function2
// va_list max
int function2(int n, ...)
{
    int largest = 0;
    va_list valist;
    va_start(valist, n);

    for (int i = 0; i < n; i++)
    {
        // Grabs the next arg
        int nextVar = va_arg(valist, int);

        if (nextVar > largest || i == 0)
        {
            largest = nextVar;
        }
    }
    va_end(valist);

    return largest;
}
