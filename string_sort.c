#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Sort the array 
void sort_string_arr(char **array, int size) {
    printf("hey\n");
    printf("WASSSSSSSSSSSAAAAAAAAAAAAA\n");
    printf("size is %d\n", size);
    printf("Word is %c\n", *array[0]);
    printf("Word is %c\n", *(array)[1]);
    char buffer[256] = {0};

    for(int i = 0; i < size - 1; i++){
        printf("in the loop");
        for(int j = i + 1; j < size; j++){
            printf("in the compare\n");
            if(array[i] == NULL || array[i] == buffer){
                printf("i is null");
            }
            if(array[j] == NULL || array[i] == buffer){
                printf("j is null");
            }
            printf("strcmp hit %d\n", strcmp(array[i],array[j]));
            if(array[i] != NULL && array[j] != NULL && strcmp(array[i],array[j]) >= 1){
                printf("Swapping %c and %c\n", (*array[i]), (*array[j]));
                char *temp = malloc(sizeof(*array));
                if(temp == NULL){
                    printf("failed");
                    return;
                }
                temp = (array)[i];
                (array)[i] = (array)[j];
                (array)[j] = temp;
                //free(temp);
                printf("SWAPPED %c AND %c\n", (*array[i]), (*array[j]));
                
            }
            else{
                //printf("\n did not SWAP \n");
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