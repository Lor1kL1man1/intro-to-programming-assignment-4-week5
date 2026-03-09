// Homework – Memory Logger
// Your name: _______________
// Date: _______________
//
// Fill in ALL the TODOs below.
// Read the README.md in this folder for the full instructions and hints!

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_WORDS 5

int main(void)
{
    // TODO: Declare an array of NUM_WORDS char* pointers to store the words
    // Hint: char *words[NUM_WORDS];
    /* ??? */

    // ---------------------------------------------------------
    // STEP 1: Read words from the user and store copies in memory
    // ---------------------------------------------------------
    for (int i = 0; i < NUM_WORDS; i++)
    {
        // Ask the user for a word
        char *input = get_string("Enter word %i: ", i + 1);

        // TODO: Allocate memory for a copy of this word (don't forget +1 for '\0')
        words[i] = malloc(/* ??? */);

        // TODO: Check if malloc returned NULL; if so, print an error and return 1
        if (/* ??? */)
        {
            printf("Memory error!\n");
            return 1;
        }

        // TODO: Copy the input string into words[i] using strcpy
        /* ??? */

        // TODO: Capitalize the first letter of words[i] using toupper
        // Hint: check strlen(words[i]) > 0 first!
        if (/* strlen check */ )
        {
            words[i][0] = /* ??? */;
        }
    }

    // ---------------------------------------------------------
    // STEP 2: Save all words to a file called "log.txt"
    // ---------------------------------------------------------

    // TODO: Open "log.txt" in write mode "w"
    FILE *file = fopen(/* ??? */, /* ??? */);

    // TODO: Check if fopen returned NULL; if so, return 1
    if (/* ??? */)
    {
        printf("Could not open file!\n");
        return 1;
    }

    // TODO: Loop through words and write each one to the file followed by "\n"
    for (int i = 0; i < NUM_WORDS; i++)
    {
        fprintf(file, /* ??? */, words[i]);
    }

    // TODO: Close the file
    /* ??? */

    printf("\nWords saved to log.txt!\n");

    // ---------------------------------------------------------
    // STEP 3: Free all allocated memory
    // ---------------------------------------------------------

    // TODO: Loop through words and free each one
    for (int i = 0; i < NUM_WORDS; i++)
    {
        /* ??? */
    }

    return 0;
}
