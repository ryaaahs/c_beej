#include <stdio.h>

int plus_one(int n) 
{
    return n + 1;
}

int main(void) 
{
    int i = 10;
    int j = 0;

    j = plus_one(i);

    printf("i + 1 is %d\n", j);

    return 0;
}