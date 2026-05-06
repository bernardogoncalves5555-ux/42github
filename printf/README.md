*This project has been created as part of the 42 curriculum by beduarte.*

## Description

ft_printf is a custom reimplementation of the standard printf function in C. The goal of this project is to understand variadic functions, formatted output, and low-level data handling by recreating a subset of printf functionality from scratch.

This implementation supports multiple format specifiers and handles formatted output without relying on the original printf, reinforcing knowledge of parsing, memory management, and type handling in C.

## Instructions

### Compilation

Clone the repository and run:

make

This will compile the project and generate the static library:

libftprintf.a

### Cleaning

Remove object files:

make clean

Remove object files and the library:

make fclean

Recompile everything:

make re

### Usage

Include the header in your project:

#include "ft_printf.h"

Compile with:

gcc main.c -L. -lftprintf -o my_program

Example:

ft_printf("Hello %s, number: %d\n", "world", 42);

## Supported Format Specifiers

%c - Character 
%s - String 
%p - Pointer (hexadecimal) 
%d - Decimal (base 10) 
%i - Integer (base 10) 
%u - Unsigned decimal 
%x - Hexadecimal (lowercase) 
%X - Hexadecimal (uppercase) 
%% - Literal %

## Implementation Details

The function iterates through the format string character by character. When a '%' is found, it parses the next character and calls the appropriate handler function. Each handler extracts the argument using va_arg, converts it, and writes it using write.

The algorithm is linear (O(n)), efficient, and modular, allowing easy extension.

## Resources

- https://en.cppreference.com/w/c
- https://man7.org/linux/man-pages/

### AI Usage

Claude AI was used to understand variadic functions, debug issues, and validate logic. All code was written independently.
