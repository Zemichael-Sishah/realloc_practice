#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Sort the array 
void sort_string_arr(char **array, int size) {
    printf("hey\n");
    printf("WASSSSSSSSSSSAAAAAAAAAAAAA\n");
    printf("hey\n");
    printf("Word is %c\n", *(*array)[0]);
    printf("Word is %c\n", *(*array)[1]);

    for(int i = 0; i < size - 1; i++){
        printf("in the loop");
        for(int j = i + 1; j < size; j++){
            printf("in the compare");
            if(strcmp((*array)[i],(*array)[j]) == 1){
                char *temp = malloc(sizeof(**array));
                temp = (*array)[i];
                (*array)[i] = (*array)[j];
                (*array)[j] = temp;
                free(temp);

                //printf("Swapped %p and %p\n", (**array), (**array));
            }
        }
    }

}

// Reallocate the array 
void realloc_string_arr(char ***array,int old_size, int new_size) {
    //printf("WWWWWWWWWWWWWAAAAAAAAAAAATHAP\n");
   
    void *temp = realloc(*array, sizeof(**array)*new_size);

    //printf("asdfkhjle\n");
    if(temp == NULL){
        printf("failed\n");
        return;
    }
    
    printf("success\n");
    *array = temp;
    
    
    printf("*array[5] is %c\n", *(*array)[2]);
    for( int i = old_size; i < new_size; i++){
        char buffer[256] = {0};
        printf("i is %d\n", i);
        //printf("**array origin is %p\n", **array);
        //printf("*array[i] is %c\n", (*array)[i-1]);
        (*array)[i] = buffer;
        //printf("**array origin is %p\n", **array);
        //printf("*array[i] is %c\n", (*array)[i]);
    }
    return;

}