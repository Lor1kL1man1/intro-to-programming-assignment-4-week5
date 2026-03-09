// Exercise 4 – Task 1: Phonebook to CSV
// Fill in the TODOs below.

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // TODO: Open "phonebook.csv" in append mode ("a")
    FILE *file = fopen(/* ??? */, /* ??? */);

    // TODO: Check if fopen returned NULL and exit if so
    if (/* ??? */)
    {
        return 1;
    }

    // Get name and number from user
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    // TODO: Write name and number to the file as "name,number\n"
    fprintf(file, /* ??? */, name, number);

    // TODO: Close the file
    /* ??? */

    return 0;
}
