#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"


// Read strings from a file and store them in the allocated buffers
int read_strings(const char *filename, char ***array) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Could not open file");
        return -1;
    }
    int size = 5;
    int count = 0;
    char buffer[256];

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        buffer[strcspn(buffer, "\n")] = 0;
        strcpy((*array)[count], buffer);
        count++;

        // If we reach the capacity, we need to realloc
        if (count % 5 == 0) { // Increase capacity by 5

            
            realloc_string_arr(array, count, count + 5);
            
            size = size+5;
        }
    }

    fclose(file);

    return size;
}
