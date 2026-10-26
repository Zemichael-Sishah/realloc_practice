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
    printf("%p this is it\n", **array);
    printf("%c first letter\n", ***array);

    int count = 0;
    //char *i;
    //i = *array;
    //printf("%p this is what i is\n", i);
    //printf("%c first letter in i\n", *i);
    int j = 0;
    while( (**array) != NULL && j < 10 ){

        //printf("%p this is what i is in the loop\n", i);
        printf("%c hey\n ", **(array[j]));
        //(i++);
        count++;
        j++;
        
    }

    printf("num of words %d \n", count);





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