#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "ArrayGenerator.h"

int main(){
    int arrLenght = 10;
    int search_val = 19;
    
    int *res = genSortedArr(arrLenght);
    for (int i = 0; i < arrLenght; i++) {
        printf("%d ",*(res + i));
    }
    int low = 0;
    int high = arrLenght;
    printf("\n");
    while (low < high) {
      int pivot = low + (high-low)/2;
      int current = res[pivot];
      printf("start p %d \n",pivot);
      printf("current %d \n",current);
      if ( current == search_val) {
        printf("found");
        return pivot; 
      }else if ( current > search_val) { 
        high = pivot;
      } else if( current < search_val) {
        low = pivot + 1;
      }   
    }
    free(res);
    printf("not found");
    return -1;
}
