# Printf

![42logo](https://upload.wikimedia.org/wikipedia/commons/thumb/8/8d/42_Logo.svg/240px-42_Logo.svg.png)

## Table of Content

1. [About](#about-printf)
2. [Functions](#functions)
3. [Usage](#usage)
4. [What I leanred](#whatILeanred)

## About <a name="about-printf"></a>

I recreated the **Standard C Library printf()** functions.

## Functions <a name="functions"></a>

    %[flags][width][precision][cspdixx%]

**management**

-   **csp** conversion
-   **diouxX** with the following flags: **hh, h, l and ll.**
-   **f** with the following flags: **l and L.**
-   **%%**
-   flags **#0-+** and **space**
-   minimum field-width management
-   precision

**bonus**

-   sprintf
-   dprintf
-   typeb
-   flag management : \*, $

## Usage <a name="usage"></a>

Run the following commands:

-   To compile
    -   `make`
-   To remove objects:
    -   `make clean`
-   To remove objects and binary file (program):
    -   `make fclean`
-   To re-compile:
    -   `make re`

### Executing

To test the library, first compile main.c with the library:

`gcc main.c libftprintf.a`

`./a.out`

## What I learned <a name="whatILeanred"></a>

This projects helps me exercise a well-structured and good extensible code in programming in C.
