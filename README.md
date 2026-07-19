_This project has been created as part of the 42 curriculum by jziental_
# Description

This project is part of the 42 School curriculum and is the first major C programming exercise of the Common Core. The goal is to recreate a subset of the standard C library functions, as well as a few additional utilities, while following the 42 Norm, managing memory correctly, and building a reusable static library.

## Project goal

- Reimplement commonly used libc functions in C
- Create a static library named `libft.a`
- Respect the 42 Norminette rules
- Handle memory safely and avoid leaks
- Implement the linked-list functions required by Part III

# Intructions

A standard build produces the library file:

```sh
make
```

Useful commands:

```sh
make clean
make fclean
make re
```
```sh
make -s (flag to silence all commands)
```
## Libc functions (Part I)

The following functions are required for the core project:

- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- String/character conversions: `ft_toupper`, `ft_tolower`
- String length and memory operations: `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
- String scanning and comparison: `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_ strlcpy`, `ft_strlcat`, `ft_memchr`, `ft_memcmp`, `ft_strnstr` 
- Integer conversion: `ft_atoi`
- Malloc implementation : `ft_calloc` `ft_strdup`

## Additional functions (Part II)

The second part adds useful string and writing utilities:

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

## linked list (Part III)

The bonus part is mandatory for this version of the project and must include linked-list functions:

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

## Repository structure

- `libft.h` contains the function prototypes
- Each implementation is stored in a separate `ft_*.c` file
- `README.md` documents the project requirements and usage

# Resources

- [42 Libft subject ](https://cdn.intra.42.fr/pdf/pdf/216246/en.subject.pdf)
- [Norminette documentation](https://cdn.intra.42.fr/pdf/pdf/96987/en.norm.pdf)
- [Warmachine Libft tester](https://github.com/0x050f/libft-war-machine)
- [Tripouille Libft tester](https://github.com/Tripouille/libftTester)
- [The C standard library reference](https://cppreference.com)
- [Valgrind for memory checking](https://docs.oracle.com/cd/E88353_01/html/E37839/valgrind-1.html)
- [GNU _make_ tutorial](https://www.gnu.org/software/make/manual/make.html)
- AI tools as a helper for research, explanations, and inspiration while keeping the implementation verified manually

## Submission requirements

To be accepted by the 42 evaluation system, the project must:

- Compile without warnings with `-Wall -Wextra -Werror`
- Follow the 42 Norminette rules
- Avoid forbidden functions unless explicitly allowed
- Be free of memory leaks
- Provide a complete and correct `ft_*.c`, `libft.h`, `README.md` and `Makefile`

## Notes

This README was generated with AI assistance and then checked thoroughly to ensure it matches the project purpose and the 42 Libft requirements.
