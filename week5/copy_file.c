// Exercise 4 – Task 2: Copy a File Byte by Byte
// Fill in the TODOs below.
// Usage: ./copy_file source destination

#include <stdio.h>

// A single byte type
typedef unsigned char BYTE;

int main(int argc, char *argv[])
{
    // Check correct usage
    if (argc != 3)
    {
        printf("Usage: ./copy_file source destination\n");
        return 1;
    }

    // TODO: Open source file for reading in binary mode ("rb")
    FILE *src = fopen(/* ??? */, /* ??? */);
    if (src == NULL)
    {
        printf("Could not open source file.\n");
        return 1;
    }

    // TODO: Open destination file for writing in binary mode ("wb")
    FILE *dst = fopen(/* ??? */, /* ??? */);
    if (dst == NULL)
    {
        printf("Could not open destination file.\n");
        fclose(src);
        return 1;
    }

    BYTE b;

    // TODO: Loop: read one BYTE from src into b, then write it to dst
    // Hint: fread returns the number of bytes read; stop when it returns 0
    while (fread(/* ??? */, sizeof(b), 1, src) != 0)
    {
        fwrite(/* ??? */, sizeof(b), 1, dst);
    }

    // TODO: Close both files
    /* ??? */
    /* ??? */

    return 0;
}
