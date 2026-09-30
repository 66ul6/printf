*This activity has been created as part of the 42 curriculum by kmaghair.*

<div align="center">
  <h1>🛠️ LIBFT | Custom C Library</h1>
  
  [![Language: C](https://img.shields.io/badge/Language-C-blue.svg?style=for-the-badge&logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))
  [![Norminette: OK](https://img.shields.io/badge/Norminette-OK-green.svg?style=for-the-badge)](https://github.com/42School/norminette)
  [![Unit Tests: Passing](https://img.shields.io/badge/Unit_Tests-Passing-brightgreen.svg?style=for-the-badge)](https://github.com/alelievr/libft-unit-test)
  [![Minitalk: In Progress](https://img.shields.io/badge/Minitalk-In_Progress-yellow.svg?style=for-the-badge)](https://github.com/kmaghair/minitalk)
  [![Score: 125/100](https://img.shields.io/badge/Score-125%2F100-success.svg?style=for-the-badge)](https://github.com/kmaghair/libft)
</div>

## Description

The goal of this project is to build a custom C function library. This library serves as a foundational toolkit, recreating standard C library functions alongside custom utility functions, which will be utilized and expanded upon in future C programming assignments throughout the core curriculum.

### 📚 Function Overview

| Category | Focus | Key Functions |
| :--- | :--- | :--- |
| **Memory Management** | Safe allocation, byte copying, and memory erasing. | `ft_calloc`, `ft_memset` |
| **String Manipulation** | Duplicating, joining, splitting, and trimming strings. | `ft_strlcpy`, `ft_split` |
| **Character Checks** | Validating and converting ASCII character types. | `ft_isalpha`, `ft_isdigit` |
| **Output (FDs)** | Writing characters and strings to file descriptors. | `ft_putchar_fd`, `ft_putstr_fd` |

***

## Instructions

A Makefile with `re`, `all`, `clean`, and `fclean` rules is provided.

**Usage:**

```bash
# To compile the static library (libft.a)
make

# Include libft.h in your source file and link libft.a during compilation
clang main.c -L. -lft -o my_program
