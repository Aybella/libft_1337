

# Libft

## Description

Libft is my first 42 project. The goal is to build my own C static library (`libft.a`) by reimplementing standard libc functions and adding some extra utilities. It teaches pointers, memory allocation, strings and linked lists, and the library can be reused in later projects.

### Library content

- **Character checks and conversion:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- **Strings:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
- **Memory:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- **Conversion:** `ft_atoi`, `ft_itoa`
- **Additional functions:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
- **File descriptor output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
- **Linked lists:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Instructions

Compile the library with `make`. This creates `libft.a` at the root of the repository.

| Command | Action |
|---|---|
| `make` | Build `libft.a` |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and `libft.a` |
| `make re` | Rebuild everything |

To use it, include `libft.h` in your source file and compile with:

```
cc -Wall -Wextra -Werror main.c -L. -lft
```

## Resources

- [Linux manual pages](https://man7.org/linux/man-pages/)
- [C reference](https://en.cppreference.com/w/c)
- [GNU Make manual](https://www.gnu.org/software/make/manual/)

**AI usage:** I used AI tools (ChatGPT, Gemini, Claude) as a learning aid to understand the edge cases of `ft_strlcat`, `ft_memmove` and `ft_split`, to understand Norm errors, and to check the README format. I wrote and tested all the code myself.
