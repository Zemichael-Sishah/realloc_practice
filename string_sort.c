#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// Sort the array 
void sort_string_arr(char **array, int size) {
    
    for(int i = 0; i < size - 1; ++i){

        if(array[i] == NULL){
            break;
        }

        for(int j = i + 1; j < size; j++){
        
            if(array[j] != NULL && strcmp(array[i],array[j]) > 0){

                char *temp = malloc(sizeof(*array));
                assert(temp != NULL);
                temp = (array)[i];
                (array)[i] = (array)[j];
                (array)[j] = temp;

            }

        }
    }

}

// Reallocate the array 
void realloc_string_arr(char ***array,int old_size, int new_size) {

    void *temp = realloc(*array, sizeof(**array)*new_size);
    assert(temp != NULL);

    *array = temp;

    if(new_size > old_size){
       for( int i = old_size; i < new_size; i++){
            (*array)[i] = calloc(256, sizeof(char));
        }
     
    }
    
    return;

}