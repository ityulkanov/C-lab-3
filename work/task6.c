#include "task6.h"

int getSumMaxMin(int arr[],int N)
{
    int sum = 0;
    //    searching for positin of maximum number:
    int imax  = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] >arr[imax]) {
            imax = i;
        }
    }
    //    searching for minimum number:
    int imin = 0;
    for (int j = 0; j < N ; j++) {
        if (arr[j] < arr[imin] ) {
            imin = j;
        }
    }
    //    depending on a position of maximum starting to add numbers: 
    if (imax > imin) {
        imin = imin+1;
        while(imin != imax) {
            sum += arr[imin];
            imin++;
        }
    } else  {
        imax = imax + 1;
        while (imax != imin) {
            sum +=arr[imax];
            imax++;
        }
    }
    
    
    return sum;
}
