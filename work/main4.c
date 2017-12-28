//
//  main.c
//  lab3task4
//
//  Created by Igor T on 12/17/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include <stdio.h>
#include "task4.h"
#define N 50

int main(int argc, const char * argv[]) {
    char line[N];
    printf("Please enter your line\n");
    fgets(line, N, stdin);
    printf("The total sum is %d\n",  getSum(line) ); 
    return 0;
}
