# printf

This project implements a custom `printf` function in C, named `_printf`. The function produces output according to a format and handles various conversion specifiers.

## Supported Conversion Specifiers

- `%c`: Character
- `%s`: String
- `%%`: Percent sign
- `%d` and `%i`: Integer

## Usage

Include the header file `main.h` in your code and call `_printf` with the desired format string and arguments.

## Compilation

To compile the code, use:
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

