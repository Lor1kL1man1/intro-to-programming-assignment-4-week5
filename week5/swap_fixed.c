// Exercise 3 – Task 2: The Fixed Swap Using Pointers
// Fill in the TODOs below.

#include <stdio.h>

// TODO: Change the parameter types to pointers (int *a, int *b)
void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("Before: x is %i, y is %i\n", x, y);

    // TODO: Pass the addresses of x and y instead of their values
    swap(/* ??? */, /* ??? */);

    printf("After:  x is %i, y is %i\n", x, y);
}

// TODO: Update the function signature and body to use pointers
void swap(int a, int b)
{
    // TODO: Use a tmp variable and dereference * to swap the actual values
    int tmp = /* ??? */;
    /* ??? */ = /* ??? */;
    /* ??? */ = tmp;
}
