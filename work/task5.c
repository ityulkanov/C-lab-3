
#include "task5.h"


int getSumInt(int arr[],int N)
{
    int i =0;
    int first = 0;
    int last = 0;
    int sum = 0;
    int j = N-1;
    while(i < N) {
        if (arr[i] < 0) {
            first = i+1;
            break;
        }
        i++;
    }
    while ( j > 0 ) {
        if (arr[j] > 0) {
            last = j - 1;
            break;
        }
        j--; 
    }
    while (first <= last) {
        sum += arr[first];
        first++;
    }
    return sum;
}
