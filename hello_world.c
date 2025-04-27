/* Hello world program */

#include <stdio.h>
#include <stdbool.h>  // not needed in C23
#include <stdlib.h>  // For rand

int main(void)
{
    int i;    // Holds signed integers, e.g. -3, -2, 0, 1, 10
    float f;  // Holds signed floating point numbers, e.g. -3.1416
    char *s = "Hello, World";
    bool x = true;
    int r;

    f = 3.14;
    i = 2;

    if (x)
    {
       printf("x is true\n"); 
    }
    
    printf("\n"); // format string, variables

    printf("%s i = %d and f = %f\n", s, i, f);
    printf("Hello, World!\n");  // Actually do the work here

    // Do the statements first, then check the expression
    do {
        r = rand() % 100; // Get a random number between 0 and 99
        printf("%d\n", r);
    } while (r != 37);    // Repeat until 37 comes up
}