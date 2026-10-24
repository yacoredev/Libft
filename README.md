*This project has been created as part of the 42 curriculum by yabaadi.*

# Libft

## Description

Libft is a C library developed as part of the 42 curriculum. The goal is to reimplement a set of standard C library functions and create additional utility functions to use in future C projects.

The project focuses on understanding memory management, pointers, strings, linked lists, and the behavior of low-level C functions.

The library is compiled into a static archive named `libft.a`.

## Functions

The library includes the following categories:

- **Character checks and conversions:**

  *Functions for checking character types and converting letter cases.*

  ```c
  ft_isalpha()  ft_isdigit()  ft_isalnum()  ft_isascii()  ft_isprint()  ft_toupper()  ft_tolower()
  ```
- **String functions:**

  *Functions for measuring, searching, comparing, copying, and manipulating strings.*
  
  ```c
  ft_strlen()  ft_strlcpy()  ft_strlcat()  ft_strchr()  ft_strrchr()  ft_strncmp()  ft_strnstr()
  ft_strdup()  ft_substr()  ft_strjoin()  ft_strtrim ft_split()  ft_strmapi  ft_striteri()
  ```
- **Memory functions:**

  *Functions for manipulating, copying, comparing, and allocating memory blocks.*
  
  ```c
  ft_memset()  ft_bzero()  ft_memcpy()  ft_memmove()  ft_memchr()  ft_memcmp()  ft_calloc()
  ```
- **Conversion:**

  *Functions for converting between strings and integer values.*
  
  ```c
  ft_atoi()  ft_itoa()
  ```
- **File descriptor output:**

  *Functions for writing characters, strings, and integers to a specified file descriptor.*
  
  ```c
  ft_putchar_fd()  ft_putstr_fd()  ft_putendl_fd()  ft_putnbr_fd()
  ```
- **Linked lists:**

  *Functions for creating, managing, traversing, and deleting singly linked lists.*
  
  ```c
  ft_lstnew()  ft_lstadd_front()  ft_lstsize()  ft_lstlast()  ft_lstadd_back()  ft_lstdelone()
  ft_lstclear()  ft_lstiter()  ft_lstmap()
  ```
## Instructions

### Compilation

Run the following command at the root of the repository:

```bash
make
```

This compiles the source files and creates `libft.a`.

Available Makefile rules:

- `make` / `make all`: Compile the library.
- `make clean`: Remove object files.
- `make fclean`: Remove object files and `libft.a`.
- `make re`: Rebuild the library.

### Usage

Include `libft.h` in your C source file and link the library during compilation:

```c
#include "libft.h"
```

Example compilation:

```bash
cc main.c -L. -lft -o program
./program
```

The `main.c` file is an example program that uses the library

## Resources

- **42 Libft subject:** Project requirements and function specifications.
- **C reference:** https://en.cppreference.com/w/c/header.html
- **Linux man-pages:** https://man7.org/linux/man-pages/
- **GNU Make manual:** https://www.gnu.org/software/make/manual/
- **Mohamed Yousef:  Data Structure in C** https://www.youtube.com/playlist?list=PLfgCIULRQavxpi-GYpkLt8_sFb2VlT6Zo

### AI Usage

AI was used to clarify C concepts, understand function specifications, and identify potential edge cases during development. The implementation, debugging, and testing were performed by the student.

## Author

**yabaadi** — 42 student
