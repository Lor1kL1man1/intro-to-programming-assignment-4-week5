# 📝 Homework – Memory Logger

## Overview

Build a **Memory Logger** in C that combines everything from today's lab.

The program will:
1. Ask the user for up to **5 words**
2. Allocate memory for each word using `malloc`
3. Capitalize the first letter of each word
4. Save all words to a file called `log.txt`
5. Free all allocated memory before exiting

---

## Step-by-step Guide

Open `memory_logger.c` and complete all the `TODO` sections in order.

| Step | What to do | Hint |
|------|-----------|------|
| 1 | Declare an array of 5 `char *` pointers | `char *words[5];` |
| 2 | In a loop, read each word with `get_string` | Same as always |
| 3 | Allocate memory for a copy of each word | `malloc(strlen(word) + 1)` |
| 4 | Check `malloc` didn't return `NULL` | `return 1` if it did |
| 5 | Copy the word using `strcpy` | `strcpy(dest, src)` |
| 6 | Capitalize the first letter | `toupper(words[i][0])` |
| 7 | Open `log.txt` in write mode | `fopen("log.txt", "w")` |
| 8 | Write each word to the file | `fprintf(file, "%s\n", words[i])` |
| 9 | Close the file | `fclose(file)` |
| 10 | Free each word's memory | `free(words[i])` |

---

## Expected Output

```
Enter word 1: hello
Enter word 2: world
Enter word 3: pointers
Enter word 4: are
Enter word 5: fun

Words saved to log.txt!
```

**Contents of `log.txt`:**
```
Hello
World
Pointers
Are
Fun
```

---

## Compile & Run

```bash
gcc -o memory_logger memory_logger.c -lcs50
./memory_logger
```

---

## Checklist before submitting

- [ ] Compiles without warnings
- [ ] Handles `NULL` from `malloc` and `fopen`
- [ ] Capitalizes the first letter of each word
- [ ] Saves all 5 words to `log.txt`
- [ ] Frees all allocated memory

Good luck! 💪
