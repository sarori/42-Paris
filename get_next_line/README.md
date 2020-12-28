# get_next_line

![42logo](https://upload.wikimedia.org/wikipedia/commons/thumb/8/8d/42_Logo.svg/240px-42_Logo.svg.png)

## Table of Content

1. [About](#about-gnl)
2. [Functions](#functions)
3. [Usage](#usage)
4. [What I leanred](#whatILeanred)

## About <a name="about-gnl"></a>

**Get_Next_Line** is a project to recode the **getline(3)** C standard Libarary functions.
I recreated a function that reads a line ending with a newline character ('\n') from a file descriptor regardless of its size beforehand.
Exceptionally, we were allowed to use read, malloc, free functions.

## Functions <a name="functions"></a>

**Parameters**

-   fd : file_descriptor for reading
-   \*\*line : The value that I have been read

**Return value**

-   1 : A line has been read
-   0 : EOF has been reached
-   -1 : An error happened

**External functions**
Read, malloc, free

## Usage <a name="usage"></a>

**Compiling**

Run the following commands:

-   To compile
    -   `make`
-   To remove objects:
    -   `make clean`
-   To remove objects and binary file (program):
    -   `make fclean`
-   To re-compile:
    -   `make re`

**Executing**

To test the function, compile with main.c.

`gcc get_next_line.c main.c libft/libft.a`

`./a.out test.txt`

## What I learned <a name="whatILeanred"></a>

By doing, I gained a deep understanding of C programming.

-   file descriptor and read function
-   static variables
-   memory allocations and free (static / dynamic)
-   manipulation of a buffer
