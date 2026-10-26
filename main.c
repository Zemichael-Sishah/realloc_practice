#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int main() {

    char **strings = NULL;
    int size = 5; // Initial size

    alloc_string_arr(&strings, size); // Allocate initial memory for strings
   
    const char *filename = "languages.txt"; 
    int final_size = read_strings(filename, &strings); // Read strings from a text file
    
    printf("---The strings original--- \n");
    print_string_arr(strings, final_size);

    printf("----The sorted strings---- \n");
    sort_string_arr(strings, final_size);
    print_string_arr(strings, final_size);
    
    free_string_arr(strings, final_size);

    
}

void print_string_arr(char **array, int size) {
    for (int i = 0; i < size; i++) {
        if (strlen(array[i])>0){
            printf("%s\n", array[i]);
        }
    }
}