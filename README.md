# ft_printf

> A custom implementation of the standard C library function `printf`.

[![Language](https://img.shields.io/badge/language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Norminette](https://img.shields.io/badge/norminette-passing-success.svg)](https://github.com/42School/norminette)

## About The Project

`ft_printf` is a project in the 42 School curriculum that challenges students to recode the famous `printf` function from the standard C library. This project serves as an introduction to **variadic functions** in C, teaching how to handle an indefinite number of arguments dynamically.

Beyond understanding `stdarg.h`, this project emphasizes string parsing, modular code architecture, and memory management under the strict rules of Norminette. The final deliverable is a static library (`libftprintf.a`) that can be linked to any future C projects requiring formatted output.

---

## Features & Supported Conversions

This implementation accurately replicates the behavior of the original `printf` for the following format specifiers:

| Specifier | Description |
| :---: | :--- |
| `%c` | Prints a single character. |
| `%s` | Prints a string. |
| `%p` | The `void *` pointer argument is printed in hexadecimal format. |
| `%d` | Prints a decimal (base 10) number. |
| `%i` | Prints an integer in base 10. |
| `%u` | Prints an unsigned decimal (base 10) number. |
| `%x` | Prints a number in hexadecimal (base 16) lowercase format. |
| `%X` | Prints a number in hexadecimal (base 16) uppercase format. |
| `%%` | Prints a literal percent sign. |

---

## Getting Started

### Prerequisites

To compile and use this library, you will need:
*   `cc` or `gcc` compiler
*   `make`
*   Standard C libraries (`unistd.h`, `stdlib.h`, `stdarg.h`)

### Installation & Compilation

1. Clone the repository:
   ```bash
   git clone [https://github.com/yourusername/ft_printf.git](https://github.com/yourusername/ft_printf.git)
   cd ft_printf
