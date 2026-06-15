*This project has been created as part of the 42 curriculum by \<dsoto-ga\>.*

# Libft

## Description

Libft is the first project in the 42 curriculum. The goal is to re-implement a selection of standard C library functions from scratch, as well as additional utility functions that will serve as a personal library for future 42 projects.

The library is organized into three parts:

- **Part 1 – Libc functions:** Re-implementations of standard functions from `<string.h>`, `<ctype.h>`, `<stdlib.h>`, and `<strings.h>` (e.g. `ft_strlen`, `ft_memcpy`, `ft_atoi`, `ft_isalpha`...).
- **Part 2 – Additional functions:** Extra string and I/O utility functions not found in the standard library or that extend its behavior (e.g. `ft_substr`, `ft_split`, `ft_itoa`, `ft_putstr_fd`...).
- **Part 3 – Linked lists:** A set of functions to create and manipulate singly linked lists using the `t_list` struct (e.g. `ft_lstnew`, `ft_lstadd_back`, `ft_lstmap`...).

### Library overview

#### Part 1 – Libc re-implementations

| Function | Description |
|---|---|
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character belongs to the ASCII table |
| `ft_isprint` | Checks if a character is printable |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills a block of memory with a given byte |
| `ft_bzero` | Sets a block of memory to zero |
| `ft_memcpy` | Copies memory from one area to another |
| `ft_memmove` | Copies memory safely even if areas overlap |
| `ft_strlcpy` | Copies a string with size limit |
| `ft_strlcat` | Appends a string with size limit |
| `ft_toupper` | Converts a character to uppercase |
| `ft_tolower` | Converts a character to lowercase |
| `ft_strchr` | Finds the first occurrence of a character in a string |
| `ft_strrchr` | Finds the last occurrence of a character in a string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_memchr` | Searches a block of memory for a character |
| `ft_memcmp` | Compares two blocks of memory |
| `ft_strnstr` | Finds a substring within a string (up to n characters) |
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates zero-initialized memory |
| `ft_strdup` | Duplicates a string using `malloc` |

#### Part 2 – Additional functions

| Function | Description |
|---|---|
| `ft_substr` | Returns a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims characters from both ends of a string |
| `ft_split` | Splits a string by a delimiter character into an array |
| `ft_itoa` | Converts an integer to its string representation |
| `ft_strmapi` | Applies a function to each character and returns a new string |
| `ft_striteri` | Applies a function to each character of a string in place |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |

#### Part 3 – Linked list functions

The linked list functions use the following structure, defined in `libft.h`:

```c
typedef struct s_list
{
    void         *content;
    struct s_list *next;
} t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the front of the list |
| `ft_lstsize` | Returns the number of nodes in the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstadd_back` | Adds a node at the back of the list |
| `ft_lstdelone` | Frees a single node using a given delete function |
| `ft_lstclear` | Frees all nodes of the list |
| `ft_lstiter` | Applies a function to the content of each node |
| `ft_lstmap` | Applies a function to each node and builds a new list |

---

## Instructions

### Requirements

- A C compiler (`cc`) with flags `-Wall -Wextra -Werror`
- `make`

### Compilation

Clone the repository and run `make` at the root:

```bash
git clone https://github.com/dsotogc/42_libft
cd libft
make
```

This produces `libft.a`, a static library archive.

### Available Makefile rules

| Rule | Description |
|---|---|
| `make` / `make all` | Compiles the library (`libft.a`) |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and `libft.a` |
| `make re` | Runs `fclean` then `all` |

### Using the library in a project

Compile your project linking against the library:

```bash
cc main.c -L. -lft -I. -o my_program
```

Include the header in your source files:

```c
#include "libft.h"
```

---

## Resources

- [42 Norm](https://github.com/42School/norminette) – the coding standard enforced at 42
- [C manual pages](https://www.man7.org/linux/man-pages/) – official documentation for the standard library functions re-implemented in this project
- [Bro Code Youtube Channel](https://www.youtube.com/@BroCodez) – occasional support

**Peer help:** Thanks to fellow 42 students for questions, reviews, and feedback during development.