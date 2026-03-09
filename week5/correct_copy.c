// Exercise 2 – Task 2: The Correct Way to Copy a String
// Fill in the TODOs below.

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Get a string
    char *s = get_string("s: ");
    if (s == NULL)
    {
        return 1;
    }

    // TODO: Allocate memory for t (same length as s, plus 1 for '\0')
    char *t = malloc(/* ??? */);

    // TODO: Check if malloc failed (returned NULL)
    if (/* ??? */)
    {
        return 1;
    }

    // TODO: Copy s into t using strcpy
    /* ??? */

    // TODO: Capitalize the first letter of t (check length first!)
    if (strlen(t) > 0)
    {
        t[0] = /* ??? */;
    }

    // Print both strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // TODO: Free the memory you allocated
    /* ??? */

    return 0;
}
