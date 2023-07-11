#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ArrayGenerator.h"

int *genSortedArr(int count){

    int *array = malloc(count * sizeof(int));

    for(int i = 0; i < count; i++){
        array[i] = i + 10;
    }
    return array; 
}

void modifyArrAsUnsorted(int arr[], int count){

    srand(time(NULL));
    
    for(int i = 0; i < count; i++){
        arr[i] = rand();
    }
}
