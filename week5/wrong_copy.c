// Exercise 2 – Task 1: The Wrong Way to Copy a String
//
// TODO: After running this program, explain here why s also changes:
// ANSWER: ...
//

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string from the user
    string s = get_string("s: ");

    // This does NOT copy the string – it only copies the address!
    string t = s;

    // Capitalize the first letter of t
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print both – notice anything surprising?
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
