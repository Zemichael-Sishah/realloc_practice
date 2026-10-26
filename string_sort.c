#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Sort the array 
void sort_string_arr(char **array, int size) {
    printf("WASSSSSSSSSSSAAAAAAAAAAAAA\n");
    if(**array == NULL){
        printf("array is null\n");
    }
    else{
        printf("array is NOT null\n");
    }

    if(size == 0){
        printf("size is null\n");
    }
    else{
        printf("size is NOT null\n");
    }
}

// Reallocate the array 
void realloc_string_arr(char ***array,int old_size, int new_size) {
    printf("WWWWWWWWWWWWWAAAAAAAAAAAATHAP\n");
   
    void *temp = realloc(*array, new_size);

    printf("asdfkhjle\n");
    if(temp == NULL){
        printf("failed\n");
        return 1;
    }
    
    printf("success\n");
    *array = temp;
    
    for( int i = old_size; i < new_size; i++){
        (*array)[i] = NULL;
    }
    
    if(***array == NULL){
        printf("***array is null\n");
    }
    else{
        printf("***array is NOT null\n");
    }

    if(old_size == 0){
        printf("old_size is null\n");
    }
    else{
        printf("***old_size is NOT null\n");
    }

    if(new_size == 0){
        printf("***new_size is null\n");
    }
    else{
        printf("***new_size is NOT null\n");
    }

}