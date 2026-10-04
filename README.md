*This activity has been created as part of the 42 curriculum by kmaghair*

[![Language](https://img.shields.io/badge/language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Norminette](https://img.shields.io/badge/norminette-passing-success.svg)](https://github.com/42School/norminette)

## Description
`ft_printf` is a custom implementation of the standard C library function `printf`. The primary goal of this activity is to introduce the concept of variadic functions in C using `stdarg.h`, which allows a function to dynamically accept and process an indefinite number of arguments. 

Beyond formatted output, this project provides a comprehensive overview of string parsing, modular code architecture, and precise memory management. It strictly adheres to the formatting and structural rules of the 42 Norminette. The final deliverable is a robust static library (`libftprintf.a`) capable of handling the core conversion specifiers: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`.

## Instructions

### Prerequisites
To compile and use this library, ensure you have the following installed:
*   `cc` or `gcc` compiler
*   `make` utility
*   Standard C libraries (`unistd.h`, `stdlib.h`, `stdarg.h`)

### Compilation and Installation
To compile the project and generate the static library, clone the repository and run the standard `make` command at the root of the repository:
```bash
git clone [https://github.com/](https://github.com/)<your_username>/ft_printf.git
cd ft_printf
make
```
This process will produce the `libftprintf.a` static library file.

### Execution and Usage
To integrate `ft_printf` into your own projects, include the header file in your source code and link the compiled library during your build process.

**1. Include the header:**
```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! The magic number is %d.\n", "World", 42);
    return (0);
}
```

**2. Compile with the library:**
```bash
cc -Wall -Wextra -Werror main.c -L. -lftprintf -o my_program
./my_program
