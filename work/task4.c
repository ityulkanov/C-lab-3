//
//  task4.c
//  lab3task4
//
//  Created by Igor T on 12/17/17.
//  Copyright © 2017 appmasters. All rights reserved.
//
#include <stdlib.h>
#include "task4.h"
//defining size of temp buf for storing our numbers:
#define N 2
//defining the decimals amount:
#define M 2
int getSum(char buf[]) {
    int i, j = 0;
    int sum = 0;
    char anotherBuf [M];
    while (buf[i]) {
        //        searching for numbers through our char array:
        if (buf[i] >= 48 && buf[i] <= 58) {
//            adding number chars to temp buf to modify it later on into the real number
            if (j != N ) {
                anotherBuf[j] = buf[i];
                j++;
            } else {
                
//                here is some indian code cus I don't remember the one we used on the lesson:
                sum += ((anotherBuf[0] - 48)* 10 + (anotherBuf[1]-48));
                memset(anotherBuf, 0, M);
                    j = 0;
                continue; 
            }
        }
        else if (buf[i] == '\n'){
            //we've reached the end, summing up anything we have left inside our buffer:
            //need to refactor since it is not working with only 1 numb in temp buf
            sum += ((anotherBuf[0] - 48)* 10 + (anotherBuf[1]-48));
        }
        
        i++;
    }
    return sum; 
}
