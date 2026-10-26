// main.h
#ifndef MAIN_H
#define MAIN_H

void alloc_string_arr(char ***array, int size);
void free_string_arr(char **array, int size);
void sort_string_arr(char **array, int size);
void realloc_string_arr(char ***array, int old_size, int new_size);
int read_strings(const char *filename, char ***array);
void print_string_arr(char **array, int size);

#endif // MAIN_H
