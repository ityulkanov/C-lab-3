//
//  main.c
//  lab3task2
//
//  Created by Igor T on 12/17/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include <stdio.h>
#define N 50
int main() {
    char line[N] = { 0 };
    int i = 0;
    int inWord = 0;
    int count = 0;
    printf("Please enter your line\n" );
    fgets(line, N, stdin);
    
    
    while (line[i]) {
        
        if (line[i] == '\n') {
            printf(" word count is equals %d\n", count);
            break; 
        }
        if (line[i] != ' ' && inWord == 0) {
            putchar(line[i]);
            inWord = 1;
            count++;
        }
        
       
        else if (line[i] == ' ' && inWord == 1) {
            inWord = 0;
            printf(" word count is equals %d\n", count);
            count = 0;
        }
        else if (inWord == 1 && line[i] != '\n') {
            putchar(line[i]);
            count++;
            i++;
            continue;
        }
        
        i++;
    }
    return 0;
}
