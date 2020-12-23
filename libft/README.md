# Libft

![42logo](https://upload.wikimedia.org/wikipedia/commons/thumb/8/8d/42_Logo.svg/240px-42_Logo.svg.png)

## Table of Content

1. [About](#about-libft)
2. [Functions](#functions)
3. [Usage](#usage)
4. [What I leanred](#whatILeanred)
5. [License](#license)

## About <a name="about-libft"></a>

**42Libft** is an open source **C** library with over **200++ functions**.
I recreated **Standard C library functions**. (`stdio`, `stdlib`, `string`, `ctype`, `math`)

## Functions <a name="functions"></a>

| [file_descriptor] |     [number]     |    [string]    |    [list]    |  [memory]   |  [get_next_line]  | [checking] |
| :---------------: | :--------------: | :------------: | :----------: | :---------: | :---------------: | :--------: |
|   ft_putchar_fd   |      ft_abs      |   ft_putchar   |  ft_lstadd   |  ft_bzero   |   get_next_line   | ft_isalnum |
|   ft_putendl_fd   |     ft_atoi      |   ft_putendl   |  ft_lstdel   | ft_memalloc | get_next_line_lst | ft_isalpha |
|   ft_putnbr_fd    |  ft_bubble_sort  |   ft_putstr    | ft_lstdelone | ft_memccpy  |                   | ft_isascii |
|   ft_putstr_fd    | ft_digit_base_u  |   ft_strcat    |  ft_lstiter  |  ft_memchr  |                   |  ft_digit  |
|                   |     ft_digit     | ft_strchr_idx  |  ft_lstmap   |  ft_memcmp  |                   | ft_isprint |
|                   |  ft_itoa_base_u  |   ft_strchr    |  ft_lstnew   |  ft_memcpy  |                   |            |
|                   |     ft_itoa      |   ft_strclr    |              |  ft_memdel  |                   |            |
|                   | ft_number_length |   ft_strcmp    |              | ft_memmove  |                   |            |
|                   |      ft_pow      |   ft_strcpy    |              |  ft_memset  |                   |            |
|                   |    ft_putnbr     |   ft_strdel    |              |             |                   |            |
|                   |     ft_swap      |   ft_strdup    |              |             |                   |            |
|                   |                  |   ft_strequ    |              |             |                   |            |
|                   |                  |   ft_striter   |              |             |                   |            |
|                   |                  |  ft_striteri   |              |             |                   |            |
|                   |                  |   ft_strjoin   |              |             |                   |            |
|                   |                  |   ft_strlcat   |              |             |                   |            |
|                   |                  |   ft_strlen    |              |             |                   |            |
|                   |                  |   ft_strmap    |              |             |                   |            |
|                   |                  |   ft_strmapi   |              |             |                   |            |
|                   |                  |   ft_strncat   |              |             |                   |            |
|                   |                  |   ft_strncmp   |              |             |                   |            |
|                   |                  |   ft_strncpy   |              |             |                   |            |
|                   |                  |   ft_strndup   |              |             |                   |            |
|                   |                  |   ft_strnequ   |              |             |                   |            |
|                   |                  |   ft_strnew    |              |             |                   |            |
|                   |                  |   ft_strnstr   |              |             |                   |            |
|                   |                  |   ft_strrchr   |              |             |                   |            |
|                   |                  |  ft_strsplit   |              |             |                   |            |
|                   |                  |   ft_strstr    |              |             |                   |            |
|                   |                  |   ft_strsub    |              |             |                   |            |
|                   |                  |   ft_strtrim   |              |             |                   |            |
|                   |                  |   ft_tolower   |              |             |                   |            |
|                   |                  |   ft_toupper   |              |             |                   |            |
|                   |                  | ft_str_toupper |              |             |                   |            |
|                   |                  |   ft_scjoin    |              |             |                   |            |
|                   |                  |    ft_elem     |              |             |                   |            |
|                   |                  |  free_dpchar   |              |             |                   |            |
|                   |                  |  element_join  |              |             |                   |            |

## Usage <a name="usage"></a>

Git clone the repository :

    $> git clone https://github.com/sarori/42-Paris.git

Build the Library :

    $> make

Compile your source code with the Library binary :

    $> gcc libft.a  <your_file.c>

## What I learned <a name="whatILeanred"></a>

This is my first project that I did at 42. Before I started other complicated C projects, I recoded standard C library functions. By doing, I gained a deep understanding of C language and its Standard library functions.

## License <a name="license"></a>

This project is licensed under the MIT License.
