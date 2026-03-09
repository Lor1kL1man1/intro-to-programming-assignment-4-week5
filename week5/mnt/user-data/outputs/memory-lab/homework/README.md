# 📝 Homework – Memory Logger

## Overview

In this homework you will build a small **Memory Logger** program in C.

The program will:
1. Ask the user for up to **5 words**.
2. Store them by **allocating memory** with `malloc`.
3. **Capitalize** the first letter of each word.
4. **Save all words to a file** called `log.txt`.
5. **Free** all allocated memory before exiting.

This assignment combines everything from today's lab: pointers, memory allocation, string manipulation, and file I/O.

---

## Your Task

Open `memory_logger.c` and complete all the `TODO` sections.

### Step-by-step guide

| Step | What to do | Hint |
|------|-----------|------|
| 1 | Declare an array of `char *` pointers to hold 5 words | `char *words[5];` |
| 2 | In a loop, read each word with `get_string` | Works like before |
| 3 | Allocate memory for a copy of each word | `malloc(strlen(word) + 1)` |
| 4 | Check `malloc` didn't return `NULL` | Exit with `return 1` if so |
| 5 | Copy the word using `strcpy` | `strcpy(dest, src)` |
| 6 | Capitalize the first letter | `toupper(words[i][0])` |
| 7 | Open `log.txt` in write mode `"w"` | `fopen("log.txt", "w")` |
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

**Contents of `log.txt` after running:**
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

## Submission

Push your completed `memory_logger.c` to this repository before the next class.

Make sure your code:
- [ ] Compiles without warnings
- [ ] Handles `NULL` from `malloc` and `fopen`
- [ ] Capitalizes the first letter of each word correctly
- [ ] Saves all 5 words to `log.txt`
- [ ] Frees all allocated memory

Good luck! 💪
