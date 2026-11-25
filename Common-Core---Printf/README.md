*This activity has been created as part of the 42 curriculum by sallawne.*

# ft_printf

## Description
The goal of this project is to recode the `printf()` function .

The prototype of the function is:
int ft_printf(const char *, ...);

The function handles the following conversions:
* `%c`: Prints a single character.
* `%s`: Prints a string (as defined by the common C convention).
* `%p`: The `void *` pointer argument is printed in hexadecimal format.
* `%d`: Prints a decimal (base 10) number.
* `%i`: Prints an integer in base 10.
* `%u`: Prints an unsigned decimal (base 10) number.
* `%x`: Prints a number in hexadecimal (base 16) lowercase format.
* `%X`: Prints a number in hexadecimal (base 16) uppercase format.
* `%%`: Prints a percent sign.

## Instructions
The provided `Makefile` compiles the source files to create a static library named `libftprintf.a`.
It uses `cc` with the required flags: `-Wall -Wextra -Werror`.
The `ar` command is used to create the library .

Available Makefile rules:
* `make` or `make all`: Compiles the source files and creates the library.
* `make clean`: Removes the compiled object (`.o`) files.
* `make fclean`: Removes the object files and the `libftprintf.a` library.
* `make re`: Recompiles everything from scratch.

## Resources
*variadic function ->geeksforgeeks website
*man function -> in termnal

## AI uesge : we ues Ai error detection After write code .

