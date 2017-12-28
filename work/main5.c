
#include <stdio.h>
#include <stdlib.h>
#include "task5.h"
#include <time.h>
#define N 20

int main() {
   
    int arr[N] = { 0 };
    time_t t;
    srand((unsigned) time(&t));
    
    for (int i = 0; i < N; i++) {
       arr[i] =  rand() % 30 - 15;
        
    }
    printf("The sum number is %d\n", getSumInt(arr, N) ); 
    
    return 0;
}
