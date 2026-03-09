# 🧠 Memory in C – Lab Exercises

Welcome to the **Memory Lab**! In this lab you will practice working with pointers, memory addresses, string copying, swapping values, and file I/O in C.

---

## 📁 Repository Structure

```
memory-lab/
├── exercises/
│   ├── 01-pointers/        ← addresses0.c → addresses3.c
│   ├── 02-string-copy/     ← copy0.c, copy2.c, copy5.c
│   ├── 03-swap/            ← swap0.c, swap1.c
│   └── 04-file-io/         ← phonebook1.c, cp.c
└── homework/               ← memory_logger.c (due next class)
```

---

## 🛠️ How to Compile & Run

```bash
gcc -o output_name filename.c        # plain C
gcc -o output_name filename.c -lcs50 # if using cs50 library
./output_name
```

---

## ✅ Exercises Overview

| # | Topic | Files | Key idea |
|---|-------|-------|----------|
| 1 | Pointers & Addresses | `addresses0–3.c` | `&` gives address, `*` dereferences |
| 2 | String Copying | `copy0, 2, 5.c` | `=` copies the pointer, not the string |
| 3 | Swap Functions | `swap0, 1.c` | Pass-by-value vs pass-by-pointer |
| 4 | File I/O | `phonebook1.c`, `cp.c` | `fopen`, `fprintf`, `fread`, `fwrite` |

Work through each folder in order and read the `README.md` inside before starting.

---

## 📝 Homework

See the [`homework/`](./homework/) folder.
**Due at the start of next class.**

Good luck! 🚀
