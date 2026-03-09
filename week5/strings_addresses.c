// Exercise 1 – Task 2: String Addresses & Pointer Arithmetic
// Fill in the TODOs below.

#include <stdio.h>

int main(void)
{
    // TODO: Declare a string "HELLO!"
    char *s = /* ??? */;

    // TODO: Print the address of the whole string using %p
    printf("Address of string: %p\n", /* ??? */);

    // TODO: Print the address of each character using &s[i]
    // Hint: "HELLO!" has 6 characters + 1 null terminator
    for (int i = 0; i <= 6; i++)
    {
        printf("Address of s[%i]: %p\n", i, /* ??? */);
    }

    // TODO: Print each character using pointer arithmetic *(s + i)
    printf("\nCharacters via pointer arithmetic:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%c\n", /* *(s + ???) */);
    }

    return 0;
}
