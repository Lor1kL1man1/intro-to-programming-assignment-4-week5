// Exercise 3 – Task 1: The Broken Swap
//
// TODO: Run this program. Does the swap work?
// ANSWER: ...
//
// TODO: Explain WHY the swap does not affect x and y in main:
// ANSWER: ...

#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("Before: x is %i, y is %i\n", x, y);
    swap(x, y);
    printf("After:  x is %i, y is %i\n", x, y);
}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
