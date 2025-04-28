#include <stdio.h>

void increment_pointer(int *p);

int main(void)
{
    int i = 10;  // i's type is "int"
    int *p; // p's type is "pointer to an int", or "int-pointer"
    // Types need to be the same

    p = &i;  // p is assigned the address of i--p now "points to" i

    i = 10;  // i is now 10
    *p = 20; // the thing p points to (namely i!) is now 20!!

    increment_pointer(p);
    increment_pointer(&i);

    printf("The value of i is %d\n", i);
    printf("i is %d\n", *p);  // "20"! dereference-p is the same as i!
    printf("And its address is %p\n", (void *)&i);
    // Casts i into a void pointer to allow us to see the address

    // Prints size of an 'int'
    printf("%zu\n", sizeof(int));

    // p is type 'int *', so prints size of 'int*'
    printf("%zu\n", sizeof p);

    // *p is type 'int', so prints size of 'int'
    printf("%zu\n", sizeof *p);

    return 0;
}

void increment_pointer(int *p) // creates a copy of the pointer
{
    *p += 1; // Dereference to modify the variable value
}