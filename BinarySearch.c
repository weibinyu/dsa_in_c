#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "ArrayGenerator.h"

int main(){
    int arrLenght = 10;
    int search_val = 0;
    
    int *res = genSortedArr(arrLenght);
    for (int i = 0; i < arrLenght; i++) {
        printf("%d ",*(res + i));
    }
    int pivot = arrLenght/2;
    int current_end = arrLenght;
    int count = 0;
    printf("\n");
    while (0 <= pivot && pivot < arrLenght) {
      int current = res[pivot];
      printf("start p %d \n",pivot);
      printf("current %d \n",current);
      if ( current == search_val) {
        return pivot; 
      }else if ( current > search_val) { 
        if (pivot == 0) {
            printf("not found");
            return -1;        
        }
        current_end = pivot;
        pivot = current_end/2;     
      } else if( current < search_val) {
        int inc = (current_end - pivot)/2;
        if(inc > 0)
          pivot = pivot + inc;     
        else
          pivot = pivot + 1;
      }   
      printf("end p %d \n",pivot);
      count ++;
      if(count == 5) return 0;
    }
    free(res);
    printf("not found");
    return -1;
}
