*This activity has been created as part of the 42 curriculum by sallawne.*

## Description
`libft` is the first project in the 42 school curriculum.
---
Repository Files & Function Index
Project Files
 Makefile: Build script containing rules $(NAME), all, clean, fclean, and re.
libft.h: Primary header file containing macro definitions, function prototypes, and the t_list structure.
Part 1: Libc Functions
 ft_isalpha.c: Checks for an alphabetic character.
 ft_isdigit.c: Checks for a digit (0 through 9).
 ft_isalnum.c: Checks for an alphanumeric character.
 ft_isascii.c: Checks whether a character fits into the ASCII character set.
 ft_isprint.c: Checks for any printable character.
 ft_strlen.c: Calculates the length of a string.
 ft_memset.: Fills memory with a constant byte.
 ft_bzero.c: Writes zeroes to a byte string.
 ft_memcpy.c: Copies memory area.
 ft_memmove.c: Copies memory area with overlap protection.
 ft_strlcpy.c: Copies a string with size restriction.
 ft_strlcat.c: Concatenates strings with size restriction.
 ft_toupper.c: Converts a character to uppercase.
 ft_tolower.c: Converts a character to lowercase.
 ft_strchr.c: Locates the first occurrence of a character in a string.
 ft_strrchr.c: Locates the last occurrence of a character in a string.
 ft_strncmp.c: Compares two strings up to n bytes.
 ft_memchr.c: Scans memory for a character.
 ft_memcmp.c: Compares memory areas.
 ft_strnstr.c: Locates a substring in a string with length limitation.
 ft_atoi.c: Converts a string to an integer.
 ft_calloc.c: Allocates memory and sets it to zero.
 ft_strdup.c: Duplicates a string using dynamic allocation.
Part 2: Additional Functions
 ft_substr.c: Allocates and returns a substring from a string.
 ft_strjoin.c: Allocates and returns a new string from the concatenation of two strings.
 ft_strtrim.c: Trims specified set of characters from the beginning and end of a string.
 ft_split.c: Splits a string into an array of strings using a delimiter character.
 ft_itoa.c: Converts an integer into a string representation.
 ft_strmapi.c: Applies a function to each character of a string to create a new string.
 ft_striteri.c: Applies a function to each character of a string in-place.
 ft_putchar_fd.c: Outputs a character to a given file descriptor.
 ft_putstr_fd.c: Outputs a string to a given file descriptor.
 ft_putendl_fd.c: Outputs a string followed by a newline to a file descriptor.
 ft_putnbr_fd.c: Outputs an integer to a given file descriptor.
Part 3: Linked List Functions
 ft_lstnew.c: Creates a new node element.
 ft_lstadd_front.c: Adds an element at the beginning of the list.
 ft_lstsize.c: Counts the number of elements in the list.
 ft_lstlast.c: Returns the last element of the list.
 ft_lstadd_back.c: Adds an element at the end of the list.
 ft_lstdelone.c: Frees a single list element's content using a deletion function.
 ft_lstclear.c: Deletes and frees an entire list.
 ft_lstiter.c: Iterates through the list and applies a function to each element.
 ft_lstmap.c: Creates a new list by applying a function to each element of an existing list.

### Instructions(Compilation and Build Rules)
The project includes a `Makefile` that compiles all source files with the flags `-Wall -Wextra -Werror` using `cc`.

- `make` / `make all`: Compiles the source files and creates the static library `libft.a` at the root of the repository.
- `make clean`: Deletes all object files (`.o`).
- `make fclean`: Deletes all object files and `libft.a`.
- `make re`: Executes `fclean` and `all` to rebuild the library from scratch.

### Resources
- Unix Manual Pages: Standard system documentation accessed via man 3 strlen, man 3 malloc, man 3 memset, and man 2 write.  
- GNU C Library (glibc) vs. BSD Libc: Official documentation explaining the differences between glibc and BSD functions (strlcpy,strlcat,bzero), 
  including instructions on testing them on Linux using string.h  -   with   the -lbsdflag.  
 - C Memory Management & Safety: Guides covering dynamic memory allocation (malloc, free), integer overflow protection (size_t boundary checks), and avoiding memory leaks/segmentation faults.  
 Linked List Data Structures: Tutorials and references on singly linked lists (t_list), pointer manipulation, and dynamic node allocation.
