//
//  task1.c
//  lab3task1
//
//  Created by Igor T on 12/17/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include "task1.h"


int wordCount(char buf[])
{
    int count = 0, i = 0;
    int inWord = 0;
    
    while(buf[i] ) {
        if (buf[i] != ' ' && inWord == 0) {
            inWord = 1;
            count++;
        }
        else if (buf[i] == ' ') {
            inWord = 0;
        }
        i++;
    }
    
    return count;
}
