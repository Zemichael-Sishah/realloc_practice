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
            printf("YO, WE HERE NOW with count %d\n", count);
            //printf("Quick check of array size is %d\n", sizeof(**array)/sizeof((**array)[0]));
            
            if((**array)[0] == NULL){
                printf("something is a foot \n\n");
            }
            else{
                printf("(*array)[0] address is %p\n", (*array)[0]);
                printf("***array first letter is %c\n",***array);
            }

            printf("Double check on (*array)[0] %p\n", (*array)[0]);
            printf("Double check on ***array %c\n",***array);

            realloc_string_arr(array, count, count + 5);
            //printf("BOOM BOOM BOOM\n");
            printf("(*array)[0] address is %p\n", (*array)[0]);
            printf("***array first letter is %c\n",***array);
            //printf("second check %d\n", sizeof(**array)/sizeof(**array)[0]);
            size = size+5;
        }
    }
    printf("do we reach here?\n");
    fclose(file);
    printf("What about here??\n");
    return size;
}
