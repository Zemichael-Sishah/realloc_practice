# In-Class Exercise 1: Sorting and Reallocating String Arrays

## Overview

Complete the two functions in `string_sort.c` to manage an array of pointers to
strings read from `languages.txt`. Use `realloc()` to expand the pointer array
and allocate buffers for the new strings. Implement insertion sort to reorder
the pointers alphabetically by the strings they point to. Review the provided
code, implement the missing functions, then build and run the program to check
the output.

## Objectives

- Understand pointer management and dealing with more complex pointers, e.g., double pointers.
- Demonstrate understanding and ability to use `realloc()`.
- Implement insertion sort to order an array of pointers alphabetically by the strings they point to.

## Exercise

### Part 1: Review the files
`main.c` calls functions to read text from `languages.txt` into separately
allocated character buffers. Only pointers to these buffers are stored in the
array; the buffers need not be adjacent in memory. The program then sorts the
pointers alphabetically by the strings they point to and prints the strings in
that order.
- `main.c`: main program that invokes functions.
- `double_ptr.o`: has the needed initial allocation and freeing functionality.
- `file_ops.c`: reads text from a file into the buffers pointed to by the array elements.
- `string_sort.c`: where you will implement sorting and reallocation of the pointer array.


### Part 2: Implementation

In C, a string is a null-terminated sequence of characters. In this exercise,
each string occupies a separately allocated character buffer, and an array of
`char *` elements stores pointers to those buffers. Sorting rearranges the
pointers without moving the strings themselves. Implement the following
functions in `string_sort.c`:
- `void sort_string_arr(char **array, int size)`: using insertion sort logic successfully sort the array so that their pointed strings are in alphabetical order.
- `void realloc_string_arr(char ***array, int old_size, int new_size)` : make a call to `realloc()` to allocate more space than the array had at the time of the call.

Compile your code by running `make` and see your output by running the executable `./sort_strings`
