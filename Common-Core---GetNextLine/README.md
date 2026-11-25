*This activity has been created as part of the 42 curriculum by sallawne.*

# Get Next Line

## Description

Get Next Line is a C project that implements `get_next_line(int fd)`, a function that reads from a file descriptor and returns one line per call. The returned line includes the terminating newline character (`\n`) when one is present. If the end of the file is reached and the last line does not end with `\n`, the function returns the remaining characters. It returns `NULL` when there is no more content to return or when an error occurs.

The project focuses on file descriptors, dynamic memory allocation, reading in fixed-size chunks, and the use of a `static` variable to preserve data between calls.

## Instructions

### Files

The mandatory part consists of these files, placed at the root of the repository:

- `get_next_line.c`
- `get_next_line_utils.c`
- `get_next_line.h`

### Compilation

Compile the source files with the required compiler flags. For example, with a buffer size of 42 and your own test file containing `main()`:

```sh
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c -o gnl
```

Run the program with:

```sh
./gnl
```

You can change `BUFFER_SIZE` to test different read sizes, for example `1`, `42`, or `1000`. You can also compile without defining `BUFFER_SIZE`; the header supplies the default value.

### Usage

Include `get_next_line.h` in the source file that calls the function, then call `get_next_line(fd)` repeatedly until it returns `NULL`:

```c
char *line;

line = get_next_line(fd);
while (line != NULL)
{
    /* Process or display the line. */
    free(line);
    line = get_next_line(fd);
}
```

The caller is responsible for freeing each returned line. Make sure `fd` is a valid file descriptor and that the required headers are included in your test program.

## Resources

- The official 42 Get Next Line subject provided for this project.
- `man 2 read` — documentation for reading from a file descriptor.
- `man 3 malloc` — documentation for dynamic memory allocation.
- `man 3 free` — documentation for releasing allocated memory.
- `man 3 strlen` and `man 3 strchr` — references for string-length and character-search behavior.

### Use of AI

AI assistance was used during debugging to discuss the causes of segmentation faults, reason about newline and end-of-file edge cases, and review possible fixes. The implementation was then tested with a GNL tester using multiple `BUFFER_SIZE` values. I am responsible for understanding the algorithm, checking the final code, and ensuring that it follows the project requirements.
