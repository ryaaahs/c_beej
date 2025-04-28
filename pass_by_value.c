#include <stdio.h>

void increment(int a) // Anything you pass here is a local copy
{
    a++; // Increments the copied a vairable to 11
} // Once we leave the function, the local variable is disgarded

int main(void)
{
    int i = 10;

    increment(i);

    printf("i == %d\n", i);  // What does this print?
    // Prints out the value 10
}