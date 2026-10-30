*This project has been created as part of the 42 curriculum by Hechahbo.*

# libft

## Description
The **libft** project is the first project of the 42 curriculum. 
The goal is to create a custom, static C library (`libft.a`) by re-implementing standard library functions from `libc`, along with additional string, memory, and dynamic data structure manipulation utilities. 
This project provides a deep understanding of memory allocation, pointer arithmetic, string processing, and data structure engineering in C.

---

## Technical Overview & Library Description
The library includes foundational character checks, memory buffers management, string transformations, file descriptor outputs, and full support for singly linked lists via the `t_list` node architecture.

### The `t_list` Structure
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

### Implemented Functions
The library functions are organized below into logical subheadings covering the entire provided header file:

#### 1. Character Classification & Manipulation (`<ctype.h>` equivalents)
* `ft_isalpha`: Checks for an alphabetic character.
* `ft_isdigit`: Checks for a digit (0 through 9).
* `ft_isalnum`: Checks for an alphanumeric character.
* `ft_isascii`: Checks whether the character fits into the ASCII character set.
* `ft_isprint`: Checks for any printable character including space.
* `ft_toupper`: Converts a lowercase letter to uppercase.
* `ft_tolower`: Converts an uppercase letter to lowercase.

#### 2. Memory Buffer Management (`<string.h>` equivalents)
* `ft_memset`: Fills the first `n` bytes of the memory area pointed to by `str` with the constant byte `c`.
* `ft_bzero`: Erases the data in the `n` bytes of the memory starting at the location pointed to by `s` by writing zeros.
* `ft_memcpy`: Copies `n` bytes from memory area `src` to memory area `dest`. The memory areas must not overlap.
* `ft_memmove`: Copies `n` bytes from memory area `src` to memory area `dest`. The memory areas may overlap safely.
* `ft_memchr`: Scans the initial `n` bytes of the memory area pointed to by `str` for the first instance of `c`.
* `ft_memcmp`: Compares the first `n` bytes of the memory areas `s1` and `s2`.

#### 3. String Manipulation & Search (`<string.h>` & `<stdlib.h>` equivalents)
* `ft_strlen`: Calculates the length of a string, excluding the terminating null byte.
* `ft_strlcpy`: Copies up to `n - 1` characters from the NUL-terminated string `src` to `dst`, NUL-terminating the result.
* `ft_strlcat`: Appends the NUL-terminated string `src` to the end of `dst`. It will append at most `n - strlen(dst) - 1` bytes.
* `ft_strchr`: Returns a pointer to the first occurrence of the character `c` in the string `s`.
* `ft_strrchr`: Returns a pointer to the last occurrence of the character `c` in the string `s`.
* `ft_strncmp`: Lexicographically compares the first `n` bytes of two strings `s1` and `s2`.
* `ft_strnstr`: Locates the first occurrence of the null-terminated string `find` in the string `str`, searching not more than `n` characters.
* `ft_atoi`: Converts the initial portion of the string pointed to by `s` to an `int` representation.
* `ft_calloc`: Allocates memory for an array of `n` elements of `size` bytes each, initializing the memory to zero.
* `ft_strdup`: Returns a pointer to a new string which is a duplicate of the string `s`.

#### 4. Additional Non-Standard Functions
* `ft_substr`: Allocates and returns a substring from the string `s`. The substring begins at index `start` and has a maximum size of `len`.
* `ft_strjoin`: Allocates and returns a new string, which is the result of the concatenation of `s1` and `s2`.
* `ft_strtrim`: Allocates and returns a copy of `s1` with the characters specified in `set` removed from the beginning and the end of the string.
* `ft_split`: Allocates and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter.
* `ft_itoa`: Allocates and returns a string representing the integer `n` received as an argument.
* `ft_strmapi`: Applies the function `f` to each character of the string `s` to create a new string resulting from successive applications of `f`.
* `ft_striteri`: Applies the function `f` to each character of the string `s`, passing its index as the first argument. Each character is passed by address to `f` to be modified if necessary.

#### 5. File Descriptor Output Operations
* `ft_putchar_fd`: Outputs the character `c` to the given file descriptor.
* `ft_putstr_fd`: Outputs the string `s` to the given file descriptor.
* `ft_putendl_fd`: Outputs the string `s` to the given file descriptor followed by a newline.
* `ft_putnbr_fd`: Outputs the integer `n` to the given file descriptor.

#### 6. Singly Linked List Utilities
* `ft_lstnew`: Allocates and returns a new node. The member `content` is initialized with the value of the parameter `content`. The variable `next` is initialized to `NULL`.
* `ft_lstadd_front`: Adds the node `new` at the beginning of the list.
* `ft_lstsize`: Counts the number of nodes in a list.
* `ft_lstlast`: Returns the last node of the list.
* `ft_lstadd_back`: Adds the node `new` at the end of the list.
* `ft_lstdelone`: Takes a node as a parameter and frees the memory of the node's content using the `del` function given as an argument, then frees the node itself.
* `ft_lstclear`: Deletes and frees the given node and every successor of that node, using the function `del` and `free(3)`. Finally, the pointer to the list is set to `NULL`.
* `ft_lstiter`: Iterates the list and applies the function `f` on the content of each node.
* `ft_lstmap`: Iterates the list and applies the function `f` on the content of each node. Creates a new list resulting from the successive applications of the function `f`. A `del` function is used to destroy the content of a node if needed (e.g., if an allocation fails).

---

## Instructions

### Compilation
The project comes with a comprehensive `Makefile` supporting rules to build the standalone library or compile it .

To compile the foundational library functions:
```bash
make
```
To clean intermediate object files or reset the library build state:
```bash
make clean       # Removes object files
make fclean      # Removes object files and libft.a
make re          # Forces a full re-compilation
```

### Installation and Usage
To integrate `libft` into separate systems or subsequent 42 curriculum projectshot:

1. Copy `libft.a` and `libft.h` to your project workspace root directory.
2. Include the header inside your source files:
   ```c
   #include "libft.h"
   ```
3. Compile the `main.c` file with `libft.a`
   ```bash
   cc main.c libft.a
   ```

---

## Resources

### Documentation & References
* [Linked List Data Structure Logic](https://geeksforgeeks.org) - Structural guide framing safe traversal routines and pointer assignment practices.
* [W3Schools C Programming Tutorial](https://www.w3schools.com/c/index.php "w3schools c tutorial") – A beginner-friendly reference layout mapping foundational C logic syntax, pointers, and memory layout.
* [Programiz Learn C Programming](https://www.programiz.com/c-programming "programiz c programming") – A comprehensive tutorial platform providing structured examples and detailed breakdowns of data structures in C.
* [Function Pointers in ISO-C](https://tutorialspoint.com) - Technical tutorials analyzing callback mechanics required for abstraction schemas within functional maps like `ft_strmapi` and `ft_lstmap`.

### AI Usage Statement
Artificial Intelligence was referenced for the following: 
* Researching and understanding new concepts and structures.
* AI assisted in drafting the functional matrix outlines, Markdown hierarchy structures for this `README.md` blueprint.
* *Note: The structural composition, edge-case structural error conditions, buffer boundaries, and pointer assignments were custom-coded, debugged, and run manually by the project author.*

