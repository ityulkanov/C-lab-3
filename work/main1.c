//
//  main.c
//  lab3task1
//
//  Created by Igor T on 12/17/17.
//  Copyright © 2017 appmasters. All rights reserved.
//
#include "task1.h"
#include <stdio.h>
#define N 150
int main() {
    char buf[N-1];
    printf("Please enter your data\n");
    fgets(buf, 150, stdin);
    printf("There was %d words\n", wordCount(buf));

    return 0;
}
