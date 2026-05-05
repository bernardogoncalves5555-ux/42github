*This project has been created as part of the 42 curriculum by beduarte.*

## Description

libft is a custom C library built from scratch as part of the 42 curriculum. The goal is to deepen understanding of how standard C library functions work by reimplementing them manually, without using the originals. The result is a personal library that can be reused across future 42 projects.

The library is organised into three parts:

- **Part 1 — Libc functions:** Reimplementations of standard functions from `<string.h>`, `<ctype.h>`, and `<stdlib.h>`, such as `ft_strlen`, `ft_memcpy`, `ft_atoi`, and `ft_strdup`.
- **Part 2 — Additional functions:** Utility functions not found in the standard library but useful in practice, such as `ft_substr`, `ft_strjoin`, `ft_itoa`, `ft_putstr_fd`, and `ft_split`.
- **Part 3 — Linked list functions:** A set of functions to create and manipulate singly linked lists using the `t_list` struct, including `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, and `ft_lstmap`.

## Instructions

### Compilation

Clone the repository and run:

```bash
make
```

This will compile all source files and produce `libft.a`, the static library archive.

To remove object files:

```bash
make clean
```

To remove object files and the library:

```bash
make fclean
```

To recompile from scratch:

```bash
make re
```

### Usage

To use the library in your own project, include the header and link against the archive at compile time:

```bash
#include "libft.h"
```

```bash
gcc main.c -L. -lft -o my_program
```

## Library Overview

### Part 1 — Libc functions

| Function | Description |
|---|---|
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character is in the ASCII table |
| `ft_isprint` | Checks if a character is printable |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Sets memory to zero |
| `ft_memcpy` | Copies memory area |
| `ft_memmove` | Copies memory area, handles overlapping regions |
| `ft_strlcpy` | Copies a string into a sized buffer |
| `ft_strlcat` | Appends a string to a sized buffer |
| `ft_toupper` | Converts a character to uppercase |
| `ft_tolower` | Converts a character to lowercase |
| `ft_strchr` | Locates the first occurrence of a character in a string |
| `ft_strrchr` | Locates the last occurrence of a character in a string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_memchr` | Searches memory for a byte |
| `ft_memcmp` | Compares two memory areas |
| `ft_strnstr` | Locates a substring in a string, up to n characters |
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates zeroed memory |
| `ft_strdup` | Duplicates a string using malloc |

### Part 2 — Additional functions

| Function | Description |
|---|---|
| `ft_substr` | Returns a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims characters from the start and end of a string |
| `ft_split` | Splits a string by a delimiter into an array |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character, returning a new string |
| `ft_striteri` | Applies a function to each character of a string in place |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |

### Part 3 — Linked list functions

The linked list functions use the following struct:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node with the given content |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstsize` | Returns the number of nodes in the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstdelone` | Frees a single node using a provided delete function |
| `ft_lstclear` | Frees all nodes of the list and sets the pointer to NULL |
| `ft_lstiter` | Applies a function to the content of each node |
| `ft_lstmap` | Creates a new list by applying a function to each node's content |

## Resources

- [C documentation — cppreference.com](https://en.cppreference.com/w/c)
- [Manual pages — man7.org](https://man7.org/linux/man-pages/)
- [Understanding pointers in C — tutorials point](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
- [Linked lists explained — geeksforgeeks.org](https://www.geeksforgeeks.org/linked-list-data-structure/)

### AI usage

Claude (claude.ai) was used throughout this project to understand the purpose and behaviour of functions before implementing them, and to clarify concepts such as pointer arithmetic, memory management, linked list traversal, and function pointers. All code was written independently.
