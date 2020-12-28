# Fillit

![42logo](https://upload.wikimedia.org/wikipedia/commons/thumb/8/8d/42_Logo.svg/240px-42_Logo.svg.png)

## Table of Contents

1. [About](#about-fillit)
2. [Functions](#functions)
3. [Usage](#usage)
4. [What I leanred](#whatILeanred)

## About <a name="about-fillit"></a>

This project is related to find a way to assemble some Tetriminos in the smallest possible square according to set of them. To do this, we decided to use recursive backtracking to solve this challenge. It makes us implement and search for the optimal solution among a huge set of possibilities with each a piece added in the minimal amount time.

## Functions <a name="functions"></a>

1. Validating the Input
2. Choosing Data Structures
3. Solving the Problems

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

To test the function, compile with tetromino-file.

`./fillit <tetromino-file>`

## What I learned <a name="whatILeanred"></a>

-   recursive backtracking algorithm
-   optimization
-   collaboration
